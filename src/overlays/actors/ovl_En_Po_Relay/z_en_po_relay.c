/*
 * File: z_en_po_relay.c
 * Overlay: ovl_En_Po_Relay
 * Description: Dampé's Ghost
 */

#include "z_en_po_relay.h"
#include "overlays/actors/ovl_En_Honotrap/z_en_honotrap.h"
#include "objects/object_tk/object_tk.h"

#define FLAGS 0x00011019

#define THIS ((EnPoRelay*)thisx)

void EnPoRelay_Init(Actor* thisx, GlobalContext* globalCtx);
void EnPoRelay_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnPoRelay_Update(Actor* thisx, GlobalContext* globalCtx);
void EnPoRelay_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnPoRelay_Idle(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_Race(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_EndRace(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_Talk(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_Talk2(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_DisappearAndReward(EnPoRelay* this, GlobalContext* globalCtx);
void EnPoRelay_SetupIdle(EnPoRelay* this);

Vec3s D_80AD8C30[] = {
    { 0xFFC4, 0xFDEE, 0xF47A }, { 0x0186, 0xFE0C, 0xF47A }, { 0x0186, 0xFE0C, 0xF0F6 }, { 0x00D2, 0xFDEE, 0xF0F6 },
    { 0x00D2, 0xFD9E, 0xEEDA }, { 0x023A, 0xFDC6, 0xEEDA }, { 0x023A, 0xFDC6, 0xED18 }, { 0x00D2, 0xFDC6, 0xED18 },
    { 0x00D2, 0xFDC6, 0xEBCE }, { 0x00D2, 0xFDC6, 0xEAA2 }, { 0x023A, 0xFDC6, 0xEAA2 }, { 0x023A, 0xFDC6, 0xEBB0 },
    { 0x04EC, 0xFD9E, 0xEBB0 }, { 0x0672, 0xFD62, 0xED18 }, { 0x0672, 0xFD30, 0xEE80 }, { 0x07DA, 0xFD26, 0xEE80 },
    { 0x07DA, 0xFD26, 0xEF70 }, { 0x07DA, 0xFD26, 0xF204 }, { 0x0672, 0xFD44, 0xF204 }, { 0x0672, 0xFD6C, 0xF3C6 },
    { 0x088E, 0xFD6C, 0xF3C6 }, { 0x088E, 0xFDB2, 0xF5E2 }, { 0x099C, 0xFDD0, 0xF5E2 }, { 0x0B54, 0xFE66, 0xF772 },
    { 0x0B4E, 0xFE66, 0xF87E }, { 0x0B4A, 0xFE66, 0xF97A }, { 0x0B4A, 0xFE98, 0xF9FC }, { 0x0BAE, 0xFE98, 0xF9FC },
};

const ActorInit En_Po_Relay_InitVars = {
    ACTOR_EN_PO_RELAY,
    ACTORCAT_MISC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnPoRelay),
    (ActorFunc)EnPoRelay_Init,
    (ActorFunc)EnPoRelay_Destroy,
    (ActorFunc)EnPoRelay_Update,
    (ActorFunc)NULL,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_NONE,
        OCELEM_ON,
    },
    { 30, 52, 0, { 0, 0, 0 } },
};

static s32 D_80AD8D24 = 0;

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, 0x4F, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 1500, ICHAIN_STOP),
};

static Vec3f D_80AD8D30 = { 0.0f, 1.5f, 0.0f };

static Vec3f D_80AD8D3C = { 0.0f, 0.0f, 0.0f };

static Vec3f D_80AD8D48 = { 0.0f, 1200.0f, 0.0f };

void EnPoRelay_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnPoRelay* this = THIS;
    s32 temp;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 42.0f);
    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z,
                              255, 255, 255, 200);
    this->lightColor.a = 255;
    temp = 1;
    if (D_80AD8D24 != 0) {
        Actor_Kill(&this->actor);
    } else {
        D_80AD8D24 = temp;
        Actor_SetTextWithPrefix(globalCtx, &this->actor, 65);
        this->textId = this->actor.textId;
        EnPoRelay_SetupIdle(this);
    }
    this->actor.params &= 0x3F;
}

