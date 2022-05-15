#include "z_magic_light.h"

static u32 sTexture[] = {
    0x354D5AAC, 0xA5561C01, 0x124688B5, 0x74583231, 0x313D71D6, 0x9F5B3507, 0x104089AD, 0x748F440C, 0x408176AC,
    0xB4661301, 0x2261C0BE, 0x49392533, 0x2C497FC4, 0x80451D06, 0x2466BBD0, 0x9CB85411, 0x40A09DA3, 0xB37F210B,
    0x3D8AEAC7, 0x3F241930, 0x2F5591A7, 0x6441080F, 0x4191E8DB, 0xB7A76B18, 0x4094BAA0, 0x76532D22, 0x60BAFEE8,
    0x8253545F, 0x6078A896, 0x73540723, 0x66C2FEBB, 0x87888723, 0x4B87C79E, 0x33123048, 0x88E3FFFC, 0xD39F7E72,
    0x8DA2AE80, 0xA77B1940, 0x90EBFFA9, 0x6289973E, 0x6F9ACD83, 0x2D104B7F, 0xAEEBFDF3, 0xD8B26772, 0xA7C7AD77,
    0xB1B34A61, 0xB0F8FFD5, 0x9496986B, 0x9EC6D25D, 0x503E85B3, 0xC0C1E1EE, 0xBD9B618E, 0xBFE4A975, 0x86E18B86,
    0xABCFF7F2, 0xBC837E69, 0xB5EFE465, 0x5B66BACB, 0xC794AADC, 0xAC8982AE, 0xD3F59754, 0x65E2AAAD, 0x8C85D0E1,
    0xAF634D39, 0xC7E2EDA3, 0x527ECACF, 0xBF777FC0, 0xA284A5A5, 0xE3FE8A2F, 0x60CCAFBE, 0x7164B8BA, 0x97553A2B,
    0xE8BCBCDA, 0x76A1BBBA, 0x844D83BD, 0x9C6B875B, 0xD9FFAA3F, 0x6AC9B59B, 0x6592BD94, 0x956D3D3B, 0xFFA773D3,
    0xB5B9AB90, 0x4033A0BC, 0x873E3E1D, 0xB5FFE48D, 0x8CC9A761, 0x62CBAF79, 0x98883457, 0xF3766FAF, 0xD5B2A26B,
    0x44549D8B, 0x56232221, 0x7DFFF2DD, 0xC6B68840, 0x4ECCA267, 0x696D296E, 0xA8328AAD, 0xD3998447, 0x5E7D8C5B,
    0x391F1E35, 0x4EF6CDD3, 0xDD9B6C2D, 0x27A09571, 0x37443656, 0x4C1265C9, 0xCA91612E, 0x3B5A7A65, 0x2F4F3421,
    0x36EAC380, 0xB6814A1B, 0x0C607075, 0x5860803B, 0x27102CCD, 0xC9A87A47, 0x16204B80, 0x44B3860F, 0x28DAE042,
    0x7F773710, 0x0235616D, 0xA089BE60, 0x34161EBC, 0xBBAAA972, 0x172A3B91, 0x96F6C319, 0x21B7F02A, 0x618F662A,
    0x02327A8C, 0x97577B5C, 0x48171FB3, 0xA090AF87, 0x1F65609D, 0xD8FFD41E, 0x177CC522, 0x69A8A462, 0x0D3A93B6,
    0x4F0C1821, 0x39151CA7, 0x928EAA9A, 0x33919BAF, 0xEBFBDA23, 0x093B6937, 0x80AEA66C, 0x304491C7, 0x3A031710,
    0x16162197, 0x9B9FB5BA, 0x4C95CED8, 0xF8F0D425, 0x05144066, 0x84B17F5A, 0x725E8DCD, 0x5D376910, 0x19183886,
    0xA3A1C4C6, 0x6584D1F1, 0xFFFABF12, 0x0E123F77, 0x88AF6881, 0xB97F98BB, 0x879BBC23, 0x4A20557C, 0x9BA5D0BB,
    0x7583C6E0, 0xFEFFB322, 0x34283976, 0x95B06EB8, 0xE29B999F, 0xBDE9E582, 0x814C5C82, 0xA1C0ECBE, 0x789ED6B2,
    0xF4FFD78F, 0x73324087, 0xA0C26FAB, 0xE0B1A5B9, 0xF2FFFADE, 0xAC906A89, 0xB3DDFFCB, 0x86B8CD75, 0xDFFFF1D7,
    0x8F31579C, 0xAFDE7B87, 0xC8BAB4EB, 0xF0F2FFE4, 0xB29B798B, 0xC3F4FFD2, 0xA0A17C32, 0xA9FFE8BD, 0x784D7A91,
    0xC7F5AB9B, 0xBEBB86D9, 0xB0BCF9D4, 0x835C4C70, 0xD8FFFFD7, 0xA2682907, 0x68FFE29F, 0x61707B7A, 0xE5FFE7C8,
    0xCCC33C8E, 0x768CE0C7, 0x51281940, 0xCBFFFFCB, 0x87450C00, 0x4BF3D58E, 0x6D767B92, 0xFAFFFFC8, 0xC7BF175B,
    0x708BBA9A, 0x3A161542, 0xB4FFF5A9, 0x6D39090C, 0x50D8BC86, 0x897AA1C8, 0xFFFFF4A1, 0x8C880B50, 0x91A49762,
    0x2D0C1E78, 0xD4FFD97F, 0x58351E23, 0x6BB49283, 0x9B95C9EE, 0xFFFFD377, 0x4336075E, 0xBFB27641, 0x1B0224B5,
    0xFCF7AC55, 0x41384344, 0x8FA06468, 0x9FB5DBFD, 0xFFF1A553, 0x190B1275, 0xCCA75D3A, 0x0C042ED9, 0xFFD97C33,
    0x28405669, 0xB0914C3A, 0x9199C6FF, 0xFECF7835, 0x080C308B, 0xB38F6D47, 0x0A0D3DDB, 0xF3A75519, 0x1341558E,
    0xBE7B4321, 0x6B4D94F8, 0xE4AC591A, 0x02175096, 0x8E7A9145, 0x1D224BBF, 0xC1723508, 0x0D3E5FA5, 0xA568351E,
    0x422B6EE0, 0xBB85480B, 0x04256799, 0x716D6D21,
};

