#include "common.h"

Gfx Battle_Chameleons_Fred_Lfist_Gfx[] = {
    gsSPMatrix(&AnimationSlots[12], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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
    gsDPSetPrimColor(0, 0, 0xFF, 0xE7, 0xC6, 0xFF),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[0], 7, 0),
    gsSP1Triangle(4, 0, 1, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(5, 6, 2, 0),
    gsSP1Triangle(1, 6, 4, 0),
    gsSP1Triangle(1, 3, 6, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(6, 5, 4, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Fred_fist4_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Fred_fist4_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[7], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Fred_fistDiamond_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Fred_fistDiamond_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[11], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Fred_fist3_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Fred_fist3_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[15], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Fred_fist2_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Fred_fist2_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[19], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Fred_fist1_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Fred_fist1_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Fred_Lfist_Vtx[23], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
