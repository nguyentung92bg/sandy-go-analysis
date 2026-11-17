/* IL2CPP: Dino.BusSand.App.UI.StarterPanel$$OnOpen
void Dino_BusSand_App_UI_StarterPanel__OnOpen (Dino_BusSand_App_UI_StarterPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StarterPanel$$OnOpen
   void Dino_BusSand_App_UI_StarterPanel__OnOpen (Dino_BusSand_App_UI_StarterPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StarterPanel__OnOpen_232dfac(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  uint uVar25;
  
  if ((bRam0000000004f9c619 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb0040);
    FUN_02132f7c(PTR_DAT_04cb9008);
    FUN_02132f7c(PTR_DAT_04cb9010);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb73f8);
    FUN_02132f7c(PTR_DAT_04cac718);
    FUN_02132f7c(PTR_DAT_04cb7400);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04cb1c18);
    FUN_02132f7c(PTR_DAT_04cb0048);
    FUN_02132f7c(PTR_DAT_04caeca0);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04cb0060);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb9018);
    bRam0000000004f9c619 = 1;
  }
  puVar3 = PTR_DAT_04cb0048;
  puVar4 = PTR_DAT_04cac018;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
    param_2 = (long *)0x0;
  }
  if (param_1 != 0) {
    plVar16 = *(long **)PTR_DAT_04cb0048;
    if (param_2 != (long *)0x0) {
      plVar16 = param_2;
    }
    plVar21 = (long *)(param_1 + 0x48);
    *plVar21 = (long)plVar16;
    thunk_FUN_02134474(plVar21);
    uVar10 = System_String__op_Inequality_46d110c(*plVar21,*(undefined8 *)puVar3,0);
    if ((uVar10 & 1) != 0) {
      Dino_BusSand_App_Meta_StarterOffer__MarkShown_220cb80(0);
    }
    puVar6 = PTR_DAT_04cb0040;
    puVar2 = PTR_DAT_04caecb0;
    puVar5 = PTR_DAT_04cad200;
    puVar3 = PTR_DAT_04ca9c30;
    uVar11 = Dino_BusSand_App_Meta_StarterOffer__get_StoreItem_220c860(0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    puVar4 = PTR_DAT_04ca9d18;
    uVar13 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,uVar11,0);
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)puVar2,0);
    uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar13,*(undefined8 *)puVar3,0);
    lVar18 = *(long *)puVar6;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar18);
      lVar18 = *(long *)puVar6;
    }
    lVar23 = *(long *)puVar4;
    lVar19 = *(long *)(lVar23 + 0x38);
    uVar22 = **(undefined8 **)(lVar18 + 0xb8);
    if (lVar19 == 0) {
      FUN_0216b4cc(lVar23);
      lVar19 = *(long *)(lVar23 + 0x38);
    }
    lVar18 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_0216b470();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cad330;
    lVar18 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_0216b470();
    }
    puVar2 = PTR_DAT_04cb7400;
    puVar5 = PTR_DAT_04cb73f8;
    puVar3 = PTR_DAT_04cac7b8;
    uVar24 = **(undefined8 **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar24 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                       (*(undefined8 *)puVar2,*(undefined8 *)puVar5,uVar24,0);
    uVar11 = Dino_BusSand_App_Meta_StarterOffer__get_StoreItem_220c860(0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar14 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(uVar11,0);
    uVar15 = Dino_BusSand_App_Meta_StarterOffer__get_StoreItem_220c860(0);
    uVar15 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748(uVar15,0);
    lVar18 = Dino_BusSand_App_UI_PackPopup__Build_232e578
                       (param_1,uVar22,uVar24,uVar14,uVar15,uVar13,1);
    puVar9 = PTR_DAT_04cb9010;
    puVar8 = PTR_DAT_04cb9008;
    puVar17 = (undefined8 *)PTR_DAT_04cb0060;
    puVar7 = PTR_DAT_04caec70;
    puVar6 = PTR_DAT_04cae0f0;
    puVar2 = PTR_DAT_04cad9e8;
    puVar5 = PTR_DAT_04cad948;
    puVar3 = PTR_DAT_04cad460;
    puVar4 = PTR_DAT_04caa458;
    if (lVar18 != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar18 + 0x18);
      thunk_FUN_02134474();
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar8,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar2,uVar13,1,*(undefined8 *)puVar5,0);
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar9,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar3,uVar13,1,*(undefined8 *)puVar5,0);
      uVar13 = *(undefined8 *)PTR_DAT_04caeca0;
      if ((uVar10 & 1) == 0) {
        puVar17 = (undefined8 *)puVar6;
      }
      uVar22 = *puVar17;
      uVar24 = *(undefined8 *)PTR_DAT_04cac718;
      lVar18 = FUN_02133068(*(undefined8 *)puVar7,1);
      uVar11 = Dino_BusSand_App_Meta_StarterOffer__get_StoreItem_220c860(0);
      puVar4 = PTR_DAT_04cac498;
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0242e568;
        *(undefined4 *)(lVar18 + 0x20) = uVar11;
        puVar3 = PTR_DAT_04ca9c20;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        Dino_BusSand_App_Meta_GameTracking__IapShow_221791c(param_1,uVar24,uVar13,uVar22,lVar18,0);
        plVar16 = (long *)FUN_02133068(*(undefined8 *)puVar3,2);
        puVar4 = PTR_DAT_04cb1c18;
        if (plVar16 != (long *)0x0) {
          if ((*(long *)PTR_DAT_04cb1c18 != 0) &&
             (lVar18 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1c18,*(undefined8 *)(*plVar16 + 0x40)
                                         ), lVar18 == 0)) {
LAB_0242e56c:
            uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar13,0);
          }
          if ((int)plVar16[3] != 0) {
            plVar16[4] = *(long *)puVar4;
            thunk_FUN_02134474();
            lVar18 = *plVar21;
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_0216e7a0(lVar18,*(undefined8 *)(*plVar16 + 0x40)), lVar19 == 0))
            goto LAB_0242e56c;
            puVar3 = PTR_DAT_04cb9018;
            puVar4 = PTR_DAT_04cac5c0;
            if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
              plVar16[5] = lVar18;
              thunk_FUN_02134474(plVar16 + 5,lVar18);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar5 = PTR_DAT_04ca9b50;
              puVar4 = PTR_DAT_04ca9b08;
              uVar13 = *(undefined8 *)puVar3;
              if ((bRam0000000004f9b8c9 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cac5c0,plVar16,0);
                FUN_02132f7c(PTR_DAT_04caa210);
                FUN_02132f7c(PTR_DAT_04ca9af8);
                FUN_02132f7c(PTR_DAT_04caab38);
                FUN_02132f7c(PTR_DAT_04ca9b50);
                FUN_02132f7c(PTR_DAT_04ca9b58);
                FUN_02132f7c(PTR_DAT_04ca9b08);
                FUN_02132f7c(PTR_DAT_04caa378);
                FUN_02132f7c(PTR_DAT_04cab718);
                FUN_02132f7c(PTR_DAT_04caba58);
                FUN_02132f7c(PTR_DAT_04caba60);
                FUN_02132f7c(PTR_DAT_04caa228);
                FUN_02132f7c(PTR_DAT_04cabaf8);
                FUN_02132f7c(PTR_DAT_04caa398);
                FUN_02132f7c(PTR_DAT_04caba38);
                FUN_02132f7c(PTR_DAT_04cabc00);
                FUN_02132f7c(PTR_DAT_04caca10);
                FUN_02132f7c(PTR_DAT_04caca18);
                FUN_02132f7c(PTR_DAT_04caca20);
                FUN_02132f7c(PTR_DAT_04caca28);
                bRam0000000004f9b8c9 = 1;
              }
              lVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
              System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                        (lVar18,*(undefined8 *)puVar5);
              puVar5 = PTR_DAT_04cabaf8;
              puVar3 = PTR_DAT_04caba38;
              puVar4 = PTR_DAT_04caab38;
              if (lVar18 != 0) {
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar18,*(undefined8 *)PTR_DAT_04caca28,uVar13,
                           *(undefined8 *)PTR_DAT_04caab38);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                puVar2 = PTR_DAT_04ca9ac8;
                uVar22 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),
                                      &stack0xffffffffffffffa8);
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar18,*(undefined8 *)puVar3,uVar22,*(undefined8 *)puVar4);
                puVar4 = PTR_DAT_04ca9b58;
                if (plVar16 != (long *)0x0) {
                  uVar10 = *(uint *)(plVar16 + 3);
                  if (1 < (int)uVar10) {
                    uVar25 = 1;
                    do {
                      if (uVar10 <= uVar25 - 1) {
LAB_0226d7d4:
                    /* WARNING: Subroutine does not return */
                        FUN_0213322c();
                      }
                      plVar21 = (long *)plVar16[(long)(int)(uVar25 - 1) + 4];
                      if (plVar21 == (long *)0x0) goto LAB_0226d7d8;
                      uVar22 = (**(code **)(*plVar21 + 0x168))
                                         (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                      if (*(uint *)(plVar16 + 3) <= uVar25) goto LAB_0226d7d4;
                      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                                (lVar18,uVar22,plVar16[(long)(int)uVar25 + 4],*(undefined8 *)puVar4)
                      ;
                      uVar10 = *(uint *)(plVar16 + 3);
                      uVar25 = uVar25 + 2;
                    } while ((int)uVar25 < (int)uVar10);
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar19 = *(long *)puVar5;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar19 = *(long *)puVar5;
                  }
                  if (*(long *)(*(long *)(lVar19 + 0xb8) + 0x10) != 0) {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b894 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cabaf8);
                      cRam0000000004f9b894 = '\x01';
                    }
                    lVar19 = *(long *)puVar5;
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar19 = *(long *)puVar5;
                    }
                    puVar3 = PTR_DAT_04cabc00;
                    if (*(long *)(*(long *)(lVar19 + 0xb8) + 0x10) == 0) goto LAB_0226d7d8;
                    uVar22 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&stack0xffffffffffffffa8);
                    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                              (lVar18,*(undefined8 *)puVar3,uVar22,*(undefined8 *)puVar4);
                  }
                  puVar4 = PTR_DAT_04cac5c0;
                  uVar22 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar18,0);
                  lVar19 = *(long *)puVar4;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(lVar19);
                    lVar19 = *(long *)puVar4;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 != 0) {
                    lVar23 = *(long *)(lVar19 + 0x10);
                    lVar20 = *(long *)PTR_DAT_04cab718;
                    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                    if (lVar23 != 0) {
                      uVar10 = *(uint *)(lVar19 + 0x18);
                      if (uVar10 < *(uint *)(lVar23 + 0x18)) {
                        *(uint *)(lVar19 + 0x18) = uVar10 + 1;
                        puVar17 = (undefined8 *)(lVar23 + (long)(int)uVar10 * 8 + 0x20);
                        *puVar17 = uVar22;
                        thunk_FUN_02134474(puVar17,uVar22);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar19,uVar22,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar19 = *(long *)puVar4;
                      lVar23 = **(long **)(lVar19 + 0xb8);
                      if (lVar23 != 0) {
                        if (500 < *(int *)(lVar23 + 0x18)) {
                          if (*(int *)(lVar19 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar23 = **(long **)(*(long *)puVar4 + 0xb8);
                            if (lVar23 == 0) goto LAB_0226d7d8;
                          }
                          System_Collections_Generic_List_object___RemoveAt_3a833a0
                                    (lVar23,0,*(undefined8 *)PTR_DAT_04caba58);
                          lVar19 = *(long *)puVar4;
                        }
                        if (*(int *)(lVar19 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar19 = *(long *)puVar4;
                        }
                        if (*(long *)(*(long *)(lVar19 + 0xb8) + 0x18) == 0) {
                          if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar24 = UnityEngine_Application__get_persistentDataPath_43521d4(0);
                          if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar24 = System_IO_Path__Combine_4806e38
                                             (uVar24,*(undefined8 *)PTR_DAT_04caca20,0);
                          lVar19 = *(long *)puVar4;
                          if (*(int *)(lVar19 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar19 = *(long *)puVar4;
                          }
                          puVar17 = (undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18);
                          *puVar17 = uVar24;
                          thunk_FUN_02134474(puVar17,uVar24);
                          lVar19 = *(long *)puVar4;
                        }
                        if (*(int *)(lVar19 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar19 = *(long *)puVar4;
                        }
                        lVar23 = *(long *)(lVar19 + 0xb8);
                        iVar1 = *(int *)(lVar23 + 0x20);
                        *(int *)(lVar23 + 0x20) = iVar1 + 1;
                        if ((iVar1 * -0x3d70a3d7 + 0x51eb850U >> 3 | iVar1 * 0x20000000) < 0x147ae15
                           ) {
                          if (*(int *)(lVar19 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar23 = *(long *)(*(long *)puVar4 + 0xb8);
                          }
                          uVar12 = System_IO_File__Exists_47f230c(*(undefined8 *)(lVar23 + 0x18),0);
                          lVar19 = *(long *)puVar4;
                          if ((uVar12 & 1) != 0) {
                            if (*(int *)(lVar19 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar19 = *(long *)puVar4;
                            }
                            uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18);
                            lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa378);
                            System_IO_FileInfo___ctor_47fa20c(lVar19,uVar24,0);
                            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar23 = System_IO_FileInfo__get_Length_47fa21c(lVar19,0);
                            lVar19 = *(long *)puVar4;
                            if (0x200000 < lVar23) {
                              if (*(int *)(lVar19 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                                lVar19 = *(long *)puVar4;
                              }
                              uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18);
                              if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                                thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa228);
                              }
                              uVar24 = System_IO_Path__GetDirectoryName_4807618(uVar24,0);
                              uVar24 = System_IO_Path__Combine_4806e38
                                                 (uVar24,*(undefined8 *)PTR_DAT_04caca10,0);
                              uVar12 = System_IO_File__Exists_47f230c(uVar24,0);
                              if ((uVar12 & 1) != 0) {
                                System_IO_File__Delete_47f8b84(uVar24,0);
                              }
                              lVar19 = *(long *)puVar4;
                              if (*(int *)(lVar19 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                                lVar19 = *(long *)puVar4;
                              }
                              System_IO_File__Move_47f9fe0
                                        (*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18),uVar24,0);
                              lVar19 = *(long *)puVar4;
                            }
                          }
                        }
                        if (*(int *)(lVar19 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar19 = *(long *)puVar4;
                        }
                        uVar14 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18);
                        uVar24 = System_String__Concat_46c82e0
                                           (uVar22,*(undefined8 *)PTR_DAT_04caa398,0);
                        System_IO_File__AppendAllText_47f9cb8(uVar14,uVar24,0);
                        lVar19 = *(long *)puVar4;
                        if (*(int *)(lVar19 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar19 = *(long *)puVar4;
                        }
                        puVar3 = PTR_DAT_04ca9af8;
                        if (*(char *)(*(long *)(lVar19 + 0xb8) + 8) != '\0') {
                          uVar22 = System_String__Concat_46c82e0
                                             (*(undefined8 *)PTR_DAT_04caca18,uVar22,0);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)puVar3);
                          }
                          UnityEngine_Debug__Log_4360fc8(uVar22,0);
                          lVar19 = *(long *)puVar4;
                        }
                        if (*(int *)(lVar19 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar19 = *(long *)puVar4;
                        }
                        lVar23 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x10);
                        if (lVar23 != 0) {
                          if (*(int *)(lVar19 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar23 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                          }
                          (**(code **)(lVar23 + 0x18))
                                    (*(undefined8 *)(lVar23 + 0x40),uVar13,lVar18,
                                     *(undefined8 *)(lVar23 + 0x28));
                        }
                        return;
                      }
                    }
                  }
                }
              }
LAB_0226d7d8:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
LAB_0242e568:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