static Vtx sCylinderVtx[] = {
    VTX(35, 0, -35, 1280, 1024, 0xFF, 0xFF, 0xFF, 0x00),   VTX(35, 150, -35, 1280, 512, 0xFF, 0xFF, 0xFF, 0x7E),
    VTX(50, 150, 0, 1024, 512, 0xFF, 0xFF, 0xFF, 0x7E),    VTX(50, 0, 0, 1024, 1024, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(35, 500, -35, 1280, 0, 0xFF, 0xFF, 0xFF, 0xFF),    VTX(50, 500, 0, 1024, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -50, 1536, 1024, 0xFF, 0xFF, 0xFF, 0x00),    VTX(0, 150, -50, 1536, 512, 0xFF, 0xFF, 0xFF, 0x7E),
    VTX(0, 500, -50, 1536, 0, 0xFF, 0xFF, 0xFF, 0xFF),     VTX(-35, 0, -35, 1792, 1024, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(-35, 150, -35, 1792, 512, 0xFF, 0xFF, 0xFF, 0x7E), VTX(-35, 500, -35, 1792, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-50, 0, 0, 2048, 1024, 0xFF, 0xFF, 0xFF, 0x00),    VTX(-50, 150, 0, 2048, 512, 0xFF, 0xFF, 0xFF, 0x7E),
    VTX(-50, 500, 0, 2048, 0, 0xFF, 0xFF, 0xFF, 0xFF),     VTX(-35, 0, 35, 256, 1024, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(-35, 150, 35, 256, 512, 0xFF, 0xFF, 0xFF, 0x7E),   VTX(-50, 150, 0, 0, 512, 0xFF, 0xFF, 0xFF, 0x7E),
    VTX(-50, 0, 0, 0, 1024, 0xFF, 0xFF, 0xFF, 0x00),       VTX(-35, 500, 35, 256, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-50, 500, 0, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF),        VTX(0, 0, 50, 512, 1024, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(0, 150, 50, 512, 512, 0xFF, 0xFF, 0xFF, 0x7E),     VTX(0, 500, 50, 512, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(35, 0, 35, 768, 1024, 0xFF, 0xFF, 0xFF, 0x00),     VTX(35, 150, 35, 768, 512, 0xFF, 0xFF, 0xFF, 0x7E),
    VTX(35, 500, 35, 768, 0, 0xFF, 0xFF, 0xFF, 0xFF),
};

static Gfx sTextureDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sTexture, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 15, G_TX_NOMIRROR | G_TX_WRAP, 5,
                0),
    gsDPSetTileSize(1, 0, 0, (31 << 2), (31 << 2)),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(AA_EN | Z_CMP | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL |
                          GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1),
                      G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0x00, 0x00, 255, 255, 255, 255),
    gsDPSetEnvColor(170, 170, 170, 128),
    gsSPEndDisplayList(),
};

static Gfx sCylinderDL[] = {
    gsSPVertex(sCylinderVtx, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 9, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(21, 22, 16, 0, 21, 16, 15, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 16, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 22, 21, 0),
    gsSP2Triangles(25, 26, 23, 0, 25, 23, 22, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSP2Triangles(2, 5, 26, 0, 2, 26, 25, 0),
    gsSPEndDisplayList(),
};
