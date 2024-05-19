#include "common.h"

Gfx Rabbit_foot_Gfx[] = {
    gsSPMatrix(&AnimationSlots[3], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsSPVertex(&Rabbit_foot_Vtx[0], 12, 0),
    gsSP1Triangle(6, 7, 1, 0),
    gsSP1Triangle(5, 1, 7, 0),
    gsSP1Triangle(4, 0, 5, 0),
    gsSP1Triangle(1, 5, 0, 0),
    gsSP1Triangle(0, 4, 2, 0),
    gsSP1Triangle(8, 11, 2, 0),
    gsSP1Triangle(2, 11, 9, 0),
    gsSP1Triangle(8, 2, 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(1, 3, 6, 0),
    gsSP1Triangle(9, 3, 2, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 10, 8, 0),
    gsSP1Triangle(3, 10, 6, 0),
    gsSP1Triangle(4, 5, 10, 0),
    gsSP1Triangle(5, 7, 10, 0),
    gsSP1Triangle(10, 7, 6, 0),
    gsSP1Triangle(11, 8, 10, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
