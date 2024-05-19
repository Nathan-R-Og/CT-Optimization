#include "common.h"

Gfx Davy_Lshoe_Gfx[] = {
    gsSPMatrix(&AnimationSlots[4], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    //general texture settings ; global??? i guess??? just make sure to change it when you need to
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    //sets palette type (?)
    gsDPSetTextureLUT(G_TT_RGBA16),

    gsDPLoadTLUT_pal16(0, Davy_shoe_ci4_PAL),
    gsDPLoadTextureTile_4b(Davy_shoe_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Davy_Lshoe_Vtx[0], 16, 0),
    gsSP1Triangle(7, 4, 6, 0),
    gsSP1Triangle(9, 6, 8, 0),
    gsSP1Triangle(2, 8, 6, 0),
    gsSP1Triangle(2, 6, 4, 0),
    gsSP1Triangle(9, 5, 6, 0),
    gsSP1Triangle(15, 14, 10, 0),
    gsSP1Triangle(15, 10, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsSP1Triangle(15, 12, 13, 0),
    gsSP1Triangle(15, 13, 3, 0),
    gsSP1Triangle(15, 3, 1, 0),
    gsSP1Triangle(15, 1, 0, 0),
    gsSP1Triangle(15, 0, 14, 0),

    gsSPVertex(&Davy_Lshoe_Vtx[16], 6, 10),
    gsSP1Triangle(4, 1, 2, 0),
    gsSP1Triangle(0, 1, 13, 0),
    gsSP1Triangle(1, 4, 13, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(10, 7, 15, 0),
    gsSP1Triangle(11, 7, 10, 0),
    gsSP1Triangle(12, 7, 11, 0),
    gsSP1Triangle(12, 14, 7, 0),
    gsSP1Triangle(4, 7, 14, 0),
    gsSP1Triangle(15, 6, 5, 0),
    gsSP1Triangle(7, 6, 15, 0),

    gsSPVertex(&Davy_Lshoe_Vtx[22], 13, 0),
    gsSP1Triangle(4, 5, 2, 0),
    gsSP1Triangle(15, 3, 11, 0),
    gsSP1Triangle(11, 5, 6, 0),
    gsSP1Triangle(11, 0, 15, 0),
    gsSP1Triangle(5, 11, 3, 0),
    gsSP1Triangle(1, 9, 14, 0),
    gsSP1Triangle(9, 1, 0, 0),
    gsSP1Triangle(9, 10, 13, 0),
    gsSP1Triangle(14, 13, 7, 0),
    gsSP1Triangle(8, 13, 10, 0),
    gsSP1Triangle(13, 14, 9, 0),
    gsSP1Triangle(0, 11, 12, 0),
    gsSP1Triangle(12, 9, 0, 0),
    gsSP1Triangle(10, 9, 12, 0),
    gsSP1Triangle(6, 12, 11, 0),

    gsSPVertex(&Davy_Lshoe_Vtx[35], 9, 7),
    gsSP1Triangle(9, 7, 0, 0),
    gsSP1Triangle(8, 9, 1, 0),
    gsSP1Triangle(8, 1, 10, 0),
    gsSP1Triangle(0, 1, 9, 0),
    gsSP1Triangle(11, 10, 1, 0),
    gsSP1Triangle(14, 13, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(14, 15, 4, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(5, 4, 15, 0),
    gsSP1Triangle(6, 5, 15, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
