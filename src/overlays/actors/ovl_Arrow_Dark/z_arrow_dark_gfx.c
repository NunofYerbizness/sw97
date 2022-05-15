#include "z_arrow_dark.h"

static u64 texture2[] = {
    0x49495264706a7477, 0x6a817b8564939777, 0x5864443c37201506, 0x1101030000000000, 0x4747474c61586461,
    0x7481a5bdbdc4bdc4, 0xadad9d858c886755, 0x443c2d252011110f, 0x0409080f18223c28, 0x41526a6477523c20,
    0x0300000000000000, 0x0000000000000000, 0x586a646a7b6a9797, 0x979ba5a5889d8888, 0x8c979b93939b887b,
    0x676752473c373734, 0x616a777b7b8c8c9b, 0x9b9d9ba59ba5d4d4, 0xd4d4bdb0a59b8c88, 0x7474675249474120,
    0xe2d4d1cdd4d4e2e5, 0xe9e5e9e9eef6f6e9, 0xffeeeee5d8ada5bd, 0xa593978c7b817770, 0x3c441a102b372d2b,
    0x3c4c2b3449646a81, 0x74adbdeee5bdc4b0, 0xad9da58c8181706a, 0xffffe9e5e9e5e9e5, 0xe9e9e9f6fffaffff,
    0xffffffe9ffffffff, 0xe9fffffafaeee9e9, 0xffffffffffeeffe9, 0xe5d89ba5cdb0adb0, 0xbdb0d4e2d8d8d4c4,
    0xcdd8d8d8e2d8e5ee, 0x6464817444494c61, 0x414c523c34472b2b, 0x181a000300000000, 0x0000000000000000,
    0x5258746777748893, 0x8c939d9badb0a5b0, 0xa5978581777b6a67, 0x5534341f15030000, 0x0000000000000000,
    0x00000000080f0944, 0x7447446174857b7b, 0x707b677764554130, 0x0000000000000000, 0x0000040600153044,
    0x64444c3a281a2b18, 0x1100060000000000, 0x474944494c3c4167, 0x5581817bbda997a9, 0xd4b9c4adeed8e9e5,
    0xf6e2eed4d4e2d8d4, 0xe5b0b9e5add1d1b0, 0x9393a5a9a99d9b85, 0x889385a577a574bd, 0xd4ffcde2b9eee9e9,
    0xb9b9d4e2e5faffff, 0xffffd8c4b9a98888, 0x747055614c3c443c, 0x3728443c584c7777, 0x000000000003091f,
    0x44557b9bb9a5d4e5, 0xe9e2e2e2e2e2d4d1, 0xd1d1bdcdb9bdd8e5, 0x0a0f1f2030414961, 0x7b88889ba9bdb9a9,
    0x97857b8c58496a85, 0x7b52492d30373458, 0x0000000000000000, 0x00000000020d1a25, 0x341f010008000000,
    0x0000000000000000, 0x20181f222b343c44, 0x6458777077858174, 0x6a44492b09090000, 0x0000000000000000,
    0x0000000000000000, 0x00000200000d1128, 0x619d9dad9d935852, 0x281f0d0801000000, 0x0000000000000000,
    0x011a152d28494434, 0x2d1f1f0f06000000, 0x0000000000000000, 0x526a747b858c939b, 0x979da5a5a5a5a597,
    0x85776a493c281a15, 0x0d03010000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000,
    0x0000000000000000, 0x0000000000000000, 0x00000000031f3458, 0xa58cb9c4ad815249, 0x3a342d2b20180a02,
    0x777b888197b0adb9, 0xd1c4fff6fffffaf6, 0xe9d8bdf6e5bd978c, 0x77939393938c856a, 0x3410221f1a37253a,
    0x281a2d1852526a41, 0x475225413420061f, 0x0808000300000000, 0x0000000000000000, 0x0203080f03284158,
    0x774c644c37344734, 0x281f373420220f20, 0x0215221a3c2b1018, 0x1a09152b47280d15, 0x202d10183a3a6a4c,
    0x936a706a9b889b93, 0x0a2b416458706a74, 0x8581888c8cadffff, 0xffffe9eed8d4cdc4, 0xb9b0adada99d9b9d,
    0x0000000000000000, 0x0000000130305552, 0x93617b746770887b, 0x6774777b70644967, 0x77646a778188a5a5,
    0xb0d4d8f6e297a58c, 0x8c7bb09be5d1a9ad, 0x8c93857b776a6155, 0x6720182b3047642d, 0x44554c6a55774741,
    0x4149283464583030, 0x1808030000000000, 0x5567777b9d888c97, 0xa9c4b9e9c4e5eee2, 0xd8b9ad9da59b8877,
    0x675247372d2d1103, 0xffffffffffffffff, 0xffffffffffffffff, 0xbd977b37151f0100, 0x0000000000000000,
    0x70858c9bb0b9c4ff, 0xe9fffffffffaffff, 0xffffe5e5e5c4bdad, 0xa59388706a584134, 0x00000000101f374c,
    0x7b97d8d8e2d4d1d1, 0xbdb09d888c858177, 0x7067615555474137, 0x15283447556a819b, 0xa5b09d9761584130,
    0x1f1a302525251f10, 0x2530473734494c77, 0x0000000000000000, 0x00000111252b3a37, 0x4137303a252b473a,
    0x152d102010030000, 0xa9a9b0b0b9bdd1d8, 0xd4d1bdd19bb9e9d4, 0xeee5e9eee9e2e9d8, 0xd1d1bdbdbd9d8167,
    0xe5cd9b6a979797a9, 0xbd9b81b0d197ad93, 0x67976777443a1803, 0x0206000002000000, 0x0000000000000002,
    0x112b67447ba5d1e2, 0xe5e9e2f6e5ffe9c4, 0xe2bdc4cdd1adadb9, 0x0000000d0a18223c, 0x202515302d475570,
    0x8c939b81819b8c74, 0xa5b9b09ba9d49bb9, 0xffffffffffffffff, 0xfffffff6b0613741, 0x2d28302858617093,
    0xa59bb9cdadb0b9c4, 0xffffffffffffffff, 0xfaffe9fae2e9cdd1, 0xb0bda9c49bc49377, 0x857b777767585855,
    0x6474708164857b9d, 0xa9b9a5d49d9b857b, 0x7b5849342b1a0d18, 0x0803000000000000, 0x64707467817b8c88,
    0x9b85a59da98ca5b9, 0xa5817b5549302b0f, 0x0300000000000000, 0x3c282537494c6170, 0x707067819da5d1e5,
    0xeee5eeeee9eee2e2, 0xcdd1b9b9b0b0a597, 0x03091a343a4c4c47, 0x7081818188cda5d4, 0xfffffffaffffffff,
    0xffffffffffffffff, 0xd8d8eefffff6faee, 0xeed1d89b93a57485, 0x8177709b888ca59b, 0xc4cdd4c4d1bdd1f6,
    0x342d413758679d74, 0x9b9d9dbdad858c7b, 0x523c2d1503000000, 0x000001080002010a, 0x8893a5a9bdd4d8e9,
    0xe9fffffffaffe5e5, 0xe9d4d4bdb09d817b, 0x747064674c444955, 0x77778c939ba5b0b9, 0xa9c4d4e5e9d4ffe2,
    0xd1bd853a471f0200, 0x0000000000000000, 0x4437414c55526470, 0x776161588174776a, 0x70b981887b8c8574,
    0x645849472d201515, 0x938c8c979d9b9d97, 0x7b88977477889b97, 0x97a59d9da5a59b88, 0x6a8585856a775858,
    0x4744523749223034, 0x414755617b444c49, 0x4c55497b8c8c937b, 0x8185646481776a61, 0x282d34373c414c58,
    0x6767818c74857452, 0x55494161586a5844, 0x41343a3a25110a1f, 0x0000000000000000, 0x0000000000000206,
    0x0302000000000000, 0x0000000000000000, 0x2d3a41494761616a, 0x646a646461586164, 0x7074746a704c6449,
    0x222b150902000000, 0x556a70707481707b, 0x61644c556749616a, 0x74859dc4f6faeeee, 0xe5e9e5d8cdbdad9d,
    0xd4d8e2e2e5eee5e5, 0xc4d4d8d1fae9fad8, 0xe5ffd1d1faffe5a5, 0x8c81cda5a5a59b81, 0xe2b9d4e2e2d1d4e9,
    0xeee9c4d8adb0b9b9, 0xd1d8cdcdbdb08874, 0x5247493a30251504, 0x88939ba597a5a5b0, 0xb9b9b9b9bdbdbd8c,
    0x7b41101a09000000, 0x0000000000000000, 0xbdd1d4e2d1a99d77, 0x8c47526a6a616761, 0x677088bdbde2e2d8,
    0xe2e2e2c4c4bda98c,
};

