#include "common.h"

Gfx Battle_Chameleons_Linda_head_Gfx[] = {
    gsSPMatrix(&AnimationSlots[1], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsDPLoadTLUT_pal256(Battle_Chameleons_Linda_eye_ci8_PAL),
    gsDPLoadTextureTile(Battle_Chameleons_Linda_eye_ci8_PNG, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Linda_head_Vtx[0], 4, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal256(Battle_Chameleons_Linda_eye2_ci8_PAL),
    gsDPLoadTextureTile(Battle_Chameleons_Linda_eye2_ci8_PNG, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Linda_head_Vtx[4], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Linda_bow_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Linda_bow_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Linda_head_Vtx[8], 4, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Linda_cheek_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Linda_cheek_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Linda_head_Vtx[12], 16, 0),
    gsSP1Triangle(4, 2, 0, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(4, 15, 2, 0),
    gsSP1Triangle(1, 13, 9, 0),
    gsSP1Triangle(2, 13, 1, 0),
    gsSP1Triangle(2, 15, 13, 0),
    gsSP1Triangle(8, 3, 11, 0),
    gsSP1Triangle(11, 3, 9, 0),
    gsSP1Triangle(5, 10, 4, 0),
    gsSP1Triangle(15, 4, 10, 0),
    gsSP1Triangle(10, 7, 12, 0),
    gsSP1Triangle(8, 11, 7, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsSP1Triangle(10, 5, 7, 0),
    gsSP1Triangle(7, 11, 12, 0),
    gsSP1Triangle(8, 7, 6, 0),
    gsSP1Triangle(9, 14, 11, 0),
    gsSP1Triangle(15, 10, 14, 0),
    gsSP1Triangle(13, 14, 9, 0),
    gsSP1Triangle(12, 14, 10, 0),
    gsSP1Triangle(12, 11, 14, 0),
    gsSP1Triangle(15, 14, 13, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
