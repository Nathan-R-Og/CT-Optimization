#include "common.h"

Gfx Battle_Chameleons_White_bodyAssociate_Gfx[] = {
    gsSPMatrix(&Battle_Chameleons_White_bodyAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Battle_Chameleons_White_body_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
