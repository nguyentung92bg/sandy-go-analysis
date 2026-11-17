/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$RunGuide
void Dino_BusSand_App_UI_PlayerSettingGuide__RunGuide (Dino_BusSand_App_UI_PlayerSettingGuide_o* __this, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$RunGuide
   void Dino_BusSand_App_UI_PlayerSettingGuide__RunGuide (Dino_BusSand_App_UI_PlayerSettingGuide_o*
   __this, System_Action_o* done, const MethodInfo* method); */

long * Dino_BusSand_App_UI_PlayerSettingGuide__RunGuide_22ffd60(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  char cVar18;
  long *plVar19;
  undefined8 uVar20;
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
  
  puVar2 = PTR_DAT_04cb7b88;
  if ((bRam0000000004f9c4d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7b90);
    FUN_02132f7c(PTR_DAT_04cb7b88);
    FUN_02132f7c(PTR_DAT_04cb7b98);
    bRam0000000004f9c4d1 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar8,0);
  if (lVar8 == 0) {
LAB_023fff28:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(lVar8 + 0x10) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar8 + 0x10),param_1);
  plVar19 = (long *)(lVar8 + 0x18);
  *plVar19 = param_2;
  thunk_FUN_02134474(plVar19,param_2);
  plVar9 = (long *)Dino_BusSand_App_UI_PlayerSettingGuide__get_NeedShowGuide_22ffba4(param_1);
  if (((ulong)plVar9 & 1) == 0) {
LAB_023ffeb4:
    lVar8 = *plVar19;
    if (lVar8 == 0) {
      return plVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x023ffed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar9 = (long *)(**(code **)(lVar8 + 0x18))
                               (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    return plVar9;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar20 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
  if (((ulong)plVar9 & 1) != 0) goto LAB_023ffeb4;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_023fff28;
  plVar9 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                             (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cb7b98);
  if (((ulong)plVar9 & 1) != 0) goto LAB_023ffeb4;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
  System_Action___ctor_47b5ed0(lVar10,lVar8,*(undefined8 *)PTR_DAT_04cb7b90,0);
  if ((bRam0000000004f9c4f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7ba0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb7ba8);
    bRam0000000004f9c4f4 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar20 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
  puVar2 = PTR_DAT_04cb7ba8;
  if ((uVar11 & 1) != 0) {
LAB_0240006c:
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    }
    return (long *)0x0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)puVar2,0);
  if ((uVar11 & 1) == 0) goto LAB_0240006c;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar15 = *(long *)puVar2;
  lVar16 = *(long *)PTR_DAT_04cb7ba0;
  if (*(long *)(lVar16 + 0x38) == 0) {
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
    if (*(long *)(lVar16 + 0x38) == 0) {
      FUN_0216b4cc(lVar16);
    }
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar20 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
  uVar20 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar16 + 0x38),0);
  if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar9 + 0x2b8))(plVar9,uVar20,*(undefined8 *)(*plVar9 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar20 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar15,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
    if ((uVar11 & 1) != 0) {
      uVar20 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar15,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar20,0);
      return (long *)0x0;
    }
    uVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar12 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar20,uVar14,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar12 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar12 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar15,uVar20,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar11 & 1) == 0) goto LAB_02a45794;
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar20 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0)) {
      uVar20 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar20,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[4] = lVar12;
    thunk_FUN_02134474(plVar9 + 4,lVar12);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar12,lVar15,plVar9,0);
    lVar13 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (((lVar13 == 0) ||
        (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar13 == 0)) ||
       (uVar7 = UnityEngine_GameObject__get_layer_43c1118(lVar13,0), lVar12 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar12,uVar7,0);
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (lVar13 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar13,uVar20,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar12,lVar15,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
  if ((uVar11 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
               *(undefined4 *)(lVar13 + 0x14),plVar9,0);
  }
  lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar12,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  if ((uVar11 & 1) != 0) {
    lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar12,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar13 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar13,0x19,0);
    if (*(long *)(lVar8 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar22 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar2), lVar5 = lStack_80,
            (uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar11 & 1) != 0) {
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
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar13,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar13,iVar22 * 0x14 + 0x7e4,0);
      uVar20 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar12,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
      if ((uVar11 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar12,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar12,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar12,0);
      plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar12,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
      lVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar12,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar16 != 0) {
        uVar17 = *(uint *)(lVar16 + 0x18);
        if (0 < (int)uVar17) {
          uVar21 = 0;
          do {
            if (uVar17 <= uVar21) goto LAB_02a45eb4;
            lVar13 = *(long *)(lVar16 + (long)(int)uVar21 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_02a45eb0;
            uVar20 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,lVar12,0);
            if ((uVar11 & 1) != 0) {
              uVar20 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar13,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
              if ((uVar11 & 1) != 0) {
                lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
                if (lVar13 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar13,*(undefined8 *)puVar4);
              }
            }
            uVar17 = *(uint *)(lVar16 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < (int)uVar17);
        }
        if (plVar9 != (long *)0x0) {
          plVar9[4] = lVar15;
          thunk_FUN_02134474(plVar9 + 4,lVar15);
          *(undefined4 *)(plVar9 + 5) = 2;
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 != 0) {
            lVar16 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar17 = *(uint *)(lVar8 + 0x18);
              if (uVar17 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar17 + 1;
                plVar19 = (long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
                *plVar19 = (long)plVar9;
                thunk_FUN_02134474(plVar19,plVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar8,plVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar8 = *(long *)PTR_DAT_04cb4ce0;
                cVar18 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar20,lVar15,0);
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar8 = *(long *)puVar3;
                }
                cVar18 = **(char **)(lVar8 + 0xb8);
              }
              acStack_6c[0] = cVar18 != '\0';
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar8);
                lVar8 = *(long *)puVar3;
              }
              lVar15 = *(long *)(lVar8 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar15 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar15 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar9 + 0x178))(plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar8 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 1) = uVar1;
              }
              uVar20 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar20,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar8 = *(long *)puVar3;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar8 = *(long *)puVar3;
                  }
                  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                  if (lVar8 != 0) {
                    (**(code **)(lVar8 + 0x18))
                              (*(undefined8 *)(lVar8 + 0x40),plVar9,*(undefined8 *)(lVar8 + 0x28));
                  }
                }
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar20,0);
                uVar20 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar20,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar9,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar9,0);
                return plVar9;
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

