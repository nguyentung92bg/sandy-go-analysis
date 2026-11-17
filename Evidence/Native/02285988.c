/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$Open
Dino_BusSand_App_UI_ActivityContinuePanel_o* Dino_BusSand_App_UI_ActivityContinuePanel__Open (System_String_o* prefab, Dino_BusSand_App_Meta_IStakeActivity_o* activity, System_Action_int__o* revive, System_Action_o* next, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$Open
   Dino_BusSand_App_UI_ActivityContinuePanel_o* Dino_BusSand_App_UI_ActivityContinuePanel__Open
   (System_String_o* prefab, Dino_BusSand_App_Meta_IStakeActivity_o* activity, System_Action_int__o*
   revive, System_Action_o* next, const MethodInfo* method); */

long * Dino_BusSand_App_UI_ActivityContinuePanel__Open_2185988
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  char cVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
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
  
                    /* catch() { ... } // from try @ 02285930 with catch @ 02285988 */
                    /* catch() { ... } // from try @ 022858e8 with catch @ 0228599c */
  if ((bRam0000000004f9b954 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad8f0);
    FUN_02132f7c(PTR_DAT_04cad8f8);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b954 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
                    /* catch() { ... } // from try @ 02285a6c with catch @ 02285a18 */
  uVar19 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
  if (((uVar8 & 1) != 0) ||
     (uVar8 = System_String__IsNullOrEmpty_46d2084(param_1,0), (uVar8 & 1) != 0)) {
    return (long *)0x0;
  }
                    /* try { // try from 02285a64 to 02385a6b has its CatchHandler @ 02285ab8 */
                    /* try { // try from 02285a6c to 02385acb has its CatchHandler @ 02285a18 */
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(param_1,0);
  if ((uVar8 & 1) == 0) {
    return (long *)0x0;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar20 = **(long **)(*(long *)puVar3 + 0xb8);
                    /* catch() { ... } // from try @ 02285a64 with catch @ 02285ab8 */
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad8f0);
  System_Object___ctor_4870e5c(lVar9,0);
  if (lVar9 == 0) {
LAB_02285b48:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(lVar9 + 0x10) = param_2;
                    /* try { // try from 02285ad8 to 02385adb has its CatchHandler @ 02285ae4 */
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x10),param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02285ad8 with catch @ 02285ae4
                        */
  *(undefined8 *)(lVar9 + 0x18) = param_3;
                    /* catch() { ... } // from try @ 02285b2c with catch @ 02285ae8 */
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x18),param_3);
  *(undefined8 *)(lVar9 + 0x20) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),param_4);
  if (lVar20 == 0) goto LAB_02285b48;
                    /* try { // try from 02285b20 to 02385b2b has its CatchHandler @ 02285bd0 */
  lVar14 = *(long *)PTR_DAT_04cad8f8;
                    /* try { // try from 02285b2c to 02385bef has its CatchHandler @ 02285ae8 */
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
  plVar10 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
  uVar19 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar14 + 0x38),0);
  if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar19,*(undefined8 *)(*plVar10 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_App_UiAssets__Prefab_21513b8(param_1,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar8 & 1) != 0) {
      uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,param_1,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar19,0);
      return (long *)0x0;
    }
    uVar13 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar11 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar19,uVar13,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar11 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar11 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(param_1,uVar19,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
    if ((uVar8 & 1) == 0) goto LAB_02a45794;
    plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar19 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar11 = System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
    if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
      uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar19,0);
    }
    if ((int)plVar10[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar10[4] = lVar11;
    thunk_FUN_02134474(plVar10 + 4,lVar11);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar11,param_1,plVar10,0);
    lVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (((lVar12 == 0) ||
        (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar12 == 0)) ||
       (uVar7 = UnityEngine_GameObject__get_layer_43c1118(lVar12,0), lVar11 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar11,uVar7,0);
    lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar20,2,0);
    if (lVar12 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar12,uVar19,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar11,param_1,0);
  plVar10 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
  if ((uVar8 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar10,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
               *(undefined4 *)(lVar12 + 0x14),plVar10,0);
  }
  lVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar11,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  if ((uVar8 & 1) != 0) {
    lVar12 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar11,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar12 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar12,0x19,0);
    if (*(long *)(lVar20 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar20 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar21 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&lStack_90,*(undefined8 *)puVar2), lVar5 = lStack_80,
            (uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar5 + 0x2c) == '\0') && (*(int *)(lVar5 + 0x28) == 2)) {
            iVar21 = iVar21 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar12,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar12,iVar21 * 0x14 + 0x7e4,0);
      uVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar11,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
      if ((uVar8 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar11,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar11,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar11,0);
      plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar11,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
      lVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar11,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar14 != 0) {
        uVar15 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar15) {
          uVar18 = 0;
          do {
            if (uVar15 <= uVar18) goto LAB_02a45eb4;
            lVar12 = *(long *)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_02a45eb0;
            uVar19 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,lVar11,0);
            if ((uVar8 & 1) != 0) {
              uVar19 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar12,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
              if ((uVar8 & 1) != 0) {
                lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
                if (lVar12 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar12,*(undefined8 *)puVar4);
              }
            }
            uVar15 = *(uint *)(lVar14 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar15);
        }
        if (plVar10 != (long *)0x0) {
          plVar10[4] = param_1;
          thunk_FUN_02134474(plVar10 + 4,param_1);
          *(undefined4 *)(plVar10 + 5) = 2;
          lVar20 = *(long *)(lVar20 + 0x38);
          if (lVar20 != 0) {
            lVar14 = *(long *)(lVar20 + 0x10);
            lVar12 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar15 = *(uint *)(lVar20 + 0x18);
              if (uVar15 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar15 + 1;
                plVar16 = (long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
                *plVar16 = (long)plVar10;
                thunk_FUN_02134474(plVar16,plVar10);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar20,plVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar20 = *(long *)PTR_DAT_04cb4ce0;
                cVar17 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                lVar20 = *(long *)puVar2;
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar19,param_1,0);
                lVar20 = *(long *)puVar3;
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                  lVar20 = *(long *)puVar3;
                }
                cVar17 = **(char **)(lVar20 + 0xb8);
              }
              acStack_6c[0] = cVar17 != '\0';
              if (*(int *)(lVar20 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar20);
                lVar20 = *(long *)puVar3;
              }
              lVar14 = *(long *)(lVar20 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar14 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar20);
                  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar14 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar10 + 0x178))(plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar9 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar9 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 1) = uVar1;
              }
              uVar19 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar19,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar9 = *(long *)puVar3;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar9 = *(long *)puVar3;
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
                  if (lVar9 != 0) {
                    (**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),plVar10,*(undefined8 *)(lVar9 + 0x28));
                  }
                }
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar19,0);
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar19,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar10,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar10,0);
                return plVar10;
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

