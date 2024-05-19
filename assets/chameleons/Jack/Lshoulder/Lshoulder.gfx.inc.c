#include "common.h"

Gfx Jack_Lshoulder_Gfx[] = {
    gsSPMatrix(&AnimationSlots[10], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Jack_light_Light),
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
    gsDPSetPrimColor(0, 0, 0xC6, 0xFF, 0xE7, 0xFF),

    gsSPVertex(&Jack_Lshoulder_Vtx[0], 6, 0),
    gsSP1Triangle(4, 5, 0, 0),
    gsSP1Triangle(5, 2, 0, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsSP1Triangle(1, 4, 0, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(5, 4, 3, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
