#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_links_house_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_links_house_scene.h"


static SCmdSoundSettings pr_links_house_sceneSet0000Cmd00;
static SCmdRoomList pr_links_house_sceneSet0000Cmd01;
static SCmdColHeader pr_links_house_sceneSet0000Cmd02;
static SCmdEntranceList pr_links_house_sceneSet0000Cmd03;
static SCmdSpecialFiles pr_links_house_sceneSet0000Cmd04;
static SCmdSpawnList pr_links_house_sceneSet0000Cmd05;
static SCmdSkyboxSettings pr_links_house_sceneSet0000Cmd06;
static SCmdExitList pr_links_house_sceneSet0000Cmd07;
static SCmdLightSettingList pr_links_house_sceneSet0000Cmd08;
static SCmdEndMarker pr_links_house_sceneSet0000Cmd09;

static SCmdSoundSettings pr_links_house_sceneSet0000Cmd00 = {  0x15, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F }; // 0x0000

static SCmdRoomList pr_links_house_sceneSet0000Cmd01 = {  0x04, 0x01, (u32)&pr_links_house_sceneRoomList0x000070 }; // 0x0008

// This command is added!
static SCmdMiscSettings link_home_sceneSet0000Cmd03 = {  0x19, 0x20, 0x00000004 };

static SCmdColHeader pr_links_house_sceneSet0000Cmd02 = {  0x03, 0x00, (u32)&pr_links_house_sceneCollisionHeader0x000E48 }; // 0x0010

static SCmdEntranceList pr_links_house_sceneSet0000Cmd03 = {  0x06, 0x00, (u32)&pr_links_house_sceneEntranceList0x000078 }; // 0x0018

static SCmdSpecialFiles pr_links_house_sceneSet0000Cmd04 = {  0x07, 0x00, 0x0003 }; // 0x0020

static SCmdSpawnList pr_links_house_sceneSet0000Cmd05 = {  0x00, 0x02, (u32)&pr_links_house_sceneStartPositionList0x000050 }; // 0x0028

static SCmdSkyboxSettings pr_links_house_sceneSet0000Cmd06 = {  0x11, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01 }; // 0x0030

static SCmdExitList pr_links_house_sceneSet0000Cmd07 = {  0x13, 0x00, (u32)&pr_links_house_sceneExitList0x00007C }; // 0x0038

static SCmdLightSettingList pr_links_house_sceneSet0000Cmd08 = {  0x0F, 1, (u32)&pr_links_house_sceneLightSettings0x000080 }; // 0x0040

static SCmdEndMarker pr_links_house_sceneSet0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

ActorEntry pr_links_house_sceneStartPositionList0x000050[] = {
	{ ACTOR_PLAYER, 0, 0, -104, 0, 0, 0, 0x0F00 },
	{ ACTOR_PLAYER, -79, 0, 84, 0, 25667, 0, 0x0F00 },

}; 

RomFile pr_links_house_sceneRoomList0x000070[] = {
	{ (u32)_pr_links_house_room_00SegmentRomStart, (u32)_pr_links_house_room_00SegmentRomEnd },

}; 

EntranceEntry pr_links_house_sceneEntranceList0x000078[2] = {
	{ 0x00, 0x00 }, //0x000078 
	{ 0x01, 0x00 }, //0x00007A 

}; 

u16 pr_links_house_sceneExitList0x00007C[2] = {
	ENTRANCE(SCENE_KOKIRI_FOREST, 3, 3, false, true), // 0x0075,
	0x0000,

}; 

LightSettings pr_links_house_sceneLightSettings0x000080[1] = {
	{ 0x38, 0x38, 0x38, 0x49, 0x49, 0x49, 0x6E, 0x5A, 0x50, 0xB7, 0xB7, 0xB7, 0x8C, 0x6E, 0x5A, 0x1E, 0x0A, 0x0A, 0x03E0, 0x07D0 }, // 0x000080 

}; 

