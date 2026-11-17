/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass44_0$$<QuitPause>b__9
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass44_0___QuitPause_b__9 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass44_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass44_0$$<QuitPause>b__9
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass44_0___QuitPause_b__9
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass44_0_o* __this, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c__DisplayClass44_0___QuitPause_b__9_2346f40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb97d8);
    FUN_02132f7c(PTR_DAT_04cab330);
    FUN_02132f7c(PTR_DAT_04cb97e8);
    FUN_02132f7c(PTR_DAT_04cb97f0);
    bRam0000000004f9c6f6 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)PTR_DAT_04cab330;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698();
    if ((lVar6 == 0) ||
       (plVar7 = (long *)System_Object__GetType_4876970(lVar6,0), plVar7 == (long *)0x0))
    goto LAB_0244717c;
    uVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar6 == 0) goto LAB_0244717c;
  puVar9 = (undefined8 *)PTR_DAT_04cb97e8;
  if (*(char *)(lVar6 + 0x38) != '\0') {
    puVar9 = (undefined8 *)PTR_DAT_04cb97f0;
  }
  uVar4 = System_String__Concat_46c82e0(uVar4,*puVar9,0);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_0244717c;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_024470e8:
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)PTR_DAT_04cab718;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0244717c;
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
      *puVar9 = uVar4;
      thunk_FUN_02134474(puVar9,uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar6,*(int *)(lVar6 + 0x18) + -1,*(undefined8 *)PTR_DAT_04cb4190);
    uVar5 = System_String__op_Inequality_46d110c(uVar8,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_0244717c;
      goto LAB_024470e8;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar6 != 0) {
    lVar10 = *(long *)PTR_DAT_04cb97d8;
    puVar9 = *(undefined8 **)(lVar10 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      puVar9 = *(undefined8 **)(lVar10 + 0x38);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar10);
        puVar9 = *(undefined8 **)(lVar10 + 0x38);
      }
    }
    uVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar6,*puVar9);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004fa8638 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
      bRam0000000004fa8638 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
    return (uVar3 ^ 0xffffffff) & 1;
  }
LAB_0244717c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

