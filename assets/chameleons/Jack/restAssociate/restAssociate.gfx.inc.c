#include "common.h"

Gfx Jack_restAssociate_Gfx[] = {
    gsSPMatrix(&Jack_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Jack_bodyAssociate_Gfx),
    gsSPDisplayList(Jack_head_Gfx),
    gsSPDisplayList(Jack_backpack_Gfx),
    gsSPDisplayList(Jack_shoe_Gfx),
    gsSPDisplayList(Jack_Lshoe_Gfx),
    gsSPDisplayList(Jack_cuff_Gfx),
    gsSPDisplayList(Jack_Lcuff_Gfx),
    gsSPDisplayList(Jack_wrist_Gfx),
    gsSPDisplayList(Jack_Lwrist_Gfx),
    gsSPDisplayList(Jack_shoulder_Gfx),
    gsSPDisplayList(Jack_Lshoulder_Gfx),
    gsSPDisplayList(Jack_fist_Gfx),
    gsSPDisplayList(Jack_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
