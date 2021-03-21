#ifndef OBJ_BSS_PLAYER_H
#define OBJ_BSS_PLAYER_H

#include "../SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    ushort jumpPressState;
    ushort field_6;
    ushort sonicSpriteIndex;
    ushort tailsSpriteIndex;
    ushort knuxSpriteIndex;
    ushort mightySpriteIndex;
    ushort raySpriteIndex;
    ushort sfx_Jump;
} ObjectBSS_Player;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int gravityStrength;
    bool32 sideKick;
    void (*inputState)();
    int field_64;
    bool32 up;
    bool32 down;
    bool32 left;
    bool32 right;
    bool32 jumpPress;
    AnimationData playerData;
    AnimationData tailData;
    ushort spriteIndex;
    ushort field_AE;
} EntityBSS_Player;

// Object Struct
extern ObjectBSS_Player *BSS_Player;

// Standard Entity Events
void BSS_Player_Update();
void BSS_Player_LateUpdate();
void BSS_Player_StaticUpdate();
void BSS_Player_Draw();
void BSS_Player_Create(void* data);
void BSS_Player_StageLoad();
void BSS_Player_EditorDraw();
void BSS_Player_EditorLoad();
void BSS_Player_Serialize();

// Extra Entity Functions
void BSS_Player_HandleP1Inputs();
void BSS_Player_HandleP2Inputs();

#endif //!OBJ_BSS_PLAYER_H