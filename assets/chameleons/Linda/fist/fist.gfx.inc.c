#include "common.h"

Gfx Linda_fist_Gfx[] = {
    gsSPMatrix(&AnimationSlots[11], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsDPLoadTLUT_pal16(0, Linda_fist1_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_fist1_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_fist_Vtx[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Linda_fist2_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_fist2_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_fist_Vtx[4], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Linda_fist3_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_fist3_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_fist_Vtx[8], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Linda_fistDiamond_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_fistDiamond_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_fist_Vtx[12], 6, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsSP1Triangle(1, 5, 3, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Linda_fist4_ci4_PAL),
    gsDPLoadTextureTile_4b(Linda_fist4_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Linda_fist_Vtx[18], 9, 0),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(2, 6, 1, 0),
    gsSP1Triangle(7, 8, 4, 0),
    gsSP1Triangle(2, 3, 8, 0),
    gsSP1Triangle(6, 2, 8, 0),
    gsSP1Triangle(5, 8, 3, 0),
    gsSP1Triangle(5, 4, 8, 0),
    gsSP1Triangle(8, 7, 6, 0),
    gsDPPipeSync(),

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xEF, 0xD6, 0xD6, 0xFF),

    gsSPVertex(&Linda_fist_Vtx[27], 14, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(8, 7, 9, 0),
    gsSP1Triangle(6, 10, 7, 0),
    gsSP1Triangle(6, 11, 10, 0),
    gsSP1Triangle(10, 9, 7, 0),
    gsSP1Triangle(13, 8, 12, 0),
    gsSP1Triangle(12, 10, 11, 0),
    gsSP1Triangle(9, 12, 8, 0),
    gsSP1Triangle(10, 12, 9, 0),
    gsSP1Triangle(13, 12, 11, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
