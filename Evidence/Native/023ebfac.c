/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$RefreshWinStreak
void Dino_BusSand_App_UI_HomePanel__RefreshWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$RefreshWinStreak
   void Dino_BusSand_App_UI_HomePanel__RefreshWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this,
   bool force, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__RefreshWinStreak_22ebfac(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int iStack_34;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c444 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb75c8);
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb75d0);
    FUN_02132f7c(PTR_DAT_04cb75d8);
    FUN_02132f7c(PTR_DAT_04cb75e0);
    FUN_02132f7c(PTR_DAT_04cb75e8);
    bRam0000000004f9c444 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  iStack_34 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  iVar6 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  bVar4 = iVar6 - 3U < 2 || iVar6 == 2;
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0), lVar8 == 0
     )) goto LAB_023ec490;
  bVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
  if (bVar4 != (bool)(bVar5 & 1)) {
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
       lVar8 == 0)) goto LAB_023ec490;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,bVar4,0);
  }
  if (iVar6 - 5U < 0xfffffffd) {
    *(int *)(param_1 + 0xb0) = iVar6;
    return;
  }
  lVar8 = Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed_22937e4(0);
  if (lVar8 == 0) goto LAB_023ec490;
  iVar1 = *(int *)(lVar8 + 0x18);
  iStack_34 = iVar1;
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x98),0), lVar8 == 0
     )) goto LAB_023ec490;
  UnityEngine_GameObject__SetActive_43c1408
            (lVar8,(iVar6 != 2 && iVar1 != 0) && (iVar6 == 2 || -1 < iVar1),0);
  plVar12 = *(long **)(param_1 + 0xa8);
  uVar11 = System_Int32__ToString_482d750(&iStack_34,0);
  if (plVar12 == (long *)0x0) goto LAB_023ec490;
  (**(code **)(*plVar12 + 0x518))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x520));
  if (iVar6 == 3) {
    Dino_BusSand_App_Meta_WinStreak__SegmentProgress_22950c0(0);
    Dino_BusSand_App_UI_HomePanel__SetWinStreakBar_22ec494(param_1);
    plVar12 = *(long **)(param_1 + 0xa0);
LAB_023ec188:
    lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
    if (lVar8 == 0) goto LAB_023ec490;
    uVar2 = *(undefined4 *)(lVar8 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
    }
    uVar11 = Dino_BusSand_App_UI_UiKit__LevelText_2282d78(uVar2,0);
  }
  else {
    Dino_BusSand_App_UI_HomePanel__SetWinStreakBar_22ec494(0,param_1);
    plVar12 = *(long **)(param_1 + 0xa0);
    if (iVar6 == 2) {
      lVar13 = *(long *)PTR_DAT_04ca9d18;
      lVar8 = *(long *)(lVar13 + 0x38);
      if (lVar8 == 0) {
        FUN_0216b4cc(lVar13);
        lVar8 = *(long *)(lVar13 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
      puVar9 = (undefined8 *)PTR_DAT_04cb75d0;
      puVar10 = (undefined8 *)PTR_DAT_04cb75e0;
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        puVar9 = (undefined8 *)PTR_DAT_04cb75d0;
        puVar10 = (undefined8 *)PTR_DAT_04cb75e0;
      }
    }
    else {
      if (iVar6 != 4) goto LAB_023ec188;
      lVar13 = *(long *)PTR_DAT_04ca9d18;
      lVar8 = *(long *)(lVar13 + 0x38);
      if (lVar8 == 0) {
        FUN_0216b4cc(lVar13);
        lVar8 = *(long *)(lVar13 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
      puVar9 = (undefined8 *)PTR_DAT_04cb75e8;
      puVar10 = (undefined8 *)PTR_DAT_04cb75d8;
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        puVar9 = (undefined8 *)PTR_DAT_04cb75e8;
        puVar10 = (undefined8 *)PTR_DAT_04cb75d8;
      }
    }
    uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar9,*puVar10,uVar11,0);
  }
  if (plVar12 == (long *)0x0) {
LAB_023ec490:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  (**(code **)(*plVar12 + 0x518))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x520));
  puVar3 = PTR_DAT_04cad330;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  bVar4 = iStack_34 < 1;
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar5 = Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(uVar11,0);
  if (iVar6 == 3 && bVar4 || (bVar5 & 1) != 0) {
    if (((iVar6 == 3 && bVar4) & bVar5) == 1) {
      uVar11 = *(undefined8 *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar11,0);
    }
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e2043c,_UNK_00e20170,uVar11,0);
  }
  *(int *)(param_1 + 0xb0) = iVar6;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
    puVar3 = PTR_DAT_04caa458;
    if (lVar8 == 0) goto LAB_023ec490;
    if ((iVar6 == 3) && (0 < *(int *)(lVar8 + 0x2c))) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)PTR_DAT_04cb75c8,0);
      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e20994,uVar11,0);
      if ((lVar8 == 0) ||
         (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 == 0))
      goto LAB_023ec490;
      Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,param_1,0);
    }
  }
  return;
}

