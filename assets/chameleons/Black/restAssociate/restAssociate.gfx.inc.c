#include "common.h"

Gfx Black_restAssociate_Gfx[] = {
    gsSPMatrix(&Black_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Black_bodyAssociate_Gfx),
    gsSPDisplayList(Black_head_Gfx),
    gsSPDisplayList(Black_backpack_Gfx),
    gsSPDisplayList(Black_shoe_Gfx),
    gsSPDisplayList(Black_Lshoe_Gfx),
    gsSPDisplayList(Black_cuff_Gfx),
    gsSPDisplayList(Black_Lcuff_Gfx),
    gsSPDisplayList(Black_wrist_Gfx),
    gsSPDisplayList(Black_Lwrist_Gfx),
    gsSPDisplayList(Black_shoulder_Gfx),
    gsSPDisplayList(Black_Lshoulder_Gfx),
    gsSPDisplayList(Black_fist_Gfx),
    gsSPDisplayList(Black_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
