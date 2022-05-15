#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "poe_race_room_06.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "poe_race_scene.h"


static SCmdEchoSettings poe_race_room_06Set0000Cmd00;
static SCmdRoomBehavior poe_race_room_06Set0000Cmd01;
static SCmdSkyboxDisables poe_race_room_06Set0000Cmd02;
static SCmdMesh poe_race_room_06Set0000Cmd03;
static SCmdObjectList poe_race_room_06Set0000Cmd04;
static SCmdActorList poe_race_room_06Set0000Cmd05;
static SCmdEndMarker poe_race_room_06Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx poe_race_room_06Vtx_0000C0[12];
static Vtx poe_race_room_06Vtx_000180[32];
static Vtx poe_race_room_06Vtx_000380[7];
static Vtx poe_race_room_06Vtx_0003F0[9];
static Vtx poe_race_room_06Vtx_000480[25];
static Vtx poe_race_room_06Vtx_000610[32];
static Vtx poe_race_room_06Vtx_000810[54];
static Vtx poe_race_room_06Vtx_000B70[32];
static Vtx poe_race_room_06Vtx_000D70[6];
static Vtx poe_race_room_06Vtx_000DD0[32];
static Vtx poe_race_room_06Vtx_000FD0[8];
static Vtx poe_race_room_06Vtx_0015C8[32];
static Vtx poe_race_room_06Vtx_0017C8[8];
static Vtx poe_race_room_06Vtx_001958[18];
static Vtx poe_race_room_06Vtx_001A78[8];

static SCmdEchoSettings poe_race_room_06Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior poe_race_room_06Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables poe_race_room_06Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh poe_race_room_06Set0000Cmd03 = {  0x0A, 0, (u32)&poe_race_room_06MeshHeader0x000080 }; // 0x0018

static SCmdObjectList poe_race_room_06Set0000Cmd04 = {  0x0B, 0x09, (u32)poe_race_room_06ObjectList0x000038 }; // 0x0020

static SCmdActorList poe_race_room_06Set0000Cmd05 = {  0x01, 0x03, (u32)poe_race_room_06ActorList0x000048 }; // 0x0028 }; 

static SCmdEndMarker poe_race_room_06Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 poe_race_room_06ObjectList0x000038[9] = {
	OBJECT_MENKURI_OBJECTS,
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_POH,
	OBJECT_WALLMASTER,
	OBJECT_AM,
	OBJECT_WARP1,
	OBJECT_RELAY_OBJECTS, //manually added
}; 

ActorEntry poe_race_room_06ActorList0x000048[3] = {
	{ ACTOR_DOOR_WARP1, -3200, -20, -179, 0, -16384, 0, 0xFFFF }, //0x000048
	{ ACTOR_OBJ_SYOKUDAI, -3080, -24, -79, 0, 16384, 0, 0x07FF }, //0x000058
	{ ACTOR_OBJ_SYOKUDAI, -3080, -24, -279, 0, 16384, 0, 0x07FF }, //0x000068
}; 

static u32 pad78 = 0;
static u32 pad7C = 0;

MeshHeader2 poe_race_room_06MeshHeader0x000080 = { { 2 }, 0x03, (u32)&poe_race_room_06MeshDListEntry0x00008C, (u32)&(poe_race_room_06MeshDListEntry0x00008C) + sizeof(poe_race_room_06MeshDListEntry0x00008C) }; 

