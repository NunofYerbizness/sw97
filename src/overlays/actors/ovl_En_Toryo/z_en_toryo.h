#ifndef _Z_EN_TORYO_H_
#define _Z_EN_TORYO_H_

#include "ultra64.h"
#include "global.h"

struct EnToryo;

typedef void (*EnToryoActionFunc)(struct EnToryo* this, GlobalContext* globalCtx);

typedef struct EnToryo {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ EnToryoActionFunc actionFunc;
    /* 0x0194 */ ColliderCylinder collider;
    /* 0x01E0 */ s32 unk_1E0;
    /* 0x01E4 */ s32 unk_1E4;
    /* 0x01E8 */ u16 stateFlags;
    /* 0x01EA */ s16 unk_1EA;
    /* 0x01EC */ NpcInfo npcInfo;
    /* 0x0214 */ Vec3s jointTable[17];
    /* 0x027A */ Vec3s morphTable[17];
} EnToryo; // size = 0x02E0

extern const ActorInit En_Toryo_InitVars;

#endif