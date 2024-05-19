#include "common.h"

Gfx Fred_head_Gfx[] = {
    gsSPMatrix(&AnimationSlots[1], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Fred_light_Light),
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

    gsDPLoadTLUT_pal256(Fred_eyeL_ci8_PAL),
    gsDPLoadTextureTile(Fred_eyeL_ci8_PNG, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Fred_head_Vtx[0], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal256(Fred_eyeR_ci8_PAL),
    gsDPLoadTextureTile(Fred_eyeR_ci8_PNG, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Fred_head_Vtx[4], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Fred_cheek_ci4_PAL),
    gsDPLoadTextureTile_4b(Fred_cheek_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Fred_head_Vtx[8], 16, 0),
    gsSP1Triangle(9, 5, 4, 0),
    gsSP1Triangle(6, 8, 4, 0),
    gsSP1Triangle(6, 4, 7, 0),
    gsSP1Triangle(3, 7, 4, 0),
    gsSP1Triangle(9, 4, 8, 0),
    gsSP1Triangle(15, 1, 10, 0),
    gsSP1Triangle(15, 10, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsSP1Triangle(15, 12, 13, 0),
    gsSP1Triangle(15, 13, 14, 0),
    gsSP1Triangle(15, 14, 0, 0),
    gsSP1Triangle(15, 0, 2, 0),
    gsSP1Triangle(15, 2, 1, 0),

    gsSPVertex(&Fred_head_Vtx[24], 9, 7),
    gsSP1Triangle(11, 9, 12, 0),
    gsSP1Triangle(15, 8, 10, 0),
    gsSP1Triangle(7, 1, 8, 0),
    gsSP1Triangle(12, 8, 0, 0),
    gsSP1Triangle(8, 15, 7, 0),
    gsSP1Triangle(2, 0, 8, 0),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(12, 10, 8, 0),
    gsSP1Triangle(4, 13, 3, 0),
    gsSP1Triangle(14, 13, 4, 0),
    gsSP1Triangle(5, 14, 4, 0),

    gsSPVertex(&Fred_head_Vtx[33], 8, 0),
    gsSP1Triangle(10, 5, 15, 0),
    gsSP1Triangle(1, 5, 14, 0),
    gsSP1Triangle(1, 15, 5, 0),
    gsSP1Triangle(2, 13, 3, 0),
    gsSP1Triangle(5, 7, 13, 0),
    gsSP1Triangle(13, 14, 5, 0),
    gsSP1Triangle(4, 13, 7, 0),
    gsSP1Triangle(4, 3, 13, 0),
    gsSP1Triangle(10, 12, 9, 0),
    gsSP1Triangle(9, 11, 0, 0),
    gsSP1Triangle(0, 6, 9, 0),
    gsSP1Triangle(10, 9, 5, 0),
    gsSP1Triangle(7, 5, 9, 0),
    gsSP1Triangle(7, 9, 6, 0),

    gsSPVertex(&Fred_head_Vtx[41], 15, 1),
    gsSP1Triangle(1, 2, 4, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(0, 6, 14, 0),
    gsSP1Triangle(4, 3, 6, 0),
    gsSP1Triangle(5, 6, 3, 0),
    gsSP1Triangle(6, 0, 4, 0),
    gsSP1Triangle(6, 5, 7, 0),
    gsSP1Triangle(7, 15, 14, 0),
    gsSP1Triangle(8, 7, 5, 0),
    gsSP1Triangle(7, 14, 6, 0),
    gsSP1Triangle(15, 9, 10, 0),
    gsSP1Triangle(15, 7, 9, 0),
    gsSP1Triangle(8, 9, 7, 0),
    gsSP1Triangle(12, 10, 9, 0),
    gsSP1Triangle(13, 10, 11, 0),
    gsSP1Triangle(12, 11, 10, 0),

    gsSPVertex(&Fred_head_Vtx[56], 11, 0),
    gsSP1Triangle(9, 10, 4, 0),
    gsSP1Triangle(9, 4, 2, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(5, 4, 10, 0),
    gsSP1Triangle(0, 14, 6, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSP1Triangle(14, 0, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(13, 8, 9, 0),
    gsSP1Triangle(10, 9, 8, 0),

    gsSPVertex(&Fred_head_Vtx[67], 4, 12),
    gsSP1Triangle(0, 12, 1, 0),
    gsSP1Triangle(13, 1, 12, 0),
    gsSP1Triangle(1, 13, 14, 0),
    gsSP1Triangle(15, 14, 13, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
