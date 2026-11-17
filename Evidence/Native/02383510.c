/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Refresh
void Dino_BusSand_App_UI_KitTopBar__Refresh (Dino_BusSand_App_UI_KitTopBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Refresh
   void Dino_BusSand_App_UI_KitTopBar__Refresh (Dino_BusSand_App_UI_KitTopBar_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitTopBar__Refresh_2283510(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iStack_54;
  
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c15b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cb4e48);
    FUN_02132f7c(PTR_DAT_04cb4e50);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4e58);
    FUN_02132f7c(PTR_DAT_04cb4e60);
    FUN_02132f7c(PTR_DAT_04cadfe8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb4e68);
    bRam0000000004f9c15b = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  iStack_54 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
  lVar14 = *(long *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if (((uVar10 & 1) != 0) && (lVar9 = lVar9 - lVar14, lVar9 != *(long *)(param_1 + 0x40))) {
    lVar14 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x40) = lVar9;
    if ((lVar14 < 0) ||
       (uVar10 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar10 & 1) == 0
       )) {
      puVar3 = PTR_DAT_04cad330;
      plVar11 = *(long **)(param_1 + 0x20);
      *(long *)(param_1 + 0x38) = lVar9;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_App_UI_UiKit__Num_228348c(lVar9);
      if (plVar11 == (long *)0x0) goto LAB_02383cb4;
      (**(code **)(*plVar11 + 0x518))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x520));
    }
    else {
      if (lVar9 < lVar14) {
        uVar12 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e20210,_UNK_00e204e8,uVar12,0,0);
      }
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4e48);
      System_Func_long__object____ctor_37a2ae8(uVar12,param_1,*(undefined8 *)PTR_DAT_04cb4e50,0);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Count_2285af8(_UNK_00e2094c,0,uVar15,lVar14,lVar9,uVar12,0);
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    bVar5 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
    iVar6 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
    iStack_54 = iVar6;
    if ((bVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar8 = Dino_BusSand_App_Meta_Profile__SecondsToNextHeart_2272b38(0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      iVar7 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
      lVar9 = 0;
      uVar17 = (uint)(iVar7 <= iVar6);
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar4;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar9 == 0) goto LAB_02383cb4;
      lVar14 = *(long *)(lVar9 + 0x38);
      lVar9 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
      }
      lVar9 = System_Math__Max_4830fd4(0,lVar14 - lVar9,0);
      iVar8 = 0;
      uVar17 = 1;
    }
    puVar3 = PTR_DAT_04caf420;
    lVar14 = *(long *)PTR_DAT_04caf420;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_04cab550;
    if (((((*(char *)(*(long *)(lVar14 + 0xb8) + 0x50) != '\0') &&
          (*(char *)(param_1 + 0xbc) != '\0')) && (*(byte *)(param_1 + 0xbd) == (bVar5 & 1))) &&
        ((iVar6 == *(int *)(param_1 + 0xc0) && (iVar8 == *(int *)(param_1 + 0xc4))))) &&
       ((lVar9 == *(long *)(param_1 + 0xd0) && (uVar17 == *(uint *)(param_1 + 200))))) {
      lVar14 = *(long *)PTR_DAT_04cab550;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar3;
      }
      if (**(long **)(lVar14 + 0xb8) == *(long *)(param_1 + 0xd8)) {
        return;
      }
    }
    puVar3 = PTR_DAT_04cab550;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    *(byte *)(param_1 + 0xbd) = bVar5 & 1;
    lVar14 = *(long *)puVar3;
    *(int *)(param_1 + 0xc0) = iVar6;
    *(int *)(param_1 + 0xc4) = iVar8;
    *(long *)(param_1 + 0xd0) = lVar9;
    iVar6 = *(int *)(lVar14 + 0xe4);
    *(uint *)(param_1 + 200) = uVar17;
    if (iVar6 == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar3;
    }
    *(undefined8 *)(param_1 + 0xd8) = **(undefined8 **)(lVar14 + 0xb8);
    thunk_FUN_02134474();
    if ((bVar5 & 1) == 0) {
      if (iVar8 < 1) {
        lVar14 = *(long *)PTR_DAT_04ca9d18;
        lVar9 = *(long *)(lVar14 + 0x38);
        if (lVar9 == 0) {
          FUN_0216b4cc(lVar14);
          lVar9 = *(long *)(lVar14 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    /* try { // try from 02383a68 to 02483b9f has its CatchHandler @ 02383a68
                       catch() { ... } // from try @ 02383a68 with catch @ 02383a68
                       catch() { ... } // from try @ 02383e74 with catch @ 02383a68
                       catch() { ... } // from try @ 02383eec with catch @ 02383a68
                       catch() { ... } // from try @ 02383fa4 with catch @ 02383a68 */
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        }
        uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)PTR_DAT_04cadfe8,*(undefined8 *)PTR_DAT_04cb4e58,uVar12);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = Dino_BusSand_App_UI_CommerceUi__TimeString_22aae80((float)iVar8,0,1,0);
      }
      uVar15 = System_Int32__ToString_482d750(&iStack_54,0);
      iVar6 = iStack_54;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      iVar8 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
      bVar13 = iVar6 < iVar8;
      uVar17 = (uint)(iVar8 <= iVar6);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = 1;
      uVar12 = Dino_BusSand_App_UI_CommerceUi__TimeString_22aae80((float)lVar9,0,1,0);
      bVar13 = false;
      uVar15 = *(undefined8 *)PTR_DAT_04ca9c30;
    }
    uVar16 = *(undefined8 *)(param_1 + 0xa0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if (((uVar10 & 1) != 0) && (uVar17 != *(uint *)(param_1 + 0xb0))) {
      *(uint *)(param_1 + 0xb0) = uVar17;
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_02383cb4;
      UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*(long *)(param_1 + 0xa0),bVar13,0);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_02383cb4;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0xa8),bVar13,0);
    }
    uVar10 = System_String__op_Equality_46d1108(uVar12,*(undefined8 *)(param_1 + 0x50),0);
    if ((uVar10 & 1) != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
      if ((uVar10 & 1) != 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x98);
                    /* try { // try from 02383ba0 to 02483bc7 has its CatchHandler @ 02383ebc */
      if (plVar11 == (long *)0x0) goto LAB_02383cb4;
      uVar16 = (**(code **)(*plVar11 + 0x508))(plVar11,*(undefined8 *)(*plVar11 + 0x510));
      uVar10 = System_String__op_Equality_46d1108(uVar16,uVar15,0);
      if ((uVar10 & 1) != 0) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = uVar12;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar12);
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 == (long *)0x0) {
LAB_02383cb4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plVar11 + 0x518))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x520));
    uVar12 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02383c04 to 02483c2f has its CatchHandler @ 02383eb8 */
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar10 & 1) != 0) {
      plVar11 = *(long **)(param_1 + 0x98);
      if (plVar11 == (long *)0x0) goto LAB_02383cb4;
      (**(code **)(*plVar11 + 0x518))(plVar11,uVar15,*(undefined8 *)(*plVar11 + 0x520));
    }
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x30);
      puVar1 = (undefined8 *)PTR_DAT_04cb4e68;
                    /* try { // try from 02383c78 to 02483c7f has its CatchHandler @ 02383eb0 */
      if ((bVar5 & 1) == 0) {
        puVar1 = (undefined8 *)PTR_DAT_04cb4e60;
      }
      uVar12 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar1,0);
      if (lVar9 == 0) goto LAB_02383cb4;
                    /* try { // try from 02383c90 to 02483c93 has its CatchHandler @ 02383e90 */
                    /* try { // try from 02383c94 to 02483ca3 has its CatchHandler @ 02383eac */
      UnityEngine_UI_Image__set_sprite_44a7258(lVar9,uVar12,0);
    }
  }
  return;
}

