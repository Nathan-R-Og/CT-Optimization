#include "common.h"

Gfx Black_shoe_Gfx[] = {
    gsSPMatrix(&AnimationSlots[3], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Black_light_Light),
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

    gsDPLoadTLUT_pal16(0, Black_shoe_ci4_PAL),
    gsDPLoadTextureTile_4b(Black_shoe_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Black_shoe_Vtx[0], 15, 0),
    gsSP1Triangle(2, 5, 4, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsSP1Triangle(6, 5, 1, 0),
    gsSP1Triangle(14, 13, 7, 0),
    gsSP1Triangle(14, 7, 8, 0),
    gsSP1Triangle(14, 8, 9, 0),
    gsSP1Triangle(14, 9, 10, 0),
    gsSP1Triangle(14, 10, 11, 0),
    gsSP1Triangle(14, 11, 12, 0),
    gsSP1Triangle(14, 12, 0, 0),
    gsSP1Triangle(14, 0, 13, 0),

    gsSPVertex(&Black_shoe_Vtx[15], 10, 6),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(9, 10, 6, 0),
    gsSP1Triangle(9, 6, 8, 0),
    gsSP1Triangle(13, 6, 10, 0),
    gsSP1Triangle(7, 0, 15, 0),
    gsSP1Triangle(7, 8, 6, 0),
    gsSP1Triangle(14, 7, 6, 0),
    gsSP1Triangle(0, 7, 14, 0),
    gsSP1Triangle(8, 7, 11, 0),
    gsSP1Triangle(11, 15, 4, 0),
    gsSP1Triangle(15, 11, 7, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsSP1Triangle(9, 8, 12, 0),
    gsSP1Triangle(10, 9, 12, 0),
    gsSP1Triangle(3, 13, 12, 0),
    gsSP1Triangle(2, 1, 5, 0),
    gsSP1Triangle(12, 5, 3, 0),
    gsSP1Triangle(11, 4, 5, 0),
    gsSP1Triangle(12, 11, 5, 0),

    gsSPVertex(&Black_shoe_Vtx[25], 13, 0),
    gsSP1Triangle(4, 15, 2, 0),
    gsSP1Triangle(15, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSP1Triangle(5, 3, 15, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSP1Triangle(8, 6, 5, 0),
    gsSP1Triangle(10, 8, 7, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(9, 0, 11, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSP1Triangle(12, 11, 0, 0),
    gsSP1Triangle(0, 1, 12, 0),
    gsSP1Triangle(1, 14, 13, 0),
    gsSP1Triangle(13, 12, 1, 0),

    gsSPVertex(&Black_shoe_Vtx[38], 3, 13),
    gsSP1Triangle(13, 15, 1, 0),
    gsSP1Triangle(13, 1, 0, 0),
    gsSP1Triangle(14, 1, 15, 0),
    gsSP1Triangle(15, 2, 14, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
