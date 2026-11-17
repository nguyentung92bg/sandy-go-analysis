/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<>c__DisplayClass13_0$$<GuideStep>b__0
bool Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass13_0___GuideStep_b__0 (Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass13_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<>c__DisplayClass13_0$$<GuideStep>b__0
   bool Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass13_0___GuideStep_b__0
   (Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass13_0_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_LevelEnterFlow___c__DisplayClass13_0___GuideStep_b__0_233e114(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04cacb20;
  if ((bRam0000000004f9c670 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    bRam0000000004f9c670 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cacb20;
  if ((bRam0000000004f9c664 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c664 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (*(int *)(*(long *)(lVar3 + 0xb8) + 0xc) == iVar1) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar5 != 0) {
        return *(int *)(lVar5 + 0x20) == 2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return false;
}

