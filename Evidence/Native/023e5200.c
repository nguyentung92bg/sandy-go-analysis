/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Glance
void Dino_BusSand_App_UI_HomeToonFace__Glance (Dino_BusSand_App_UI_HomeToonFace_o* __this, UnityEngine_Vector2_o dir, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Glance
   void Dino_BusSand_App_UI_HomeToonFace__Glance (Dino_BusSand_App_UI_HomeToonFace_o* __this,
   UnityEngine_Vector2_o dir, float seconds, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
               (float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_4 + 0x8c) = 0;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_4 + 0x84) = 0;
  uVar2 = CONCAT44(param_2,param_1) ^
          (CONCAT44(param_2,param_1) ^ uVar2) &
          CONCAT44(-(uint)((float)(uVar2 >> 0x20) < param_2),-(uint)((float)uVar2 < param_1));
  param_3 = *(float *)(param_4 + 0x58) + param_3;
  *(ulong *)(param_4 + 0x7c) =
       uVar2 ^ (uVar2 ^ uVar1) &
               CONCAT44(-(uint)(param_2 < (float)(uVar1 >> 0x20)),-(uint)(param_1 < (float)uVar1));
  *(float *)(param_4 + 0x94) = param_3;
  *(float *)(param_4 + 0x98) = param_3;
  return;
}

