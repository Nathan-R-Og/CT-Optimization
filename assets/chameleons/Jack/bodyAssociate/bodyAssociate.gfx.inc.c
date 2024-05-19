#include "common.h"

Gfx Jack_bodyAssociate_Gfx[] = {
    gsSPMatrix(&Jack_bodyAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Jack_body_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
