#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_ocarina.h"

static Vtx object_gi_ocarinaVtx_000100[3];
static Vtx object_gi_ocarinaVtx_000130[63];
static Vtx object_gi_ocarinaVtx_000520[24];
static Vtx object_gi_ocarinaVtx_0006A0[10];
static Vtx object_gi_ocarinaVtx_000740[24];

u64 object_gi_ocarinaTex_000000[] = {
#include "assets/objects/object_gi_ocarina//object_gi_ocarinaTex_000000.i8.inc.c"
};

static Vtx object_gi_ocarinaVtx_000100[3] = {
    VTX(18, -1, -26, 559, 1835, 15, 202, 150, 255),
    VTX(8, 11, -24, 601, 1701, 192, 21, 157, 255),
    VTX(22, 18, -30, 540, 1665, 254, 12, 137, 255),
}; 

static Vtx object_gi_ocarinaVtx_000130[63] = {
    VTX(8, 11, -24, 601, 1701, 192, 21, 157, 255),
    VTX(5, 21, -13, 566, 1507, 196, 101, 237, 255),
    VTX(18, 22, -27, 541, 1612, 217, 82, 178, 255),
    VTX(-16, -11, -5, 915, 1692, 157, 239, 192, 255),
    VTX(-4, -24, -6, 962, 1854, 231, 162, 187, 255),
    VTX(-18, -23, 6, 985, 1687, 167, 182, 226, 255),
    VTX(-18, 2, 8, 964, 1474, 138, 17, 14, 255),
    VTX(-21, -15, 10, 985, 1610, 137, 246, 6, 255),
    VTX(3, -12, -18, 769, 1925, 252, 183, 161, 255),
    VTX(12, -14, -12, 512, 2044, 54, 164, 201, 255),
    VTX(-10, 6, -10, 793, 1613, 164, 44, 193, 255),
    VTX(-2, -8, -19, 774, 1850, 198, 229, 155, 255),
    VTX(18, -1, -26, 559, 1835, 15, 202, 150, 255),
    VTX(22, 18, -30, 540, 1665, 254, 12, 137, 255),
    VTX(27, 15, -27, 512, 1697, 83, 232, 173, 255),
    VTX(20, 25, -20, 512, 1576, 4, 119, 252, 255),
    VTX(27, 22, -27, 512, 1637, 65, 76, 191, 255),
    VTX(-17, -22, 17, 0, 1637, 184, 193, 72, 255),
    VTX(-18, -23, 6, -39, 1687, 167, 182, 226, 255),
    VTX(-10, -28, 10, 0, 1732, 240, 139, 16, 255),
    VTX(-21, -15, 10, -39, 1610, 137, 246, 6, 255),
    VTX(-17, -11, 17, 0, 1568, 173, 21, 83, 255),
    VTX(-4, -24, -6, -62, 1854, 231, 162, 187, 255),
    VTX(-17, -11, 17, 1024, 1568, 173, 21, 83, 255),
    VTX(-8, 12, 0, 848, 1327, 186, 83, 206, 255),
    VTX(17, 8, 1, 344, 1689, 85, 37, 75, 255),
    VTX(13, 21, -5, 458, 1507, 36, 93, 66, 255),
    VTX(10, 6, 10, 231, 1613, 67, 38, 91, 255),
    VTX(-22, 23, 19, -27, 1201, 138, 21, 1, 255),
    VTX(-20, 27, 20, 0, 1158, 195, 82, 61, 255),
    VTX(-19, 28, 15, -44, 1130, 225, 107, 211, 255),
    VTX(17, 8, 1, 344, 1689, 85, 37, 75, 255),
    VTX(19, -8, 2, 250, 1850, 103, 229, 54, 255),
    VTX(24, 11, -8, 423, 1701, 99, 21, 64, 255),
    VTX(13, 21, -5, 458, 1507, 36, 93, 66, 255),
    VTX(27, 22, -18, 483, 1612, 78, 82, 39, 255),
    VTX(26, -1, -18, 465, 1835, 104, 199, 239, 255),
    VTX(30, 18, -22, 484, 1665, 119, 12, 2, 255),
    VTX(18, -1, -26, 559, 1835, 15, 202, 150, 255),
    VTX(27, 15, -27, 512, 1697, 83, 232, 173, 255),
    VTX(-19, 23, 22, 27, 1201, 213, 2, 112, 255),
    VTX(-15, 28, 19, 44, 1130, 48, 85, 69, 255),
    VTX(-20, 27, 20, 0, 1158, 195, 82, 61, 255),
    VTX(10, -14, 11, 128, 1775, 85, 222, 77, 255),
    VTX(10, 6, 10, 231, 1613, 67, 38, 91, 255),
    VTX(3, -13, 18, 98, 1685, 58, 233, 102, 255),
    VTX(5, 21, -13, 566, 1507, 196, 101, 237, 255),
    VTX(20, 25, -20, 512, 1576, 4, 119, 252, 255),
    VTX(6, -24, 4, 62, 1854, 69, 162, 24, 255),
    VTX(-6, -23, 18, 39, 1687, 27, 180, 88, 255),
    VTX(-10, -28, 10, 0, 1732, 240, 139, 16, 255),
    VTX(-4, -24, -6, -62, 1854, 231, 162, 187, 255),
    VTX(12, -14, -12, 512, 2044, 54, 164, 201, 255),
    VTX(16, -13, -6, 257, 1965, 90, 177, 250, 255),
    VTX(-17, -11, 17, 0, 1568, 173, 21, 83, 255),
    VTX(-10, -15, 21, 39, 1610, 247, 246, 119, 255),
    VTX(-8, 2, 18, 60, 1474, 10, 28, 116, 255),
    VTX(-18, 2, 8, -60, 1474, 138, 17, 14, 255),
    VTX(-17, -22, 17, 0, 1637, 184, 193, 72, 255),
    VTX(27, 22, -27, 512, 1637, 65, 76, 191, 255),
    VTX(0, 12, 8, 176, 1327, 34, 107, 42, 255),
    VTX(-22, 23, 19, -27, 1201, 138, 21, 1, 255),
    VTX(-19, 28, 15, -44, 1130, 225, 107, 211, 255),
}; 

