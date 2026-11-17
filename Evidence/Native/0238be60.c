/* IL2CPP: Dino.BusSand.App.UI.UiKit$$get_IsEnglish
bool Dino_BusSand_App_UI_UiKit__get_IsEnglish (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d1308) */
/* WARNING: Removing unreachable block (ram,0x047d131c) */
/* WARNING: Removing unreachable block (ram,0x047d1320) */
/* WARNING: Removing unreachable block (ram,0x047d132c) */
/* WARNING: Removing unreachable block (ram,0x047d133c) */
/* WARNING: Removing unreachable block (ram,0x047d1238) */
/* WARNING: Removing unreachable block (ram,0x047d1240) */
/* WARNING: Removing unreachable block (ram,0x047d1248) */
/* WARNING: Removing unreachable block (ram,0x047d125c) */
/* WARNING: Removing unreachable block (ram,0x047d1264) */
/* WARNING: Removing unreachable block (ram,0x047d1270) */
/* WARNING: Removing unreachable block (ram,0x047d13d4) */
/* WARNING: Removing unreachable block (ram,0x047d13e8) */
/* WARNING: Removing unreachable block (ram,0x047d13f0) */
/* WARNING: Removing unreachable block (ram,0x047d13fc) */
/* WARNING: Removing unreachable block (ram,0x047d12a0) */
/* WARNING: Removing unreachable block (ram,0x047d12a8) */
/* WARNING: Removing unreachable block (ram,0x047d12b0) */
/* WARNING: Removing unreachable block (ram,0x047d146c) */
/* WARNING: Removing unreachable block (ram,0x047d12b8) */
/* WARNING: Removing unreachable block (ram,0x047d12c4) */
/* WARNING: Removing unreachable block (ram,0x047d12d8) */
/* WARNING: Removing unreachable block (ram,0x047d12dc) */
/* WARNING: Removing unreachable block (ram,0x047d1340) */
/* WARNING: Removing unreachable block (ram,0x047d134c) */
/* WARNING: Removing unreachable block (ram,0x047d1384) */
/* WARNING: Removing unreachable block (ram,0x047d135c) */
/* WARNING: Removing unreachable block (ram,0x047d1364) */
/* WARNING: Removing unreachable block (ram,0x04943840) */
/* WARNING: Removing unreachable block (ram,0x0494387c) */
/* WARNING: Removing unreachable block (ram,0x04943890) */
/* WARNING: Removing unreachable block (ram,0x04943970) */
/* WARNING: Removing unreachable block (ram,0x049438b0) */
/* WARNING: Removing unreachable block (ram,0x04943990) */
/* WARNING: Removing unreachable block (ram,0x049438c4) */
/* WARNING: Removing unreachable block (ram,0x049438e0) */
/* WARNING: Removing unreachable block (ram,0x04943904) */
/* WARNING: Removing unreachable block (ram,0x04943918) */
/* WARNING: Removing unreachable block (ram,0x04943950) */
/* WARNING: Removing unreachable block (ram,0x04943954) */
/* WARNING: Removing unreachable block (ram,0x04943958) */
/* WARNING: Removing unreachable block (ram,0x047d127c) */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$get_IsEnglish
   bool Dino_BusSand_App_UI_UiKit__get_IsEnglish (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiKit__get_IsEnglish_228be60(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9c188 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb51b8);
    bRam0000000004f9c188 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(**(undefined8 **)(lVar2 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)PTR_DAT_04cb51b8;
  if (lVar7 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,0);
    uVar5 = thunk_FUN_0216e89c();
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04caa800);
    System_ArgumentNullException___ctor_47afb54(uVar5,uVar6,0);
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b368);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar6);
  }
  if ((bRam0000000004facaee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d0b2e0);
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004facaee = 1;
  }
  if (lVar7 != 0) {
    if ((lVar2 == lVar7) || (*(int *)(lVar7 + 0x10) == 0)) {
      return 1;
    }
    if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar4 = (long *)System_Globalization_CultureInfo__get_CurrentCulture_47d0dbc(0);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200)),
       plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x047d141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,lVar2,lVar7,0,*(undefined8 *)(*plVar4 + 0x1d0));
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
  uVar5 = thunk_FUN_0216e89c();
  uVar6 = thunk_FUN_021985a8(PTR_DAT_04caa800);
  System_ArgumentNullException___ctor_47afb54(uVar5,uVar6,0);
  uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b370);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar5,uVar6);
}

