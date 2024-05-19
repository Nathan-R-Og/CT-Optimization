#include "common.h"

Gfx Davy_Lcuff_Gfx[] = {
    gsSPMatrix(&AnimationSlots[6], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),

    //lights. yeah
    gsSPSetLights1(Davy_light_Light),
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
    gsDPSetPrimColor(0, 0, 0x32, 0x53, 0xD6, 0xFF),

    gsSPVertex(&Davy_Lcuff_Vtx[0], 6, 0),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSP1Triangle(0, 5, 2, 0),
    gsSP1Triangle(0, 1, 5, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),
    
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xC6, 0xCE, 0xFF, 0xFF),
    
    gsSPVertex(&Davy_Lcuff_Vtx[6], 9, 0),
    gsSP1Triangle(7, 0, 2, 0),
    gsSP1Triangle(0, 7, 3, 0),
    gsSP1Triangle(0, 3, 2, 0),
    gsSP1Triangle(3, 8, 4, 0),
    gsSP1Triangle(1, 8, 5, 0),
    gsSP1Triangle(1, 4, 8, 0),
    gsSP1Triangle(7, 8, 3, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(6, 5, 8, 0),
    gsSP1Triangle(3, 6, 2, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSP1Triangle(8, 7, 6, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
