#ifndef OBJ_UFO_DUST_H
#define OBJ_UFO_DUST_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int field_4;
    int field_8;
    ushort spriteIndex;
    ushort field_E;
} ObjectUFO_Dust;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int field_58;
    int field_5C;
    int height;
    int field_64;
    int worldX;
    int worldY;
    Animator animator;
} EntityUFO_Dust;

// Object Struct
extern ObjectUFO_Dust *UFO_Dust;

// Standard Entity Events
void UFO_Dust_Update(void);
void UFO_Dust_LateUpdate(void);
void UFO_Dust_StaticUpdate(void);
void UFO_Dust_Draw(void);
void UFO_Dust_Create(void* data);
void UFO_Dust_StageLoad(void);
void UFO_Dust_EditorDraw(void);
void UFO_Dust_EditorLoad(void);
void UFO_Dust_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_UFO_DUST_H