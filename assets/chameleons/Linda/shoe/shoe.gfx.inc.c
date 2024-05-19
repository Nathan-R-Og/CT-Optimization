#include "common.h"

Gfx Linda_shoe_Gfx[] = {
    gsSPMatrix(&AnimationSlots[3], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    //general texture settings ; global??? i guess??? just make sure to change it when you need to
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    //sets palette type (?)
    gsDPSetTextureLUT(G_TT_RGBA16),

    gsDPLoadTLUT_pal16(0, Linda_shoe_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_shoe_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_shoe_Vtx[0], 16, 0),
    gsSP1Triangle(8, 6, 7, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsSP1Triangle(5, 9, 7, 0),
    gsSP1Triangle(3, 4, 7, 0),
    gsSP1Triangle(15, 1, 10, 0),
    gsSP1Triangle(15, 10, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsSP1Triangle(15, 12, 13, 0),
    gsSP1Triangle(15, 13, 14, 0),
    gsSP1Triangle(15, 14, 0, 0),
    gsSP1Triangle(15, 0, 2, 0),
    gsSP1Triangle(15, 2, 1, 0),

    gsSPVertex(&Linda_shoe_Vtx[16], 8, 8),
    gsSP1Triangle(13, 2, 12, 0),
    gsSP1Triangle(0, 12, 2, 0),
    gsSP1Triangle(1, 2, 15, 0),
    gsSP1Triangle(2, 13, 15, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(6, 14, 10, 0),
    gsSP1Triangle(8, 10, 14, 0),
    gsSP1Triangle(11, 3, 10, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSP1Triangle(7, 10, 3, 0),
    gsSP1Triangle(5, 7, 4, 0),
    gsSP1Triangle(7, 6, 10, 0),

    gsSPVertex(&Linda_shoe_Vtx[24], 11, 0),
    gsSP1Triangle(1, 15, 5, 0),
    gsSP1Triangle(5, 9, 1, 0),
    gsSP1Triangle(6, 5, 15, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSP1Triangle(13, 7, 6, 0),
    gsSP1Triangle(15, 13, 6, 0),
    gsSP1Triangle(7, 13, 8, 0),
    gsSP1Triangle(8, 12, 14, 0),
    gsSP1Triangle(12, 8, 13, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(10, 1, 9, 0),
    gsSP1Triangle(0, 1, 10, 0),

    gsSPVertex(&Linda_shoe_Vtx[35], 11, 5),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(6, 1, 5, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(10, 8, 7, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(13, 11, 10, 0),
    gsSP1Triangle(15, 13, 12, 0),
    gsSP1Triangle(13, 15, 14, 0),
    gsSP1Triangle(15, 2, 14, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
