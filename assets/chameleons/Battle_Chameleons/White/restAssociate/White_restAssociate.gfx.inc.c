#include "common.h"

Gfx Battle_Chameleons_White_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_White_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_White_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_White_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