static u64 texture1[] = {
    0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000,
    0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000010101,
    0x0100000001000000, 0x0000000000000000, 0x0100000000000000, 0x0000010101010102, 0x0201010101010100,
    0x0000000000000001, 0x0101010100000000, 0x0101020202020103, 0x0301020204040302, 0x0101010001010102,
    0x0503020201010101, 0x0102040303020204, 0x0402030407070705, 0x0403020102030506, 0x0b09060403020202,
    0x0204050403030305, 0x0503030608090c09, 0x070504030406090b, 0x13110d0804040303, 0x0204060503030407,
    0x08050406080d0f0a, 0x07060504060a0e10, 0x1e18100905040303, 0x020405050403050a, 0x0b07050709100f0a,
    0x07050404060a1014, 0x2b1a0f0804020203, 0x0204060504030409, 0x0d0806070d13100a, 0x0603020204070d19,
    0x311d100803020203, 0x0303050504020407, 0x090606080f14100a, 0x0503010103060d1a, 0x2f21130a05030303,
    0x0305070604020305, 0x0806060b1418160d, 0x0704020203070e16, 0x29261b120d090908, 0x0808090705020207,
    0x090609101b222419, 0x0e090504060b1114, 0x272d28211c1a1515, 0x120e0c0b0804050a, 0x0c0a0e1b272f352c,
    0x1d140d0b0d111716, 0x2631333533332e29, 0x1f1413100d09090e, 0x13121b2c393f413e, 0x3425171315171a14,
    0x252e343b44494237, 0x29181916130f101a, 0x20212e42484c4a45, 0x3d34211b16171713, 0x242a3139464d483c,
    0x2718181617171e27, 0x3035444d4d4b4541, 0x3c33201512100e0c, 0x282d2f313a413f36, 0x25100f14161e2837,
    0x41485151483d3536, 0x31250f0c0a090909, 0x39382f292c31302b, 0x1a0b0a0d131e2e3e, 0x4a50534735292426,
    0x2415090705040506, 0x4f412d212124221b, 0x100705070e1d3448, 0x5658523d26181615, 0x130a040302020205,
    0x61482b1d1b1d1914, 0x0c0403040d1e3a57, 0x6663543a1e110e0e, 0x0b06020101000104, 0x6c4f2e1f1c1e1b14,
    0x0b0403050e234164, 0x756f5b3c1f110c0b, 0x0a05020000000104, 0x755a3a2c292a241a, 0x1007030711294768,
    0x7b79634325140d0d, 0x0c08040101000103, 0x7b664e413f423823, 0x130c080b152a4767, 0x7b7a6a4c2a191210,
    0x100c060201010103, 0x7463555152564c33, 0x1d110d0f192c4767, 0x7b7c6c5235221b18, 0x18120a0301000101,
    0x655a53555a5f5541, 0x30221d1e2438536f, 0x84857b5f4734261f, 0x1c150b0401000101, 0x59504c4f58595146,
    0x3d3a37393f536c87, 0x95958a745a433126, 0x1c150e0502010000, 0x4e4340434d524a43, 0x42474d556274869a,
    0xa3a39a84664b3425, 0x1c120c0502020202, 0x4538343c42454646, 0x4b545d68798b9da9, 0xb0aca28c6b503d28,
    0x1b100a0403010203, 0x3b302c31383c464a, 0x535f6c758a9eabb8, 0xbcb8a89577614937, 0x24160c0703020308,
    0x32262228323d4d5b, 0x697378899aaab8c1, 0xc4c0b3a38b766558, 0x462e1b0c0707080c, 0x2c2121252d3c5064,
    0x75808b9aa8b6c0c8, 0xcbc7bcac9c908079, 0x6a5037211614151b, 0x1d161517202e4058, 0x6c7d8f9eadb9c2c8,
    0xcac6bcad9d91837a, 0x6f5a44312722222e, 0x0e0807070d172337, 0x4b637c98a9b6c1c5, 0xc6c0b3a088756c61,
    0x5b4b43372c262b37, 0x09050205060b101e, 0x2e4b6c8aa5b5bfc3, 0xc3baaa8a7060544a, 0x4444434339353945,
    0x0502010506090f19, 0x29405e7fa2b5bec2, 0xc0b6a07754494140, 0x3e454f5049444858, 0x04040104060b1319,
    0x2a405b7a9fb3bec1, 0xbfae8c5c44393636, 0x405162685f5a5c6b, 0x00000101050c1722, 0x2c3b516c8aaabac1,
    0xbca5684130282d32, 0x4561797b746f7884, 0x01010001050e1820, 0x272e384f729eb4bd, 0xb286512b1a121827,
    0x4069858684838fa0, 0x01010001040b191f, 0x1c1f263b6198b5bc, 0xb27e461c0c070919, 0x38607e838490aab7,
    0x05010101040a1016, 0x16191f3461a0bfc8, 0xbc88421a0a01040f, 0x25486568708db3c6, 0x0601000101040b12,
    0x13131d3267abc8d1, 0xc58b41180601040b, 0x1d3140484f6eaec7, 0x090100000001090e, 0x12141c3063adc9d3,
    0xc6843d1406010409, 0x142630353d5c9fc4, 0x0901000101010a14, 0x171b1d376baac8ce, 0xbd7238140401040a,
    0x172630333b5a96bf, 0x0d04040406091623, 0x2b2b334d81b8c7c7, 0xb26e381809040612, 0x293b45454a6693b3,
    0x110d0a0c11123550, 0x51525b7aabc6c8c6, 0xa1664223110c1124, 0x485b6b6464758d90, 0x17171a1b202b5d74,
    0x868497b2c7cbc8bf, 0x9162462c1b151a38, 0x658c978e847f7d73, 0x272c2c333e528c99, 0xabbbc7cbcdc9b19d,
    0x75493d2f1f1f2f46, 0x75a5bfb49d8f7f6d, 0x3946444651629ba9, 0xc9ccd0d0cca88270, 0x51302b2b2126334d,
    0x74a3c1c1b1a69178, 0x45554d48445084a1, 0xc3cfcec7aa7c5a52, 0x381d1d1f1d1f2b44, 0x5f7791a2aeaea989,
    0x585d4b3b333b5c79, 0xb4c6c6a8865d4843, 0x2e1812151a212e37, 0x3b465c6e86a4b09d, 0x6c5d3c2a21213753,
    0x8dc1b89b71533f3f, 0x2d161414191e2a26, 0x24262e3f5b87b0c4, 0x9467361d1414283e, 0x7ba7ae916f4a4347,
    0x332016161d202219, 0x161919254378bbdc, 0xbe78432618182c43, 0x74b0b99967525560, 0x4f32211d2426241d,
    0x1a1818244a7fd1e4, 0xdfa7663f2d2a3d55, 0x97bdd6a37b666f84, 0x764e34313639362d, 0x28212836619bdfe9,
    0xe3cc9b6d55515e7b, 0x9ee1e1b4826d829b, 0x926a41414a554e3e, 0x3a3a415a8ac0e4e8, 0xe6debf9d868ea0ac,
    0xdae7e8b7907b8ea8, 0xa1825d616c7b7363, 0x67687386acd2e7e8, 0xebdbc2af9ba9bfdb, 0xebefecd5b79e9eb4,
    0xb499878b98a5998a, 0x878b8d91afc8dde6, 0xe9d7bfa89fadbcce, 0xf1f1f1efd2bcb6c8, 0xcebcb0b6c0c0aa9b,
    0x9194928f9fb6cbde, 0xdbc0b0a29ea6b1bc, 0xccdeedefeadad3e8, 0xeadadbd8d1c3ad9c, 0x9592918f97a6b5cc,
    0xd4b9afa9a6adb4bb, 0xc4cedde5e5e6e8f7, 0xf7f0e8e0d4c2b0a6, 0xa19f9e9ca1a8b0c8, 0xd7c6bfbdbdbfc6ca,
    0xcdd4dde4e9eff8fa, 0xfbfaf4e8dccdbfba, 0xb7b6b4b3b4b9bfd0, 0xe5dbd6d5d7dbdfe5, 0xe5e5e8ecf3f9fcfd,
    0xfdfdfcf2e8ddd9d6, 0xd5d3cfcdced2d4de, 0xf6eeedeceef0f7fb, 0xfbf9f8fafefefefe, 0xfefefefef6f2f0f0,
    0xefece9e8e8eaebf3,
};