static u8 unaccounted_000098[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Vec3s pr_links_house_sceneCollisionHeader0x000E48_camPosData_000000A0[6] = {
	{   -118,    345,     47 }, // 0x000000A0
	{  12743,  20388,      0 }, // 0x000000A6
	{   4683,      0,      0 }, // 0x000000AC
	{      0,     34,      0 }, // 0x000000B2
	{      0,  16384,      0 }, // 0x000000B8
	{   6000,      0,      0 }, // 0x000000BE

}; 

CamData pr_links_house_sceneCollisionHeader0x000E48_camDataList_000000C4[3] = {
	{ CAM_SET_PREREND0, 3, &pr_links_house_sceneCollisionHeader0x000E48_camPosData_000000A0[0] },
	{ CAM_SET_PREREND1, 3, &pr_links_house_sceneCollisionHeader0x000E48_camPosData_000000A0[3] },
	{ 0x0000, 0, 0x00000000 },
}; 

u32 pr_links_house_sceneCollisionHeader0x000E48_polygonTypes_000000DC[] = {
   0x00200002, 0x00000000,
   0x00200002, 0x0000000A,
   0x00200002, 0x000007C0,
   0x00000002, 0x000007C0,
   0x00200102, 0x0000000A,
}; 

CollisionPoly pr_links_house_sceneCollisionHeader0x000E48_polygons_00000104[] = {
   { 0x0000, 0x0011, 0x0012, 0x0013, 0x55A0, 0x0000, 0xA0DC, 0xFF6D }, // 0x00000104
   { 0x0000, 0x0011, 0x0013, 0x0014, 0x55A0, 0x0000, 0xA0DC, 0xFF6D }, // 0x00000114
   { 0x0001, 0x0015, 0x0016, 0x0017, 0xAA60, 0x0000, 0x5F24, 0x006B }, // 0x00000124
   { 0x0001, 0x0015, 0x0017, 0x0018, 0xAA60, 0x0000, 0x5F24, 0x006B }, // 0x00000134
   { 0x0001, 0x0016, 0x0015, 0x0013, 0xA0DC, 0x0000, 0xAA60, 0x0001 }, // 0x00000144
   { 0x0001, 0x0016, 0x0013, 0x0012, 0xA0DC, 0x0000, 0xAA60, 0x0001 }, // 0x00000154
   { 0x0000, 0x0014, 0x0018, 0x0017, 0x5F24, 0x0000, 0x55A0, 0xFFD7 }, // 0x00000164
   { 0x0000, 0x0014, 0x0017, 0x0011, 0x5F24, 0x0000, 0x55A0, 0xFFD7 }, // 0x00000174
   { 0x0002, 0x0019, 0x001A, 0x001B, 0x8033, 0x0000, 0x071A, 0x0030 }, // 0x00000184
   { 0x0002, 0x0019, 0x001B, 0x001C, 0x8033, 0x0000, 0x071A, 0x0030 }, // 0x00000194
   { 0x0002, 0x001D, 0x001E, 0x001F, 0xC6C2, 0x0000, 0x727C, 0x0070 }, // 0x000001A4
   { 0x0002, 0x001D, 0x001F, 0x0020, 0xC6C2, 0x0000, 0x727C, 0x0070 }, // 0x000001B4
   { 0x0002, 0x001E, 0x0019, 0x001C, 0xACB4, 0x0000, 0x612F, 0x006D }, // 0x000001C4
   { 0x0002, 0x001E, 0x001C, 0x001F, 0xACB4, 0x0000, 0x612F, 0x006D }, // 0x000001D4
   { 0x0002, 0x0021, 0x001D, 0x0020, 0xCF44, 0x0000, 0x765B, 0x0070 }, // 0x000001E4
   { 0x0002, 0x0021, 0x0020, 0x0022, 0xCF44, 0x0000, 0x765B, 0x0070 }, // 0x000001F4
   { 0x0002, 0x0023, 0x0021, 0x0022, 0x0000, 0x0000, 0x7FFF, 0x005B }, // 0x00000204
   { 0x0002, 0x0023, 0x0022, 0x0024, 0x0000, 0x0000, 0x7FFF, 0x005B }, // 0x00000214
   { 0x0003, 0x0025, 0x0026, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000224
   { 0x0003, 0x0025, 0x0027, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000234
   { 0x0003, 0x0025, 0x0028, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000244
   { 0x0003, 0x0025, 0x0029, 0x002A, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000254
   { 0x0003, 0x0025, 0x002A, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000264
   { 0x0003, 0x0025, 0x002B, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000274
   { 0x0001, 0x002D, 0x002E, 0x0025, 0x89A5, 0x0000, 0xCF44, 0x0085 }, // 0x00000284
   { 0x0001, 0x002D, 0x0025, 0x002C, 0x89A5, 0x0000, 0xCF44, 0x0085 }, // 0x00000294
   { 0x0001, 0x002F, 0x0030, 0x0028, 0x3077, 0x0000, 0x7677, 0x0084 }, // 0x000002A4
   { 0x0001, 0x002F, 0x0028, 0x0031, 0x3077, 0x0000, 0x7677, 0x0084 }, // 0x000002B4
   { 0x0001, 0x0032, 0x0033, 0x0034, 0xCF89, 0x0000, 0x7677, 0x0084 }, // 0x000002C4
   { 0x0001, 0x0032, 0x0034, 0x0026, 0xCF89, 0x0000, 0x7677, 0x0084 }, // 0x000002D4
   { 0x0001, 0x0035, 0x002D, 0x002C, 0xCF44, 0x0000, 0x89A5, 0x0085 }, // 0x000002E4
   { 0x0001, 0x0035, 0x002C, 0x002B, 0xCF44, 0x0000, 0x89A5, 0x0085 }, // 0x000002F4
   { 0x0001, 0x002E, 0x0032, 0x0026, 0x89D1, 0x0000, 0x3125, 0x0085 }, // 0x00000304
   { 0x0001, 0x002E, 0x0026, 0x0025, 0x89D1, 0x0000, 0x3125, 0x0085 }, // 0x00000314
   { 0x0001, 0x0030, 0x0036, 0x0029, 0x762F, 0x0000, 0x3125, 0x0084 }, // 0x00000324
   { 0x0001, 0x0030, 0x0029, 0x0028, 0x762F, 0x0000, 0x3125, 0x0084 }, // 0x00000334
   { 0x0001, 0x0036, 0x0037, 0x002A, 0x765B, 0x0000, 0xCF44, 0x0084 }, // 0x00000344
   { 0x0001, 0x0036, 0x002A, 0x0029, 0x765B, 0x0000, 0xCF44, 0x0084 }, // 0x00000354
   { 0x0000, 0x0037, 0x0035, 0x002B, 0x3125, 0x0000, 0x89D1, 0x0085 }, // 0x00000364
   { 0x0001, 0x0037, 0x002B, 0x002A, 0x3125, 0x0000, 0x89D1, 0x0085 }, // 0x00000374
   { 0x0001, 0x0038, 0x0039, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x0023 }, // 0x00000384
   { 0x0001, 0x0038, 0x002F, 0x0031, 0x7FFF, 0x0000, 0x0000, 0x0023 }, // 0x00000394
   { 0x0000, 0x003A, 0x003B, 0x0039, 0x0000, 0x0000, 0x7FFF, 0x00D1 }, // 0x000003A4
   { 0x0000, 0x003A, 0x0039, 0x0038, 0x0000, 0x0000, 0x7FFF, 0x00D1 }, // 0x000003B4
   { 0x0001, 0x0034, 0x0033, 0x003B, 0x8001, 0x0000, 0x0000, 0x0024 }, // 0x000003C4
   { 0x0001, 0x0034, 0x003B, 0x003A, 0x8001, 0x0000, 0x0000, 0x0024 }, // 0x000003D4
   { 0x0004, 0x0031, 0x0034, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000003E4
   { 0x0004, 0x0031, 0x003A, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000003F4
   { 0x0001, 0x003C, 0x003D, 0x003E, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000404
   { 0x0001, 0x003C, 0x003F, 0x003D, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000414
   { 0x0001, 0x003C, 0x0040, 0x003F, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000424
   { 0x0001, 0x003C, 0x0041, 0x0040, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000434
   { 0x0001, 0x003C, 0x0042, 0x0041, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000444
   { 0x0001, 0x003C, 0x0043, 0x0042, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000454
   { 0x0001, 0x003C, 0x0044, 0x0043, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000464
   { 0x0001, 0x003C, 0x003E, 0x0044, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000474
   { 0x0000, 0x0045, 0x0046, 0x0041, 0x7D83, 0x0000, 0x191A, 0xFF8A }, // 0x00000484
   { 0x0000, 0x0045, 0x0041, 0x0042, 0x7D83, 0x0000, 0x191A, 0xFF8A }, // 0x00000494
   { 0x0000, 0x0047, 0x0045, 0x0042, 0x2F89, 0x0000, 0x76D7, 0xFF92 }, // 0x000004A4
   { 0x0000, 0x0047, 0x0042, 0x0043, 0x2F89, 0x0000, 0x76D7, 0xFF92 }, // 0x000004B4
   { 0x0000, 0x0048, 0x0047, 0x0043, 0xE6E6, 0x0000, 0x7D83, 0xFFC7 }, // 0x000004C4
   { 0x0000, 0x0048, 0x0043, 0x0044, 0xE6E6, 0x0000, 0x7D83, 0xFFC7 }, // 0x000004D4
   { 0x0001, 0x0049, 0x0048, 0x0044, 0x923F, 0x0000, 0x41DA, 0x002A }, // 0x000004E4
   { 0x0001, 0x0049, 0x0044, 0x003E, 0x923F, 0x0000, 0x41DA, 0x002A }, // 0x000004F4
   { 0x0000, 0x0046, 0x004A, 0x0040, 0x76D7, 0x0000, 0xD077, 0xFFB8 }, // 0x00000504
   { 0x0000, 0x0046, 0x0040, 0x0041, 0x76D7, 0x0000, 0xD077, 0xFFB8 }, // 0x00000514
   { 0x0001, 0x004A, 0x004B, 0x003F, 0x2F89, 0x0000, 0x8929, 0x0017 }, // 0x00000524
   { 0x0001, 0x004A, 0x003F, 0x0040, 0x2F89, 0x0000, 0x8929, 0x0017 }, // 0x00000534
   { 0x0001, 0x004B, 0x004C, 0x003D, 0xBE26, 0x0000, 0x923F, 0x006A }, // 0x00000544
   { 0x0001, 0x004B, 0x003D, 0x003F, 0xBE26, 0x0000, 0x923F, 0x006A }, // 0x00000554
   { 0x0001, 0x004C, 0x0049, 0x003E, 0x8929, 0x0000, 0xD077, 0x0070 }, // 0x00000564
   { 0x0001, 0x004C, 0x003E, 0x003D, 0x8929, 0x0000, 0xD077, 0x0070 }, // 0x00000574
   { 0x0001, 0x004D, 0x004E, 0x004F, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000584
   { 0x0001, 0x004D, 0x0050, 0x004E, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000594
   { 0x0001, 0x004D, 0x0051, 0x0050, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005A4
   { 0x0001, 0x004D, 0x0052, 0x0051, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005B4
   { 0x0001, 0x004D, 0x0053, 0x0052, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005C4
   { 0x0001, 0x004D, 0x0054, 0x0053, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005D4
   { 0x0001, 0x004D, 0x0055, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005E4
   { 0x0001, 0x004D, 0x004F, 0x0055, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005F4
   { 0x0000, 0x0056, 0x0057, 0x0052, 0x76D7, 0x0000, 0x2F89, 0xFF81 }, // 0x00000604
   { 0x0000, 0x0056, 0x0052, 0x0053, 0x76D7, 0x0000, 0x2F89, 0xFF81 }, // 0x00000614
   { 0x0000, 0x0058, 0x0056, 0x0053, 0x2F89, 0x0000, 0x76D7, 0xFFC0 }, // 0x00000624
   { 0x0000, 0x0058, 0x0053, 0x0054, 0x2F89, 0x0000, 0x76D7, 0xFFC0 }, // 0x00000634
   { 0x0000, 0x0059, 0x0058, 0x0054, 0xD077, 0x0000, 0x76D7, 0x001D }, // 0x00000644
   { 0x0000, 0x0059, 0x0054, 0x0055, 0xD077, 0x0000, 0x76D7, 0x001D }, // 0x00000654
   { 0x0001, 0x005A, 0x0059, 0x0055, 0x8929, 0x0000, 0x2F89, 0x0069 }, // 0x00000664
   { 0x0001, 0x005A, 0x0055, 0x004F, 0x8929, 0x0000, 0x2F89, 0x0069 }, // 0x00000674
   { 0x0000, 0x0057, 0x005B, 0x0051, 0x76D7, 0x0000, 0xD077, 0xFF8A }, // 0x00000684
   { 0x0000, 0x0057, 0x0051, 0x0052, 0x76D7, 0x0000, 0xD077, 0xFF8A }, // 0x00000694
   { 0x0000, 0x005B, 0x005C, 0x0050, 0x2F89, 0x0000, 0x8929, 0xFFD6 }, // 0x000006A4
   { 0x0000, 0x005B, 0x0050, 0x0051, 0x2F89, 0x0000, 0x8929, 0xFFD6 }, // 0x000006B4
   { 0x0001, 0x005C, 0x005D, 0x004E, 0xD077, 0x0000, 0x8929, 0x0033 }, // 0x000006C4
   { 0x0001, 0x005C, 0x004E, 0x0050, 0xD077, 0x0000, 0x8929, 0x0033 }, // 0x000006D4
   { 0x0001, 0x005D, 0x005A, 0x004F, 0x8929, 0x0000, 0xD077, 0x0072 }, // 0x000006E4
   { 0x0001, 0x005D, 0x004F, 0x004E, 0x8929, 0x0000, 0xD077, 0x0072 }, // 0x000006F4
   { 0x0000, 0x005E, 0x005F, 0x0060, 0x505A, 0x0000, 0x9C5E, 0xFFDE }, // 0x00000704
   { 0x0000, 0x005E, 0x0060, 0x0061, 0x505A, 0x0000, 0x9C5E, 0xFFDE }, // 0x00000714
   { 0x0000, 0x0062, 0x0063, 0x0064, 0xAFA6, 0x0000, 0x63A2, 0xFFE2 }, // 0x00000724
   { 0x0000, 0x0062, 0x0064, 0x0065, 0xAFA6, 0x0000, 0x63A2, 0xFFE2 }, // 0x00000734
   { 0x0000, 0x0063, 0x0062, 0x0060, 0x9DD6, 0x0000, 0xADDD, 0xFF64 }, // 0x00000744
   { 0x0000, 0x0063, 0x0060, 0x005F, 0x9DD6, 0x0000, 0xADDD, 0xFF64 }, // 0x00000754
   { 0x0001, 0x0061, 0x0065, 0x0064, 0x622A, 0x0000, 0x5223, 0x0074 }, // 0x00000764
   { 0x0001, 0x0061, 0x0064, 0x005E, 0x622A, 0x0000, 0x5223, 0x0074 }, // 0x00000774
   { 0x0000, 0x0066, 0x0067, 0x0068, 0x7FFF, 0x0000, 0x0000, 0xFFD8 }, // 0x00000784
   { 0x0000, 0x0066, 0x0068, 0x0069, 0x7FFF, 0x0000, 0x0000, 0xFFD8 }, // 0x00000794
   { 0x0000, 0x006A, 0x006B, 0x006C, 0x8001, 0x0000, 0x0000, 0xFFD9 }, // 0x000007A4
   { 0x0000, 0x006A, 0x006C, 0x006D, 0x8001, 0x0000, 0x0000, 0xFFD9 }, // 0x000007B4
   { 0x0001, 0x006B, 0x006A, 0x0068, 0x0000, 0x0000, 0x8001, 0x0068 }, // 0x000007C4
   { 0x0001, 0x006B, 0x0068, 0x0067, 0x0000, 0x0000, 0x8001, 0x0068 }, // 0x000007D4
   { 0x0000, 0x0069, 0x006D, 0x006C, 0x0000, 0x0000, 0x7FFF, 0xFF64 }, // 0x000007E4
   { 0x0000, 0x0069, 0x006C, 0x0066, 0x0000, 0x0000, 0x7FFF, 0xFF64 }, // 0x000007F4
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x75A6, 0x0000, 0x326C, 0xFFEE }, // 0x00000804
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x75A6, 0x0000, 0x326C, 0xFFEE }, // 0x00000814
   { 0x0000, 0x0004, 0x0000, 0x0003, 0x326C, 0x0000, 0x75A6, 0xFFEE }, // 0x00000824
   { 0x0000, 0x0004, 0x0003, 0x0005, 0x326C, 0x0000, 0x75A6, 0xFFEE }, // 0x00000834
   { 0x0000, 0x0006, 0x0004, 0x0005, 0xCA5D, 0x0000, 0x7437, 0xFFEE }, // 0x00000844
   { 0x0000, 0x0006, 0x0005, 0x0007, 0xCA5D, 0x0000, 0x7437, 0xFFEE }, // 0x00000854
   { 0x0000, 0x0008, 0x0006, 0x0007, 0x8A5A, 0x0000, 0x326C, 0xFFEF }, // 0x00000864
   { 0x0000, 0x0008, 0x0007, 0x0009, 0x8A5A, 0x0000, 0x326C, 0xFFEF }, // 0x00000874
   { 0x0001, 0x0001, 0x000A, 0x000D, 0x7437, 0x0000, 0xCA5D, 0xFFEE }, // 0x00000884
   { 0x0001, 0x0001, 0x000D, 0x0002, 0x7437, 0x0000, 0xCA5D, 0xFFEE }, // 0x00000894
   { 0x0001, 0x000A, 0x000B, 0x000E, 0x326C, 0x0000, 0x8A5A, 0xFFEF }, // 0x000008A4
   { 0x0001, 0x000A, 0x000E, 0x000D, 0x326C, 0x0000, 0x8A5A, 0xFFEF }, // 0x000008B4
   { 0x0000, 0x000B, 0x000C, 0x000F, 0xCA5D, 0x0000, 0x8BC9, 0xFFEF }, // 0x000008C4
   { 0x0000, 0x000B, 0x000F, 0x000E, 0xCA5D, 0x0000, 0x8BC9, 0xFFEF }, // 0x000008D4
   { 0x0000, 0x000C, 0x0008, 0x0009, 0x8BC9, 0x0000, 0xCA5D, 0xFFEF }, // 0x000008E4
   { 0x0000, 0x000C, 0x0009, 0x000F, 0x8BC9, 0x0000, 0xCA5D, 0xFFEF }, // 0x000008F4
   { 0x0001, 0x0010, 0x000F, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000904
   { 0x0001, 0x0010, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000914
   { 0x0001, 0x0010, 0x000D, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000924
   { 0x0001, 0x0010, 0x0002, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000934
   { 0x0001, 0x0010, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000944
   { 0x0001, 0x0010, 0x0005, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000954
   { 0x0001, 0x0010, 0x0007, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000964
   { 0x0001, 0x0010, 0x0009, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFFEB }, // 0x00000974
   { 0x0001, 0x0076, 0x0077, 0x0078, 0x7F97, 0x0000, 0x0A35, 0x005E }, // 0x00000984
   { 0x0001, 0x0076, 0x0078, 0x0079, 0x7F97, 0x0000, 0x0A35, 0x005E }, // 0x00000994
   { 0x0000, 0x007A, 0x007B, 0x007C, 0x808F, 0x0000, 0xF41B, 0xFF70 }, // 0x000009A4
   { 0x0000, 0x007A, 0x007C, 0x007D, 0x808F, 0x0000, 0xF41B, 0xFF70 }, // 0x000009B4
   { 0x0000, 0x007B, 0x007A, 0x0078, 0x0CFE, 0x0000, 0x80AA, 0xFFDC }, // 0x000009C4
   { 0x0000, 0x007B, 0x0078, 0x0077, 0x0CFE, 0x0000, 0x80AA, 0xFFDC }, // 0x000009D4
   { 0x0000, 0x0079, 0x007D, 0x007C, 0xF344, 0x0000, 0x7F5C, 0xFFD8 }, // 0x000009E4
   { 0x0000, 0x0079, 0x007C, 0x0076, 0xF344, 0x0000, 0x7F5C, 0xFFD8 }, // 0x000009F4
   { 0x0001, 0x007D, 0x0079, 0x0078, 0x0000, 0x7FFF, 0x0000, 0xFFEA }, // 0x00000A04
   { 0x0001, 0x007D, 0x0078, 0x007A, 0x0000, 0x7FFF, 0x0000, 0xFFEA }, // 0x00000A14
   { 0x0000, 0x006E, 0x006F, 0x0070, 0x7834, 0x0000, 0x2BFA, 0xFF7A }, // 0x00000A24
   { 0x0000, 0x006E, 0x0070, 0x0071, 0x7834, 0x0000, 0x2BFA, 0xFF7A }, // 0x00000A34
   { 0x0001, 0x0072, 0x0073, 0x0074, 0x87CC, 0x0000, 0xD406, 0x005B }, // 0x00000A44
   { 0x0001, 0x0072, 0x0074, 0x0075, 0x87CC, 0x0000, 0xD406, 0x005B }, // 0x00000A54
   { 0x0001, 0x0073, 0x0072, 0x0070, 0x2BFA, 0x0000, 0x87CC, 0xFFE9 }, // 0x00000A64
   { 0x0001, 0x0073, 0x0070, 0x006F, 0x2BFA, 0x0000, 0x87CC, 0xFFE9 }, // 0x00000A74
   { 0x0000, 0x0071, 0x0075, 0x0074, 0xD406, 0x0000, 0x7834, 0xFFEB }, // 0x00000A84
   { 0x0000, 0x0071, 0x0074, 0x006E, 0xD406, 0x0000, 0x7834, 0xFFEB }, // 0x00000A94
   { 0x0001, 0x0075, 0x0071, 0x0070, 0x0000, 0x7FFF, 0x0000, 0xFFED }, // 0x00000AA4
   { 0x0001, 0x0075, 0x0070, 0x0072, 0x0000, 0x7FFF, 0x0000, 0xFFED }, // 0x00000AB4
   { 0x0002, 0x007E, 0x007F, 0x0080, 0x182C, 0x0000, 0x7DB1, 0x0065 }, // 0x00000AC4
   { 0x0002, 0x007E, 0x0080, 0x0081, 0x182C, 0x0000, 0x7DB1, 0x0065 }, // 0x00000AD4
   { 0x0002, 0x007F, 0x0082, 0x0083, 0x5F24, 0x0000, 0x55A0, 0x0063 }, // 0x00000AE4
   { 0x0002, 0x007F, 0x0083, 0x0080, 0x5F24, 0x0000, 0x55A0, 0x0063 }, // 0x00000AF4
   { 0x0002, 0x0082, 0x0084, 0x0085, 0x7F8E, 0x0000, 0xF55F, 0x0017 }, // 0x00000B04
   { 0x0002, 0x0082, 0x0085, 0x0083, 0x7F8E, 0x0000, 0xF55F, 0x0017 }, // 0x00000B14

}; 

Vec3s pr_links_house_sceneCollisionHeader0x000E48_vtx_00000B24[] = {
   { 14, 0, 14 }, // 0x00000B24
   { 20, 0, 0 }, // 0x00000B2A
   { 20, 21, 0 }, // 0x00000B30
   { 14, 21, 14 }, // 0x00000B36
   { 0, 0, 20 }, // 0x00000B3C
   { 0, 21, 20 }, // 0x00000B42
   { -13, 0, 14 }, // 0x00000B48
   { -13, 21, 14 }, // 0x00000B4E
   { -19, 0, 0 }, // 0x00000B54
   { -19, 21, 0 }, // 0x00000B5A
   { 14, 0, -13 }, // 0x00000B60
   { 0, 0, -19 }, // 0x00000B66
   { -13, 0, -13 }, // 0x00000B6C
   { 14, 21, -13 }, // 0x00000B72
   { 0, 21, -19 }, // 0x00000B78
   { -13, 21, -13 }, // 0x00000B7E
   { 0, 21, 0 }, // 0x00000B84
   { 129, 0, -82 }, // 0x00000B8A
   { 99, 0, -109 }, // 0x00000B90
   { 99, 120, -109 }, // 0x00000B96
   { 129, 120, -82 }, // 0x00000B9C
   { 72, 120, -79 }, // 0x00000BA2
   { 72, 0, -79 }, // 0x00000BA8
   { 102, 0, -52 }, // 0x00000BAE
   { 102, 120, -52 }, // 0x00000BB4
   { 42, 120, -107 }, // 0x00000BBA
   { 41, 120, -125 }, // 0x00000BC0
   { 41, 0, -125 }, // 0x00000BC6
   { 42, 0, -107 }, // 0x00000BCC
   { 55, 120, -98 }, // 0x00000BD2
   { 49, 120, -101 }, // 0x00000BD8
   { 49, 0, -101 }, // 0x00000BDE
   { 55, 0, -98 }, // 0x00000BE4
   { 72, 120, -91 }, // 0x00000BEA
   { 72, 0, -91 }, // 0x00000BF0
   { 82, 120, -91 }, // 0x00000BF6
   { 82, 0, -91 }, // 0x00000BFC
   { 144, 0, 0 }, // 0x00000C02
   { 102, 0, -101 }, // 0x00000C08
   { 0, 0, -143 }, // 0x00000C0E
   { -101, 0, -101 }, // 0x00000C14
   { -143, 0, 0 }, // 0x00000C1A
   { -101, 0, 102 }, // 0x00000C20
   { 0, 0, 144 }, // 0x00000C26
   { 102, 0, 102 }, // 0x00000C2C
   { 102, 120, 102 }, // 0x00000C32
   { 144, 120, 0 }, // 0x00000C38
   { -35, 120, -128 }, // 0x00000C3E
   { -101, 120, -101 }, // 0x00000C44
   { -35, 0, -128 }, // 0x00000C4A
   { 102, 120, -101 }, // 0x00000C50
   { 36, 120, -128 }, // 0x00000C56
   { 36, 0, -128 }, // 0x00000C5C
   { 0, 120, 144 }, // 0x00000C62
   { -143, 120, 0 }, // 0x00000C68
   { -101, 120, 102 }, // 0x00000C6E
   { -35, 0, -209 }, // 0x00000C74
   { -35, 120, -209 }, // 0x00000C7A
   { 36, 0, -209 }, // 0x00000C80
   { 36, 120, -209 }, // 0x00000C86
   { 99, 12, 71 }, // 0x00000C8C
   { 94, 12, 67 }, // 0x00000C92
   { 92, 12, 72 }, // 0x00000C98
   { 99, 12, 64 }, // 0x00000C9E
   { 104, 12, 66 }, // 0x00000CA4
   { 106, 12, 71 }, // 0x00000CAA
   { 105, 12, 76 }, // 0x00000CB0
   { 100, 12, 78 }, // 0x00000CB6
   { 95, 12, 77 }, // 0x00000CBC
   { 105, 0, 76 }, // 0x00000CC2
   { 106, 0, 71 }, // 0x00000CC8
   { 100, 0, 78 }, // 0x00000CCE
   { 95, 0, 77 }, // 0x00000CD4
   { 92, 0, 72 }, // 0x00000CDA
   { 104, 0, 66 }, // 0x00000CE0
   { 99, 0, 64 }, // 0x00000CE6
   { 94, 0, 67 }, // 0x00000CEC
   { 125, 12, 12 }, // 0x00000CF2
   { 120, 12, 7 }, // 0x00000CF8
   { 118, 12, 12 }, // 0x00000CFE
   { 125, 12, 5 }, // 0x00000D04
   { 130, 12, 7 }, // 0x00000D0A
   { 132, 12, 12 }, // 0x00000D10
   { 130, 12, 17 }, // 0x00000D16
   { 125, 12, 19 }, // 0x00000D1C
   { 120, 12, 17 }, // 0x00000D22
   { 130, 0, 17 }, // 0x00000D28
   { 132, 0, 12 }, // 0x00000D2E
   { 125, 0, 19 }, // 0x00000D34
   { 120, 0, 17 }, // 0x00000D3A
   { 118, 0, 12 }, // 0x00000D40
   { 130, 0, 7 }, // 0x00000D46
   { 125, 0, 5 }, // 0x00000D4C
   { 120, 0, 7 }, // 0x00000D52
   { -68, 0, -99 }, // 0x00000D58
   { -99, 0, -124 }, // 0x00000D5E
   { -99, 120, -124 }, // 0x00000D64
   { -68, 120, -99 }, // 0x00000D6A
   { -140, 120, -75 }, // 0x00000D70
   { -140, 0, -75 }, // 0x00000D76
   { -109, 0, -50 }, // 0x00000D7C
   { -109, 120, -50 }, // 0x00000D82
   { 40, 0, 156 }, // 0x00000D88
   { 40, 0, 104 }, // 0x00000D8E
   { 40, 120, 104 }, // 0x00000D94
   { 40, 120, 156 }, // 0x00000D9A
   { -39, 120, 104 }, // 0x00000DA0
   { -39, 0, 104 }, // 0x00000DA6
   { -39, 0, 156 }, // 0x00000DAC
   { -39, 120, 156 }, // 0x00000DB2
   { 119, 0, 66 }, // 0x00000DB8
   { 134, 0, 25 }, // 0x00000DBE
   { 134, 19, 25 }, // 0x00000DC4
   { 119, 19, 66 }, // 0x00000DCA
   { 93, 19, 10 }, // 0x00000DD0
   { 93, 0, 10 }, // 0x00000DD6
   { 78, 0, 51 }, // 0x00000DDC
   { 78, 19, 51 }, // 0x00000DE2
   { -97, 0, 30 }, // 0x00000DE8
   { -91, 0, -45 }, // 0x00000DEE
   { -91, 22, -45 }, // 0x00000DF4
   { -97, 22, 30 }, // 0x00000DFA
   { -140, 22, -50 }, // 0x00000E00
   { -140, 0, -50 }, // 0x00000E06
   { -147, 0, 25 }, // 0x00000E0C
   { -147, 22, 25 }, // 0x00000E12
   { -76, 0, -88 }, // 0x00000E18
   { -50, 0, -93 }, // 0x00000E1E
   { -50, 120, -93 }, // 0x00000E24
   { -76, 120, -88 }, // 0x00000E2A
   { -32, 0, -113 }, // 0x00000E30
   { -32, 120, -113 }, // 0x00000E36
   { -34, 0, -137 }, // 0x00000E3C
   { -34, 120, -137 }, // 0x00000E42
}; 

CollisionHeader pr_links_house_sceneCollisionHeader0x000E48 = { -147, 0, -213, 144, 120, 156, 134, pr_links_house_sceneCollisionHeader0x000E48_vtx_00000B24, 162, pr_links_house_sceneCollisionHeader0x000E48_polygons_00000104, pr_links_house_sceneCollisionHeader0x000E48_polygonTypes_000000DC, &pr_links_house_sceneCollisionHeader0x000E48_camDataList_000000C4, 0, 0 }; 

static u32 padE74 = 0;
static u32 padE78 = 0;
static u32 padE7C = 0;

