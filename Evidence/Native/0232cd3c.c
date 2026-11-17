/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OpenMain
Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_Meta_ClimbTowerFeature__OpenMain (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, bool isGuide, System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OpenMain
   Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_Meta_ClimbTowerFeature__OpenMain
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, bool isGuide, System_Action_o* onClose, const
   MethodInfo* method); */

long * Dino_BusSand_App_Meta_ClimbTowerFeature__OpenMain_222cd3c
                 (undefined8 param_1,byte param_2,long param_3)

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
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x1;
  long lVar14;
  uint uVar15;
  long *plVar16;
  char cVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
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
  
  if ((bRam0000000004f9be41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be41 = 1;
  }
  uVar8 = Dino_BusSand_App_Meta_StreakTowerUtil__GuideSimplified_2252620(2,0);
  if ((uVar8 & 1) == 0) {
Dino_BusSand_App_UI_ClimbTowerPanel__Open_21a39c8:
                    /* try { // try from 0232cdac to 0242cec7 has its CatchHandler @ 0232cdac
                       catch() { ... } // from try @ 0232cdac with catch @ 0232cdac
                       catch() { ... } // from try @ 0232d17c with catch @ 0232cdac
                       catch() { ... } // from try @ 0232d204 with catch @ 0232cdac
                       catch() { ... } // from try @ 0232d294 with catch @ 0232cdac */
    if ((bRam0000000004f9ba2d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,param_3,0);
      FUN_02132f7c(PTR_DAT_04cae978);
      FUN_02132f7c(PTR_DAT_04cae980);
      FUN_02132f7c(PTR_DAT_04cae988);
      FUN_02132f7c(PTR_DAT_04cae990);
      bRam0000000004f9ba2d = 1;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    uVar18 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar18,0,0);
    if (((uVar8 & 1) != 0) ||
       (lVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_I_2228de4(0), lVar9 == 0)) {
      return (long *)0x0;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar9 = **(long **)(*(long *)puVar3 + 0xb8);
    if (lVar9 == 0) {
LAB_022a3b84:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar9,*(undefined8 *)PTR_DAT_04cae980);
    if ((uVar8 & 1) != 0) {
      return (long *)0x0;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar19 = **(long **)(*(long *)puVar3 + 0xb8);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae978);
    System_Object___ctor_4870e5c(lVar9,0);
    if (lVar9 == 0) goto LAB_022a3b84;
    *(long *)(lVar9 + 0x18) = param_3;
    *(byte *)(lVar9 + 0x10) = param_2 & 1;
    thunk_FUN_02134474((long *)(lVar9 + 0x18),param_3);
    if (lVar19 == 0) goto LAB_022a3b84;
    lVar13 = *(long *)PTR_DAT_04cae990;
    lVar14 = *(long *)PTR_DAT_04cae988;
    param_3 = lVar9;
  }
  else {
    lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar9 + 0x18) != 0) goto Dino_BusSand_App_UI_ClimbTowerPanel__Open_21a39c8;
    uVar18 = 0;
    if ((bRam0000000004f9ba4e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      FUN_02132f7c(PTR_DAT_04caebd0);
      FUN_02132f7c(PTR_DAT_04caebd8);
      bRam0000000004f9ba4e = 1;
      uVar18 = extraout_x1;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0,uVar18);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    uVar18 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar18,0,0);
    if (((uVar8 & 1) != 0) ||
       (lVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_I_2228de4(0), lVar9 == 0)) {
      return (long *)0x0;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar19 = **(long **)(*(long *)puVar3 + 0xb8);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *(long *)PTR_DAT_04caebd8;
    lVar14 = *(long *)PTR_DAT_04caebd0;
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
  uVar18 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar18,0);
  uVar18 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar14 + 0x38),0);
  if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar18,*(undefined8 *)(*plVar10 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar18 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar18,0,0);
    if ((uVar8 & 1) != 0) {
      uVar18 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar13,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar18,0);
      return (long *)0x0;
    }
    uVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar9 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar18,uVar12,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar9 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar18 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar9 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar13,uVar18,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar8 & 1) == 0) goto LAB_02a45794;
    plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar18 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar18,0);
    if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar9 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
      uVar18 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar18,0);
    }
    if ((int)plVar10[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar10[4] = lVar9;
    thunk_FUN_02134474(plVar10 + 4,lVar9);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar9,lVar13,plVar10,0);
    lVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,2,0);
    if (((lVar11 == 0) ||
        (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar11 == 0)) ||
       (uVar7 = UnityEngine_GameObject__get_layer_43c1118(lVar11,0), lVar9 == 0)) goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar9,uVar7,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
    uVar18 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,2,0);
    if (lVar11 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar11,uVar18,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar9,lVar13,0);
  plVar10 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
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
    lVar11 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
               *(undefined4 *)(lVar11 + 0x14),plVar10,0);
  }
  lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar9,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  if ((uVar8 & 1) != 0) {
    lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar9,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar11 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar11,0x19,0);
    if (*(long *)(lVar19 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar19 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
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
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar11,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar11,iVar21 * 0x14 + 0x7e4,0);
      uVar18 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar9,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar18,0,0);
      if ((uVar8 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)PTR_DAT_04cacf90);
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar9,0);
      plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar9,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x10));
      lVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar9,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar14 != 0) {
        uVar15 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar15) {
          uVar20 = 0;
          do {
            if (uVar15 <= uVar20) goto LAB_02a45eb4;
            lVar11 = *(long *)(lVar14 + (long)(int)uVar20 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_02a45eb0;
            uVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar18,lVar9,0);
            if ((uVar8 & 1) != 0) {
              uVar18 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar11,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar18,0,0);
              if ((uVar8 & 1) != 0) {
                lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
                if (lVar11 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar11,*(undefined8 *)puVar4);
              }
            }
            uVar15 = *(uint *)(lVar14 + 0x18);
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < (int)uVar15);
        }
        if (plVar10 != (long *)0x0) {
          plVar10[4] = lVar13;
          thunk_FUN_02134474(plVar10 + 4,lVar13);
          *(undefined4 *)(plVar10 + 5) = 2;
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 != 0) {
            lVar14 = *(long *)(lVar19 + 0x10);
            lVar11 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar15 = *(uint *)(lVar19 + 0x18);
              if (uVar15 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar19 + 0x18) = uVar15 + 1;
                plVar16 = (long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
                *plVar16 = (long)plVar10;
                thunk_FUN_02134474(plVar16,plVar10);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar19,plVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar19 = *(long *)PTR_DAT_04cb4ce0;
                cVar17 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar18 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                lVar19 = *(long *)puVar2;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar18,lVar13,0);
                lVar19 = *(long *)puVar3;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                  lVar19 = *(long *)puVar3;
                }
                cVar17 = **(char **)(lVar19 + 0xb8);
              }
              acStack_6c[0] = cVar17 != '\0';
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar19);
                lVar19 = *(long *)puVar3;
              }
              lVar13 = *(long *)(lVar19 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar13 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                  lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar13 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar10 + 0x178))(plVar10,param_3,*(undefined8 *)(*plVar10 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar19 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar19 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar19 + 0xb8) + 1) = uVar1;
              }
              uVar18 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar18,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar19 = *(long *)puVar3;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar3;
                  }
                  lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
                  if (lVar19 != 0) {
                    (**(code **)(lVar19 + 0x18))
                              (*(undefined8 *)(lVar19 + 0x40),plVar10,*(undefined8 *)(lVar19 + 0x28)
                              );
                  }
                }
                uVar18 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar18,0);
                uVar18 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar18,0);
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

