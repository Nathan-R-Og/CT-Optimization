#include "common.h"

Gfx Battle_Chameleons_Fred_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_Fred_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_Fred_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Fred_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
