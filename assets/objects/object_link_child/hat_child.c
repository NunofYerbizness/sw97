#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_link_child.h"

Gfx gLinkChildPhysicsHat_MatDL[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20,
                     G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP |
                         G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, 0x04001D40),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0,
                G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4,
                0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetPrimColor(0, 128, 8, 188, 0, 255),
    gsSPEndDisplayList(),
};

static Vtx hatchildVtx_000100[20] = {
    VTX(-124, 344, 136, -91, 103, 233, 108, 62, 255),
    VTX(28, 338, 143, -93, 106, 27, 104, 67, 255),
    VTX(-3, 550, -189, 9, 16, 1, 120, 39, 255),
    VTX(-297, 485, -313, 47, 43, 199, 110, 21, 255),
    VTX(-3, 559, -696, 160, -8, 0, 121, 220, 255),
    VTX(-39, 281, 225, -119, 130, 0, 103, 72, 255),
    VTX(388, 214, 14, -53, 159, 102, 66, 35, 255),
    VTX(480, -122, -254, 29, 302, 126, 241, 255, 255),
    VTX(448, 353, -675, 160, 99, 107, 64, 234, 255),
    VTX(291, 479, -315, 47, 46, 62, 107, 27, 255),
    VTX(-456, 353, -675, 160, 99, 149, 63, 232, 255),
    VTX(-430, 225, 84, -75, 154, 155, 71, 27, 255),
    VTX(-485, -124, -251, 28, 303, 131, 238, 252, 255),
    VTX(-446, -132, -675, 160, 307, 133, 226, 249, 255),
    VTX(-1, -494, -675, 160, 462, 0, 130, 7, 255),
    VTX(-318, -375, -519, 111, 411, 162, 172, 245, 255),
    VTX(-446, -132, -675, 203, 312, 133, 226, 249, 255),
    VTX(441, -132, -675, 160, 307, 122, 226, 247, 255),
    VTX(314, -375, -519, 111, 411, 94, 172, 244, 255),
    VTX(-1, -494, -675, 203, 468, 0, 130, 7, 255),
}; 

static Vtx hatchildVtx_000240[8] = {
    VTX(-1, -494, -675, 160, 462, 0, 130, 7, 255),
    VTX(-446, -132, -675, 203, 312, 133, 226, 249, 255),
    VTX(448, 353, -675, 203, 102, 107, 64, 234, 255),
    VTX(-456, 353, -675, 203, 102, 149, 63, 232, 255),
    VTX(441, -132, -675, 203, 312, 122, 226, 247, 255),
    VTX(-3, 559, -696, 203, -7, 0, 121, 220, 255),
    VTX(-1, -494, -675, 203, 468, 0, 130, 7, 255),
    VTX(441, -132, -675, 160, 307, 122, 226, 247, 255),
}; 

static Vtx hatchildVtx_0002C0[7] = {
    VTX(-286, -458, -407, 341, 370, 188, 151, 240, 255),
    VTX(364, -185, -634, 368, 214, 117, 236, 212, 255),
    VTX(262, 34, -654, 341, 126, 82, 77, 199, 255),
    VTX(-379, -187, -634, 368, 214, 141, 233, 210, 255),
    VTX(-282, 34, -654, 342, 126, 174, 76, 198, 255),
    VTX(266, -457, -407, 341, 370, 67, 150, 241, 255),
    VTX(-2, 157, -672, 346, 48, 1, 111, 197, 255),
}; 

static Vtx hatchildVtx_000330[7] = {
    VTX(-286, -458, -407, 341, 370, 188, 151, 240, 255),
    VTX(266, -457, -407, 341, 370, 67, 150, 241, 255),
    VTX(-282, 34, -654, 342, 126, 174, 76, 198, 255),
    VTX(-2, 157, -672, 346, 48, 1, 111, 197, 255),
    VTX(262, 34, -654, 341, 126, 82, 77, 199, 255),
    VTX(364, -185, -634, 368, 214, 117, 236, 212, 255),
    VTX(-379, -187, -634, 368, 214, 141, 233, 210, 255),
}; 

static Vtx hatchildVtx_0003A0[4] = {
    VTX(-166, -138, -555, 468, 228, 148, 253, 191, 255),
    VTX(1, -292, -551, 450, 327, 251, 144, 199, 255),
    VTX(169, -168, -562, 468, 228, 108, 243, 192, 255),
    VTX(-2, -15, -600, 475, 114, 5, 116, 207, 255),
}; 

