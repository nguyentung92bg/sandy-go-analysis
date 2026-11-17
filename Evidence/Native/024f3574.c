/* IL2CPP: Dino.BusSand.View.VehicleBatch$$SetGlobals
void Dino_BusSand_View_VehicleBatch__SetGlobals (UnityEngine_Color_o sky, UnityEngine_Color_o equator, UnityEngine_Color_o ground, UnityEngine_Texture_o* env, float envIntensity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$SetGlobals
   void Dino_BusSand_View_VehicleBatch__SetGlobals (UnityEngine_Color_o sky, UnityEngine_Color_o
   equator, UnityEngine_Color_o ground, UnityEngine_Texture_o* env, float envIntensity, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch__SetGlobals_23f3574
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  
  puVar4 = PTR_DAT_04cbde80;
  puVar3 = PTR_DAT_04cbde78;
  puVar2 = PTR_DAT_04cbde70;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cabe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbde78);
    FUN_02132f7c(PTR_DAT_04cbde88);
    FUN_02132f7c(PTR_DAT_04cbde80);
    FUN_02132f7c(PTR_DAT_04cbde70);
    FUN_02132f7c(PTR_DAT_04cbde90);
    bRam0000000004f9cabe = 1;
  }
  UnityEngine_Shader__SetGlobalColor_4378e80
            (param_1,param_2,param_3,param_4,*(undefined8 *)puVar2,0);
  UnityEngine_Shader__SetGlobalColor_4378e80
            (param_5,param_6,param_7,param_8,*(undefined8 *)puVar3,0);
  UnityEngine_Shader__SetGlobalColor_4378e80
            (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
             uStack000000000000000c,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cbde90;
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_9,0,0);
  if ((uVar6 & 1) != 0) {
    UnityEngine_Shader__SetGlobalTexture_4378f84(*(undefined8 *)PTR_DAT_04cbde88,param_9,0);
  }
  uVar5 = UnityEngine_Shader__PropertyToID_4372cb4(*(undefined8 *)puVar1,0);
  if (pcRam0000000004fa6af8 == (code *)0x0) {
    pcRam0000000004fa6af8 = (code *)FUN_02132f40(&UNK_00e2cc5c);
  }
                    /* WARNING: Could not recover jumptable at 0x04478d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa6af8)(in_stack_00000010,uVar5);
  return;
}

