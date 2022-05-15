#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_01.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_01Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_01Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_01Set0000Cmd02;
static SCmdMesh deku_tree_room_01Set0000Cmd03;
static SCmdObjectList deku_tree_room_01Set0000Cmd04;
static SCmdActorList deku_tree_room_01Set0000Cmd05;
static SCmdEndMarker deku_tree_room_01Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_01Vtx_0000C0[32];
static Vtx deku_tree_room_01Vtx_0002C0[32];
static Vtx deku_tree_room_01Vtx_0004C0[16];
static Vtx deku_tree_room_01Vtx_0005C0[18];
static Vtx deku_tree_room_01Vtx_0006E0[62];
static Vtx deku_tree_room_01Vtx_000AC0[19];
static Vtx deku_tree_room_01Vtx_000BF0[32];
static Vtx deku_tree_room_01Vtx_000DF0[8];

static SCmdEchoSettings deku_tree_room_01Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_01Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_01Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_01Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_01MeshHeader0x0000A0 }; // 0x0018

static SCmdObjectList deku_tree_room_01Set0000Cmd04 = {  0x0B, 0x08, (u32)deku_tree_room_01ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_01Set0000Cmd05 = {  0x01, 0x05, (u32)deku_tree_room_01ActorList0x000048 }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_01Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_01ObjectList0x000038[8] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
}; 

ActorEntry deku_tree_room_01ActorList0x000048[5] = {
	{ ACTOR_EN_DEKUBABA, 8, 0, -75, 0, 0, 0, 0x0001 }, //0x000048
	{ ACTOR_EN_BOX, 7, 0, 162, 0, 0, 0, 0x0861 }, //0x000058
	{ ACTOR_OBJ_SYOKUDAI, 138, 0, 33, 0, 0, 0, 0x0488 }, //0x000068
	{ ACTOR_OBJ_SYOKUDAI, -127, 0, 33, 0, 0, 0, 0x0488 }, //0x000078
	{ ACTOR_OBJ_SYOKUDAI, 11, 0, -219, 0, 0, 0, 0x0BFF }, //0x000088
}; 

static u32 pad98 = 0;
static u32 pad9C = 0;

MeshHeader2 deku_tree_room_01MeshHeader0x0000A0 = { { 2 }, 0x01, (u32)&deku_tree_room_01MeshDListEntry0x0000AC, (u32)&(deku_tree_room_01MeshDListEntry0x0000AC) + sizeof(deku_tree_room_01MeshDListEntry0x0000AC) }; 

