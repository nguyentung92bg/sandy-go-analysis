/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$BuildItems
void Dino_BusSand_App_UI_GiftPackPanel__BuildItems (Dino_BusSand_App_UI_GiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$BuildItems
   void Dino_BusSand_App_UI_GiftPackPanel__BuildItems (Dino_BusSand_App_UI_GiftPackPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackPanel__BuildItems_21a972c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 extraout_x1;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_04caecd8;
  if ((bRam0000000004f9ba56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04caecf8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caecd8);
    FUN_02132f7c(PTR_DAT_04caa488);
    FUN_02132f7c(PTR_DAT_04caed08);
    FUN_02132f7c(PTR_DAT_04caed10);
    bRam0000000004f9ba56 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  iStack_84 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plVar11 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                (param_1,*(undefined8 *)PTR_DAT_04caed08,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar11,0,0);
  lVar21 = 0;
  if ((uVar12 & 1) != 0) {
    if (plVar11 == (long *)0x0) goto LAB_022a9f64;
    iVar8 = UnityEngine_Transform__get_childCount_43d4480(plVar11,0);
    if (iVar8 < 1) {
      lVar21 = 0;
    }
    else {
      lVar21 = UnityEngine_Transform__GetChild_43d5294(plVar11,0,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar21,0,0);
  puVar4 = PTR_DAT_04cac7b8;
  if ((uVar12 & 1) != 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar13 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(uVar10,0);
  lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar14,*(undefined8 *)PTR_DAT_04caca50);
  if (lVar13 != 0) {
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_a8,lVar13,*(undefined8 *)PTR_DAT_04caed00);
    puVar7 = PTR_DAT_04caed10;
    puVar6 = PTR_DAT_04caece8;
    puVar5 = PTR_DAT_04caec68;
    puVar3 = PTR_DAT_04cae058;
    puStack_78 = puStack_a0;
    uStack_80 = uStack_a8;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    puStack_a0 = &uStack_80;
    uStack_a8 = 0;
    while (uVar12 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                              (&uStack_80,*(undefined8 *)puVar6), uVar16 = uStack_68,
          uVar15 = uStack_70, (uVar12 & 1) != 0) {
      uVar12 = Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4_21aa1a0(param_1);
      if ((uVar12 & 1) == 0 && (int)uVar15 == 0x3e9) {
        uVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar16 = Dino_BusSand_App_UI_CommerceUi__NumGrouped_22aae00(uVar16,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar16);
      }
      else {
        if (lVar14 == 0) {
LAB_022a9f68:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)puVar3;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_022a9f68;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + 0x20) = uVar15;
          *(undefined8 *)(lVar13 + 0x28) = uVar16;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar14,uVar15,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_80,*(undefined8 *)PTR_DAT_04caece0);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar13,*(undefined8 *)PTR_DAT_04cad6f0);
    puVar3 = PTR_DAT_04cad6c0;
    puVar4 = PTR_DAT_04ca9ae8;
    if (lVar13 != 0) {
      lVar19 = *(long *)(lVar13 + 0x10);
      lVar20 = *(long *)PTR_DAT_04cad6c0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar19 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          plVar17 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
          *plVar17 = lVar21;
          thunk_FUN_02134474(plVar17,lVar21);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar13,lVar21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        puVar6 = PTR_DAT_04cad390;
        puVar5 = PTR_DAT_04caa488;
        iStack_84 = 1;
        if (lVar14 != 0) {
          if (1 < *(int *)(lVar14 + 0x18)) {
            do {
              if (lVar21 == 0) goto LAB_022a9f64;
              uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0);
              lVar19 = *(long *)puVar4;
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar19);
              }
              lVar19 = UnityEngine_Object__Instantiate_object__2805310
                                 (uVar15,plVar11,0,*(undefined8 *)puVar6);
              uVar15 = UnityEngine_Object__get_name_43c71a4(lVar21,0);
              uVar16 = System_Int32__ToString_482d750(&iStack_84,0);
              uVar15 = System_String__Concat_46d2b84(uVar15,*(undefined8 *)puVar5,uVar16,0);
              if (lVar19 == 0) goto LAB_022a9f64;
              UnityEngine_Object__set_name_43c72ec(lVar19,uVar15,0);
              uVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar19,0);
              lVar19 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)puVar3;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_022a9f64;
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar13,uVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              iStack_84 = iStack_84 + 1;
            } while (iStack_84 < *(int *)(lVar14 + 0x18));
          }
          if (plVar11 != (long *)0x0) {
            iVar8 = UnityEngine_Transform__get_childCount_43d4480(plVar11,0);
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                lVar21 = UnityEngine_Transform__GetChild_43d5294(plVar11,iVar8,0);
                if ((lVar21 == 0) ||
                   (lVar21 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0), lVar21 == 0))
                goto LAB_022a9f64;
                UnityEngine_GameObject__SetActive_43c1408(lVar21,iVar8 < *(int *)(lVar14 + 0x18),0);
                iVar8 = iVar8 + 1;
                iVar9 = UnityEngine_Transform__get_childCount_43d4480(plVar11,0);
              } while (iVar8 < iVar9);
            }
            puVar5 = PTR_DAT_04cadda0;
            puVar3 = PTR_DAT_04cad7c8;
            if (0 < *(int *)(lVar14 + 0x18)) {
              iVar8 = 0;
              do {
                uVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar13,iVar8,*(undefined8 *)puVar3);
                uVar10 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                                   (lVar14,iVar8,*(undefined8 *)puVar5);
                System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                          (lVar14,iVar8,*(undefined8 *)puVar5);
                Dino_BusSand_App_UI_GiftPackPanel__SetCell_21aa200
                          (param_1,uVar15,uVar10,extraout_x1);
                iVar8 = iVar8 + 1;
              } while (iVar8 < *(int *)(lVar14 + 0x18));
            }
            uVar12 = Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4_21aa1a0(param_1);
            puVar3 = PTR_DAT_04caecf8;
            iVar8 = *(int *)(lVar14 + 0x18);
            lVar21 = *(long *)PTR_DAT_04caecf8;
            if ((uVar12 & 1) == 0) {
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar21 = *(long *)puVar3;
              }
              puVar6 = PTR_DAT_04cad7c8;
              puVar5 = PTR_DAT_04cabdb0;
              if (**(long **)(lVar21 + 0xb8) == 0) goto LAB_022a9f64;
              if (0 < *(int *)(lVar14 + 0x18)) {
                iVar1 = *(int *)(**(long **)(lVar21 + 0xb8) + 0x18);
                lVar21 = 0;
                iVar9 = iVar8;
                if (iVar1 <= iVar8) {
                  iVar9 = iVar1;
                }
                uVar12 = 0;
                uVar2 = iVar9 - 1;
                if (iVar8 < 1) {
                  uVar2 = 0;
                }
                do {
                  lVar19 = *(long *)puVar3;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar3;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_022a9f64;
                  if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_022a9f6c;
                  lVar19 = *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
                  if (lVar19 == 0) goto LAB_022a9f64;
                  if ((long)*(int *)(lVar19 + 0x18) <= (long)uVar12) {
                    return;
                  }
                  plVar11 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                              (lVar13,uVar12 & 0xffffffff,*(undefined8 *)puVar6);
                  if (plVar11 == (long *)0x0) {
                    plVar11 = (long *)0x0;
                  }
                  else if (*plVar11 != *(long *)puVar5) {
                    plVar11 = (long *)0x0;
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar18 = UnityEngine_Object__op_Inequality_43c8dec(plVar11,0,0);
                  if ((uVar18 & 1) != 0) {
                    lVar19 = *(long *)puVar3;
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar19 = *(long *)puVar3;
                    }
                    lVar19 = **(long **)(lVar19 + 0xb8);
                    if (lVar19 == 0) goto LAB_022a9f64;
                    if (*(uint *)(lVar19 + 0x18) <= uVar2) {
LAB_022a9f6c:
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    lVar19 = *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
                    if (lVar19 == 0) goto LAB_022a9f64;
                    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_022a9f6c;
                    if (plVar11 == (long *)0x0) goto LAB_022a9f64;
                    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                              (*(undefined4 *)(lVar19 + lVar21 + 0x20),
                               *(undefined4 *)(lVar19 + lVar21 + 0x24),plVar11,0);
                  }
                  uVar12 = uVar12 + 1;
                  lVar21 = lVar21 + 8;
                } while ((long)uVar12 < (long)*(int *)(lVar14 + 0x18));
              }
            }
            else {
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
                plVar11 = (long *)0x0;
              }
              Dino_BusSand_App_UI_GiftPackPanel__LayoutGp4_21aa550(plVar11,lVar13,iVar8);
            }
            return;
          }
        }
      }
    }
  }
LAB_022a9f64:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

