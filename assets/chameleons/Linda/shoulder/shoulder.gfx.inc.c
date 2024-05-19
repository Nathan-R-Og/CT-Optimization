#include "common.h"

Gfx Linda_shoulder_Gfx[] = {
    gsSPMatrix(&AnimationSlots[9], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Linda_light_Light),
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
    gsDPSetPrimColor(0, 0, 0xEF, 0xD6, 0xD6, 0xFF),

    gsSPVertex(&Linda_shoulder_Vtx[0], 6, 0),
    gsSP1Triangle(3, 0, 5, 0),
    gsSP1Triangle(5, 0, 1, 0),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(2, 0, 3, 0),
    gsSP1Triangle(2, 4, 1, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(5, 4, 3, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