void EnPoRelay_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnPoRelay* this = THIS;

    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnPoRelay_SetupIdle(EnPoRelay* this) {
    this->unk_195 = 32;
    this->pathIndex = 0;
    this->actor.room = -1;
    this->actor.shape.rot.y = 0;
    this->actor.world.rot.y = -0x8000;
    this->actor.colChkInfo.mass = MASS_HEAVY;
    this->actionFunc = EnPoRelay_Idle;
}

void EnPoRelay_Vec3sToVec3f(Vec3f* dest, Vec3s* src) {
    dest->x = src->x;
    dest->y = src->y;
    dest->z = src->z;
}

void EnPoRelay_SetupRace(EnPoRelay* this) {
    Vec3f vec;

    EnPoRelay_Vec3sToVec3f(&vec, &D_80AD8C30[this->pathIndex]);
    this->actionTimer = ((s16)(this->actor.shape.rot.y - this->actor.world.rot.y - 0x8000) >> 0xB) % 32U;
    func_80088B34(0);
    this->hookshotSlotFull = INV_CONTENT(ITEM_HOOKSHOT) != ITEM_NONE;
    this->unk_19A = Actor_WorldYawTowardPoint(&this->actor, &vec);
    this->actor.flags |= 0x8000000;
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH);
    this->actionFunc = EnPoRelay_Race;
}

void EnPoRelay_SetupEndRace(EnPoRelay* this) {
    this->actor.world.rot.y = this->actor.home.rot.y + 0xC000;
    this->actor.flags &= ~0x08000000;
    this->actor.speedXZ = 0.0f;
    this->actionFunc = EnPoRelay_EndRace;
}

void EnPoRelay_CorrectY(EnPoRelay* this) {
    Math_StepToF(&this->actor.home.pos.y, D_80AD8C30[(this->pathIndex >= 28) ? 27 : this->pathIndex].y + 45.0f, 2.0f);
    this->actor.world.pos.y = Math_SinS(this->unk_195 * 0x800) * 8.0f + this->actor.home.pos.y;
}

void EnPoRelay_Idle(EnPoRelay* this, GlobalContext* globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x100);
    if (this->actor.xzDistToPlayer < 250.0f) {
        EnPoRelay_SetupRace(this);
    }
    func_8002F974(&this->actor, NA_SE_EN_PO_FLY - SFX_FLAG);
}

void EnPoRelay_Talk(EnPoRelay* this, GlobalContext* globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x100);
    if (Actor_HasFinishedTalking(&this->actor, globalCtx) != 0) {
        Actor_SetTextWithPrefix(globalCtx, &this->actor, 0x2F);
        this->textId = this->actor.textId;
        EnPoRelay_SetupRace(this);
    }
    func_8002F974(&this->actor, NA_SE_EN_PO_FLY - SFX_FLAG);
}