static Vtx hatchildVtx_0003E0[4] = {
    VTX(1, -292, -551, 450, 327, 251, 144, 199, 255),
    VTX(-166, -138, -555, 468, 228, 148, 253, 191, 255),
    VTX(169, -168, -562, 468, 228, 108, 243, 192, 255),
    VTX(-2, -15, -600, 475, 114, 5, 116, 207, 255),
}; 

static Vtx hatchildVtx_000420[1] = {
    VTX(-1, -100, -588, 577, 258, 255, 12, 130, 255),
}; 

Gfx gLinkChildPhysicsHatDL[] = {
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPMatrix(0x0A000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000100[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 6, 9, 0),
    gsSP2Triangles(4, 2, 9, 0, 8, 4, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 3, 4, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 8, 7, 0),
    gsSP2Triangles(3, 11, 0, 0, 13, 15, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 17, 7, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_000240[0], 8, 0),
    gsSPMatrix(0x0A000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_0002C0[0], 7, 8),
    gsSP2Triangles(0, 1, 8, 0, 9, 10, 2, 0),
    gsSP2Triangles(1, 3, 11, 0, 12, 11, 3, 0),
    gsSP2Triangles(4, 13, 9, 0, 5, 2, 10, 0),
    gsSP2Triangles(12, 3, 5, 0, 10, 14, 5, 0),
    gsSP2Triangles(5, 14, 12, 0, 11, 8, 1, 0),
    gsSP2Triangles(9, 2, 4, 0, 8, 13, 6, 0),
    gsSP1Triangle(7, 6, 13, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_000330[0], 7, 0),
    gsSPMatrix(0x0A000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_0003A0[0], 4, 7),
    gsSP2Triangles(7, 8, 0, 0, 1, 8, 9, 0),
    gsSP2Triangles(2, 3, 10, 0, 4, 5, 9, 0),
    gsSP2Triangles(7, 6, 2, 0, 10, 3, 4, 0),
    gsSP2Triangles(9, 5, 1, 0, 0, 6, 7, 0),
    gsSP2Triangles(7, 2, 10, 0, 10, 4, 9, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_0003E0[0], 4, 0),
    gsSPMatrix(0x0A0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000420[0], 1, 4),
    gsSP2Triangles(0, 1, 4, 0, 0, 4, 2, 0),
    gsSP2Triangles(3, 4, 1, 0, 2, 4, 3, 0),
    gsSPEndDisplayList(),
}; 

/* Gfx gLinkChildPhysicsHatDL[] = {
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPMatrix(0x0A000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000180[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 6, 9, 0),
    gsSP2Triangles(4, 2, 9, 0, 8, 4, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 3, 4, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 8, 7, 0, 7, 15, 14, 0),
    gsSP2Triangles(3, 11, 0, 0, 13, 16, 12, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_000180[17], 10, 0),
    gsSPMatrix(0x0A000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000180[27], 7, 10),
    gsSP2Triangles(10, 0, 1, 0, 11, 12, 2, 0),
    gsSP2Triangles(3, 4, 13, 0, 14, 13, 4, 0),
    gsSP2Triangles(5, 10, 11, 0, 6, 2, 12, 0),
    gsSP2Triangles(14, 4, 6, 0, 12, 15, 6, 0),
    gsSP2Triangles(6, 15, 14, 0, 13, 16, 3, 0),
    gsSP2Triangles(11, 2, 5, 0, 16, 10, 7, 0),
    gsSP2Triangles(16, 8, 9, 0, 3, 16, 9, 0),
    gsSP1Triangle(7, 10, 1, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_000180[34], 7, 0),
    gsSPMatrix(0x0A000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000180[41], 4, 7),
    gsSP2Triangles(7, 8, 0, 0, 1, 8, 9, 0),
    gsSP2Triangles(2, 3, 10, 0, 4, 5, 9, 0),
    gsSP2Triangles(7, 6, 2, 0, 10, 3, 4, 0),
    gsSP2Triangles(9, 5, 1, 0, 0, 6, 7, 0),
    gsSP2Triangles(7, 2, 10, 0, 10, 4, 9, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSPDisplayList(gLinkChildPhysicsHat_MatDL),
    gsSPVertex(&hatchildVtx_000180[45], 4, 0),
    gsSPMatrix(0x0A0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&hatchildVtx_000180[49], 1, 4),
    gsSP2Triangles(0, 1, 4, 0, 0, 4, 2, 0),
    gsSP2Triangles(3, 4, 1, 0, 2, 4, 3, 0),
    gsSPEndDisplayList(),
};  */