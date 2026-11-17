/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetPlayerNameRaw
void Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetPlayerNameRaw
   void Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw (System_String_o* name, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw_226e300(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 auStack_58 [2];
  undefined4 uStack_48;
  
  puVar5 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0d3 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar11 != 0) {
    uVar12 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar11 + 0x160),0);
    lVar11 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    puVar4 = PTR_DAT_04cabaf8;
    if (lVar11 != 0) {
      lVar10 = *(long *)PTR_DAT_04ca9c30;
      if (param_1 != 0) {
        lVar10 = param_1;
      }
      *(long *)(lVar11 + 0x160) = lVar10;
      thunk_FUN_02134474(lVar11 + 0x160);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Save_226c548();
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_PlayerIdentity__Raise_226c900(3);
      if ((uVar12 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar5 = PTR_DAT_04ca9c20;
      if ((bRam0000000004f9c0da & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac5c0);
        FUN_02132f7c(PTR_DAT_04caab38);
        FUN_02132f7c(PTR_DAT_04ca9b50);
        FUN_02132f7c(PTR_DAT_04ca9b08);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04cae570);
        FUN_02132f7c(PTR_DAT_04cb0358);
        FUN_02132f7c(PTR_DAT_04cac4b8);
        FUN_02132f7c(PTR_DAT_04cb4740);
        FUN_02132f7c(PTR_DAT_04cb0360);
        FUN_02132f7c(PTR_DAT_04cabc70);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04cb0370);
        bRam0000000004f9c0da = 1;
      }
      plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar5,2);
      puVar5 = PTR_DAT_04cb0360;
      if (plVar9 == (long *)0x0) goto LAB_0236cc88;
      if ((*(long *)PTR_DAT_04cb0360 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb0360,*(undefined8 *)(*plVar9 + 0x40)),
         lVar11 == 0)) {
LAB_0236cc90:
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      puVar6 = PTR_DAT_04ca9b50;
      puVar4 = PTR_DAT_04ca9b08;
      if ((int)plVar9[3] != 0) {
        plVar9[4] = *(long *)puVar5;
        thunk_FUN_02134474();
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                  (lVar11,*(undefined8 *)puVar6);
        puVar3 = PTR_DAT_04cb0358;
        puVar6 = PTR_DAT_04cae570;
        puVar4 = PTR_DAT_04cabc70;
        puVar5 = PTR_DAT_04caab38;
        if (lVar11 == 0) {
LAB_0236cc88:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar11,*(undefined8 *)PTR_DAT_04cb0370,*(undefined8 *)PTR_DAT_04cb4740,
                   *(undefined8 *)PTR_DAT_04caab38);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar10 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
        uVar18 = *(undefined8 *)puVar4;
        uVar16 = *(undefined8 *)puVar3;
        puVar14 = (undefined8 *)PTR_DAT_04ca9c30;
        if (lVar10 != 0) {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar10 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
          if (lVar10 == 0) goto LAB_0236cc88;
          puVar14 = (undefined8 *)(lVar10 + 0x160);
        }
        puVar4 = PTR_DAT_04cac4b8;
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar11,uVar18,*puVar14,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar18 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIconString_226c3d4();
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar11,*(undefined8 *)puVar4,uVar18,*(undefined8 *)puVar5);
        lVar10 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar9 + 0x40));
        puVar5 = PTR_DAT_04cac5c0;
        if (lVar10 == 0) goto LAB_0236cc90;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
          plVar9[5] = lVar11;
          thunk_FUN_02134474(plVar9 + 5,lVar11);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar4 = PTR_DAT_04ca9b50;
          puVar5 = PTR_DAT_04ca9b08;
          if ((bRam0000000004f9b8c9 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac5c0,plVar9,0);
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
          uStack_48 = 0;
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
          System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                    (lVar11,*(undefined8 *)puVar4);
          puVar6 = PTR_DAT_04cabaf8;
          puVar4 = PTR_DAT_04caba38;
          puVar5 = PTR_DAT_04caab38;
          if (lVar11 != 0) {
            System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                      (lVar11,*(undefined8 *)PTR_DAT_04caca28,uVar16,*(undefined8 *)PTR_DAT_04caab38
                      );
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auStack_58[0] = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
            puVar3 = PTR_DAT_04ca9ac8;
            uVar18 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_58);
            System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                      (lVar11,*(undefined8 *)puVar4,uVar18,*(undefined8 *)puVar5);
            puVar5 = PTR_DAT_04ca9b58;
            if (plVar9 != (long *)0x0) {
              uVar1 = *(uint *)(plVar9 + 3);
              if (1 < (int)uVar1) {
                uVar19 = 1;
                do {
                  if (uVar1 <= uVar19 - 1) {
LAB_0226d7d4:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  plVar7 = (long *)plVar9[(long)(int)(uVar19 - 1) + 4];
                  if (plVar7 == (long *)0x0) goto LAB_0226d7d8;
                  uVar18 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  if (*(uint *)(plVar9 + 3) <= uVar19) goto LAB_0226d7d4;
                  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                            (lVar11,uVar18,plVar9[(long)(int)uVar19 + 4],*(undefined8 *)puVar5);
                  uVar1 = *(uint *)(plVar9 + 3);
                  uVar19 = uVar19 + 2;
                } while ((int)uVar19 < (int)uVar1);
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar10 = *(long *)puVar6;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar10 = *(long *)puVar6;
              }
              if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x10) != 0) {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b894 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cabaf8);
                  cRam0000000004f9b894 = '\x01';
                }
                lVar10 = *(long *)puVar6;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar10 = *(long *)puVar6;
                }
                puVar4 = PTR_DAT_04cabc00;
                lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                if (lVar10 == 0) goto LAB_0226d7d8;
                auStack_58[0] = CONCAT44(auStack_58[0]._4_4_,*(undefined4 *)(lVar10 + 0x14));
                uVar18 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),auStack_58);
                System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                          (lVar11,*(undefined8 *)puVar4,uVar18,*(undefined8 *)puVar5);
              }
              puVar5 = PTR_DAT_04cac5c0;
              uVar18 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar11,0);
              lVar10 = *(long *)puVar5;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar10);
                lVar10 = *(long *)puVar5;
              }
              lVar10 = **(long **)(lVar10 + 0xb8);
              if (lVar10 != 0) {
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)PTR_DAT_04cab718;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar14 = uVar18;
                    thunk_FUN_02134474(puVar14,uVar18);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar10,uVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar10 = *(long *)puVar5;
                  lVar13 = **(long **)(lVar10 + 0xb8);
                  if (lVar13 != 0) {
                    if (500 < *(int *)(lVar13 + 0x18)) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar13 = **(long **)(*(long *)puVar5 + 0xb8);
                        if (lVar13 == 0) goto LAB_0226d7d8;
                      }
                      System_Collections_Generic_List_object___RemoveAt_3a833a0
                                (lVar13,0,*(undefined8 *)PTR_DAT_04caba58);
                      lVar10 = *(long *)puVar5;
                    }
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar10 = *(long *)puVar5;
                    }
                    if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x18) == 0) {
                      if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar8 = UnityEngine_Application__get_persistentDataPath_43521d4(0);
                      if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar8 = System_IO_Path__Combine_4806e38
                                        (uVar8,*(undefined8 *)PTR_DAT_04caca20,0);
                      lVar10 = *(long *)puVar5;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar10 = *(long *)puVar5;
                      }
                      puVar14 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
                      *puVar14 = uVar8;
                      thunk_FUN_02134474(puVar14,uVar8);
                      lVar10 = *(long *)puVar5;
                    }
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar10 = *(long *)puVar5;
                    }
                    lVar13 = *(long *)(lVar10 + 0xb8);
                    iVar2 = *(int *)(lVar13 + 0x20);
                    *(int *)(lVar13 + 0x20) = iVar2 + 1;
                    if ((iVar2 * -0x3d70a3d7 + 0x51eb850U >> 3 | iVar2 * 0x20000000) < 0x147ae15) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
                      }
                      uVar12 = System_IO_File__Exists_47f230c(*(undefined8 *)(lVar13 + 0x18),0);
                      lVar10 = *(long *)puVar5;
                      if ((uVar12 & 1) != 0) {
                        if (*(int *)(lVar10 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar10 = *(long *)puVar5;
                        }
                        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
                        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa378);
                        System_IO_FileInfo___ctor_47fa20c(lVar10,uVar8,0);
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        lVar13 = System_IO_FileInfo__get_Length_47fa21c(lVar10,0);
                        lVar10 = *(long *)puVar5;
                        if (0x200000 < lVar13) {
                          if (*(int *)(lVar10 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar10 = *(long *)puVar5;
                          }
                          uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
                          if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa228);
                          }
                          uVar8 = System_IO_Path__GetDirectoryName_4807618(uVar8,0);
                          uVar8 = System_IO_Path__Combine_4806e38
                                            (uVar8,*(undefined8 *)PTR_DAT_04caca10,0);
                          uVar12 = System_IO_File__Exists_47f230c(uVar8,0);
                          if ((uVar12 & 1) != 0) {
                            System_IO_File__Delete_47f8b84(uVar8,0);
                          }
                          lVar10 = *(long *)puVar5;
                          if (*(int *)(lVar10 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar10 = *(long *)puVar5;
                          }
                          System_IO_File__Move_47f9fe0
                                    (*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),uVar8,0);
                          lVar10 = *(long *)puVar5;
                        }
                      }
                    }
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar10 = *(long *)puVar5;
                    }
                    uVar17 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
                    uVar8 = System_String__Concat_46c82e0(uVar18,*(undefined8 *)PTR_DAT_04caa398,0);
                    System_IO_File__AppendAllText_47f9cb8(uVar17,uVar8,0);
                    lVar10 = *(long *)puVar5;
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar10 = *(long *)puVar5;
                    }
                    puVar4 = PTR_DAT_04ca9af8;
                    if (*(char *)(*(long *)(lVar10 + 0xb8) + 8) != '\0') {
                      uVar18 = System_String__Concat_46c82e0
                                         (*(undefined8 *)PTR_DAT_04caca18,uVar18,0);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar4);
                      }
                      UnityEngine_Debug__Log_4360fc8(uVar18,0);
                      lVar10 = *(long *)puVar5;
                    }
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar10 = *(long *)puVar5;
                    }
                    lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                    if (lVar13 != 0) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar13 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                      }
                      (**(code **)(lVar13 + 0x18))
                                (*(undefined8 *)(lVar13 + 0x40),uVar16,lVar11,
                                 *(undefined8 *)(lVar13 + 0x28));
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
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

