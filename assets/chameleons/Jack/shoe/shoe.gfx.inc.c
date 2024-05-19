#include "common.h"

Gfx Jack_shoe_Gfx[] = {
    gsSPMatrix(&AnimationSlots[3], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    //general texture settings ; global??? i guess??? just make sure to change it when you need to
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    //sets palette type (?)
    gsDPSetTextureLUT(G_TT_RGBA16),

    gsDPLoadTLUT_pal16(0, Jack_shoe_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_shoe_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_shoe_Vtx[0], 16, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(7, 1, 6, 0),
    gsSP1Triangle(4, 7, 6, 0),
    gsSP1Triangle(2, 3, 6, 0),
    gsSP1Triangle(15, 14, 8, 0),
    gsSP1Triangle(15, 8, 9, 0),
    gsSP1Triangle(15, 9, 10, 0),
    gsSP1Triangle(15, 10, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsSP1Triangle(15, 12, 13, 0),
    gsSP1Triangle(15, 13, 0, 0),
    gsSP1Triangle(15, 0, 14, 0),

    gsSPVertex(&Jack_shoe_Vtx[16], 9, 7),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(7, 0, 8, 0),
    gsSP1Triangle(7, 1, 11, 0),
    gsSP1Triangle(12, 7, 11, 0),
    gsSP1Triangle(0, 7, 12, 0),
    gsSP1Triangle(1, 7, 5, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(8, 5, 7, 0),
    gsSP1Triangle(15, 14, 10, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsSP1Triangle(15, 10, 9, 0),
    gsSP1Triangle(13, 2, 10, 0),
    gsSP1Triangle(13, 10, 14, 0),
    gsSP1Triangle(6, 10, 2, 0),
    gsSP1Triangle(4, 6, 3, 0),
    gsSP1Triangle(6, 5, 10, 0),

    gsSPVertex(&Jack_shoe_Vtx[25], 11, 0),
    gsSP1Triangle(2, 3, 14, 0),
    gsSP1Triangle(14, 15, 2, 0),
    gsSP1Triangle(5, 14, 3, 0),
    gsSP1Triangle(14, 5, 13, 0),
    gsSP1Triangle(4, 0, 13, 0),
    gsSP1Triangle(5, 4, 13, 0),
    gsSP1Triangle(6, 13, 0, 0),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(1, 12, 7, 0),
    gsSP1Triangle(7, 6, 1, 0),
    gsSP1Triangle(11, 7, 12, 0),
    gsSP1Triangle(10, 8, 11, 0),
    gsSP1Triangle(10, 11, 9, 0),

    gsSPVertex(&Jack_shoe_Vtx[36], 8, 8),
    gsSP1Triangle(8, 10, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(9, 1, 10, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSP1Triangle(15, 13, 11, 0),
    gsSP1Triangle(13, 15, 2, 0),
    gsSP1Triangle(14, 2, 12, 0),
    gsSP1Triangle(2, 14, 13, 0),
    gsSP1Triangle(15, 3, 2, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
