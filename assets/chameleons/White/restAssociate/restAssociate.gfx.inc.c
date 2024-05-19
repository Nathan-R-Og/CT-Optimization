#include "common.h"

Gfx White_restAssociate_Gfx[] = {
    gsSPMatrix(&White_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(White_bodyAssociate_Gfx),
    gsSPDisplayList(White_head_Gfx),
    gsSPDisplayList(White_backpack_Gfx),
    gsSPDisplayList(White_shoe_Gfx),
    gsSPDisplayList(White_Lshoe_Gfx),
    gsSPDisplayList(White_cuff_Gfx),
    gsSPDisplayList(White_Lcuff_Gfx),
    gsSPDisplayList(White_wrist_Gfx),
    gsSPDisplayList(White_Lwrist_Gfx),
    gsSPDisplayList(White_shoulder_Gfx),
    gsSPDisplayList(White_Lshoulder_Gfx),
    gsSPDisplayList(White_fist_Gfx),
    gsSPDisplayList(White_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
