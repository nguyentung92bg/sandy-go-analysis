/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Open<object>
Il2CppObject* Dino_BusSand_App_UI_UIManager__Open_object_ (Dino_BusSand_App_UI_UIManager_o* __this, System_String_o* prefabKey, int32_t layer, Il2CppObject* param, const MethodInfo_2945314* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Open<object>
   Il2CppObject* Dino_BusSand_App_UI_UIManager__Open_object_ (Dino_BusSand_App_UI_UIManager_o*
   __this, System_String_o* prefabKey, int32_t layer, Il2CppObject* param, const MethodInfo_2945314*
   method); */

long * Dino_BusSand_App_UI_UIManager__Open_object__2945314
                 (long param_1,long param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  char cVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
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
  
  if (*(long *)(param_5 + 0x38) == 0) {
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
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_0216b4cc(param_5);
    }
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar16 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
  uVar16 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(param_5 + 0x38),0);
  if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
  uVar5 = (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_App_UiAssets__Prefab_21513b8(param_2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
    if ((uVar9 & 1) != 0) {
      uVar16 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar16,0);
      return (long *)0x0;
    }
    uVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(param_1,param_3,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar8 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar16,uVar11,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar8 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar16 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(param_1,param_3,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar8 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(param_2,uVar16,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_02a45794;
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar16 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
      uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar16,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar7[4] = lVar8;
    thunk_FUN_02134474(plVar7 + 4,lVar8);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar8,param_2,plVar7,0);
    lVar10 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(param_1,param_3,0);
    if (((lVar10 == 0) ||
        (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 == 0)) ||
       (uVar6 = UnityEngine_GameObject__get_layer_43c1118(lVar10,0), lVar8 == 0)) goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar8,uVar6,0);
    lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    uVar16 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(param_1,param_3,0);
    if (lVar10 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar10,uVar16,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar8,param_2,0);
  plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
  if ((uVar9 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
               *(undefined4 *)(lVar10 + 0x14),plVar7,0);
  }
  lVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar8,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar9 & 1) != 0) {
    lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar8,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar10 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar10,0x19,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar19 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&lStack_90,*(undefined8 *)puVar2), lVar18 = lStack_80,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
        if ((uVar9 & 1) != 0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar18 + 0x2c) == '\0') && (*(int *)(lVar18 + 0x28) == param_3)) {
            iVar19 = iVar19 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar10,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar10,iVar19 * 0x14 + param_3 * 1000 + 0x14,0);
      uVar16 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar8,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
      if ((uVar9 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar8,*(undefined8 *)PTR_DAT_04cacf90);
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar8,0);
      plVar7 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar8,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10));
      lVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar8,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar10 != 0) {
        uVar12 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar12) {
          uVar17 = 0;
          do {
            if (uVar12 <= uVar17) goto LAB_02a45eb4;
            lVar18 = *(long *)(lVar10 + (long)(int)uVar17 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_02a45eb0;
            uVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,lVar8,0);
            if ((uVar9 & 1) != 0) {
              uVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar18,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
              if ((uVar9 & 1) != 0) {
                lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
                if (lVar18 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar18,*(undefined8 *)puVar4);
              }
            }
            uVar12 = *(uint *)(lVar10 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar12);
        }
        if (plVar7 != (long *)0x0) {
          plVar7[4] = param_2;
          thunk_FUN_02134474(plVar7 + 4,param_2);
          *(int *)(plVar7 + 5) = param_3;
          lVar10 = *(long *)(param_1 + 0x38);
          if (lVar10 != 0) {
            lVar18 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar18 != 0) {
              uVar12 = *(uint *)(lVar10 + 0x18);
              if (uVar12 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar12 + 1;
                plVar13 = (long *)(lVar18 + (long)(int)uVar12 * 8 + 0x20);
                *plVar13 = (long)plVar7;
                thunk_FUN_02134474(plVar13,plVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar10,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar5 & 1) == 0) {
                lVar10 = *(long *)PTR_DAT_04cb4ce0;
                cVar14 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar10);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar16,param_2,0);
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar10);
                  lVar10 = *(long *)puVar3;
                }
                cVar14 = **(char **)(lVar10 + 0xb8);
              }
              acStack_6c[0] = cVar14 != '\0';
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar10);
                lVar10 = *(long *)puVar3;
              }
              lVar18 = *(long *)(lVar10 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar18 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar10);
                  lVar18 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar18 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar7 + 0x178))(plVar7,param_4,*(undefined8 *)(*plVar7 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar10 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar10 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 1) = uVar1;
              }
              uVar16 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar16,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar10 = *(long *)puVar3;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar10 = *(long *)puVar3;
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                  if (lVar10 != 0) {
                    (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),plVar7,*(undefined8 *)(lVar10 + 0x28))
                    ;
                  }
                }
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar16,0);
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar16,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar7,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar7,0);
                return plVar7;
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

