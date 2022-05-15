#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fire_temple_room_12.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fire_temple_scene.h"


static SCmdEchoSettings fire_temple_room_12Set0000Cmd00;
static SCmdRoomBehavior fire_temple_room_12Set0000Cmd01;
static SCmdSkyboxDisables fire_temple_room_12Set0000Cmd02;
static SCmdMesh fire_temple_room_12Set0000Cmd03;
static SCmdObjectList fire_temple_room_12Set0000Cmd04;
static SCmdEndMarker fire_temple_room_12Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx fire_temple_room_12Vtx_000060[32];
static Vtx fire_temple_room_12Vtx_000260[29];
static Vtx fire_temple_room_12Vtx_000430[12];
static Vtx fire_temple_room_12Vtx_0004F0[5];
static Vtx fire_temple_room_12Vtx_000540[94];
static Vtx fire_temple_room_12Vtx_000B20[10];
static Vtx fire_temple_room_12Vtx_000BC0[8];

static SCmdEchoSettings fire_temple_room_12Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fire_temple_room_12Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fire_temple_room_12Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh fire_temple_room_12Set0000Cmd03 = {  0x0A, 0, (u32)&fire_temple_room_12MeshHeader0x000040 }; // 0x0018

static SCmdObjectList fire_temple_room_12Set0000Cmd04 = {  0x0B, 0x02, (u32)fire_temple_room_12ObjectList0x000030 }; // 0x0020

