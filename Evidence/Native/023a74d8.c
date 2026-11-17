/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel.<>c__DisplayClass18_0$$<OnOpen>b__0
void Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass18_0___OnOpen_b__0 (Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel.<>c__DisplayClass18_0$$<OnOpen>b__0
   void Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass18_0___OnOpen_b__0
   (Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass18_0___OnOpen_b__0_22a74d8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iStack_64;
  
  lVar15 = *(long *)(param_1 + 0x18);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if ((bRam0000000004f9c283 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cafec0);
    FUN_02132f7c(PTR_DAT_04cafec8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb22a0);
    FUN_02132f7c(PTR_DAT_04cb5c88);
    FUN_02132f7c(PTR_DAT_04cb5c68);
    FUN_02132f7c(PTR_DAT_04cb5c90);
    bRam0000000004f9c283 = 1;
  }
  puVar10 = PTR_DAT_04cb5c88;
  puVar9 = PTR_DAT_04cb5c68;
  puVar8 = PTR_DAT_04cafec8;
  puVar6 = PTR_DAT_04cad4c0;
  uVar5 = _UNK_00e204e8;
  uVar4 = _UNK_00e20390;
  if ((*(char *)(lVar15 + 0x44) != '\0') || (*(char *)(lVar15 + 0x2c) != '\0')) {
    return;
  }
  lVar11 = *(long *)(lVar15 + 0x38);
  if (lVar11 != 0) {
    iVar2 = iVar3;
    if (*(int *)(lVar11 + 0x18) <= iVar3) {
      iVar2 = *(int *)(lVar11 + 0x18);
    }
    iVar16 = 0;
    if (iVar3 < 1) {
      iVar2 = 1;
    }
    while (puVar7 = PTR_DAT_04cad568, iVar16 < *(int *)(lVar11 + 0x18)) {
      iVar3 = *(int *)(lVar15 + 0x40);
      lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar11,iVar16,*(undefined8 *)puVar8);
      puVar1 = (undefined8 *)puVar10;
      if (iVar16 < iVar2) {
        puVar1 = (undefined8 *)puVar9;
      }
      uVar12 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar1);
      if (lVar11 == 0) goto LAB_023a5ea4;
      UnityEngine_UI_Image__set_sprite_44a7258(lVar11,uVar12,0);
      if ((iVar16 < iVar2) && (iVar3 <= iVar16)) {
        if ((*(long *)(lVar15 + 0x38) == 0) ||
           (lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(lVar15 + 0x38),iVar16,*(undefined8 *)puVar8), lVar11 == 0)
           ) goto LAB_023a5ea4;
        uVar12 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar6);
        }
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(uVar4,uVar5,uVar12,0,0,0);
      }
      lVar11 = *(long *)(lVar15 + 0x38);
      iVar16 = iVar16 + 1;
      if (lVar11 == 0) goto LAB_023a5ea4;
    }
    if (iVar2 == *(int *)(lVar15 + 0x40)) {
LAB_023a6058:
      *(int *)(lVar15 + 0x40) = iVar2;
      return;
    }
    if (*(int *)(lVar15 + 0x40) < iVar2) {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar11 = *(long *)puVar7;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar7;
      }
      if (**(long **)(lVar11 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__PopStep_23838d4(0x3f800000,**(long **)(lVar11 + 0xb8),iVar2 + -1,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar11 = *(long *)puVar7;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar7;
      }
      if (**(long **)(lVar11 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__UiTick_2383128((float)iVar2 / 5.0,**(long **)(lVar11 + 0xb8),0);
      }
    }
    plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    puVar6 = PTR_DAT_04cb22a0;
    if (plVar13 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb22a0 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb22a0,*(undefined8 *)(*plVar13 + 0x40)),
         lVar11 == 0)) {
LAB_023a6080:
        uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar12,0);
      }
      if ((int)plVar13[3] != 0) {
        plVar13[4] = *(long *)puVar6;
        thunk_FUN_02134474();
        iStack_64 = iVar2;
        lVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_64);
        if ((lVar11 != 0) &&
           (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_023a6080;
        if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
          plVar13[5] = lVar11;
          thunk_FUN_02134474(plVar13 + 5,lVar11);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb5c90,plVar13,0);
          goto LAB_023a6058;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_023a5ea4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

