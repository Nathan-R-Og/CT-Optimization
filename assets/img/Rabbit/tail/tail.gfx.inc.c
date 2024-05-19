#include "common.h"

Gfx Rabbit_tail_Gfx[] = {
    gsSPMatrix(&AnimationSlots[8], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Rabbit_grouplight_Light),
    //idk, global?
    gsDPSetCycleType(G_CYC_1CYCLE),
    //idk
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    //inits geometry modes for the entire gfx
    gsSPClearGeometryMode(G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    //dither setting
    gsDPSetColorDither(G_CD_BAYER),

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),

    gsSPVertex(&Rabbit_tail_Vtx[0], 16, 0),
    gsSP1Triangle(6, 7, 13, 0),
    gsSP1Triangle(9, 1, 5, 0),
    gsSP1Triangle(6, 9, 5, 0),
    gsSP1Triangle(6, 13, 9, 0),
    gsSP1Triangle(9, 11, 1, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSP1Triangle(14, 10, 13, 0),
    gsSP1Triangle(14, 0, 10, 0),
    gsSP1Triangle(11, 9, 10, 0),
    gsSP1Triangle(12, 2, 1, 0),
    gsSP1Triangle(12, 10, 0, 0),
    gsSP1Triangle(11, 12, 1, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(12, 4, 2, 0),
    gsSP1Triangle(4, 12, 0, 0),
    gsSP1Triangle(7, 15, 13, 0),
    gsSP1Triangle(3, 0, 15, 0),
    gsSP1Triangle(14, 13, 15, 0),
    gsSP1Triangle(14, 15, 0, 0),
    gsSP1Triangle(7, 8, 15, 0),
    gsSP1Triangle(8, 3, 15, 0),

    gsSPVertex(&Rabbit_tail_Vtx[16], 2, 14),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(14, 15, 5, 0),
    gsSP1Triangle(8, 15, 3, 0),
    gsSP1Triangle(14, 5, 1, 0),
    gsSP1Triangle(3, 15, 2, 0),
    gsSP1Triangle(14, 1, 2, 0),
    gsSP1Triangle(14, 2, 15, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(7, 5, 15, 0),
    gsSP1Triangle(6, 5, 7, 0),
    gsSP1Triangle(8, 7, 15, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