static SCmdEndMarker fire_temple_room_12Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 fire_temple_room_12ObjectList0x000030[2] = {
	OBJECT_HIDAN_OBJECTS,
	OBJECT_FIRE,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 fire_temple_room_12MeshHeader0x000040 = { { 0 }, 0x01, (u32)&fire_temple_room_12MeshDListEntry0x00004C, (u32)&(fire_temple_room_12MeshDListEntry0x00004C) + sizeof(fire_temple_room_12MeshDListEntry0x00004C) }; 

MeshEntry0 fire_temple_room_12MeshDListEntry0x00004C[1] = {
	{ (u32)fire_temple_room_12Dlist0x0037C0, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx fire_temple_room_12Vtx_000060[32] = {
    VTX(-2490, 4400, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2510, 4400, -10, 0, 1024, 104, 55, 15, 255),
    VTX(-2490, 4400, 50, 512, -512, 22, 3, 5, 255),
    VTX(-2510, 4400, 50, 0, -512, 104, 55, 15, 255),
    VTX(-2490, 4400, 50, 0, 1024, 22, 3, 5, 255),
    VTX(-2510, 4400, 50, 0, 512, 104, 55, 15, 255),
    VTX(-2490, 4500, 50, 2560, 1024, 22, 3, 5, 255),
    VTX(-2510, 4500, 50, 2560, 512, 60, 37, 15, 255),
    VTX(-2490, 4500, -10, 2560, 1024, 22, 3, 5, 255),
    VTX(-2510, 4500, -10, 2560, 512, 60, 37, 15, 255),
    VTX(-2490, 4400, -10, 0, 1024, 22, 3, 5, 255),
    VTX(-2510, 4400, -10, 0, 512, 104, 55, 15, 255),
    VTX(-2490, 4500, 50, 512, -512, 22, 3, 5, 255),
    VTX(-2510, 4500, 50, 0, -512, 60, 37, 15, 255),
    VTX(-2490, 4500, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2510, 4500, -10, 0, 1024, 60, 37, 15, 255),
    VTX(-2470, 4100, 50, 1024, -1024, 60, 37, 15, 255),
    VTX(-2490, 4100, 50, 512, -1024, 22, 3, 5, 255),
    VTX(-2490, 4100, -10, 512, 512, 22, 3, 5, 255),
    VTX(-2470, 4100, -10, 1024, 512, 60, 37, 15, 255),
    VTX(-2470, 4000, 50, 1024, 1024, 143, 94, 35, 255),
    VTX(-2490, 4000, 50, 512, 1024, 22, 3, 5, 255),
    VTX(-2490, 4100, 50, 512, -1536, 22, 3, 5, 255),
    VTX(-2470, 4100, 50, 1024, -1536, 60, 37, 15, 255),
    VTX(-2470, 4000, -10, 1024, 512, 143, 94, 35, 255),
    VTX(-2490, 4000, -10, 512, 512, 22, 3, 5, 255),
    VTX(-2490, 4000, 50, 512, -1024, 22, 3, 5, 255),
    VTX(-2470, 4000, 50, 1024, -1024, 143, 94, 35, 255),
    VTX(-2470, 4100, -10, 1024, -1536, 60, 37, 15, 255),
    VTX(-2490, 4100, -10, 512, -1536, 22, 3, 5, 255),
    VTX(-2490, 4000, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2470, 4000, -10, 1024, 1024, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_12Vtx_000260[29] = {
    VTX(-2750, 4280, 80, 0, -512, 60, 37, 15, 255),
    VTX(-2710, 4280, 80, 1024, -512, 143, 94, 35, 255),
    VTX(-2750, 4180, 80, 0, 2048, 104, 55, 15, 255),
    VTX(-2710, 4180, 80, 1024, 2048, 104, 55, 15, 255),
    VTX(-2750, 4100, -180, 0, -512, 60, 37, 15, 255),
    VTX(-2750, 4100, -140, 1024, -512, 60, 37, 15, 255),
    VTX(-2750, 4000, -180, 0, 2048, 104, 55, 15, 255),
    VTX(-2750, 4000, -120, 1024, 2048, 60, 37, 15, 255),
    VTX(-2750, 4100, -180, 0, -512, 143, 94, 35, 255),
    VTX(-2790, 4000, -180, 1024, 2048, 60, 37, 15, 255),
    VTX(-2790, 4100, -180, 1024, -512, 60, 37, 15, 255),
    VTX(-2670, 4380, 80, 2048, -3072, 143, 94, 35, 255),
    VTX(-2670, 4180, 80, 2048, 2048, 104, 55, 15, 255),
    VTX(-2710, 4380, 80, 1024, -3072, 60, 37, 15, 255),
    VTX(-2670, 4320, 120, 1024, -1536, 32, 19, 7, 255),
    VTX(-2670, 4180, 120, 1024, 2048, 60, 37, 15, 255),
    VTX(-2670, 4180, 80, 0, 2048, 104, 55, 15, 255),
    VTX(-2670, 4320, 80, 0, -1536, 60, 37, 15, 255),
    VTX(-2670, 4320, 120, 1024, 256, 60, 37, 15, 255),
    VTX(-2670, 4320, 80, 0, 256, 60, 37, 15, 255),
    VTX(-2670, 4380, 80, 0, -512, 60, 37, 15, 255),
    VTX(-2670, 4380, 120, 1024, -512, 60, 37, 15, 255),
    VTX(-2710, 4380, 120, 1024, -3072, 155, 112, 29, 255),
    VTX(-2710, 4380, 80, 0, -3072, 60, 37, 15, 255),
    VTX(-2710, 4280, 80, 0, -512, 60, 37, 15, 255),
    VTX(-2710, 4280, 120, 1024, -512, 60, 37, 15, 255),
    VTX(-2750, 4280, 120, 1024, -512, 60, 37, 15, 255),
    VTX(-2750, 4280, 80, 0, -512, 143, 94, 35, 255),
    VTX(-2750, 4180, 120, 1024, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_12Vtx_000430[12] = {
    VTX(-2750, 4100, -140, 6144, 4096, 60, 37, 15, 255),
    VTX(-2750, 4100, -180, 4096, 4096, 143, 94, 35, 255),
    VTX(-2790, 4100, -180, 4096, 2048, 60, 37, 15, 255),
    VTX(-2710, 4280, 120, 6144, 4096, 60, 37, 15, 255),
    VTX(-2710, 4280, 80, 4096, 4096, 143, 94, 35, 255),
    VTX(-2750, 4280, 80, 4096, 2048, 60, 37, 15, 255),
    VTX(-2750, 4280, 120, 6144, 2048, 104, 55, 15, 255),
    VTX(-2710, 4380, 120, 6144, 2048, 104, 55, 15, 255),
    VTX(-2670, 4380, 120, 6144, 4096, 60, 37, 15, 255),
    VTX(-2710, 4380, 80, 4096, 2048, 60, 37, 15, 255),
    VTX(-2670, 4380, 80, 4096, 4096, 143, 94, 35, 255),
    VTX(-2790, 4100, -140, 6144, 2048, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_12Vtx_0004F0[5] = {
    VTX(-2310, 4080, -180, 0, 2048, 253, 191, 172, 255),
    VTX(-2310, 4080, -20, 2048, 2048, 253, 191, 172, 255),
    VTX(-2310, 4160, -100, 1024, 1024, 186, 185, 49, 255),
    VTX(-2310, 4240, -180, 0, 0, 22, 3, 5, 255),
    VTX(-2310, 4240, -20, 2048, 0, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_12Vtx_000540[94] = {
    VTX(-2510, 4540, -100, -2048, 4096, 22, 3, 5, 255),
    VTX(-2510, 4540, 120, -2048, -6144, 22, 3, 5, 255),
    VTX(-2790, 4540, -80, 12288, 4096, 41, 23, 9, 255),
    VTX(-2790, 4540, 120, 12288, -6144, 41, 23, 9, 255),
    VTX(-2670, 4400, -80, 6144, 4096, 60, 37, 15, 255),
    VTX(-2670, 4400, 120, 6144, -6144, 60, 37, 15, 255),
    VTX(-2510, 4400, -100, -2048, 4096, 104, 55, 15, 255),
    VTX(-2510, 4400, 120, -2048, -6144, 104, 55, 15, 255),
    VTX(-2670, 4400, -80, 9728, -3072, 60, 37, 15, 255),
    VTX(-2670, 4320, -80, 9728, 1024, 41, 23, 9, 255),
    VTX(-2670, 4320, 120, -512, 1024, 155, 112, 29, 255),
    VTX(-2670, 4400, 120, -512, -3072, 104, 55, 15, 255),
    VTX(-2670, 4320, -80, 3072, -2048, 41, 23, 9, 255),
    VTX(-2670, 4400, -80, 3072, -6144, 60, 37, 15, 255),
    VTX(-2790, 4320, -80, 9216, -2048, 155, 112, 29, 255),
    VTX(-2470, 4180, -140, 13312, -8192, 143, 94, 35, 255),
    VTX(-2470, 4100, -10, 6656, -4096, 60, 37, 15, 255),
    VTX(-2470, 4000, -10, 6656, 1024, 143, 94, 35, 255),
    VTX(-2470, 4000, -140, 13312, 1024, 143, 94, 35, 255),
    VTX(-2790, 4000, -140, 9216, 14336, 41, 23, 9, 255),
    VTX(-2790, 4180, -140, 9216, 5120, 60, 37, 15, 255),
    VTX(-2470, 4000, -140, -7168, 14336, 143, 94, 35, 255),
    VTX(-2470, 4180, -140, -7168, 5120, 60, 37, 15, 255),
    VTX(-2790, 4320, -320, -10240, 13312, 36, 14, 5, 255),
    VTX(-2310, 4320, -320, -10240, -11264, 22, 3, 5, 255),
    VTX(-2670, 4320, -80, 2048, 7168, 32, 19, 7, 255),
    VTX(-2790, 4320, -80, 2048, 13312, 32, 19, 7, 255),
    VTX(-2310, 4000, -320, -15360, 14336, 104, 55, 15, 255),
    VTX(-2790, 4320, -320, 9216, -2048, 36, 14, 5, 255),
    VTX(-2790, 4000, -320, 9216, 14336, 60, 37, 15, 255),
    VTX(-2310, 4320, -320, -15360, -2048, 36, 14, 5, 255),
    VTX(-2790, 4000, -140, 0, -14336, 32, 19, 7, 255),
    VTX(-2470, 4000, -140, 0, 2048, 104, 55, 15, 255),
    VTX(-2310, 4000, -320, 9216, 10240, 104, 55, 15, 255),
    VTX(-2790, 4000, -320, 9216, -14336, 41, 23, 9, 255),
    VTX(-2470, 4180, 120, -7168, 5120, 36, 14, 5, 255),
    VTX(-2310, 4320, 120, -15360, -2048, 22, 3, 5, 255),
    VTX(-2310, 4000, 120, -15360, 14336, 143, 94, 35, 255),
    VTX(-2470, 4000, 120, -7168, 14336, 155, 112, 29, 255),
    VTX(-2790, 4320, 120, 9216, -2048, 36, 14, 5, 255),
    VTX(-2790, 4180, 120, 9216, 5120, 104, 55, 15, 255),
    VTX(-2790, 4320, -320, 15360, -6144, 36, 14, 5, 255),
    VTX(-2790, 4180, -140, 6144, 1024, 60, 37, 15, 255),
    VTX(-2790, 4000, -140, 6144, 10240, 60, 37, 15, 255),
    VTX(-2790, 4000, -320, 15360, 10240, 104, 55, 15, 255),
    VTX(-2310, 4000, -320, 22528, 1024, 155, 112, 29, 255),
    VTX(-2310, 4080, -180, 15360, -3072, 104, 55, 15, 255),
    VTX(-2310, 4320, -320, 22528, -15360, 36, 14, 5, 255),
    VTX(-2310, 4240, -180, 15360, -11264, 60, 37, 15, 255),
    VTX(-2790, 4540, -80, 9216, -13312, 41, 23, 9, 255),
    VTX(-2790, 4320, -80, 9216, -2048, 155, 112, 29, 255),
    VTX(-2670, 4400, -80, 3072, -6144, 60, 37, 15, 255),
    VTX(-2670, 4400, 120, 3072, -6144, 104, 55, 15, 255),
    VTX(-2790, 4320, 120, 9216, -2048, 155, 112, 29, 255),
    VTX(-2790, 4540, 120, 9216, -13312, 41, 23, 9, 255),
    VTX(-2670, 4320, 120, 3072, -2048, 41, 23, 9, 255),
    VTX(-2510, 4400, -100, -5120, -6144, 104, 55, 15, 255),
    VTX(-2510, 4540, -100, -5120, -13312, 22, 3, 5, 255),
    VTX(-2310, 4000, 120, 0, 1024, 155, 112, 29, 255),
    VTX(-2310, 4080, -20, 7168, -3072, 104, 55, 15, 255),
    VTX(-2310, 4240, -20, 7168, -11264, 60, 37, 15, 255),
    VTX(-2310, 4320, 120, 0, -15360, 36, 14, 5, 255),
    VTX(-2470, 4000, -140, 0, 2048, 104, 55, 15, 255),
    VTX(-2470, 4000, 120, -13312, 2048, 143, 94, 35, 255),
    VTX(-2310, 4000, 120, -13312, 10240, 104, 55, 15, 255),
    VTX(-2310, 4000, -320, 9216, 10240, 104, 55, 15, 255),
    VTX(-2310, 4320, 120, 12288, -11264, 36, 14, 5, 255),
    VTX(-2670, 4320, 120, 12288, 7168, 32, 19, 7, 255),
    VTX(-2670, 4320, -80, 2048, 7168, 32, 19, 7, 255),
    VTX(-2310, 4320, -320, -10240, -11264, 22, 3, 5, 255),
    VTX(-2790, 4180, 120, -7168, 1024, 60, 37, 15, 255),
    VTX(-2790, 4180, -140, 6144, 1024, 60, 37, 15, 255),
    VTX(-2790, 4320, -320, 15360, -6144, 36, 14, 5, 255),
    VTX(-2790, 4320, 120, -7168, -6144, 36, 14, 5, 255),
    VTX(-2310, 4000, 120, 0, 1024, 155, 112, 29, 255),
    VTX(-2310, 4320, 120, 0, -15360, 36, 14, 5, 255),
    VTX(-2310, 4240, -20, 7168, -11264, 60, 37, 15, 255),
    VTX(-2310, 4080, -20, 7168, -3072, 104, 55, 15, 255),
    VTX(-2510, 4540, 120, -5120, -13312, 22, 3, 5, 255),
    VTX(-2510, 4400, 120, -5120, -6144, 104, 55, 15, 255),
    VTX(-2670, 4400, 120, 3072, -6144, 104, 55, 15, 255),
    VTX(-2790, 4540, 120, 9216, -13312, 41, 23, 9, 255),
    VTX(-2510, 4540, 120, -6656, -6144, 22, 3, 5, 255),
    VTX(-2510, 4500, 50, -3072, -4096, 60, 37, 15, 255),
    VTX(-2510, 4400, 120, -6656, 1024, 104, 55, 15, 255),
    VTX(-2510, 4400, 50, -3072, 1024, 104, 55, 15, 255),
    VTX(-2790, 4320, -80, -512, -10240, 155, 112, 29, 255),
    VTX(-2790, 4540, -80, -512, 1024, 41, 23, 9, 255),
    VTX(-2790, 4320, 120, 9728, -10240, 155, 112, 29, 255),
    VTX(-2790, 4540, 120, 9728, 1024, 41, 23, 9, 255),
    VTX(-2510, 4540, -100, 3584, -6144, 22, 3, 5, 255),
    VTX(-2510, 4500, -10, 0, -4096, 60, 37, 15, 255),
    VTX(-2510, 4400, -10, 0, 1024, 60, 37, 15, 255),
    VTX(-2510, 4400, -100, 3584, 1024, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_12Vtx_000B20[10] = {
    VTX(-2470, 4000, 120, 0, 1024, 143, 94, 35, 255),
    VTX(-2470, 4000, 50, 3584, 1024, 143, 94, 35, 255),
    VTX(-2470, 4100, 50, 3584, -4096, 60, 37, 15, 255),
    VTX(-2470, 4180, 120, 0, -8192, 36, 14, 5, 255),
    VTX(-2470, 4100, -10, 6656, -4096, 60, 37, 15, 255),
    VTX(-2470, 4180, -140, 13312, -8192, 143, 94, 35, 255),
    VTX(-2470, 4180, -140, 6144, 1024, 104, 55, 15, 255),
    VTX(-2790, 4180, 120, -7168, -15360, 104, 55, 15, 255),
    VTX(-2470, 4180, 120, -7168, 1024, 104, 55, 15, 255),
    VTX(-2790, 4180, -140, 6144, -15360, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_12Vtx_000BC0[8] = {
    VTX(-2790, 4000, -320, 0, 0, 0, 0, 0, 0),
    VTX(-2310, 4000, -320, 0, 0, 0, 0, 0, 0),
    VTX(-2790, 4540, -320, 0, 0, 0, 0, 0, 0),
    VTX(-2310, 4540, -320, 0, 0, 0, 0, 0, 0),
    VTX(-2790, 4000, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2310, 4000, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2790, 4540, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2310, 4540, 120, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_12Dlist0x000C40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_12Vtx_000BC0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_12Vtx_000060[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_12Tex_000FC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000260[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 6, 9, 0, 10, 8, 9, 0),
    gsSP2Triangles(11, 12, 3, 0, 13, 11, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 2, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_12Tex_001FC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000430[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_12Tex_0027C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_12Vtx_0004F0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(4, 2, 1, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000540[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000540[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(5, 4, 8, 0, 4, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 21, 24, 0, 18, 20, 25, 0),
    gsSP2Triangles(18, 25, 26, 0, 15, 14, 27, 0),
    gsSP2Triangles(15, 27, 28, 0, 17, 29, 30, 0),
    gsSP1Triangle(17, 30, 16, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000540[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 21, 20, 0, 28, 29, 21, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
    gsSPVertex(&fire_temple_room_12Vtx_000B20[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_12Tex_000FC0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_12Tex_000FC0.rgb5a1.inc.c"
};

u64 fire_temple_room_12Tex_001FC0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_12Tex_001FC0.rgb5a1.inc.c"
};

u64 fire_temple_room_12Tex_0027C0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_12Tex_0027C0.rgb5a1.inc.c"
};

Gfx fire_temple_room_12Dlist0x0037C0[] = {
    gsSPDisplayList(fire_temple_room_12Dlist0x000C40),
    gsSPEndDisplayList(),
}; 