void EnPoRelay_Race(EnPoRelay* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    Vec3f vec;
    f32 speed;
    f32 multiplier;

    if (this->actionTimer != 0) {
        this->actionTimer--;
    }
    if (this->actionTimer == 0 && Rand_ZeroOne() < 0.03f) {
        this->actionTimer = 32;
        if (this->pathIndex < 23) {
            speed = Rand_ZeroOne() * 3.0f;
            if (speed < 1.0f) {
                multiplier = 1.0f;
            } else if (speed < 2.0f) {
                multiplier = -1.0f;
            } else {
                multiplier = 0.0f;
            }
            speed = 30.0f * multiplier;
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HONOTRAP,
                        Math_CosS(this->unk_19A) * speed + this->actor.world.pos.x, this->actor.world.pos.y,
                        Math_SinS(this->unk_19A) * speed + this->actor.world.pos.z, 0,
                        (this->unk_19A + 0x8000) - (0x2000 * multiplier), 0, HONOTRAP_FLAME_DROP);
        }
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_19A, 2, 0x1000, 0x100);
    this->actor.shape.rot.y = this->actor.world.rot.y + (this->actionTimer * 0x800) + 0x8000;
    if (this->pathIndex < 23) {
        // If the player travels along a different path to Dampé that converges later
        if ((Math3D_PointInSquare2D(660.0f, 840.0f, -4480.0f, -3760.0f, player->actor.world.pos.x,
                                    player->actor.world.pos.z) != 0) ||
            (Math3D_PointInSquare2D(1560.0f, 1740.0f, -4030.0f, -3670.0f, player->actor.world.pos.x,
                                    player->actor.world.pos.z) != 0) ||
            (Math3D_PointInSquare2D(1580.0f, 2090.0f, -3030.0f, -2500.0f, player->actor.world.pos.x,
                                    player->actor.world.pos.z) != 0)) {
            speed = (this->hookshotSlotFull) ? player->actor.speedXZ * 1.4f : player->actor.speedXZ * 1.2f;
        } else if (this->actor.xzDistToPlayer < 150.0f) {
            speed = (this->hookshotSlotFull) ? player->actor.speedXZ * 1.2f : player->actor.speedXZ;
        } else if (this->actor.xzDistToPlayer < 300.0f) {
            speed = (this->hookshotSlotFull) ? player->actor.speedXZ : player->actor.speedXZ * 0.8f;
        } else if (this->hookshotSlotFull) {
            speed = 4.5f;
        } else {
            speed = 3.5f;
        }
        multiplier = 250.0f - this->actor.xzDistToPlayer;
        multiplier = CLAMP_MIN(multiplier, 0.0f);
        speed += multiplier * 0.02f + 1.0f;
        Math_ApproachF(&this->actor.speedXZ, speed, 0.5f, 1.5f);
    } else {
        Math_ApproachF(&this->actor.speedXZ, 3.5f, 0.5f, 1.5f);
    }
    EnPoRelay_Vec3sToVec3f(&vec, &D_80AD8C30[this->pathIndex]);
    if (Actor_WorldDistXZToPoint(&this->actor, &vec) < 40.0f) {
        this->pathIndex++;
        EnPoRelay_Vec3sToVec3f(&vec, &D_80AD8C30[this->pathIndex]);
        if (this->pathIndex == 28) {
            EnPoRelay_SetupEndRace(this);
        } else if (this->pathIndex == 9) {
            Flags_SetSwitch(globalCtx, 0x1D);
        } else if (this->pathIndex == 17) {
            Flags_SetSwitch(globalCtx, 0x1E);
        } else if (this->pathIndex == 25) {
            Flags_SetSwitch(globalCtx, 0x1F);
        }
    }
    this->unk_19A = Actor_WorldYawTowardPoint(&this->actor, &vec);
    func_8002F974(&this->actor, NA_SE_EN_PO_AWAY - SFX_FLAG);
}

void EnPoRelay_EndRace(EnPoRelay* this, GlobalContext* globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, -0x4000, 0x800);
    /*if (Actor_IsTalking(&this->actor, globalCtx) != 0) {
        this->actionFunc = EnPoRelay_Talk2;
    } else if ...*/
    if (globalCtx->roomCtx.curRoom.num == 1) {
        if (this->actor.parent != NULL) {
            this->actor.parent->world = this->actor.world;
            this->actor.parent->child = NULL;
            this->actor.parent->room = globalCtx->roomCtx.curRoom.num;
        }
        Actor_Kill(&this->actor);
        gSaveContext.timer1State = 0;
    }
    /*if (Actor_IsFacingAndNearPlayer(&this->actor, 150.0f, 0x3000) != 0) {
        this->actor.textId = this->textId;
        Actor_RequestToTalkInRange(&this->actor, globalCtx, 250.0f);
    }*/
    func_8002F974(&this->actor, NA_SE_EN_PO_FLY - SFX_FLAG);
}

void EnPoRelay_Talk2(EnPoRelay* this, GlobalContext* globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x100);
    if (func_8010BDBC(&globalCtx->msgCtx) == 5) {
        if (func_80106BC8(globalCtx) != 0) {
            if (this->hookshotSlotFull != 0) {
                Actor_SetTextWithPrefix(globalCtx, &this->actor, 0x2E);
            } else {
                Actor_SetTextWithPrefix(globalCtx, &this->actor, 0x2D);
            }
            this->textId = this->actor.textId;
            func_8010B720(globalCtx, this->actor.textId);
        }
    } else if (Actor_HasFinishedTalking(&this->actor, globalCtx) != 0) {
        gSaveContext.timer1State = 0;
        this->actionTimer = 0;
        this->actionFunc = EnPoRelay_DisappearAndReward;
    }
    func_8002F974(&this->actor, NA_SE_EN_PO_FLY - SFX_FLAG);
}

