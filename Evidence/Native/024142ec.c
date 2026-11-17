/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$<FlyAndContinue>b__31_0
void Dino_BusSand_App_UI_WinPanel___FlyAndContinue_b__31_0 (Dino_BusSand_App_UI_WinPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$<FlyAndContinue>b__31_0
   void Dino_BusSand_App_UI_WinPanel___FlyAndContinue_b__31_0 (Dino_BusSand_App_UI_WinPanel_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_WinPanel___FlyAndContinue_b__31_0_23142ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c55e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb83a8);
    bRam0000000004f9c55e = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_02414400;
    Dino_BusSand_App_UI_KitTopBar__Release_2283cb8(*(long *)(param_1 + 0x40),0x1fffffffffffffff,0);
  }
  puVar2 = PTR_DAT_04cb83a8;
  puVar1 = PTR_DAT_04cac1e8;
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
  System_Action___ctor_47b5ed0(uVar5,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e20aec,uVar5,0);
  if ((lVar4 != 0) && (lVar4 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar4,1,0), lVar4 != 0))
  {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar4 + 0x18),param_1,0);
    return lVar4;
  }
LAB_02414400:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

