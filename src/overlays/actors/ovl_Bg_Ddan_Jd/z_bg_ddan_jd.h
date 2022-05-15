#ifndef _Z_BG_DDAN_JD_H_
#define _Z_BG_DDAN_JD_H_

#include "ultra64.h"
#include "global.h"

struct BgDdanJd;

typedef void (*BgDdanJdActionFunc)(struct BgDdanJd*, GlobalContext*);

typedef struct BgDdanJd {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgDdanJdActionFunc actionFunc;
    /* 0x0168 */ u8 state;
    /* 0x0169 */ u8 ySpeed; // also differentiates between normal and shortcut platform behavior
    /* 0x016A */ s16 idleTimer;
    /* 0x016C */ f32 targetY;
} BgDdanJd; // size = 0x0170

extern const ActorInit Bg_Ddan_Jd_InitVars;

#endif