static Vtx object_gi_ocarinaVtx_000520[24] = {
    VTX(-8, 12, 0, -176, 1327, 186, 83, 206, 255),
    VTX(0, 12, 8, 176, 1327, 34, 107, 42, 255),
    VTX(5, 21, -13, 566, 1507, 196, 101, 237, 255),
    VTX(13, 21, -5, 458, 1507, 36, 93, 66, 255),
    VTX(-17, -22, 17, 0, 1637, 184, 193, 72, 255),
    VTX(-10, -15, 21, 39, 1610, 247, 246, 119, 255),
    VTX(-17, -11, 17, 0, 1568, 173, 21, 83, 255),
    VTX(-15, 28, 19, 44, 1130, 48, 85, 69, 255),
    VTX(-19, 23, 22, 27, 1201, 213, 2, 112, 255),
    VTX(-11, 8, 19, 52, 1375, 1, 231, 117, 255),
    VTX(-19, 28, 15, -44, 1130, 225, 107, 211, 255),
    VTX(-4, 16, 11, 133, 1205, 90, 75, 22, 255),
    VTX(-22, 23, 19, 997, 1201, 138, 21, 1, 255),
    VTX(-19, 28, 15, 980, 1130, 225, 107, 211, 255),
    VTX(-11, 16, 4, 892, 1204, 232, 74, 165, 255),
    VTX(-22, 23, 19, -27, 1201, 138, 21, 1, 255),
    VTX(-19, 8, 11, -50, 1374, 139, 232, 254, 255),
    VTX(-11, 16, 4, -132, 1204, 232, 74, 165, 255),
    VTX(-19, 8, 11, 974, 1374, 139, 232, 254, 255),
    VTX(12, -14, -12, 512, 2044, 54, 164, 201, 255),
    VTX(3, -12, -18, 769, 1925, 252, 183, 161, 255),
    VTX(18, -1, -26, 559, 1835, 15, 202, 150, 255),
    VTX(-2, -8, -19, 774, 1850, 198, 229, 155, 255),
    VTX(-4, -24, -6, 962, 1854, 231, 162, 187, 255),
}; 

static Vtx object_gi_ocarinaVtx_0006A0[10] = {
    VTX(-11, 8, 19, 114, 1443, 1, 231, 117, 255),
    VTX(-19, 8, 11, -112, 1442, 139, 232, 254, 255),
    VTX(-18, 2, 8, -121, 1643, 138, 17, 14, 255),
    VTX(-4, 16, 11, 402, 1399, 90, 75, 22, 255),
    VTX(-8, 2, 18, 121, 1643, 10, 28, 116, 255),
    VTX(-11, 16, 4, 622, 1397, 232, 74, 165, 255),
    VTX(0, 12, 8, 407, 1619, 34, 107, 42, 255),
    VTX(-19, 8, 11, 912, 1442, 139, 232, 254, 255),
    VTX(-8, 12, 0, 617, 1619, 186, 83, 206, 255),
    VTX(-18, 2, 8, 903, 1643, 138, 17, 14, 255),
}; 

