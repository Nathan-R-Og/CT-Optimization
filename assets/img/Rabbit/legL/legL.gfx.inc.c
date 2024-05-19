#include "common.h"

Gfx Rabbit_legL_Gfx[] = {
    gsSPMatrix(&AnimationSlots[7], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsSPVertex(&Rabbit_legL_Vtx[0], 16, 0),
    gsSP1Triangle(10, 11, 14, 0),
    gsSP1Triangle(7, 13, 11, 0),
    gsSP1Triangle(7, 11, 8, 0),
    gsSP1Triangle(9, 8, 11, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSP1Triangle(13, 12, 11, 0),
    gsSP1Triangle(12, 14, 11, 0),
    gsSP1Triangle(3, 15, 2, 0),
    gsSP1Triangle(6, 4, 15, 0),
    gsSP1Triangle(15, 3, 1, 0),
    gsSP1Triangle(15, 14, 12, 0),
    gsSP1Triangle(15, 12, 13, 0),
    gsSP1Triangle(15, 13, 0, 0),
    gsSP1Triangle(15, 0, 5, 0),
    gsSP1Triangle(15, 1, 14, 0),
    gsSP1Triangle(5, 6, 15, 0),
    gsSP1Triangle(4, 2, 15, 0),

    gsSPVertex(&Rabbit_legL_Vtx[16], 8, 8),
    gsSP1Triangle(5, 0, 10, 0),
    gsSP1Triangle(15, 1, 8, 0),
    gsSP1Triangle(12, 8, 14, 0),
    gsSP1Triangle(14, 8, 2, 0),
    gsSP1Triangle(8, 12, 15, 0),
    gsSP1Triangle(1, 3, 8, 0),
    gsSP1Triangle(3, 2, 8, 0),
    gsSP1Triangle(10, 9, 5, 0),
    gsSP1Triangle(6, 9, 4, 0),
    gsSP1Triangle(4, 9, 13, 0),
    gsSP1Triangle(9, 11, 13, 0),
    gsSP1Triangle(11, 9, 10, 0),
    gsSP1Triangle(6, 5, 9, 0),

    gsSPVertex(&Rabbit_legL_Vtx[24], 10, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(9, 4, 2, 0),
    gsSP1Triangle(15, 0, 5, 0),
    gsSP1Triangle(6, 5, 0, 0),
    gsSP1Triangle(14, 7, 13, 0),
    gsSP1Triangle(8, 13, 7, 0),
    gsSP1Triangle(13, 12, 14, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(1, 10, 9, 0),
    gsSP1Triangle(11, 10, 3, 0),
    gsSP1Triangle(1, 3, 10, 0),

    gsSPVertex(&Rabbit_legL_Vtx[34], 4, 12),
    gsSP1Triangle(0, 13, 14, 0),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(3, 14, 12, 0),
    gsSP1Triangle(15, 12, 14, 0),
    gsSP1Triangle(15, 14, 13, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
