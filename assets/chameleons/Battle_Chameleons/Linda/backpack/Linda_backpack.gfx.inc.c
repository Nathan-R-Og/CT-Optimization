#include "common.h"

Gfx Battle_Chameleons_Linda_backpack_Gfx[] = {
    gsSPMatrix(&AnimationSlots[2], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Battle_Chameleons_grouplight_Light),
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

    gsSPVertex(&Battle_Chameleons_Linda_backpack_Vtx[0], 8, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(2, 0, 1, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSP1Triangle(0, 3, 7, 0),
    gsSP1Triangle(3, 0, 4, 0),
    gsSP1Triangle(6, 7, 3, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsSP1Triangle(1, 7, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(4, 2, 5, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(7, 6, 5, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