MeshEntry2 poe_race_room_06MeshDListEntry0x00008C[3] = {
	{ -3030, 20, -180, 337, (u32)poe_race_room_06Dlist0x001848, 0 },
	{ -3080, -27, -179, 121, (u32)poe_race_room_06Dlist0x001AF8, 0 },
	{ -3021, 50, -180, 352, (u32)poe_race_room_06Dlist0x001050, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx poe_race_room_06Vtx_0000C0[12] = {
    VTX(-2800, 20, -210, 1024, 1024, 203, 195, 178, 255),
    VTX(-2800, 20, -150, 1024, -1024, 203, 195, 178, 255),
    VTX(-2800, 50, -120, 0, -2048, 209, 164, 118, 255),
    VTX(-2800, 50, -240, 0, 2048, 209, 164, 118, 255),
    VTX(-2800, -80, -240, 0, 2048, 209, 164, 118, 255),
    VTX(-2800, -80, -210, 1024, 2048, 203, 195, 178, 255),
    VTX(-2800, 20, -210, 1024, -1882, 203, 195, 178, 255),
    VTX(-2800, 50, -240, 0, -3062, 209, 164, 118, 255),
    VTX(-2800, 20, -150, 0, -1877, 203, 195, 178, 255),
    VTX(-2800, -80, -150, 0, 2048, 203, 195, 178, 255),
    VTX(-2800, -80, -120, 1024, 2048, 209, 164, 118, 255),
    VTX(-2800, 50, -120, 1024, -3055, 209, 164, 118, 255),
}; 

static Vtx poe_race_room_06Vtx_000180[32] = {
    VTX(-2851, 180, 44, -1, -11, 81, 72, 55, 255),
    VTX(-2851, 120, 44, 0, 1024, 158, 142, 111, 255),
    VTX(-3207, 120, 45, 4094, 1024, 158, 142, 111, 255),
    VTX(-3207, 180, 45, 4092, -11, 81, 72, 55, 255),
    VTX(-2835, 120, 28, 1662, 1024, 158, 142, 111, 255),
    VTX(-2851, 120, 44, 2048, 1024, 158, 142, 111, 255),
    VTX(-2851, 180, 44, 2048, 0, 81, 72, 55, 255),
    VTX(-2835, 180, 28, 1662, 0, 81, 72, 55, 255),
    VTX(-3207, 180, 45, 1662, 0, 81, 72, 55, 255),
    VTX(-3207, 120, 45, 1662, 1024, 158, 142, 111, 255),
    VTX(-3223, 120, 29, 2048, 1024, 158, 142, 111, 255),
    VTX(-3223, 180, 29, 2048, 0, 81, 72, 55, 255),
    VTX(-2852, 120, -404, 1662, 1024, 158, 142, 111, 255),
    VTX(-2836, 120, -388, 2048, 1024, 158, 142, 111, 255),
    VTX(-2836, 180, -388, 2048, 0, 81, 72, 55, 255),
    VTX(-2852, 180, -404, 1662, 0, 81, 72, 55, 255),
    VTX(-3224, 120, -387, 1662, 1024, 158, 142, 111, 255),
    VTX(-3208, 120, -403, 2048, 1024, 158, 142, 111, 255),
    VTX(-3208, 180, -403, 2048, 0, 81, 72, 55, 255),
    VTX(-3224, 180, -387, 1662, 0, 81, 72, 55, 255),
    VTX(-2836, 180, -388, 6, 0, 81, 72, 55, 255),
    VTX(-2836, 120, -388, 0, 1024, 158, 142, 111, 255),
    VTX(-2835, 120, 28, 6158, 1024, 158, 142, 111, 255),
    VTX(-2835, 180, 28, 6164, 0, 81, 72, 55, 255),
    VTX(-3208, 180, -403, 1, 0, 81, 72, 55, 255),
    VTX(-3208, 120, -403, 0, 1024, 158, 142, 111, 255),
    VTX(-2852, 120, -404, 4104, 1024, 158, 142, 111, 255),
    VTX(-2852, 180, -404, 4105, 0, 81, 72, 55, 255),
    VTX(-3223, 180, 29, -5, -7, 81, 72, 55, 255),
    VTX(-3223, 120, 29, 0, 1024, 158, 142, 111, 255),
    VTX(-3224, 120, -387, 6147, 1024, 158, 142, 111, 255),
    VTX(-3224, 180, -387, 6142, -7, 81, 72, 55, 255),
}; 

static Vtx poe_race_room_06Vtx_000380[7] = {
    VTX(-3100, -30, -139, 2048, -2051, 218, 211, 199, 255),
    VTX(-3020, -80, -139, 2048, 1024, 100, 89, 67, 255),
    VTX(-3060, -55, -179, 1024, -513, 223, 217, 208, 255),
    VTX(-3020, -80, -179, 1024, 1024, 225, 200, 131, 255),
    VTX(-3020, -80, -219, 0, 1024, 100, 89, 67, 255),
    VTX(-3100, -30, -219, 0, -2051, 218, 211, 199, 255),
    VTX(-3100, -30, -179, 1024, -2051, 213, 206, 192, 255),
}; 

static Vtx poe_race_room_06Vtx_0003F0[9] = {
    VTX(-3060, 180, -179, 2367, -842, 115, 102, 78, 255),
    VTX(-2836, 180, -388, 4733, -2708, 52, 49, 38, 255),
    VTX(-2835, 180, 28, 0, -2708, 52, 49, 38, 255),
    VTX(-2851, 180, 44, -182, -2526, 52, 49, 38, 255),
    VTX(-3207, 180, 45, -182, 842, 52, 49, 38, 255),
    VTX(-3208, 180, -403, 4915, 842, 52, 49, 38, 255),
    VTX(-2852, 180, -404, 4915, -2526, 52, 49, 38, 255),
    VTX(-3223, 180, 29, 0, 1024, 52, 49, 38, 255),
    VTX(-3224, 180, -387, 4733, 1024, 52, 49, 38, 255),
}; 

static Vtx poe_race_room_06Vtx_000480[25] = {
    VTX(-3260, -20, -79, -7804, -4273, 52, 49, 38, 255),
    VTX(-3230, -20, -129, -5597, -2948, 229, 203, 177, 255),
    VTX(-3230, -20, -229, -1183, -2948, 229, 203, 177, 255),
    VTX(-3260, -20, -279, 1024, -4273, 52, 49, 38, 255),
    VTX(-3200, -20, -179, -3390, -1624, 25, 20, 15, 255),
    VTX(-3170, -20, -229, -1183, -300, 229, 203, 177, 255),
    VTX(-3140, -20, -279, 1024, 1024, 197, 140, 82, 255),
    VTX(-3170, -20, -129, -5597, -300, 229, 203, 177, 255),
    VTX(-3140, -20, -79, -7804, 1024, 229, 203, 177, 255),
    VTX(-3075, -30, -69, 4928, 2272, 189, 178, 157, 255),
    VTX(-3180, -30, -69, 4928, -1088, 189, 178, 157, 255),
    VTX(-3260, -30, 1, 7168, -3648, 52, 49, 38, 255),
    VTX(-3050, -30, 1, 7168, 3072, 134, 119, 89, 255),
    VTX(-3100, -30, -139, 2688, 1472, 134, 119, 89, 255),
    VTX(-3020, -30, -139, 2688, 4032, 134, 119, 89, 255),
    VTX(-3020, -30, -29, 6208, 4032, 134, 119, 89, 255),
    VTX(-3100, -30, -219, 128, 1472, 134, 119, 89, 255),
    VTX(-3180, -30, -179, 1408, -1088, 100, 89, 67, 255),
    VTX(-3100, -30, -179, 1408, 1472, 213, 206, 192, 255),
    VTX(-3180, -30, -289, -2112, -1088, 189, 178, 157, 255),
    VTX(-3260, -30, -359, -4352, -3648, 52, 49, 38, 255),
    VTX(-3075, -30, -289, -2112, 2272, 189, 178, 157, 255),
    VTX(-3050, -30, -359, -4352, 3072, 134, 119, 89, 255),
    VTX(-3020, -30, -329, -3392, 4032, 134, 119, 89, 255),
    VTX(-3020, -30, -219, 128, 4032, 134, 119, 89, 255),
}; 

static Vtx poe_race_room_06Vtx_000610[32] = {
    VTX(-3140, -30, -79, 732, -3657, 60, 52, 39, 255),
    VTX(-3140, -20, -79, 0, -3657, 147, 131, 97, 255),
    VTX(-3260, -20, -79, 0, 5120, 100, 89, 67, 255),
    VTX(-3260, -30, -79, 731, 5120, 35, 31, 25, 255),
    VTX(-2835, 120, 28, 2048, 1024, 115, 102, 78, 255),
    VTX(-2799, 120, 40, 889, 445, 69, 62, 48, 255),
    VTX(-2839, 120, 80, 889, 2376, 69, 62, 48, 255),
    VTX(-2851, 120, 44, 2048, 1796, 115, 102, 78, 255),
    VTX(-3219, 120, 81, 889, -328, 69, 62, 48, 255),
    VTX(-3259, 120, 41, 889, 1603, 69, 62, 48, 255),
    VTX(-3223, 120, 29, 2048, 1024, 115, 102, 78, 255),
    VTX(-3207, 120, 45, 2048, 252, 115, 102, 78, 255),
    VTX(-3259, 120, 41, 819, -3345, 69, 62, 48, 255),
    VTX(-3260, 120, -399, 819, 11674, 69, 62, 48, 255),
    VTX(-3224, 120, -387, 2048, 11264, 115, 102, 78, 255),
    VTX(-3223, 120, 29, 2048, -2935, 115, 102, 78, 255),
    VTX(-3260, 120, -399, 889, 445, 69, 62, 48, 255),
    VTX(-3221, 120, -439, 889, 2376, 69, 62, 48, 255),
    VTX(-3208, 120, -403, 2048, 1796, 115, 102, 78, 255),
    VTX(-3224, 120, -387, 2048, 1024, 115, 102, 78, 255),
    VTX(-3221, 120, -439, 819, -3482, 69, 62, 48, 255),
    VTX(-2841, 120, -440, 819, 7441, 69, 62, 48, 255),
    VTX(-2852, 120, -404, 2048, 7031, 115, 102, 78, 255),
    VTX(-3208, 120, -403, 2048, -3072, 115, 102, 78, 255),
    VTX(-2841, 120, -440, 889, 445, 69, 62, 48, 255),
    VTX(-2800, 120, -400, 889, 2376, 69, 62, 48, 255),
    VTX(-2836, 120, -388, 2048, 1796, 115, 102, 78, 255),
    VTX(-2852, 120, -404, 2048, 1024, 115, 102, 78, 255),
    VTX(-3050, -80, 1, 2048, 1024, 100, 89, 67, 255),
    VTX(-3050, -30, 1, 0, 1024, 147, 131, 97, 255),
    VTX(-3260, -30, 1, 0, -9728, 147, 131, 97, 255),
    VTX(-3260, -80, 1, 2048, -9728, 52, 49, 38, 255),
}; 

static Vtx poe_race_room_06Vtx_000810[54] = {
    VTX(-3020, -80, -29, 2048, 1024, 134, 119, 89, 255),
    VTX(-3020, -30, -29, 0, 1024, 189, 178, 157, 255),
    VTX(-3050, -30, 1, 0, -1148, 189, 178, 157, 255),
    VTX(-3050, -80, 1, 2048, -1148, 100, 89, 67, 255),
    VTX(-2800, 120, -400, 819, -5530, 69, 62, 48, 255),
    VTX(-2799, 120, 40, 819, 9489, 69, 62, 48, 255),
    VTX(-2835, 120, 28, 2048, 9079, 115, 102, 78, 255),
    VTX(-2836, 120, -388, 2048, -5120, 115, 102, 78, 255),
    VTX(-3219, 120, 81, 819, 7441, 69, 62, 48, 255),
    VTX(-3207, 120, 45, 2048, 7031, 115, 102, 78, 255),
    VTX(-2851, 120, 44, 2048, -3072, 115, 102, 78, 255),
    VTX(-2839, 120, 80, 819, -3482, 69, 62, 48, 255),
    VTX(-3020, -80, -139, 2048, 1024, 115, 102, 78, 255),
    VTX(-3020, -30, -139, 0, 1024, 177, 164, 138, 255),
    VTX(-3020, -30, -29, 0, -4608, 177, 164, 138, 255),
    VTX(-3020, -80, -29, 2048, -4608, 115, 102, 78, 255),
    VTX(-3020, -80, -219, 2048, -4608, 115, 102, 78, 255),
    VTX(-3020, -80, -329, 2048, 1024, 147, 131, 97, 255),
    VTX(-3020, -30, -329, 0, 1024, 218, 211, 199, 255),
    VTX(-3020, -30, -219, 0, -4608, 177, 164, 138, 255),
    VTX(-3261, -80, -359, 2048, 1024, 52, 49, 38, 255),
    VTX(-3260, -30, -359, 0, 1024, 134, 119, 89, 255),
    VTX(-3050, -30, -359, 0, -9728, 189, 178, 157, 255),
    VTX(-3051, -80, -359, 2048, -9728, 100, 89, 67, 255),
    VTX(-3051, -80, -359, 2048, 1024, 134, 119, 89, 255),
    VTX(-3050, -30, -359, 0, 1024, 203, 195, 178, 255),
    VTX(-3020, -30, -329, 0, -1148, 169, 154, 126, 255),
    VTX(-3020, -80, -329, 2048, -1148, 158, 142, 111, 255),
    VTX(-3100, -30, -219, 0, -3072, 81, 72, 55, 255),
    VTX(-3020, -80, -219, 2048, 1024, 81, 72, 55, 255),
    VTX(-3020, -30, -219, 0, 1024, 81, 72, 55, 255),
    VTX(-3020, -30, -139, 0, 1024, 81, 72, 55, 255),
    VTX(-3020, -80, -139, 2048, 1024, 81, 72, 55, 255),
    VTX(-3100, -30, -139, 0, 5120, 81, 72, 55, 255),
    VTX(-2800, -80, -150, 2816, 1024, 100, 89, 67, 255),
    VTX(-2780, -80, -150, 2816, 1536, 100, 89, 67, 255),
    VTX(-2780, -80, -210, 1280, 1536, 100, 89, 67, 255),
    VTX(-2800, -80, -210, 1280, 1024, 100, 89, 67, 255),
    VTX(-2910, -80, -260, 0, -1024, 209, 164, 118, 255),
    VTX(-2800, -80, -180, 2048, 1024, 100, 89, 67, 255),
    VTX(-2800, -80, -260, 0, 1024, 115, 102, 78, 255),
    VTX(-2910, -80, -100, 4096, -1024, 209, 164, 118, 255),
    VTX(-2800, -80, -100, 4096, 1024, 115, 102, 78, 255),
    VTX(-3020, -80, -179, 2048, -3072, 225, 200, 131, 255),
    VTX(-3020, -80, -99, 4096, -3072, 115, 102, 78, 255),
    VTX(-3020, -80, -259, 0, -3072, 115, 102, 78, 255),
    VTX(-3260, -30, -279, 731, -5120, 35, 31, 25, 255),
    VTX(-3260, -20, -279, 0, -5120, 81, 72, 55, 255),
    VTX(-3140, -20, -279, 0, 3657, 121, 107, 80, 255),
    VTX(-3140, -30, -279, 731, 3657, 60, 52, 39, 255),
    VTX(-3140, -30, -279, 731, -11264, 60, 52, 39, 255),
    VTX(-3140, -20, -279, 0, -11264, 147, 131, 97, 255),
    VTX(-3140, -20, -79, 0, 3365, 121, 107, 80, 255),
    VTX(-3140, -30, -79, 731, 3365, 60, 52, 39, 255),
}; 

static Vtx poe_race_room_06Vtx_000B70[32] = {
    VTX(-3260, 20, -179, 512, 512, 209, 164, 118, 255),
    VTX(-3259, 120, 41, 6144, -2048, 35, 31, 25, 255),
    VTX(-3260, -80, 41, 6144, 3072, 69, 62, 48, 255),
    VTX(-3260, 120, -399, -5120, -2048, 35, 31, 25, 255),
    VTX(-3261, -80, -399, -5120, 3072, 69, 62, 48, 255),
    VTX(-2800, 20, -150, 512, -1536, 197, 140, 82, 255),
    VTX(-2780, 20, -150, 0, -1536, 197, 140, 82, 255),
    VTX(-2780, -80, -150, 0, 1024, 100, 89, 67, 255),
    VTX(-2800, -80, -150, 512, 1024, 100, 89, 67, 255),
    VTX(-2800, -80, -210, 0, 1024, 100, 89, 67, 255),
    VTX(-2780, -80, -210, 512, 1024, 100, 89, 67, 255),
    VTX(-2780, 20, -210, 512, -1536, 197, 140, 82, 255),
    VTX(-2800, 20, -210, 0, -1536, 197, 140, 82, 255),
    VTX(-2800, 20, -210, 98, 512, 197, 140, 82, 255),
    VTX(-2780, 20, -210, 98, 1024, 197, 140, 82, 255),
    VTX(-2780, 20, -150, 1634, 1024, 197, 140, 82, 255),
    VTX(-2800, 20, -150, 1634, 512, 197, 140, 82, 255),
    VTX(-3061, -80, -439, 4096, 1024, 52, 49, 38, 255),
    VTX(-2841, -80, -440, 9728, 1024, 52, 49, 38, 255),
    VTX(-3031, 20, -439, 4864, -1536, 209, 164, 118, 255),
    VTX(-3221, -80, -439, 0, 1024, 52, 49, 38, 255),
    VTX(-2841, 120, -440, 9728, -4096, 52, 49, 38, 255),
    VTX(-3221, 120, -439, 0, -4096, 52, 49, 38, 255),
    VTX(-3219, -80, 81, 9728, 1024, 100, 89, 67, 255),
    VTX(-3029, 20, 81, 4864, -1536, 209, 164, 118, 255),
    VTX(-2839, -80, 80, 0, 1024, 100, 89, 67, 255),
    VTX(-2839, 120, 80, 0, -4096, 100, 89, 67, 255),
    VTX(-3219, 120, 81, 9728, -4096, 100, 89, 67, 255),
    VTX(-2801, -80, -400, -4096, 2048, 81, 72, 55, 255),
    VTX(-2800, -80, -240, 0, 2048, 209, 164, 118, 255),
    VTX(-2800, 50, -240, 0, -1280, 209, 164, 118, 255),
    VTX(-2800, 120, -400, -4096, -3072, 52, 49, 38, 255),
}; 

static Vtx poe_race_room_06Vtx_000D70[6] = {
    VTX(-2800, 50, -120, 3072, -1280, 209, 164, 118, 255),
    VTX(-2799, 120, 40, 7168, -3072, 52, 49, 38, 255),
    VTX(-2800, 120, -400, -4096, -3072, 52, 49, 38, 255),
    VTX(-2800, 50, -240, 0, -1280, 209, 164, 118, 255),
    VTX(-2800, -80, -120, 3072, 2048, 209, 164, 118, 255),
    VTX(-2800, -80, 40, 7168, 2048, 81, 72, 55, 255),
}; 

static Vtx poe_race_room_06Vtx_000DD0[32] = {
    VTX(-3020, -80, -99, -530, -1040, 115, 102, 78, 255),
    VTX(-3020, -80, -29, -1543, -1547, 100, 89, 67, 255),
    VTX(-2910, -80, -100, -1326, 553, 209, 164, 118, 255),
    VTX(-2901, -80, -400, 2946, 2870, 115, 102, 78, 255),
    VTX(-2881, -80, -380, 2512, 3015, 115, 102, 78, 255),
    VTX(-2801, -80, -400, 2222, 4318, 81, 72, 55, 255),
    VTX(-2841, -80, -440, 3091, 4028, 81, 72, 55, 255),
    VTX(-2800, -80, 40, -4150, 1132, 81, 72, 55, 255),
    VTX(-2800, -80, -100, -2123, 2146, 115, 102, 78, 255),
    VTX(-2880, -80, 20, -3281, 118, 115, 102, 78, 255),
    VTX(-3020, -80, 1, -1978, -1764, 132, 88, 43, 255),
    VTX(-2900, -80, 40, -3426, -316, 115, 102, 78, 255),
    VTX(-2839, -80, 80, -4440, 263, 81, 72, 55, 255),
    VTX(-3120, -80, 41, -1833, -3502, 115, 102, 78, 255),
    VTX(-3219, -80, 81, -1688, -5240, 81, 72, 55, 255),
    VTX(-3260, -80, 1, -240, -5240, 81, 72, 55, 255),
    VTX(-3060, -80, 1, -1688, -2344, 115, 102, 78, 255),
    VTX(-3260, -80, 41, -819, -5530, 81, 72, 55, 255),
    VTX(-3261, -80, -399, 5553, -2344, 81, 72, 55, 255),
    VTX(-3261, -80, -359, 4973, -2633, 81, 72, 55, 255),
    VTX(-3221, -80, -439, 5842, -1475, 81, 72, 55, 255),
    VTX(-3121, -80, -399, 4539, -316, 115, 102, 78, 255),
    VTX(-3061, -80, -359, 3525, 263, 115, 102, 78, 255),
    VTX(-3021, -80, -359, 3236, 842, 151, 101, 50, 255),
    VTX(-3041, -80, -399, 3960, 842, 147, 131, 97, 255),
    VTX(-3061, -80, -439, 4684, 842, 115, 102, 78, 255),
    VTX(-2910, -80, -260, 991, 1711, 209, 164, 118, 255),
    VTX(-3020, -80, -329, 2801, 625, 100, 89, 67, 255),
    VTX(-2800, -80, -260, 195, 3304, 115, 102, 78, 255),
    VTX(-3051, -80, -359, 3453, 408, 115, 102, 78, 255),
    VTX(-3050, -80, 1, -1760, -2199, 115, 102, 78, 255),
    VTX(-3020, -80, -259, 1787, 118, 115, 102, 78, 255),
}; 

static Vtx poe_race_room_06Vtx_000FD0[8] = {
    VTX(-3261, -80, -440, 0, 0, 0, 0, 0, 0),
    VTX(-2780, -80, -440, 0, 0, 0, 0, 0, 0),
    VTX(-3261, 180, -440, 0, 0, 0, 0, 0, 0),
    VTX(-2780, 180, -440, 0, 0, 0, 0, 0, 0),
    VTX(-3261, -80, 81, 0, 0, 0, 0, 0, 0),
    VTX(-2780, -80, 81, 0, 0, 0, 0, 0, 0),
    VTX(-3261, 180, 81, 0, 0, 0, 0, 0, 0),
    VTX(-2780, 180, 81, 0, 0, 0, 0, 0, 0),
}; 

Gfx poe_race_room_06Dlist0x001050[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&poe_race_room_06Vtx_000FD0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(poe_race_room_06Tex_001C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&poe_race_room_06Vtx_0000C0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_002C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 1, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_003C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 0, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000380[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(0, 2, 6, 0, 2, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_004C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_0003F0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 4, 7, 0, 0, 7, 8, 0),
    gsSP2Triangles(5, 0, 8, 0, 0, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_006C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000480[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 5, 6, 0),
    gsSP2Triangles(2, 6, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 4, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 13, 10, 0),
    gsSP2Triangles(13, 9, 14, 0, 9, 15, 14, 0),
    gsSP2Triangles(9, 12, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 17, 13, 18, 0),
    gsSP2Triangles(17, 10, 13, 0, 19, 20, 11, 0),
    gsSP2Triangles(19, 11, 10, 0, 21, 19, 16, 0),
    gsSP2Triangles(21, 22, 20, 0, 21, 20, 19, 0),
    gsSP2Triangles(22, 21, 23, 0, 21, 24, 23, 0),
    gsSP2Triangles(21, 16, 24, 0, 7, 1, 0, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_007428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000610[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&poe_race_room_06Vtx_000810[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&poe_race_room_06Vtx_000810[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(7, 12, 10, 0, 12, 13, 10, 0),
    gsSP2Triangles(7, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_room_06Tex_008428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000B70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(24, 27, 26, 0, 24, 23, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsSPVertex(&poe_race_room_06Vtx_000D70[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(poe_race_sceneTex_0167F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&poe_race_room_06Vtx_000DD0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 9, 7, 0, 2, 10, 9, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(13, 15, 14, 0, 13, 10, 16, 0),
    gsSP2Triangles(13, 16, 15, 0, 15, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 21, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 20, 0),
    gsSP2Triangles(21, 23, 24, 0, 24, 3, 6, 0),
    gsSP2Triangles(24, 6, 25, 0, 24, 23, 3, 0),
    gsSP2Triangles(3, 23, 4, 0, 4, 26, 5, 0),
    gsSP2Triangles(4, 23, 26, 0, 23, 27, 26, 0),
    gsSP2Triangles(1, 10, 2, 0, 26, 28, 5, 0),
    gsSP2Triangles(29, 27, 23, 0, 30, 10, 1, 0),
    gsSP1Triangle(26, 27, 31, 0),
    gsSPEndDisplayList(),
}; 

static Vtx poe_race_room_06Vtx_0015C8[32] = {
    VTX(-2847, 120, 53, 512, -4096, 132, 88, 43, 255),
    VTX(-2847, -80, 53, 512, 4096, 132, 88, 43, 255),
    VTX(-2839, -80, 80, 0, 4096, 132, 88, 43, 255),
    VTX(-2839, 120, 80, 0, -4096, 132, 88, 43, 255),
    VTX(-2827, 120, 33, 1536, -4096, 132, 88, 43, 255),
    VTX(-2827, -80, 33, 1536, 4096, 132, 88, 43, 255),
    VTX(-2799, 120, 40, 2048, -4096, 132, 88, 43, 255),
    VTX(-2800, -80, 40, 2048, 4096, 132, 88, 43, 255),
    VTX(-3232, 120, 34, 512, -4096, 132, 88, 43, 255),
    VTX(-3232, -80, 34, 512, 4096, 132, 88, 43, 255),
    VTX(-3260, -80, 41, 0, 4096, 132, 88, 43, 255),
    VTX(-3259, 120, 41, 0, -4096, 132, 88, 43, 255),
    VTX(-3212, 120, 54, 1536, -4096, 132, 88, 43, 255),
    VTX(-3212, -80, 54, 1536, 4096, 132, 88, 43, 255),
    VTX(-3219, 120, 81, 2048, -4096, 132, 88, 43, 255),
    VTX(-3219, -80, 81, 2048, 4096, 132, 88, 43, 255),
    VTX(-3213, 120, -412, 512, -4096, 132, 88, 43, 255),
    VTX(-3213, -80, -412, 512, 4096, 132, 88, 43, 255),
    VTX(-3221, -80, -439, 0, 4096, 132, 88, 43, 255),
    VTX(-3221, 120, -439, 0, -4096, 132, 88, 43, 255),
    VTX(-3233, 120, -392, 1536, -4096, 132, 88, 43, 255),
    VTX(-3233, -80, -392, 1536, 4096, 132, 88, 43, 255),
    VTX(-3260, 120, -399, 2048, -4096, 132, 88, 43, 255),
    VTX(-3261, -80, -399, 2048, 4096, 132, 88, 43, 255),
    VTX(-2828, 120, -393, 512, -4096, 132, 88, 43, 255),
    VTX(-2828, -80, -393, 512, 4096, 132, 88, 43, 255),
    VTX(-2801, -80, -400, 0, 4096, 132, 88, 43, 255),
    VTX(-2800, 120, -400, 0, -4096, 132, 88, 43, 255),
    VTX(-2848, 120, -413, 1536, -4096, 132, 88, 43, 255),
    VTX(-2848, -80, -413, 1536, 4096, 132, 88, 43, 255),
    VTX(-2841, 120, -440, 2048, -4096, 132, 88, 43, 255),
    VTX(-2841, -80, -440, 2048, 4096, 132, 88, 43, 255),
}; 

static Vtx poe_race_room_06Vtx_0017C8[8] = {
    VTX(-3261, -80, -440, 0, 0, 0, 0, 0, 0),
    VTX(-2799, -80, -440, 0, 0, 0, 0, 0, 0),
    VTX(-3261, 120, -440, 0, 0, 0, 0, 0, 0),
    VTX(-2799, 120, -440, 0, 0, 0, 0, 0, 0),
    VTX(-3261, -80, 81, 0, 0, 0, 0, 0, 0),
    VTX(-2799, -80, 81, 0, 0, 0, 0, 0, 0),
    VTX(-3261, 120, 81, 0, 0, 0, 0, 0, 0),
    VTX(-2799, 120, 81, 0, 0, 0, 0, 0, 0),
}; 

Gfx poe_race_room_06Dlist0x001848[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&poe_race_room_06Vtx_0017C8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(poe_race_room_06Tex_005C28, G_IM_FMT_I, 64, 128, 0, 1, 1, 6, 7, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&poe_race_room_06Vtx_0015C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 24, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPEndDisplayList(),
}; 

static Vtx poe_race_room_06Vtx_001958[18] = {
    VTX(-3094, -24, -94, 205, 1229, 255, 255, 255, 255),
    VTX(-3066, -24, -94, 205, 1843, 255, 255, 255, 255),
    VTX(-3060, -30, -99, 0, 2048, 69, 62, 48, 255),
    VTX(-3100, -30, -99, 0, 1024, 69, 62, 48, 255),
    VTX(-3080, -24, -79, 512, 1536, 218, 211, 199, 255),
    VTX(-3066, -24, -65, 205, 1229, 255, 255, 255, 255),
    VTX(-3060, -30, -59, 0, 1024, 69, 62, 48, 255),
    VTX(-3094, -24, -65, 205, 1843, 255, 255, 255, 255),
    VTX(-3100, -30, -59, 0, 2048, 69, 62, 48, 255),
    VTX(-3094, -24, -294, 205, 1229, 255, 255, 255, 255),
    VTX(-3100, -30, -299, 0, 1024, 69, 62, 48, 255),
    VTX(-3100, -30, -259, 0, 2048, 69, 62, 48, 255),
    VTX(-3094, -24, -265, 205, 1843, 255, 255, 255, 255),
    VTX(-3080, -24, -279, 512, 1536, 218, 211, 199, 255),
    VTX(-3066, -24, -265, 205, 1229, 255, 255, 255, 255),
    VTX(-3060, -30, -259, 0, 1024, 69, 62, 48, 255),
    VTX(-3060, -30, -299, 0, 2048, 69, 62, 48, 255),
    VTX(-3066, -24, -294, 205, 1843, 255, 255, 255, 255),
}; 

static Vtx poe_race_room_06Vtx_001A78[8] = {
    VTX(-3100, -30, -299, 0, 0, 0, 0, 0, 0),
    VTX(-3060, -30, -299, 0, 0, 0, 0, 0, 0),
    VTX(-3100, -24, -299, 0, 0, 0, 0, 0, 0),
    VTX(-3060, -24, -299, 0, 0, 0, 0, 0, 0),
    VTX(-3100, -30, -59, 0, 0, 0, 0, 0, 0),
    VTX(-3060, -30, -59, 0, 0, 0, 0, 0, 0),
    VTX(-3100, -24, -59, 0, 0, 0, 0, 0, 0),
    VTX(-3060, -24, -59, 0, 0, 0, 0, 0, 0),
}; 

Gfx poe_race_room_06Dlist0x001AF8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&poe_race_room_06Vtx_001A78[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(poe_race_room_06Tex_001C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&poe_race_room_06Vtx_001958[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 1, 4, 0),
    gsSP2Triangles(5, 6, 2, 0, 5, 2, 1, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 4, 7, 0, 0, 7, 4, 0),
    gsSP2Triangles(0, 3, 8, 0, 0, 8, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 14, 11, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 13, 0, 9, 13, 17, 0),
    gsSP2Triangles(9, 17, 16, 0, 9, 16, 10, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001C08[32] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x50, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x18, 0x48, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1A, 0xF8, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 poe_race_room_06Tex_001C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_001C28.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_002C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_002C28.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_003C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_003C28.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_004C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_004C28.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_005C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_005C28.i8.inc.c"
};

u64 poe_race_room_06Tex_006C28[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_006C28.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_007428[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_007428.rgb5a1.inc.c"
};

u64 poe_race_room_06Tex_008428[] = {
#include "assets/scenes/dungeons/poe_race//poe_race_room_06Tex_008428.rgb5a1.inc.c"
};

static u8 unaccounted_009428[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