static UNK_TYPE vertices1[] = {
    0x00420271, 0xFFBE0000, 0x060006C2, 0x3E52C2FF, 0x000002BC, 0x00000000, 0x07000800, 0x007800FF, 0x005D0271,
    0x00000000, 0x080006C2, 0x575200FF, 0x00BD01DB, 0xFFB20000, 0x07000419, 0x5E3FD9FF, 0x00BD01DB, 0x004E0000,
    0x09000419, 0x5E3F27FF, 0x01AF001B, 0x00000000, 0x08000005, 0x6B3500FF, 0x0131001B, 0x01310000, 0x0A000005,
    0x4C354CFF, 0x000002BC, 0x00000000, 0x09000800, 0x007800FF, 0x00420271, 0x00420000, 0x0A0006C2, 0x3E523EFF,
    0x004E01DB, 0x00BD0000, 0x0B000419, 0x273F5EFF, 0x0000001B, 0x01AF0000, 0x0C000005, 0x00356BFF, 0x000002BC,
    0x00000000, 0x0B000800, 0x007800FF, 0x00000271, 0x005D0000, 0x0C0006C2, 0x005257FF, 0xFFB201DB, 0x00BD0000,
    0x0D000419, 0xD93F5EFF, 0xFECF001B, 0x01310000, 0x0E000005, 0xB4354CFF, 0x000002BC, 0x00000000, 0x0D000800,
    0x007800FF, 0xFFBE0271, 0x00420000, 0x0E0006C2, 0xC2523EFF, 0xFF4301DB, 0x004E0000, 0x0F000419, 0xA23F27FF,
    0xFE51001B, 0x00000000, 0x10000005, 0x953500FF, 0xFFA30271, 0x00000000, 0x100006C2, 0xA95200FF, 0xFF4301DB,
    0xFFB20000, 0x11000419, 0xA23FD9FF, 0xFE51001B, 0x00000000, 0x00000005, 0x953500FF, 0xFF4301DB, 0xFFB20000,
    0x01000419, 0xA23FD9FF, 0xFECF001B, 0xFECF0000, 0x02000005, 0xB435B4FF, 0xFFA30271, 0x00000000, 0x000006C2,
    0xA95200FF, 0x000002BC, 0x00000000, 0x01000800, 0x007800FF, 0xFFBE0271, 0xFFBE0000, 0x020006C2, 0xC252C2FF,
    0xFFB201DB, 0xFF430000, 0x03000419, 0xD93FA2FF, 0x0000001B, 0xFE510000, 0x04000005, 0x003595FF, 0x000002BC,
    0x00000000, 0x03000800, 0x007800FF, 0x00000271, 0xFFA30000, 0x040006C2, 0x0052A9FF, 0x004E01DB, 0xFF430000,
    0x05000419, 0x273FA2FF,
};

