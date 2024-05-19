#include "common.h"

Gfx Rabbit_restassociate_Gfx[] = {
    gsSPMatrix(&Rabbit_restassociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Rabbit_ear_Gfx),
    gsSPDisplayList(Rabbit_earL_Gfx),
    gsSPDisplayList(Rabbit_head_Gfx),
    gsSPDisplayList(Rabbit_foot_Gfx),
    gsSPDisplayList(Rabbit_footL_Gfx),
    gsSPDisplayList(Rabbit_leg_Gfx),
    gsSPDisplayList(Rabbit_body_Gfx),
    gsSPDisplayList(Rabbit_legL_Gfx),
    gsSPDisplayList(Rabbit_tail_Gfx),
    gsSPDisplayList(Rabbit_watch_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