void EnPoRelay_DisappearAndReward(EnPoRelay* this, GlobalContext* globalCtx) {
    Vec3f vec;
    f32 multiplier;
    s32 pad;
    Vec3f sp60;
    s32 pad1;

    this->actionTimer++;
    if (this->actionTimer < 8) {
        if (this->actionTimer < 5) {
            vec.y = Math_SinS((this->actionTimer * 0x1000) - 0x4000) * 23.0f + (this->actor.world.pos.y + 40.0f);
            multiplier = Math_CosS((this->actionTimer * 0x1000) - 0x4000) * 23.0f;
            vec.x = (Math_SinS(Camera_GetCamDirYaw(ACTIVE_CAM) + 0x4800) * multiplier) + this->actor.world.pos.x;
            vec.z = (Math_CosS(Camera_GetCamDirYaw(ACTIVE_CAM) + 0x4800) * multiplier) + this->actor.world.pos.z;
        } else {
            vec.y = this->actor.world.pos.y + 40.0f + 15.0f * (this->actionTimer - 5);
            vec.x = (Math_SinS(Camera_GetCamDirYaw(ACTIVE_CAM) + 0x4800) * 23.0f) + this->actor.world.pos.x;
            vec.z = (Math_CosS(Camera_GetCamDirYaw(ACTIVE_CAM) + 0x4800) * 23.0f) + this->actor.world.pos.z;
        }
        EffectSsDeadDb_Spawn(globalCtx, &vec, &D_80AD8D30, &D_80AD8D3C, this->actionTimer * 10 + 80, 0, 255, 255, 255,
                             255, 0, 0, 255, 1, 9, true);
        vec.x = (this->actor.world.pos.x + this->actor.world.pos.x) - vec.x;
        vec.z = (this->actor.world.pos.z + this->actor.world.pos.z) - vec.z;
        EffectSsDeadDb_Spawn(globalCtx, &vec, &D_80AD8D30, &D_80AD8D3C, this->actionTimer * 10 + 80, 0, 255, 255, 255,
                             255, 0, 0, 255, 1, 9, true);
        vec.x = this->actor.world.pos.x;
        vec.z = this->actor.world.pos.z;
        EffectSsDeadDb_Spawn(globalCtx, &vec, &D_80AD8D30, &D_80AD8D3C, this->actionTimer * 10 + 80, 0, 255, 255, 255,
                             255, 0, 0, 255, 1, 9, true);
        if (this->actionTimer == 1) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_EXTINCT);
        }
    }
    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.001f) != 0) {
        if (this->hookshotSlotFull != 0) {
            sp60.x = this->actor.world.pos.x;
            sp60.y = this->actor.floorHeight;
            sp60.z = this->actor.world.pos.z;
            if (gSaveContext.timer1Value < HIGH_SCORE(HS_DAMPE_RACE)) {
                HIGH_SCORE(HS_DAMPE_RACE) = gSaveContext.timer1Value;
            }
            if (Flags_GetCollectible(globalCtx, this->actor.params) == 0 && gSaveContext.timer1Value <= 60) {
                Item_DropCollectible2(globalCtx, &sp60, (this->actor.params << 8) + (0x4000 | ITEM00_HEART_PIECE));
            } else {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_ITEM00, sp60.x, sp60.y, sp60.z, 0, 0, 0, 2);
            }
        } else {
            Flags_SetTempClear(globalCtx, 4);
            HIGH_SCORE(HS_DAMPE_RACE) = gSaveContext.timer1Value;
        }
        Actor_Kill(&this->actor);
    }
    this->actor.scale.y = this->actor.scale.x;
    this->actor.scale.z = this->actor.scale.x;
    this->actor.world.pos.y += 10.0f;
}

void EnPoRelay_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnPoRelay* this = THIS;
    s32 pad;

    this->actionFunc(this, globalCtx);
    Actor_MoveForwardXZ(&this->actor);
    EnPoRelay_CorrectY(this);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 27.0f, 60.0f, 4);
    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    Actor_SetFocus(&this->actor, 50.0f);
    if (this->unk_195 != 0) {
        this->unk_195 -= 1;
    }
    if (this->unk_195 == 0) {
        this->unk_195 = 32;
    }
    this->eyeTextureIdx++;
    if (this->eyeTextureIdx == 3) {
        this->eyeTextureIdx = 0;
    }
}