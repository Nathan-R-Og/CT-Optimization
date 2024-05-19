#include "common.h"

Gfx Linda_bodyAssociate_Gfx[] = {
    gsSPMatrix(&Linda_bodyAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Linda_body_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
