/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_FinishFlagEase
UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_FinishFlagEase (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_FinishFlagEase
   UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_FinishFlagEase
   (const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingAnimValues__get_FinishFlagEase_21e7a34(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = PTR_DAT_04cb0f00;
  if ((bRam0000000004f9bbda & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0f08);
    FUN_02132f7c(PTR_DAT_04cb0f10);
    FUN_02132f7c(PTR_DAT_04cb0f00);
    bRam0000000004f9bbda = 1;
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar2 + 0xb8);
  }
  lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb0f10,3);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  UnityEngine_Keyframe___ctor_43511f8(0,0,_UNK_00e20768,_UNK_00e20768,&uStack_40,0);
  uVar1 = _UNK_00e1ff70;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined4 *)(lVar4 + 0x38) = uStack_28;
    *(undefined8 *)(lVar4 + 0x30) = uStack_30;
    *(undefined8 *)(lVar4 + 0x28) = uStack_38;
    *(undefined8 *)(lVar4 + 0x20) = uStack_40;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    UnityEngine_Keyframe___ctor_43511f8(_UNK_00e20850,_UNK_00e20330,uVar1,uVar1,&uStack_60,0);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar4 + 0x54) = uStack_48;
      uVar1 = _UNK_00e20450;
      *(undefined8 *)(lVar4 + 0x44) = uStack_58;
      *(undefined8 *)(lVar4 + 0x3c) = uStack_60;
      *(undefined8 *)(lVar4 + 0x4c) = uStack_50;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      UnityEngine_Keyframe___ctor_43511f8(0x3f800000,0x3f800000,uVar1,uVar1,&uStack_80,0);
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + 0x70) = uStack_68;
        puVar3 = PTR_DAT_04cb0f08;
        *(undefined8 *)(lVar4 + 0x68) = uStack_70;
        *(undefined8 *)(lVar4 + 0x60) = uStack_78;
        *(undefined8 *)(lVar4 + 0x58) = uStack_80;
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        UnityEngine_AnimationCurve___ctor_4351c68(uVar5,lVar4,0);
        **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
        thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
        return **(long **)(*(long *)puVar2 + 0xb8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

