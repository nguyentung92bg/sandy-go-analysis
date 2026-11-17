/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$LookAt
void Dino_BusSand_App_UI_HomeToonFace__LookAt (Dino_BusSand_App_UI_HomeToonFace_o* __this, UnityEngine_Vector3_o world, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$LookAt
   void Dino_BusSand_App_UI_HomeToonFace__LookAt (Dino_BusSand_App_UI_HomeToonFace_o* __this,
   UnityEngine_Vector3_o world, float seconds, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04cb18b8;
  if ((bRam0000000004f9c471 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18b8);
    bRam0000000004f9c471 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  System_Nullable_Vector3____ctor_2bd0e4c(param_1,param_2,param_3,&uStack_50,*(undefined8 *)puVar1);
  *(undefined8 *)(param_5 + 0x8c) = uStack_48;
  *(undefined8 *)(param_5 + 0x84) = uStack_50;
  *(float *)(param_5 + 0x94) = *(float *)(param_5 + 0x58) + param_4;
  return;
}

