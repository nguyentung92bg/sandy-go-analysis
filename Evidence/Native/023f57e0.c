/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_Lift
float Dino_BusSand_App_UI_HomeToonRig__get_Lift (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_Lift
   float Dino_BusSand_App_UI_HomeToonRig__get_Lift (Dino_BusSand_App_UI_HomeToonRig_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_App_UI_HomeToonRig__get_Lift_22f57e0
                (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c47e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47e = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  fVar5 = 0.0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_3 + 0x20),0);
    puVar1 = PTR_DAT_04cb71b0;
    lVar3 = *(long *)PTR_DAT_04cb71b0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    fVar5 = (param_2 - *(float *)(*(long *)(lVar3 + 0xb8) + 4)) * _UNK_00e20270;
  }
  return fVar5;
}

