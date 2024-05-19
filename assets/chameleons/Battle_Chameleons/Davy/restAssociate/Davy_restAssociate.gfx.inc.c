#include "common.h"

Gfx Battle_Chameleons_Davy_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_Davy_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_Davy_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Davy_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
