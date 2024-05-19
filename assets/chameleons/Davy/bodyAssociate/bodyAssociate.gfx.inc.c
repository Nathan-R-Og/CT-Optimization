#include "common.h"

Gfx Davy_bodyAssociate_Gfx[] = {
    gsSPMatrix(&Davy_bodyAssociate_Mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(Davy_body_Gfx),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
