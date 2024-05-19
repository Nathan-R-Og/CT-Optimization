#include "common.h"

Gfx Battle_Chameleons_Black_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_Black_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_Black_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Black_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