static UNK_TYPE vertices2[] = {
    0x0000001B, 0xFE510000, 0x04000005, 0x003595FF, 0x004E01DB, 0xFF430000, 0x05000419, 0x273FA2FF, 0x0131001B,
    0xFECF0000, 0x06000005, 0x4C35B4FF, 0x00000271, 0xFFA30000, 0x040006C2, 0x0052A9FF, 0x000002BC, 0x00000000,
    0x05000800, 0x007800FF, 0x00420271, 0xFFBE0000, 0x060006C2, 0x3E52C2FF, 0x00BD01DB, 0xFFB20000, 0x07000419,
    0x5E3FD9FF, 0x01AF001B, 0x00000000, 0x08000005, 0x6B3500FF, 0xFFBE0271, 0x00420000, 0x060006C2, 0xC2523EFF,
    0x000002BC, 0x00000000, 0x07000800, 0x007800FF, 0xFFA30271, 0x00000000, 0x080006C2, 0xA95200FF,
};

static Gfx sTextureDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(texture1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, 15),
    gsDPLoadMultiBlock(texture2, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

static Gfx sVertexDL[] = {
    gsSPVertex(vertices1, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 6, 0, 6, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 9, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(10, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 22, 0),
    gsSP2Triangles(22, 26, 27, 0, 22, 27, 23, 0),
    gsSP2Triangles(23, 27, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(26, 30, 27, 0, 27, 30, 31, 0),
    gsSP1Triangle(27, 31, 28, 0),
    gsSPVertex(vertices2, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};