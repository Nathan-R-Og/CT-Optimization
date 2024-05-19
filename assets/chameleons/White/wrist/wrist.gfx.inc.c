#include "common.h"

Gfx White_wrist_Gfx[] = {
    gsSPMatrix(&AnimationSlots[7], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(White_light_Light),
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
    gsDPSetPrimColor(0, 0, 0xFF, 0x00, 0x00, 0xFF),

    gsSPVertex(&White_wrist_Vtx[0], 15, 0),
    gsSP1Triangle(9, 13, 0, 0),
    gsSP1Triangle(5, 0, 3, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(1, 0, 13, 0),
    gsSP1Triangle(6, 7, 2, 0),
    gsSP1Triangle(11, 7, 6, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(11, 6, 10, 0),
    gsSP1Triangle(5, 3, 10, 0),
    gsSP1Triangle(14, 10, 4, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(10, 6, 5, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(12, 10, 14, 0),
    gsSP1Triangle(7, 11, 12, 0),
    gsSP1Triangle(7, 12, 8, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(14, 13, 12, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, White_wrist_ci4_PAL),
    gsDPLoadTextureTile_4b(White_wrist_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&White_wrist_Vtx[15], 6, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsDPPipeSync(),

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),

    gsSPVertex(&White_wrist_Vtx[21], 8, 0),
    gsSP1Triangle(0, 4, 6, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(7, 5, 2, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSP1Triangle(7, 6, 5, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
