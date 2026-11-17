/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_ClaimBackEase
UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimBackEase (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_ClaimBackEase
   UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimBackEase (const
   MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimBackEase_21e7c00(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  if ((bRam0000000004f9bbdb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0f08);
    FUN_02132f7c(PTR_DAT_04cb0f10);
    FUN_02132f7c(PTR_DAT_04cb0f00);
    bRam0000000004f9bbdb = 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb0f10,3);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  UnityEngine_Keyframe___ctor_43511f8(0,0,0,0,&uStack_40,0);
  uVar1 = _UNK_00e20454;
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
    UnityEngine_Keyframe___ctor_43511f8(_UNK_00e204e0,_UNK_00e1ff74,uVar1,uVar1,&uStack_60,0);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar4 + 0x54) = uStack_48;
      uVar1 = _UNK_00e20034;
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
        puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *puVar6 = uVar5;
        thunk_FUN_02134474(puVar6,uVar5);
        return *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