static Vtx object_gi_ocarinaVtx_000740[24] = {
    VTX(13, 21, -5, -146, -439, 36, 93, 66, 255),
    VTX(24, 11, -8, -146, 669, 99, 21, 64, 255),
    VTX(27, 22, -18, 996, 407, 78, 82, 39, 255),
    VTX(17, 8, 1, 146, -219, 85, 37, 75, 255),
    VTX(24, 11, -8, 146, 663, 99, 21, 64, 255),
    VTX(13, 21, -5, 1143, 180, 36, 93, 66, 255),
    VTX(19, -8, 2, -878, -432, 103, 229, 54, 255),
    VTX(17, 8, 1, 146, 517, 85, 37, 75, 255),
    VTX(13, 21, -5, 1143, 916, 36, 93, 66, 255),
    VTX(10, 6, 10, 146, -293, 67, 38, 91, 255),
    VTX(19, -8, 2, -878, 304, 103, 229, 54, 255),
    VTX(10, -14, 11, 146, -146, 85, 222, 77, 255),
    VTX(6, -24, 4, 146, 820, 69, 162, 24, 255),
    VTX(19, -8, 2, 1190, -294, 103, 229, 54, 255),
    VTX(10, -14, 11, -366, 512, 85, 222, 77, 255),
    VTX(19, -8, 2, 689, 512, 103, 229, 54, 255),
    VTX(10, 6, 10, 366, -726, 67, 38, 91, 255),
    VTX(10, -14, 11, 0, 507, 85, 222, 77, 255),
    VTX(10, 6, 10, 1436, 436, 67, 38, 91, 255),
    VTX(3, -13, 18, 0, -146, 58, 233, 102, 255),
    VTX(3, -13, 18, -435, -361, 58, 233, 102, 255),
    VTX(-6, -23, 18, -293, 585, 27, 180, 88, 255),
    VTX(6, -24, 4, 1085, 585, 69, 162, 24, 255),
    VTX(3, -13, 18, 120, -334, 58, 233, 102, 255),
}; 

Gfx gGiOcarinaTimeDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 90, 100, 255, 255),
    gsDPSetEnvColor(40, 0, 90, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(2000, 2000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_ocarinaVtx_000100[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_ocarinaVtx_000130[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 8, 9, 4, 0),
    gsSP2Triangles(10, 11, 3, 0, 8, 11, 12, 0),
    gsSP2Triangles(0, 12, 11, 0, 1, 0, 10, 0),
    gsSP2Triangles(11, 10, 0, 0, 13, 14, 12, 0),
    gsSP2Triangles(2, 13, 0, 0, 15, 2, 1, 0),
    gsSP2Triangles(16, 14, 13, 0, 16, 13, 2, 0),
    gsSP2Triangles(16, 2, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 17, 21, 20, 0),
    gsSP2Triangles(19, 18, 22, 0, 5, 7, 3, 0),
    gsSP2Triangles(7, 23, 6, 0, 4, 3, 11, 0),
    gsSP2Triangles(3, 6, 10, 0, 10, 6, 24, 0),
    gsSP2Triangles(1, 10, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_ocarinaVtx_000130[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 3, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 17, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(14, 25, 24, 0, 12, 1, 13, 0),
    gsSP2Triangles(1, 22, 5, 0, 24, 18, 14, 0),
    gsSP2Triangles(14, 17, 12, 0, 22, 21, 5, 0),
    gsSP2Triangles(17, 20, 21, 0, 0, 2, 3, 0),
    gsSP2Triangles(5, 2, 1, 0, 7, 5, 21, 0),
    gsSP2Triangles(17, 22, 1, 0, 27, 18, 24, 0),
    gsSP2Triangles(18, 17, 14, 0, 4, 16, 3, 0),
    gsSP2Triangles(6, 4, 2, 0, 8, 6, 5, 0),
    gsSP2Triangles(0, 13, 1, 0, 12, 17, 1, 0),
    gsSP2Triangles(25, 14, 13, 0, 28, 16, 4, 0),
    gsSP2Triangles(28, 4, 6, 0, 28, 6, 8, 0),
    gsSP2Triangles(29, 25, 13, 0, 29, 13, 3, 0),
    gsSP2Triangles(30, 9, 11, 0, 27, 19, 18, 0),
    gsSP1Triangle(11, 10, 31, 0),
    gsSPVertex(&object_gi_ocarinaVtx_000520[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(8, 15, 16, 0, 9, 11, 7, 0),
    gsSP2Triangles(11, 17, 10, 0, 14, 18, 12, 0),
    gsSP2Triangles(16, 9, 8, 0, 19, 20, 21, 0),
    gsSP1Triangle(22, 20, 23, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 30, 255),
    gsSPVertex(&object_gi_ocarinaVtx_0006A0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiOcarinaTimeHolesDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsDPSetEnvColor(30, 0, 60, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_ocarinaTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 4, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_ocarinaVtx_000740[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 12, 11, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

