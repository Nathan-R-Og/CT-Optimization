#include "common.h"

Gfx Rabbit_watch_Gfx[] = {
    gsSPMatrix(&AnimationSlots[9], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Rabbit_grouplight_Light),
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

    gsDPLoadTLUT_pal16(0, Rabbit_watch_ci4_PAL),
    gsDPLoadTextureTile_4b(Rabbit_watch_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 63, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Rabbit_watch_Vtx[0], 8, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(4, 3, 6, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsDPPipeSync(),

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xBE, 0x00, 0xFF),

    gsSPVertex(&Rabbit_watch_Vtx[8], 15, 0),
    gsSP1Triangle(5, 8, 4, 0),
    gsSP1Triangle(6, 11, 4, 0),
    gsSP1Triangle(6, 7, 11, 0),
    gsSP1Triangle(12, 11, 9, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSP1Triangle(10, 11, 7, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(3, 5, 13, 0),
    gsSP1Triangle(2, 3, 13, 0),
    gsSP1Triangle(0, 2, 13, 0),
    gsSP1Triangle(1, 0, 13, 0),
    gsSP1Triangle(14, 1, 13, 0),
    gsSP1Triangle(4, 13, 5, 0),
    gsSP1Triangle(13, 4, 11, 0),
    gsSP1Triangle(14, 13, 12, 0),

    gsSPVertex(&Rabbit_watch_Vtx[23], 6, 10),
    gsSP1Triangle(1, 13, 0, 0),
    gsSP1Triangle(14, 10, 2, 0),
    gsSP1Triangle(14, 15, 10, 0),
    gsSP1Triangle(11, 10, 15, 0),
    gsSP1Triangle(3, 2, 10, 0),
    gsSP1Triangle(3, 10, 5, 0),
    gsSP1Triangle(6, 4, 8, 0),
    gsSP1Triangle(8, 5, 10, 0),
    gsSP1Triangle(10, 11, 8, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSP1Triangle(12, 7, 8, 0),
    gsSP1Triangle(12, 8, 11, 0),

    gsSPVertex(&Rabbit_watch_Vtx[29], 9, 0),
    gsSP1Triangle(5, 14, 2, 0),
    gsSP1Triangle(5, 6, 14, 0),
    gsSP1Triangle(15, 14, 6, 0),
    gsSP1Triangle(0, 2, 14, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSP1Triangle(5, 2, 13, 0),
    gsSP1Triangle(13, 3, 4, 0),
    gsSP1Triangle(4, 7, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSP1Triangle(8, 6, 13, 0),
    gsSP1Triangle(8, 13, 7, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
