/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnPurchased
void Dino_BusSand_App_UI_StorePanel__OnPurchased (Dino_BusSand_App_UI_StorePanel_o* __this, int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023b76d0) */
/* WARNING: Removing unreachable block (ram,0x023b76d4) */
/* WARNING: Removing unreachable block (ram,0x023b7984) */
/* WARNING: Removing unreachable block (ram,0x023b7760) */
/* WARNING: Removing unreachable block (ram,0x023b798c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnPurchased
   void Dino_BusSand_App_UI_StorePanel__OnPurchased (Dino_BusSand_App_UI_StorePanel_o* __this,
   int32_t storeItemId, const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__OnPurchased_22b7b6c(long param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6138);
    bRam0000000004f9c2eb = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar17 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
    if (*(int *)(*(long *)PTR_DAT_04cb6138 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsStoreItem_22670c0(0);
    if (iVar11 == param_2) {
      if ((bRam0000000004f9c2f2 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb1c80);
        FUN_02132f7c(PTR_DAT_04cad8c8);
        FUN_02132f7c(PTR_DAT_04cad890);
        FUN_02132f7c(PTR_DAT_04cad898);
        FUN_02132f7c(PTR_DAT_04caa160);
        FUN_02132f7c(PTR_DAT_04cad860);
        FUN_02132f7c(PTR_DAT_04cad8a0);
        FUN_02132f7c(PTR_DAT_04cb30e8);
        FUN_02132f7c(PTR_DAT_04cad6e8);
        FUN_02132f7c(PTR_DAT_04cae228);
        FUN_02132f7c(PTR_DAT_04cae230);
        FUN_02132f7c(PTR_DAT_04caa1c8);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cb6138);
        FUN_02132f7c(PTR_DAT_04cac018);
        FUN_02132f7c(PTR_DAT_04cb6330);
        FUN_02132f7c(PTR_DAT_04cb6338);
        FUN_02132f7c(PTR_DAT_04cb6340);
        FUN_02132f7c(PTR_DAT_04cad270);
        FUN_02132f7c(PTR_DAT_04cad200);
        bRam0000000004f9c2f2 = 1;
      }
      uStack_a0 = 0;
      puStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      uStack_c0 = 0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      if (*(long *)(param_1 + 0x40) != 0) {
        iVar11 = UnityEngine_Transform__get_childCount_43d4480(*(long *)(param_1 + 0x40),0);
        puVar3 = PTR_DAT_04ca9ae8;
        if (-1 < iVar11 + -1) {
          do {
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_023b797c;
            iVar11 = iVar11 + -1;
            lVar12 = UnityEngine_Transform__GetChild_43d5294(*(long *)(param_1 + 0x40),iVar11,0);
            if (lVar12 == 0) goto LAB_023b797c;
            uVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            UnityEngine_Object__Destroy_43c8114(uVar13,0);
          } while (0 < iVar11);
        }
        puVar4 = PTR_DAT_04cb6340;
        puVar3 = PTR_DAT_04cad6e8;
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
        System_Collections_Generic_List_int____ctor_3a2b7dc(lVar12,*(undefined8 *)puVar3);
        lVar14 = Dino_BusSand_App_UI_StorePanel__AvailableTabs_22b7ffc
                           (*(undefined4 *)(param_1 + 0x38));
        lVar18 = *(long *)puVar4;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar18);
          lVar18 = *(long *)puVar4;
        }
        puVar19 = *(undefined8 **)(lVar18 + 0xb8);
        lVar21 = puVar19[1];
        if (lVar21 == 0) {
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar18);
            puVar19 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar13 = *puVar19;
          lVar21 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
          System_Comparison_int____ctor_3325d5c(lVar21,uVar13,*(undefined8 *)PTR_DAT_04cb6330,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          *plVar15 = lVar21;
          thunk_FUN_02134474(plVar15,lVar21);
        }
        puVar9 = PTR_DAT_04cad8a0;
        puVar8 = PTR_DAT_04cad890;
        puVar7 = PTR_DAT_04cad860;
        puVar6 = PTR_DAT_04cad270;
        puVar5 = PTR_DAT_04cad200;
        puVar4 = PTR_DAT_04cac018;
        puVar3 = PTR_DAT_04caa160;
        if (lVar14 != 0) {
          System_Collections_Generic_List_int___Sort_3a2da68
                    (lVar14,lVar21,*(undefined8 *)PTR_DAT_04cb30e8);
          System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                    (&uStack_d8,lVar14,*(undefined8 *)puVar9);
          uStack_90 = uStack_c8;
          puStack_98 = puStack_d0;
          uStack_a0 = uStack_d8;
          while (uVar17 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                    (&uStack_a0,*(undefined8 *)puVar8), (uVar17 & 1) != 0) {
            lVar14 = Dino_BusSand_App_UI_StorePanel__AvailableItems_22b8294(uStack_90 & 0xffffffff);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                      (&uStack_d8,lVar14,*(undefined8 *)PTR_DAT_04cad8a0);
            uStack_c0 = uStack_d8;
            uStack_d8 = 0;
            puStack_b8 = puStack_d0;
            uStack_b0 = uStack_c8;
            puStack_d0 = &uStack_c0;
            while (uVar16 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                      (&uStack_c0,*(undefined8 *)puVar8), uVar17 = uStack_b0,
                  (uVar16 & 1) != 0) {
              uVar10 = (undefined4)uStack_b0;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar13 = Dino_BusSand_App_Tables__Row_215ed9c
                                 (*(undefined8 *)puVar5,uVar17 & 0xffffffff,0);
              uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)puVar6,0);
              iVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
              if (iVar11 == 3) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar16 = System_Collections_Generic_List_int___Contains_3a2c3ec
                                   (lVar12,uVar17 & 0xffffffff,*(undefined8 *)puVar7);
                if ((uVar16 & 1) == 0) {
                  lVar14 = *(long *)(lVar12 + 0x10);
                  lVar18 = *(long *)puVar3;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar20 = *(uint *)(lVar12 + 0x18);
                  if (uVar20 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar20 + 1;
                    *(undefined4 *)(lVar14 + (long)(int)uVar20 * 4 + 0x20) = uVar10;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar12,uVar17 & 0xffffffff,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                      (&uStack_c0,*(undefined8 *)PTR_DAT_04cad8c8);
          }
          System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                    (&uStack_a0,*(undefined8 *)PTR_DAT_04cad8c8);
          puVar3 = PTR_DAT_04cb6340;
          lVar14 = *(long *)PTR_DAT_04cb6340;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar14 = *(long *)puVar3;
          }
          puVar19 = *(undefined8 **)(lVar14 + 0xb8);
          lVar18 = puVar19[2];
          if (lVar18 == 0) {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar19 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar13 = *puVar19;
            lVar18 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
            System_Comparison_int____ctor_3325d5c(lVar18,uVar13,*(undefined8 *)PTR_DAT_04cb6338,0);
            plVar15 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar15 = lVar18;
            thunk_FUN_02134474(plVar15,lVar18);
          }
          if (lVar12 != 0) {
            System_Collections_Generic_List_int___Sort_3a2da68
                      (lVar12,lVar18,*(undefined8 *)PTR_DAT_04cb30e8);
            if (*(int *)(*(long *)PTR_DAT_04cb6138 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsStoreItem_22670c0(0);
            uVar17 = Dino_BusSand_App_UI_RemoveAdsPanel__get_Offered_22b3060();
            fVar23 = 23.0;
            if ((uVar17 & 1) != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar14 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,uVar10,0);
              fVar23 = 23.0;
              if (lVar14 != 0) {
                Dino_BusSand_App_UI_StorePanel__NoAdsTile_22b88ec(0x420c0000,param_1,uVar10);
                fVar23 = _UNK_00e2077c;
              }
            }
            puVar3 = PTR_DAT_04cae230;
            fVar2 = _UNK_00e20688;
            fVar1 = _UNK_00e1ffd8;
            iVar11 = *(int *)(lVar12 + 0x18);
            if (0 < iVar11) {
              uVar20 = 0;
              iVar22 = -1;
              do {
                uVar10 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                   (lVar12,uVar20,*(undefined8 *)puVar3);
                Dino_BusSand_App_UI_StorePanel__Tile_22b8dc8
                          (fVar23 + (float)(uVar20 / 3) * fVar1 + 227.0,
                           (float)(int)(iVar22 + (uVar20 / 3) * -3) * fVar2,param_1,uVar10,uVar20);
                uVar20 = uVar20 + 1;
                iVar22 = iVar22 + 1;
              } while ((int)uVar20 < *(int *)(lVar12 + 0x18));
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              UnityEngine_RectTransform__set_sizeDelta_43cfa70
                        (0,fVar23 + (float)((iVar11 + 2) / 3) * _UNK_00e1ffd8 + 40.0,
                         *(long *)(param_1 + 0x40),0);
              return;
            }
          }
        }
      }
LAB_023b797c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

