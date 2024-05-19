#include "common.h"

Gfx Rabbit_ear_Gfx[] = {
    gsSPMatrix(&AnimationSlots[0], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsSPVertex(&Rabbit_ear_Vtx[0], 14, 0),
    gsSP1Triangle(0, 12, 1, 0),
    gsSP1Triangle(5, 1, 12, 0),
    gsSP1Triangle(9, 7, 8, 0),
    gsSP1Triangle(3, 2, 10, 0),
    gsSP1Triangle(10, 2, 7, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSP1Triangle(10, 11, 3, 0),
    gsSP1Triangle(12, 0, 11, 0),
    gsSP1Triangle(11, 0, 4, 0),
    gsSP1Triangle(4, 3, 11, 0),
    gsSP1Triangle(1, 4, 0, 0),
    gsSP1Triangle(1, 5, 4, 0),
    gsSP1Triangle(3, 6, 2, 0),
    gsSP1Triangle(8, 2, 6, 0),
    gsSP1Triangle(6, 4, 5, 0),
    gsSP1Triangle(4, 6, 3, 0),
    gsSP1Triangle(13, 5, 12, 0),
    gsSP1Triangle(6, 5, 13, 0),
    gsSP1Triangle(6, 13, 8, 0),
    gsSP1Triangle(10, 7, 13, 0),
    gsSP1Triangle(7, 9, 13, 0),
    gsSP1Triangle(9, 8, 13, 0),
    gsSP1Triangle(11, 10, 13, 0),
    gsSP1Triangle(13, 12, 11, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
