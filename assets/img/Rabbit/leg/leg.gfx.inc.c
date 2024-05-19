#include "common.h"

Gfx Rabbit_leg_Gfx[] = {
    gsSPMatrix(&AnimationSlots[5], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsSPVertex(&Rabbit_leg_Vtx[0], 16, 0),
    gsSP1Triangle(3, 7, 0, 0),
    gsSP1Triangle(6, 10, 7, 0),
    gsSP1Triangle(11, 7, 10, 0),
    gsSP1Triangle(0, 7, 11, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsSP1Triangle(5, 7, 4, 0),
    gsSP1Triangle(3, 4, 7, 0),
    gsSP1Triangle(8, 13, 14, 0),
    gsSP1Triangle(9, 13, 8, 0),
    gsSP1Triangle(2, 13, 9, 0),
    gsSP1Triangle(13, 10, 12, 0),
    gsSP1Triangle(13, 2, 1, 0),
    gsSP1Triangle(13, 1, 0, 0),
    gsSP1Triangle(13, 0, 11, 0),
    gsSP1Triangle(13, 11, 10, 0),
    gsSP1Triangle(13, 12, 15, 0),
    gsSP1Triangle(15, 14, 13, 0),

    gsSPVertex(&Rabbit_leg_Vtx[16], 9, 7),
    gsSP1Triangle(7, 1, 15, 0),
    gsSP1Triangle(7, 3, 1, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(2, 15, 1, 0),
    gsSP1Triangle(12, 13, 9, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSP1Triangle(8, 12, 9, 0),
    gsSP1Triangle(8, 15, 14, 0),
    gsSP1Triangle(14, 12, 8, 0),
    gsSP1Triangle(8, 4, 15, 0),
    gsSP1Triangle(7, 15, 4, 0),
    gsSP1Triangle(3, 7, 4, 0),
    gsSP1Triangle(4, 8, 5, 0),
    gsSP1Triangle(9, 11, 5, 0),
    gsSP1Triangle(9, 5, 8, 0),
    gsSP1Triangle(6, 5, 11, 0),

    gsSPVertex(&Rabbit_leg_Vtx[25], 8, 0),
    gsSP1Triangle(0, 3, 14, 0),
    gsSP1Triangle(0, 14, 1, 0),
    gsSP1Triangle(15, 1, 14, 0),
    gsSP1Triangle(3, 12, 14, 0),
    gsSP1Triangle(13, 12, 2, 0),
    gsSP1Triangle(4, 10, 2, 0),
    gsSP1Triangle(13, 2, 10, 0),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(11, 5, 6, 0),
    gsSP1Triangle(11, 10, 5, 0),
    gsSP1Triangle(5, 10, 4, 0),
    gsSP1Triangle(7, 6, 5, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
