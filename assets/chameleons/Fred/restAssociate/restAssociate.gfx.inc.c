#include "common.h"

Gfx Fred_restAssociate_Gfx[] = {
    gsSPMatrix(&Fred_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Fred_bodyAssociate_Gfx),
    gsSPDisplayList(Fred_head_Gfx),
    gsSPDisplayList(Fred_backpack_Gfx),
    gsSPDisplayList(Fred_shoe_Gfx),
    gsSPDisplayList(Fred_Lshoe_Gfx),
    gsSPDisplayList(Fred_cuff_Gfx),
    gsSPDisplayList(Fred_Lcuff_Gfx),
    gsSPDisplayList(Fred_wrist_Gfx),
    gsSPDisplayList(Fred_Lwrist_Gfx),
    gsSPDisplayList(Fred_shoulder_Gfx),
    gsSPDisplayList(Fred_Lshoulder_Gfx),
    gsSPDisplayList(Fred_fist_Gfx),
    gsSPDisplayList(Fred_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
