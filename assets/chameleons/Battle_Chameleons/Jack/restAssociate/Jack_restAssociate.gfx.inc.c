#include "common.h"

Gfx Battle_Chameleons_Jack_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_Jack_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_Jack_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Jack_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
