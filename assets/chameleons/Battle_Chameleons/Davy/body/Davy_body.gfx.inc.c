#include "common.h"

Gfx Battle_Chameleons_Davy_body_Gfx[] = {
    gsSPMatrix(&AnimationSlots[0], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
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

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Davy_backpackStrap_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Davy_backpackStrap_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 63, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Davy_body_Vtx[0], 11, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(4, 0, 1, 0),
    gsSP1Triangle(3, 0, 4, 0),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(7, 1, 8, 0),
    gsSP1Triangle(8, 2, 10, 0),
    gsSP1Triangle(6, 10, 3, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(6, 4, 5, 0),
    gsSP1Triangle(9, 10, 6, 0),
    gsSP1Triangle(5, 7, 9, 0),
    gsSP1Triangle(6, 5, 9, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(10, 9, 8, 0),
    gsDPPipeSync(),
    
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0x32, 0x53, 0xD6, 0xFF),

    gsSPVertex(&Battle_Chameleons_Davy_body_Vtx[11], 5, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Battle_Chameleons_Davy_number_ci4_PAL),
    gsDPLoadTextureTile_4b(Battle_Chameleons_Davy_number_ci4_PNG, G_IM_FMT_CI, 32, 0, 0, 0, 31, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Battle_Chameleons_Davy_body_Vtx[16], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
