#include "common.h"

Gfx Davy_restAssociate_Gfx[] = {
    gsSPMatrix(&Davy_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Davy_bodyAssociate_Gfx),
    gsSPDisplayList(Davy_head_Gfx),
    gsSPDisplayList(Davy_backpack_Gfx),
    gsSPDisplayList(Davy_shoe_Gfx),
    gsSPDisplayList(Davy_Lshoe_Gfx),
    gsSPDisplayList(Davy_cuff_Gfx),
    gsSPDisplayList(Davy_Lcuff_Gfx),
    gsSPDisplayList(Davy_wrist_Gfx),
    gsSPDisplayList(Davy_Lwrist_Gfx),
    gsSPDisplayList(Davy_shoulder_Gfx),
    gsSPDisplayList(Davy_Lshoulder_Gfx),
    gsSPDisplayList(Davy_fist_Gfx),
    gsSPDisplayList(Davy_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
