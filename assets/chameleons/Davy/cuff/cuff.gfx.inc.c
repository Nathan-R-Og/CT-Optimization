#include "common.h"

Gfx Davy_cuff_Gfx[] = {
    gsSPMatrix(&AnimationSlots[5], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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
    
    gsSPVertex(&Davy_cuff_Vtx[0], 6, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 1, 3, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),
    
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xC6, 0xCE, 0xFF, 0xFF),
    
    gsSPVertex(&Davy_cuff_Vtx[6], 9, 0),
    gsSP1Triangle(5, 7, 3, 0),
    gsSP1Triangle(7, 5, 6, 0),
    gsSP1Triangle(0, 2, 6, 0),
    gsSP1Triangle(6, 4, 0, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(8, 6, 2, 0),
    gsSP1Triangle(8, 2, 4, 0),
    gsSP1Triangle(3, 8, 5, 0),
    gsSP1Triangle(5, 8, 4, 0),
    gsSP1Triangle(8, 7, 6, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
