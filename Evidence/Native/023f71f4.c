/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$OnOpen
void Dino_BusSand_App_UI_LanguagePanel__OnOpen (Dino_BusSand_App_UI_LanguagePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023f81bc) */
/* WARNING: Removing unreachable block (ram,0x023f7b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$OnOpen
   void Dino_BusSand_App_UI_LanguagePanel__OnOpen (Dino_BusSand_App_UI_LanguagePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_LanguagePanel__OnOpen_22f71f4(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long *plStack_f8;
  long **pplStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  long *plStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  long *plStack_68;
  
  puVar4 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c48f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb7880);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7888);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cb7890);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c48f = 1;
  }
  uVar14 = _UNK_00e205b0;
  fVar31 = (float)Dino_BusSand_App_UI_KitPopup__Height_2280b34(_UNK_00e205b0,0);
  lVar26 = *(long *)puVar4;
  lVar21 = *(long *)(lVar26 + 0x38);
  if (lVar21 == 0) {
    FUN_0216b4cc(lVar26);
    lVar21 = *(long *)(lVar26 + 0x38);
  }
  lVar21 = *(long *)(lVar21 + 0x10);
  if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = FUN_0216b470();
  }
  if (*(int *)(lVar21 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cad330;
  lVar21 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
  if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cb7890;
  puVar5 = PTR_DAT_04cb7888;
  uVar27 = **(undefined8 **)(lVar21 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar27 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar6,*(undefined8 *)puVar5,uVar27,0);
  lVar21 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                     (0x44750000,fVar31,(_UNK_00e20028 - fVar31) * 0.5,param_1,uVar27,0,1,0);
  puVar8 = PTR_DAT_04cb7880;
  puVar7 = PTR_DAT_04caf448;
  puVar6 = PTR_DAT_04cad948;
  puVar5 = PTR_DAT_04cad460;
  puVar4 = PTR_DAT_04caa458;
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x38) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Object__set_name_43c72ec(*(long *)(lVar21 + 0x38),*(undefined8 *)PTR_DAT_04cad460,0);
  uVar27 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(uVar14,lVar21,*(undefined8 *)puVar7,0);
  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar5,uVar16,1,*(undefined8 *)puVar6,0);
  puVar6 = PTR_DAT_04cb78a0;
  puVar5 = PTR_DAT_04cb7898;
  puVar4 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c491 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb78a8);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb78b0);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cb78b8);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cafbd8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cb7868);
    FUN_02132f7c(PTR_DAT_04cb78c0);
    FUN_02132f7c(PTR_DAT_04cb78c8);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cb78d0);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb78a0);
    FUN_02132f7c(PTR_DAT_04cb78d8);
    FUN_02132f7c(PTR_DAT_04cb78e0);
    FUN_02132f7c(PTR_DAT_04cb78e8);
    FUN_02132f7c(PTR_DAT_04cb78f0);
    FUN_02132f7c(PTR_DAT_04cb78f8);
    FUN_02132f7c(PTR_DAT_04cb7900);
    FUN_02132f7c(PTR_DAT_04cb7898);
    FUN_02132f7c(PTR_DAT_04cb7908);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7910);
    FUN_02132f7c(PTR_DAT_04cb7918);
    FUN_02132f7c(PTR_DAT_04cb7870);
    FUN_02132f7c(PTR_DAT_04cb7920);
    FUN_02132f7c(PTR_DAT_04cadb88);
    FUN_02132f7c(PTR_DAT_04cb7928);
    FUN_02132f7c(PTR_DAT_04cb7878);
    FUN_02132f7c(PTR_DAT_04cb7930);
    FUN_02132f7c(PTR_DAT_04cb7938);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c491 = 1;
  }
  puVar7 = PTR_DAT_04cb7878;
  plStack_68 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar21 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar21,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar17 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar7,0);
  if (plVar17 != (long *)0x0) {
    lVar26 = *plVar17;
    uVar23 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar23 != 0) {
      piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_04cad288) {
          puVar18 = (undefined8 *)(lVar26 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_023f7738;
        }
        uVar23 = uVar23 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar23 != 0);
    }
    puVar18 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04cad288,0);
LAB_023f7738:
    plVar17 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
    puVar11 = PTR_DAT_04cb7930;
    puVar10 = PTR_DAT_04cb78c8;
    puVar9 = PTR_DAT_04cb7870;
    puVar8 = PTR_DAT_04cb20b0;
    puVar7 = PTR_DAT_04cad290;
    puVar6 = PTR_DAT_04cab718;
    puVar5 = PTR_DAT_04ca9c30;
    puVar4 = PTR_DAT_04ca9c08;
    pplStack_f0 = &plStack_68;
    plStack_f8 = (long *)0x0;
joined_r0x023f7750:
    do {
      plStack_68 = plVar17;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar26 = *plVar17;
      uVar23 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar23 != 0) {
        piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar4) {
            puVar18 = (undefined8 *)(lVar26 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_023f77e4;
          }
          uVar23 = uVar23 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar23 != 0);
      }
      puVar18 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)puVar4,0);
LAB_023f77e4:
      uVar23 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      plVar17 = plStack_68;
      if ((uVar23 & 1) == 0) {
        plVar17 = *pplStack_f0;
        if (plVar17 == (long *)0x0) goto LAB_023f7b24;
        lVar26 = *plVar17;
        uVar23 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar23 == 0) goto LAB_023f7afc;
        piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        goto LAB_023f7ae4;
      }
      if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar26 = *plStack_68;
      uVar23 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar23 != 0) {
        piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar7) {
            puVar18 = (undefined8 *)(lVar26 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_023f7848;
          }
          uVar23 = uVar23 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar23 != 0);
      }
      puVar18 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)puVar7,0);
LAB_023f7848:
      uVar16 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      uVar19 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar16,*(undefined8 *)puVar11,0);
      iVar13 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar19,1,0);
      plVar17 = plStack_68;
    } while (iVar13 != 1);
    lVar26 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7908);
    Dino_BusSand_App_UI_LanguagePanel_Row___ctor_22f956c(lVar26,0);
    uVar19 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar16,*(undefined8 *)PTR_DAT_04cb7928,0);
    uVar19 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar19,*(undefined8 *)puVar5,0);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar26 + 0x10) = uVar19;
    thunk_FUN_02134474();
    uVar19 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar16,*(undefined8 *)PTR_DAT_04cb7918,0);
    uVar19 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar19,*(undefined8 *)puVar5,0);
    *(undefined8 *)(lVar26 + 0x18) = uVar19;
    thunk_FUN_02134474();
    uVar19 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar16,*(undefined8 *)PTR_DAT_04cb7920,0);
    uVar14 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar19,0,0);
    uVar19 = *(undefined8 *)puVar9;
    *(undefined4 *)(lVar26 + 0x28) = uVar14;
    uVar16 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar16,uVar19,0);
    lVar20 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar16,0);
    if (lVar20 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&plStack_90,lVar20,*(undefined8 *)PTR_DAT_04cb20c0);
      uStack_a0 = uStack_80;
      pplStack_a8 = pplStack_88;
      plStack_b0 = plStack_90;
      plStack_90 = (long *)0x0;
      pplStack_88 = &plStack_b0;
      while (uVar23 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&plStack_b0,*(undefined8 *)puVar8), (uVar23 & 1) != 0) {
        lVar20 = *(long *)(lVar26 + 0x20);
        uVar16 = Dino_BusSand_App_MiniJson__Str_21564d0(uStack_a0,*(undefined8 *)puVar5,0);
        if (lVar20 == 0) {
LAB_023f7a7c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar22 = *(long *)(lVar20 + 0x10);
        lVar24 = *(long *)puVar6;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_023f7a7c;
        uVar15 = *(uint *)(lVar20 + 0x18);
        if (uVar15 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar20 + 0x18) = uVar15 + 1;
          *(undefined8 *)(lVar22 + (long)(int)uVar15 * 8 + 0x20) = uVar16;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar20,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&plStack_b0,*(undefined8 *)PTR_DAT_04cb20a8);
    }
    if (lVar21 != 0) {
      lVar20 = *(long *)(lVar21 + 0x10);
      lVar22 = *(long *)puVar10;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar20 != 0) {
        uVar15 = *(uint *)(lVar21 + 0x18);
        if (uVar15 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar15 + 1;
          plVar17 = (long *)(lVar20 + (long)(int)uVar15 * 8 + 0x20);
          *plVar17 = lVar26;
          thunk_FUN_02134474(plVar17,lVar26);
          plVar17 = plStack_68;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar21,lVar26,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          plVar17 = plStack_68;
        }
        goto joined_r0x023f7750;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  goto LAB_023f81a8;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar25 = piVar25 + 4;
    if (uVar23 == 0) break;
LAB_023f7ae4:
    if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar18 = (undefined8 *)(lVar26 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_023f7b18;
    }
  }
LAB_023f7afc:
  puVar18 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04ca9b30,0);
LAB_023f7b18:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_023f7b24:
  puVar4 = PTR_DAT_04cb78d8;
  if (plStack_f8 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  lVar26 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7898);
  System_Collections_Generic_List_object____ctor_3a814c8(lVar26,lVar21,*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_04cb78f8;
  puVar4 = PTR_DAT_04cb78f0;
  if (lVar26 != 0) {
    if (1 < *(int *)(lVar26 + 0x18)) {
      iVar13 = 1;
      iVar29 = 2;
      do {
        lVar21 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar26,iVar13,*(undefined8 *)puVar4);
        iVar28 = iVar29;
        do {
          iVar1 = iVar28 + -2;
          lVar20 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar26,iVar1,*(undefined8 *)puVar4);
          if ((lVar20 == 0) || (lVar21 == 0)) goto LAB_023f81a8;
          iVar28 = iVar28 + -1;
          if (*(int *)(lVar20 + 0x28) <= *(int *)(lVar21 + 0x28)) goto LAB_023f7c00;
          uVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar26,iVar1,*(undefined8 *)puVar4);
          System_Collections_Generic_List_object___set_Item_3a81978
                    (lVar26,iVar28,uVar16,*(undefined8 *)puVar5);
        } while (1 < iVar28);
        iVar28 = 0;
LAB_023f7c00:
        System_Collections_Generic_List_object___set_Item_3a81978
                  (lVar26,iVar28,lVar21,*(undefined8 *)puVar5);
        iVar13 = iVar13 + 1;
        iVar29 = iVar29 + 1;
      } while (iVar13 < *(int *)(lVar26 + 0x18));
    }
    puVar4 = PTR_DAT_04cb7938;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar21 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                       (0x41c00000,0x41c00000,0x41c00000,0x41c00000,uVar27,*(undefined8 *)puVar4,0);
    if ((lVar21 != 0) &&
       (lVar20 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0), puVar4 = PTR_DAT_04cadb88,
       lVar20 != 0)) {
      UnityEngine_GameObject__AddComponent_object__275a54c(lVar20,*(undefined8 *)PTR_DAT_04cafbd0);
      Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar21,0);
      lVar20 = Dino_BusSand_App_UI_UiKit__Node_22818c4(0,0,0,0,lVar21,*(undefined8 *)puVar4,0,0,0);
      puVar5 = PTR_DAT_04cb7900;
      puVar4 = PTR_DAT_04cb78e0;
      if (lVar20 != 0) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,lVar20,0);
        UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,lVar20,0);
        UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,lVar20,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar6 = PTR_DAT_04cb7868;
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar20,0);
        uVar15 = *(int *)(lVar26 + 0x18) - 1;
        fVar31 = (float)(int)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 136.0 + 56.0 + 120.0;
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(0,fVar31,lVar20,0);
        lVar22 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
        System_Collections_Generic_List_ValueTuple_object__object__object_____ctor_39ce030
                  (lVar22,*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_04cab550;
        if (*(int *)(lVar26 + 0x18) < 1) {
          iVar13 = -1;
          puVar18 = (undefined8 *)PTR_DAT_04cafbd8;
          puVar2 = (undefined8 *)PTR_DAT_04cb78a8;
          puVar3 = (undefined8 *)PTR_DAT_04cb78b0;
        }
        else {
          iVar29 = 0;
          iVar28 = -1;
          do {
            lVar24 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar26,iVar29,*(undefined8 *)PTR_DAT_04cb78f0);
            if (lVar24 == 0) goto LAB_023f81a8;
            lVar30 = *(long *)(lVar24 + 0x20);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (lVar30 == 0) goto LAB_023f81a8;
            bVar12 = System_Collections_Generic_List_object___Contains_3a81f90
                               (lVar30,**(undefined8 **)(*(long *)puVar4 + 0xb8),
                                *(undefined8 *)PTR_DAT_04cad298);
            iVar13 = iVar29;
            if ((bVar12 & 1 & iVar28 < 0) == 0) {
              iVar13 = iVar28;
            }
            uVar27 = Dino_BusSand_App_UI_LanguagePanel__BuildRow_22f8470
                               ((float)iVar29 * 136.0 + 88.0,param_1,lVar20,lVar24,bVar12 & 1,iVar29
                                ,&uStack_b8);
            uVar16 = *(undefined8 *)(lVar24 + 0x10);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar6);
            }
            uVar23 = Dino_BusSand_App_UI_LanguagePanel__CanRender_22f8938(uVar27,uVar16);
            uVar16 = uStack_b8;
            if ((uVar23 & 1) == 0) {
              lVar30 = *(long *)puVar6;
              if (*(int *)(lVar30 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar30 = *(long *)puVar6;
              }
              uVar16 = uStack_b8;
              if (*(char *)(*(long *)(lVar30 + 0xb8) + 8) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar15 = Dino_BusSand_App_LanguageFonts__WriteIn_2152e98(uVar27,uVar16,0);
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar6);
                }
                Dino_BusSand_App_UI_LanguagePanel__Name_22f8a04(uVar27,lVar24,uVar16,uVar15 & 1);
              }
              else {
                plStack_f8 = (long *)0x0;
                pplStack_f0 = (long **)0x0;
                uStack_e8 = 0;
                System_ValueTuple_object__object__object____ctor_31086d8
                          (&plStack_f8,uVar27,lVar24,uStack_b8,*(undefined8 *)PTR_DAT_04cb7910);
                if (lVar22 == 0) goto LAB_023f81a8;
                lVar24 = *(long *)(lVar22 + 0x10);
                lVar30 = *(long *)PTR_DAT_04cb78c0;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar24 == 0) goto LAB_023f81a8;
                uVar15 = *(uint *)(lVar22 + 0x18);
                if (uVar15 < *(uint *)(lVar24 + 0x18)) {
                  lVar24 = lVar24 + (long)(int)uVar15 * 0x18;
                  *(uint *)(lVar22 + 0x18) = uVar15 + 1;
                  *(undefined8 *)(lVar24 + 0x30) = uStack_e8;
                  *(long ***)(lVar24 + 0x28) = pplStack_f0;
                  *(long **)(lVar24 + 0x20) = plStack_f8;
                  thunk_FUN_02134474(lVar24 + 0x20,0);
                }
                else {
                  pplStack_88 = pplStack_f0;
                  plStack_90 = plStack_f8;
                  uStack_80 = uStack_e8;
                  System_Collections_Generic_List_ValueTuple_object__object__object____AddWithResize_39ce954
                            (lVar22,&plStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_LanguagePanel__Name_22f8a04(uVar27,lVar24,uVar16,1);
            }
            iVar29 = iVar29 + 1;
            iVar28 = iVar13;
            puVar18 = (undefined8 *)PTR_DAT_04cafbd8;
            puVar2 = (undefined8 *)PTR_DAT_04cb78a8;
            puVar3 = (undefined8 *)PTR_DAT_04cb78b0;
          } while (iVar29 < *(int *)(lVar26 + 0x18));
        }
        PTR_DAT_04cafbd8 = (undefined *)puVar18;
        PTR_DAT_04cb78a8 = (undefined *)puVar2;
        PTR_DAT_04cb78b0 = (undefined *)puVar3;
        if (lVar22 != 0) {
          System_Collections_Generic_List_ValueTuple_object__object__object____GetEnumerator_39cf524
                    (&plStack_e0,lVar22,*(undefined8 *)PTR_DAT_04cb78d0);
          puVar4 = PTR_DAT_04cab530;
          plStack_90 = (long *)0x0;
          pplStack_88 = &plStack_e0;
          while (uVar23 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object__object____MoveNext_35bd99c
                                    (&plStack_e0,*puVar3), uVar19 = uStack_c0, uVar16 = uStack_c8,
                uVar27 = uStack_d0, (uVar23 & 1) != 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = Dino_BusSand_App_LanguageFonts__WriteIn_2152e98(uVar27,uVar19,0);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_LanguagePanel__Name_22f8a04(uVar27,uVar16,uVar19,uVar15 & 1);
          }
          System_Collections_Generic_List_Enumerator_ValueTuple_object__object__object____Dispose_35bd998
                    (&plStack_e0,*puVar2);
          lVar26 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0);
          if ((lVar26 != 0) &&
             (lVar26 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar26,*puVar18),
             lVar26 != 0)) {
            *(long *)(lVar26 + 0x20) = lVar20;
            thunk_FUN_02134474((long *)(lVar26 + 0x20),lVar20);
            UnityEngine_UI_ScrollRect__set_viewport_468e0c8(lVar26,lVar21,0);
            *(undefined1 *)(lVar26 + 0x28) = 0;
            *(undefined4 *)(lVar26 + 0x2c) = 1;
            *(undefined4 *)(lVar26 + 0x3c) = 0x42200000;
            if (iVar13 < 1) {
              fVar31 = 0.0;
            }
            else {
              fVar31 = fVar31 + _UNK_00e2022c;
              fVar33 = (float)iVar13 * 136.0;
              fVar32 = 0.0;
              if (0.0 <= fVar31) {
                fVar32 = fVar31;
              }
              if (fVar33 <= fVar32) {
                fVar32 = fVar33;
              }
              fVar31 = 0.0;
              if (0.0 <= fVar33) {
                fVar31 = fVar32;
              }
            }
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,fVar31,lVar20,0);
            return;
          }
        }
      }
    }
  }
LAB_023f81a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

