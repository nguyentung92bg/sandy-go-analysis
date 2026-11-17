/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$OnClick
void Dino_BusSand_App_UI_StreakRateHallBar__OnClick (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$OnClick
   void Dino_BusSand_App_UI_StreakRateHallBar__OnClick (const MethodInfo* method); */

long * Dino_BusSand_App_UI_StreakRateHallBar__OnClick_21e1224(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  char cVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bbae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0c58);
    FUN_02132f7c(PTR_DAT_04cb0c50);
    bRam0000000004f9bbae = 1;
  }
  plVar8 = *(long **)puVar2;
  if (*(int *)((long)plVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    plVar8 = *(long **)puVar2;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar16 = plVar8[0x17];
  if (*(long *)(lVar16 + 0x20) == 0) {
    return plVar8;
  }
  if (*(int *)((long)plVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
  lVar16 = 0;
  if ((uVar9 & 1) != 0) {
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar2;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
    if (lVar16 == 0) goto LAB_022e15a0;
    lVar16 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cb0c50,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
  if ((uVar9 & 1) != 0) {
    if ((lVar16 == 0) ||
       (lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0), lVar16 == 0))
    goto LAB_022e15a0;
    plVar8 = (long *)UnityEngine_GameObject__get_activeSelf_43c14cc(lVar16,0);
    if (((ulong)plVar8 & 1) != 0) {
      return plVar8;
    }
  }
  lVar16 = *(long *)puVar2;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar2;
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
  if (lVar16 == 0) {
LAB_022e15a0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar9 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar16,0);
  puVar4 = PTR_DAT_04caba50;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar16 = *(long *)puVar4;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar4;
    }
    uVar19 = **(undefined8 **)(lVar16 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    plVar8 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
    if (((ulong)plVar8 & 1) == 0) {
      return plVar8;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar16 = *(long *)puVar4;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar4;
    }
    lVar20 = **(long **)(lVar16 + 0xb8);
    plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(3,0);
    lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (plVar8 != (long *)0x0) {
      if ((lVar16 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
        uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar19,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar8[4] = lVar16;
      thunk_FUN_02134474(plVar8 + 4,lVar16);
      uVar19 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                         (*(undefined8 *)PTR_DAT_04cb0c58,plVar8,0);
      if (lVar20 != 0) {
        plVar8 = (long *)Dino_BusSand_App_GameApp__Toast_2166a6c(lVar20,uVar19,0);
        return plVar8;
      }
    }
    goto LAB_022e15a0;
  }
  lVar16 = *(long *)puVar2;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar2;
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
  if (lVar16 == 0) goto LAB_022e15a0;
  lVar16 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar16,0);
  uVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__GuideSimplified_2252620(3,0);
  if (((((uVar9 & 1) == 0) || (lVar16 == 0)) || (*(int *)(lVar16 + 0x4c) != 0)) ||
     (*(int *)(lVar16 + 0x48) != 0)) {
    if ((bRam0000000004f9bbbb & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04ca9c20);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cb0c60);
      FUN_02132f7c(PTR_DAT_04cb0c68);
      FUN_02132f7c(PTR_DAT_04cb0c58);
      FUN_02132f7c(PTR_DAT_04cb0c70);
      bRam0000000004f9bbbb = 1;
    }
    lVar16 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar16 == 0) {
      return (long *)0x0;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    uVar19 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar9 & 1) != 0) {
      return (long *)0x0;
    }
    uVar9 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar16,0);
    puVar4 = PTR_DAT_04caba50;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar4;
      }
      lVar20 = *(long *)puVar2;
      uVar19 = **(undefined8 **)(lVar16 + 0xb8);
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar20);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
      if ((uVar9 & 1) == 0) {
        return (long *)0x0;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar4;
      }
      lVar20 = **(long **)(lVar16 + 0xb8);
      plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(3,0);
      lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffbc);
      if (plVar8 != (long *)0x0) {
        if ((lVar16 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
          uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar19,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar8[4] = lVar16;
        thunk_FUN_02134474(plVar8 + 4,lVar16);
        uVar19 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                           (*(undefined8 *)PTR_DAT_04cb0c58,plVar8,0);
        if (lVar20 != 0) {
          Dino_BusSand_App_GameApp__Toast_2166a6c(lVar20,uVar19,0);
          return (long *)0x0;
        }
      }
LAB_022e18f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar16,0);
    if (lVar16 == 0) {
      return (long *)0x0;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar20 = **(long **)(*(long *)puVar3 + 0xb8);
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0c60);
    System_Object___ctor_4870e5c(lVar16,0);
    if (lVar16 == 0) goto LAB_022e18f0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    *(undefined1 *)(lVar16 + 0x10) = 0;
    thunk_FUN_02134474((undefined8 *)(lVar16 + 0x18),0);
    if (lVar20 == 0) goto LAB_022e18f0;
    lVar13 = *(long *)PTR_DAT_04cb0c70;
    lVar14 = *(long *)PTR_DAT_04cb0c68;
  }
  else {
    if ((bRam0000000004f9bb93 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,1,0);
      FUN_02132f7c(PTR_DAT_04cb0ab8);
      FUN_02132f7c(PTR_DAT_04cb0ac0);
      FUN_02132f7c(PTR_DAT_04cb0ac8);
      bRam0000000004f9bb93 = 1;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    uVar19 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar9 & 1) != 0) {
      return (long *)0x0;
    }
    **(undefined1 **)(*(long *)PTR_DAT_04cb0ab8 + 0xb8) = 1;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar20 = **(long **)(*(long *)puVar3 + 0xb8);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = 0;
    lVar13 = *(long *)PTR_DAT_04cb0ac8;
    lVar14 = *(long *)PTR_DAT_04cb0ac0;
  }
  if (*(long *)(lVar14 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar14 + 0x38) == 0) {
      FUN_0216b4cc(lVar14);
    }
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar19 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar8 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
  uVar19 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar14 + 0x38),0);
  if (plVar8 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar8 + 0x2b8))(plVar8,uVar19,*(undefined8 *)(*plVar8 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar9 & 1) != 0) {
      uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar13,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar19,0);
      return (long *)0x0;
    }
    uVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar10 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar19,uVar12,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar10 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar10 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar13,uVar19,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    if ((uVar9 & 1) == 0) goto LAB_02a45794;
    plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar19 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
    if (plVar8 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
      uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar19,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar8[4] = lVar10;
    thunk_FUN_02134474(plVar8 + 4,lVar10);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar10,lVar13,plVar8,0);
    lVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (((lVar11 == 0) ||
        (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar11 == 0)) ||
       (uVar7 = UnityEngine_GameObject__get_layer_43c1118(lVar11,0), lVar10 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar10,uVar7,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (lVar11 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar11,uVar19,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar10,lVar13,0);
  plVar8 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar8 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar8,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar8,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar8,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar8,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
               *(undefined4 *)(lVar11 + 0x14),plVar8,0);
  }
  lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar10,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar10,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar11 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar11,0x19,0);
    if (*(long *)(lVar20 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar20 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar22 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&lStack_90,*(undefined8 *)puVar2), lVar5 = lStack_80,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar9 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar5 + 0x2c) == '\0') && (*(int *)(lVar5 + 0x28) == 2)) {
            iVar22 = iVar22 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar11,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar11,iVar22 * 0x14 + 0x7e4,0);
      uVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar10,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
      if ((uVar9 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar10,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar10,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar10,0);
      plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar10,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
      lVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar10,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar14 != 0) {
        uVar15 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar15) {
          uVar21 = 0;
          do {
            if (uVar15 <= uVar21) goto LAB_02a45eb4;
            lVar11 = *(long *)(lVar14 + (long)(int)uVar21 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_02a45eb0;
            uVar19 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,lVar10,0);
            if ((uVar9 & 1) != 0) {
              uVar19 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar11,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
              if ((uVar9 & 1) != 0) {
                lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
                if (lVar11 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar11,*(undefined8 *)puVar4);
              }
            }
            uVar15 = *(uint *)(lVar14 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < (int)uVar15);
        }
        if (plVar8 != (long *)0x0) {
          plVar8[4] = lVar13;
          thunk_FUN_02134474(plVar8 + 4,lVar13);
          *(undefined4 *)(plVar8 + 5) = 2;
          lVar20 = *(long *)(lVar20 + 0x38);
          if (lVar20 != 0) {
            lVar14 = *(long *)(lVar20 + 0x10);
            lVar11 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar15 = *(uint *)(lVar20 + 0x18);
              if (uVar15 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar15 + 1;
                plVar17 = (long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
                *plVar17 = (long)plVar8;
                thunk_FUN_02134474(plVar17,plVar8);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar20,plVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar20 = *(long *)PTR_DAT_04cb4ce0;
                cVar18 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
                lVar20 = *(long *)puVar2;
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar19,lVar13,0);
                lVar20 = *(long *)puVar3;
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                  lVar20 = *(long *)puVar3;
                }
                cVar18 = **(char **)(lVar20 + 0xb8);
              }
              acStack_6c[0] = cVar18 != '\0';
              if (*(int *)(lVar20 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar20);
                lVar20 = *(long *)puVar3;
              }
              lVar13 = *(long *)(lVar20 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar13 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                  lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar13 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar8 + 0x178))(plVar8,lVar16,*(undefined8 *)(*plVar8 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar16 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar16 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar16 + 0xb8) + 1) = uVar1;
              }
              uVar19 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar19,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar16 = *(long *)puVar3;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar16 = *(long *)puVar3;
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
                  if (lVar16 != 0) {
                    (**(code **)(lVar16 + 0x18))
                              (*(undefined8 *)(lVar16 + 0x40),plVar8,*(undefined8 *)(lVar16 + 0x28))
                    ;
                  }
                }
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar19,0);
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar19,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar8,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar8,0);
                return plVar8;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

