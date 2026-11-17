/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_ClaimFrontEase
UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimFrontEase (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$get_ClaimFrontEase
   UnityEngine_AnimationCurve_o* Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimFrontEase
   (const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimFrontEase_21e7dc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_04cb0f00;
  if ((bRam0000000004f9bbdc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0f08);
    FUN_02132f7c(PTR_DAT_04cb0f10);
    FUN_02132f7c(PTR_DAT_04cb0f00);
    bRam0000000004f9bbdc = 1;
  }
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_28 = 0;
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_80 = 0;
  if (lVar3 != 0) {
    return lVar3;
  }
  UnityEngine_Keyframe___ctor_435120c(0,0,0,0,0,_UNK_00e208f0,&uStack_80,0);
  UnityEngine_Keyframe__set_weightedMode_4351234(&uStack_80,2,0);
  uStack_38 = uStack_78;
  uStack_40 = uStack_80;
  uStack_2c = uStack_6c;
  uStack_28 = uStack_68;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  UnityEngine_Keyframe___ctor_435120c(0x3f800000,0x3f800000,0,0,_UNK_00e1ff18,0,&uStack_80,0);
  UnityEngine_Keyframe__set_weightedMode_4351234(&uStack_80,1,0);
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb0f10,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack_34,uStack_38);
    *(undefined8 *)(lVar3 + 0x20) = uStack_40;
    *(ulong *)(lVar3 + 0x34) = CONCAT44(uStack_28,uStack_2c);
    *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack_30,uStack_34);
    puVar2 = PTR_DAT_04cb0f08;
    if (*(int *)(lVar3 + 0x18) != 1) {
      *(ulong *)(lVar3 + 0x44) = CONCAT44(uStack_54,uStack_58);
      *(undefined8 *)(lVar3 + 0x3c) = uStack_60;
      *(ulong *)(lVar3 + 0x50) = CONCAT44(uStack_48,uStack_4c);
      *(ulong *)(lVar3 + 0x48) = CONCAT44(uStack_50,uStack_54);
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 022e7f2c to 023e7f9b has its CatchHandler @ 022e7f2c
                       catch() { ... } // from try @ 022e7f2c with catch @ 022e7f2c
                       catch() { ... } // from try @ 022e81b4 with catch @ 022e7f2c
                       catch() { ... } // from try @ 022e8240 with catch @ 022e7f2c */
      UnityEngine_AnimationCurve___ctor_4351c68(uVar4,lVar3,0);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *puVar5 = uVar4;
      thunk_FUN_02134474(puVar5,uVar4);
      return *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

