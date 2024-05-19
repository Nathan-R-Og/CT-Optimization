#include "common.h"

Gfx Linda_restAssociate_Gfx[] = {
    gsSPMatrix(&Linda_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Linda_bodyAssociate_Gfx),
    gsSPDisplayList(Linda_head_Gfx),
    gsSPDisplayList(Linda_backpack_Gfx),
    gsSPDisplayList(Linda_shoe_Gfx),
    gsSPDisplayList(Linda_Lshoe_Gfx),
    gsSPDisplayList(Linda_cuff_Gfx),
    gsSPDisplayList(Linda_Lcuff_Gfx),
    gsSPDisplayList(Linda_wrist_Gfx),
    gsSPDisplayList(Linda_Lwrist_Gfx),
    gsSPDisplayList(Linda_shoulder_Gfx),
    gsSPDisplayList(Linda_Lshoulder_Gfx),
    gsSPDisplayList(Linda_fist_Gfx),
    gsSPDisplayList(Linda_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
