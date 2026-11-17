/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$OnEnable
void Dino_BusSand_App_UI_TapRipple__OnEnable (Dino_BusSand_App_UI_TapRipple_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$OnEnable
   void Dino_BusSand_App_UI_TapRipple__OnEnable (Dino_BusSand_App_UI_TapRipple_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_TapRipple__OnEnable_228a950(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04cb5148;
  puVar2 = PTR_DAT_04cb2870;
  puVar1 = PTR_DAT_04cb2860;
  if ((bRam0000000004f9c173 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2860);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cb5148);
    bRam0000000004f9c173 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_Vector2____ctor_35f2774(uVar5,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 0238a9d8 to 0248a9db has its CatchHandler @ 0238a9f8 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0238a9dc to 0248aa0f has its CatchHandler @ 0238a840 */
  puVar1 = PTR_DAT_04cb2870;
  if ((bRam0000000004f9c919 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2860,0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c919 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cb2860;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  do {
    lVar7 = System_Delegate__Combine_4872324(lVar6,uVar5,0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_0216e7a0(lVar7,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar7,uVar9);
      }
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = FUN_0216aff4(*(long *)(lVar7 + 0xb8) + 0x18,lVar8,lVar6);
    bVar4 = lVar7 != lVar6;
    lVar6 = lVar7;
  } while (bVar4);
  return;
}

