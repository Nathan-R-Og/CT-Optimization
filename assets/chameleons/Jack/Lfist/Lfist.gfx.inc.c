#include "common.h"

Gfx Jack_Lfist_Gfx[] = {
    gsSPMatrix(&AnimationSlots[12], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xC6, 0xFF, 0xE7, 0xFF),

    gsSPVertex(&Jack_Lfist_Vtx[0], 14, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(6, 13, 7, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(8, 7, 13, 0),
    gsSP1Triangle(11, 9, 8, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(11, 8, 13, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSP1Triangle(13, 12, 11, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Jack_fist3_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_fist3_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_Lfist_Vtx[14], 6, 0),
    gsSP1Triangle(0, 5, 2, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Jack_fistDiamond_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_fistDiamond_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_Lfist_Vtx[20], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(2, 1, 4, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Jack_fist4_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_fist4_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_Lfist_Vtx[26], 5, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 0, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Jack_fist2_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_fist2_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_Lfist_Vtx[31], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Jack_fist1_ci4_PAL),
    gsDPLoadTextureTile_4b(Jack_fist1_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Jack_Lfist_Vtx[37], 6, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 1, 3, 0),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(5, 4, 3, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