MeshEntry2 deku_tree_room_01MeshDListEntry0x0000AC[1] = {
	{ 0, 140, -110, 558, (u32)deku_tree_room_01Dlist0x000E70, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_01Vtx_0000C0[32] = {
    VTX(30, 0, -623, 341, 2048, 0, 0, 0, 255),
    VTX(90, 0, -623, 0, 2048, 0, 0, 0, 255),
    VTX(30, 100, -623, 341, 1317, 255, 255, 255, 255),
    VTX(90, 160, -623, 0, 878, 0, 0, 0, 255),
    VTX(-90, 160, -623, 1024, 878, 0, 0, 0, 255),
    VTX(-90, 0, -623, 1024, 2048, 0, 0, 0, 255),
    VTX(-30, 100, -623, 683, 1317, 255, 255, 255, 255),
    VTX(-30, 0, -623, 683, 2048, 0, 0, 0, 255),
    VTX(407, 280, -168, 9216, 0, 0, 0, 0, 255),
    VTX(407, 140, -168, 9216, 1024, 255, 255, 255, 255),
    VTX(407, 140, 168, 7168, 1024, 255, 255, 255, 255),
    VTX(407, 280, 168, 7168, 0, 0, 0, 0, 255),
    VTX(168, 280, -407, 11264, 0, 0, 0, 0, 255),
    VTX(168, 140, -407, 11264, 1024, 255, 255, 255, 255),
    VTX(168, 0, -407, 11264, 2048, 0, 0, 0, 255),
    VTX(407, 0, -168, 9216, 2048, 0, 0, 0, 255),
    VTX(-407, 280, -168, 15360, 0, 0, 0, 0, 255),
    VTX(-407, 140, -168, 15360, 1024, 255, 255, 255, 255),
    VTX(-168, 140, -407, 13312, 1024, 255, 255, 255, 255),
    VTX(-168, 280, -407, 13312, 0, 0, 0, 0, 255),
    VTX(-407, 0, -168, 15360, 2048, 0, 0, 0, 255),
    VTX(-168, 0, -407, 13312, 2048, 0, 0, 0, 255),
    VTX(-407, 280, 168, 17408, 0, 0, 0, 0, 255),
    VTX(-407, 140, 168, 17408, 1024, 255, 255, 255, 255),
    VTX(90, 160, -623, -293, 461, 0, 0, 0, 255),
    VTX(90, 160, -407, -293, 2048, 119, 119, 119, 255),
    VTX(-90, 160, -407, 1024, 2048, 119, 119, 119, 255),
    VTX(-90, 160, -623, 1024, 461, 0, 0, 0, 255),
    VTX(-90, 160, -407, 12856, 878, 119, 119, 119, 255),
    VTX(-90, 0, -407, 12856, 2048, 0, 0, 0, 255),
    VTX(90, 0, -407, 11720, 2048, 0, 0, 0, 255),
    VTX(90, 160, -407, 11720, 878, 119, 119, 119, 255),
}; 

static Vtx deku_tree_room_01Vtx_0002C0[32] = {
    VTX(407, 280, 168, 7168, 0, 0, 0, 0, 255),
    VTX(407, 140, 168, 7168, 1024, 255, 255, 255, 255),
    VTX(171, 140, 403, 5144, 1024, 255, 255, 255, 255),
    VTX(171, 280, 403, 5144, 0, 0, 0, 0, 255),
    VTX(-407, 140, 168, 1024, 1024, 255, 255, 255, 255),
    VTX(-407, 280, 168, 1024, 0, 0, 0, 0, 255),
    VTX(-171, 280, 403, 3048, 0, 0, 0, 0, 255),
    VTX(-171, 140, 403, 3048, 1024, 255, 255, 255, 255),
    VTX(30, 80, 403, 4290, 1463, 119, 119, 119, 255),
    VTX(30, 180, 403, 4290, 731, 255, 255, 255, 255),
    VTX(-30, 180, 403, 3902, 731, 255, 255, 255, 255),
    VTX(-30, 80, 403, 3902, 1463, 119, 119, 119, 255),
    VTX(-90, 160, -407, 12856, 878, 119, 119, 119, 255),
    VTX(-90, 280, -407, 12856, 0, 0, 0, 0, 255),
    VTX(-168, 280, -407, 13312, 0, 0, 0, 0, 255),
    VTX(90, 160, -407, 11720, 878, 119, 119, 119, 255),
    VTX(90, 280, -407, 11720, 0, 0, 0, 0, 255),
    VTX(168, 280, -407, 11264, 0, 0, 0, 0, 255),
    VTX(-30, 100, -623, 683, 1317, 255, 255, 255, 255),
    VTX(30, 100, -623, 341, 1317, 255, 255, 255, 255),
    VTX(90, 160, -623, 0, 878, 0, 0, 0, 255),
    VTX(-90, 160, -623, 1024, 878, 0, 0, 0, 255),
    VTX(-90, 160, -623, 1587, 878, 0, 0, 0, 255),
    VTX(-90, 80, -515, 793, 1463, 255, 255, 255, 255),
    VTX(-90, 0, -623, 1587, 2048, 0, 0, 0, 255),
    VTX(-90, 160, -407, 0, 878, 119, 119, 119, 255),
    VTX(-90, 0, -407, 0, 2048, 0, 0, 0, 255),
    VTX(90, 0, -623, 1587, 2048, 0, 0, 0, 255),
    VTX(90, 80, -515, 793, 1463, 255, 255, 255, 255),
    VTX(90, 160, -623, 1587, 878, 0, 0, 0, 255),
    VTX(90, 160, -407, 0, 878, 119, 119, 119, 255),
    VTX(90, 0, -407, 0, 2048, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_01Vtx_0004C0[16] = {
    VTX(-171, 140, 403, 3048, 1024, 255, 255, 255, 255),
    VTX(-30, 80, 403, 3902, 1463, 119, 119, 119, 255),
    VTX(-171, 80, 403, 3048, 1463, 119, 119, 119, 255),
    VTX(30, 80, 403, 4290, 1463, 119, 119, 119, 255),
    VTX(171, 140, 403, 5144, 1024, 255, 255, 255, 255),
    VTX(171, 80, 403, 5144, 1463, 119, 119, 119, 255),
    VTX(407, 140, 168, 7168, 1024, 255, 255, 255, 255),
    VTX(407, 40, 168, 7168, 1755, 68, 68, 68, 255),
    VTX(407, 140, -168, 9216, 1024, 255, 255, 255, 255),
    VTX(407, 0, -168, 9216, 2048, 0, 0, 0, 255),
    VTX(-407, 40, 168, 1024, 1755, 68, 68, 68, 255),
    VTX(-407, 140, 168, 1024, 1024, 255, 255, 255, 255),
    VTX(-407, 140, 168, 17408, 1024, 255, 255, 255, 255),
    VTX(-407, 40, 168, 17408, 1755, 68, 68, 68, 255),
    VTX(-407, 0, -168, 15360, 2048, 0, 0, 0, 255),
    VTX(-407, 140, -168, 15360, 1024, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_01Vtx_0005C0[18] = {
    VTX(-103, 80, 242, -1518, -4, 255, 255, 255, 255),
    VTX(-103, 0, 242, -1518, 1020, 0, 0, 0, 255),
    VTX(-243, 0, 101, 1011, 515, 68, 68, 68, 255),
    VTX(-243, 40, 101, 1011, 3, 255, 255, 255, 255),
    VTX(-243, 40, 101, -1473, 6, 255, 255, 255, 255),
    VTX(-243, 0, 101, -1473, 518, 68, 68, 68, 255),
    VTX(-243, 0, -101, 1043, -4, 68, 68, 68, 255),
    VTX(243, 0, 101, -1546, 512, 68, 68, 68, 255),
    VTX(243, 40, 101, -1546, 0, 255, 255, 255, 255),
    VTX(243, 0, -101, 1024, 0, 68, 68, 68, 255),
    VTX(243, 40, 101, 1024, 0, 255, 255, 255, 255),
    VTX(243, 0, 101, 1024, 512, 68, 68, 68, 255),
    VTX(103, 0, 242, -1539, 1024, 0, 0, 0, 255),
    VTX(103, 80, 242, -1539, 0, 255, 255, 255, 255),
    VTX(103, 0, 242, -68, 1024, 0, 0, 0, 255),
    VTX(-103, 0, 242, 2560, 1024, 0, 0, 0, 255),
    VTX(-103, 80, 242, 2560, 0, 255, 255, 255, 255),
    VTX(103, 80, 242, -68, 0, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_01Vtx_0006E0[62] = {
    VTX(0, 280, 0, 512, 0, 119, 119, 119, 255),
    VTX(407, 280, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(407, 280, 168, 0, 2048, 0, 0, 0, 255),
    VTX(407, 280, 168, 0, 2048, 0, 0, 0, 255),
    VTX(171, 280, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 519, 0, 119, 119, 119, 255),
    VTX(-407, 280, -168, 0, 2048, 0, 0, 0, 255),
    VTX(-168, 280, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 512, 0, 119, 119, 119, 255),
    VTX(-171, 280, 403, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 280, 168, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 505, 0, 119, 119, 119, 255),
    VTX(168, 280, -407, 0, 2048, 0, 0, 0, 255),
    VTX(407, 280, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(90, 0, -407, 786, 2048, 0, 0, 0, 255),
    VTX(90, 0, -623, 786, 1552, 0, 0, 0, 255),
    VTX(0, 0, -407, 512, 2048, 255, 255, 255, 255),
    VTX(-90, 0, -623, 238, 1552, 0, 0, 0, 255),
    VTX(171, 80, 403, 1024, 2048, 119, 119, 119, 255),
    VTX(103, 80, 242, 819, 1227, 255, 255, 255, 255),
    VTX(-103, 80, 242, 205, 1227, 255, 255, 255, 255),
    VTX(-171, 80, 403, 0, 2048, 119, 119, 119, 255),
    VTX(171, 80, 403, 1024, 2048, 119, 119, 119, 255),
    VTX(243, 40, 101, 208, 1226, 255, 255, 255, 255),
    VTX(103, 80, 242, 821, 1226, 255, 255, 255, 255),
    VTX(407, 40, 168, 0, 2048, 68, 68, 68, 255),
    VTX(407, 40, 168, 0, 2048, 68, 68, 68, 255),
    VTX(243, 0, -101, 818, 1226, 255, 255, 255, 255),
    VTX(243, 40, 101, 206, 1226, 255, 255, 255, 255),
    VTX(407, 0, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(101, 0, -243, 202, 1226, 255, 255, 255, 255),
    VTX(0, 0, -407, 512, 2048, 255, 255, 255, 255),
    VTX(-101, 0, -243, 815, 1226, 255, 255, 255, 255),
    VTX(-101, 0, -243, 818, 1226, 255, 255, 255, 255),
    VTX(-168, 0, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 0, -168, 0, 2048, 0, 0, 0, 255),
    VTX(-243, 0, -101, 206, 1226, 255, 255, 255, 255),
    VTX(-243, 0, -101, 206, 1226, 255, 255, 255, 255),
    VTX(-407, 40, 168, 1024, 2048, 68, 68, 68, 255),
    VTX(-243, 40, 101, 818, 1226, 255, 255, 255, 255),
    VTX(-243, 40, 101, 816, 1226, 255, 255, 255, 255),
    VTX(-171, 80, 403, 0, 2048, 119, 119, 119, 255),
    VTX(-103, 80, 242, 203, 1226, 255, 255, 255, 255),
    VTX(0, 0, 0, 512, 0, 255, 255, 255, 255),
    VTX(0, 0, 0, 519, 0, 255, 255, 255, 255),
    VTX(103, 0, 242, 821, 1226, 0, 0, 0, 255),
    VTX(243, 0, 101, 208, 1226, 68, 68, 68, 255),
    VTX(-243, 0, 101, 816, 1226, 68, 68, 68, 255),
    VTX(-103, 0, 242, 203, 1226, 0, 0, 0, 255),
    VTX(0, 0, 0, 505, 0, 255, 255, 255, 255),
    VTX(-243, 0, 101, 818, 1226, 68, 68, 68, 255),
    VTX(0, 0, 0, 512, 0, 255, 255, 255, 255),
    VTX(0, 0, 0, 512, 0, 255, 255, 255, 255),
    VTX(243, 0, 101, 206, 1226, 68, 68, 68, 255),
    VTX(243, 0, -101, 818, 1226, 255, 255, 255, 255),
    VTX(0, 0, 0, 503, 0, 255, 255, 255, 255),
    VTX(0, 0, 0, 512, 0, 255, 255, 255, 255),
    VTX(-103, 0, 242, 205, 1227, 0, 0, 0, 255),
    VTX(103, 0, 242, 819, 1227, 0, 0, 0, 255),
    VTX(407, 0, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(168, 0, -407, 0, 2048, 0, 0, 0, 255),
    VTX(101, 0, -243, 206, 1226, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_01Vtx_000AC0[19] = {
    VTX(-90, 0, -623, 238, 1552, 0, 0, 0, 255),
    VTX(-90, 0, -407, 238, 2048, 0, 0, 0, 255),
    VTX(0, 0, -407, 512, 2048, 255, 255, 255, 255),
    VTX(171, 280, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(-171, 280, 403, 0, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 512, 0, 119, 119, 119, 255),
    VTX(-168, 280, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(168, 280, -407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 503, 0, 119, 119, 119, 255),
    VTX(-407, 280, 168, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 280, -168, 0, 2048, 0, 0, 0, 255),
    VTX(0, 280, 0, 512, 0, 119, 119, 119, 255),
    VTX(-90, 0, -407, 786, 2048, 0, 0, 0, 255),
    VTX(-168, 0, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(-101, 0, -243, 815, 1226, 255, 255, 255, 255),
    VTX(0, 0, -407, 512, 2048, 255, 255, 255, 255),
    VTX(101, 0, -243, 202, 1226, 255, 255, 255, 255),
    VTX(90, 0, -407, 238, 2048, 0, 0, 0, 255),
    VTX(168, 0, -407, 0, 2048, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_01Vtx_000BF0[32] = {
    VTX(30, 0, -643, 1024, 1638, 255, 255, 255, 255),
    VTX(30, 0, -623, 1024, 1229, 0, 0, 0, 255),
    VTX(30, 100, -623, 0, 1229, 255, 255, 255, 255),
    VTX(-30, 100, -643, 819, 1638, 0, 0, 0, 255),
    VTX(30, 100, -643, 205, 1638, 0, 0, 0, 255),
    VTX(30, 100, -623, 205, 1229, 255, 255, 255, 255),
    VTX(-30, 100, -623, 819, 1229, 255, 255, 255, 255),
    VTX(-30, 100, -623, 0, 1229, 255, 255, 255, 255),
    VTX(-30, 0, -643, 1024, 1638, 255, 255, 255, 255),
    VTX(-30, 100, -643, 0, 1638, 0, 0, 0, 255),
    VTX(-30, 0, -623, 1024, 1229, 0, 0, 0, 255),
    VTX(30, 0, -643, 205, 1638, 255, 255, 255, 255),
    VTX(-30, 0, -643, 819, 1638, 255, 255, 255, 255),
    VTX(-30, 0, -623, 819, 1229, 0, 0, 0, 255),
    VTX(30, 0, -623, 205, 1229, 0, 0, 0, 255),
    VTX(-30, 180, 423, 205, 1638, 0, 0, 0, 255),
    VTX(-30, 180, 403, 205, 1229, 255, 255, 255, 255),
    VTX(30, 180, 403, 819, 1229, 255, 255, 255, 255),
    VTX(30, 180, 423, 819, 1638, 0, 0, 0, 255),
    VTX(-30, 80, 423, 1024, 1638, 255, 255, 255, 255),
    VTX(-30, 180, 403, 0, 1229, 255, 255, 255, 255),
    VTX(-30, 180, 423, 0, 1638, 0, 0, 0, 255),
    VTX(-30, 80, 403, 1024, 1229, 119, 119, 119, 255),
    VTX(30, 80, 423, 819, 1638, 255, 255, 255, 255),
    VTX(30, 80, 403, 819, 1229, 119, 119, 119, 255),
    VTX(-30, 80, 403, 205, 1229, 119, 119, 119, 255),
    VTX(-30, 80, 423, 205, 1638, 255, 255, 255, 255),
    VTX(30, 180, 423, 0, 1638, 0, 0, 0, 255),
    VTX(30, 180, 403, 0, 1229, 255, 255, 255, 255),
    VTX(30, 80, 423, 1024, 1638, 255, 255, 255, 255),
    VTX(30, 80, 403, 1024, 1229, 119, 119, 119, 255),
    VTX(30, 100, -643, 0, 1638, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_01Vtx_000DF0[8] = {
    VTX(-16, 0, -712, 0, 0, 0, 0, 0, 0),
    VTX(666, 0, -140, 0, 0, 0, 0, 0, 0),
    VTX(-16, 280, -712, 0, 0, 0, 0, 0, 0),
    VTX(666, 280, -140, 0, 0, 0, 0, 0, 0),
    VTX(-629, 0, 19, 0, 0, 0, 0, 0, 0),
    VTX(52, 0, 591, 0, 0, 0, 0, 0, 0),
    VTX(-629, 280, 19, 0, 0, 0, 0, 0, 0),
    VTX(52, 280, 591, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_01Dlist0x000E70[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_01Vtx_000DF0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_01Tex_001210, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_01Vtx_0000C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 9, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 17, 0, 22, 17, 16, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(19, 18, 28, 0, 18, 29, 28, 0),
    gsSP2Triangles(18, 21, 29, 0, 30, 13, 31, 0),
    gsSP2Triangles(13, 12, 31, 0, 30, 14, 13, 0),
    gsSPVertex(&deku_tree_room_01Vtx_0002C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 2, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 3, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 15, 17, 16, 0),
    gsSP2Triangles(6, 10, 7, 0, 9, 3, 2, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(25, 26, 23, 0, 26, 24, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 30, 29, 0),
    gsSP2Triangles(27, 31, 28, 0, 31, 30, 28, 0),
    gsSPVertex(&deku_tree_room_01Vtx_0004C0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 0, 0, 10, 0, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_01Tex_002210, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_01Vtx_0005C0[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_01Tex_003210, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_01Vtx_0006E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 23, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 29, 27, 0),
    gsSPVertex(&deku_tree_room_01Vtx_0006E0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 5, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 8, 11, 0, 3, 6, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(7, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(0, 2, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(24, 29, 30, 0, 24, 30, 31, 0),
    gsSP1Triangle(22, 24, 31, 0),
    gsSPVertex(&deku_tree_room_01Vtx_000AC0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 18, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_01Vtx_000BF0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 31, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001200[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0E, 0x70, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_01Tex_001210[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_01Tex_001210.rgb5a1.inc.c"
};

u64 deku_tree_room_01Tex_002210[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_01Tex_002210.rgb5a1.inc.c"
};

u64 deku_tree_room_01Tex_003210[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_01Tex_003210.rgb5a1.inc.c"
};

