#include "common.h"

Gfx Battle_Chameleons_Linda_restAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_Linda_restAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_Linda_bodyAssociate_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_head_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_backpack_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_shoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_Lshoe_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_cuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_Lcuff_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_wrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_Lwrist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_shoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_Lshoulder_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_fist_Gfx),
    gsSPDisplayList(Battle_Chameleons_Linda_Lfist_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
