#include "common.h"

Gfx Fred_bodyAssociate_Gfx[] = {
    gsSPMatrix(&Fred_bodyAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Fred_body_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
