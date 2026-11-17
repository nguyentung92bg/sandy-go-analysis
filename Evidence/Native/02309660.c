/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Section
void Dino_BusSand_App_Meta_EconomySettings__Section (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, System_String_o* name, System_String_o* row, System_Collections_Generic_Dictionary_string__string__o* map, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Section
   void Dino_BusSand_App_Meta_EconomySettings__Section
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, System_String_o* name,
   System_String_o* row, System_Collections_Generic_Dictionary_string__string__o* map, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings__Section_2209660
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  int iStack_c4;
  ulong uStack_c0;
  uint uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000004f9bcdf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb1dd8);
    FUN_02132f7c(PTR_DAT_04cb1f30);
    FUN_02132f7c(PTR_DAT_04caca40);
    FUN_02132f7c(PTR_DAT_04cb2058);
    FUN_02132f7c(PTR_DAT_04cb2060);
    FUN_02132f7c(PTR_DAT_04cb2068);
    FUN_02132f7c(PTR_DAT_04cb2070);
    FUN_02132f7c(PTR_DAT_04cb2078);
    FUN_02132f7c(PTR_DAT_04cb2080);
    FUN_02132f7c(PTR_DAT_04cb1e50);
    FUN_02132f7c(PTR_DAT_04cb1e68);
    FUN_02132f7c(PTR_DAT_04cb2088);
    FUN_02132f7c(PTR_DAT_04cad280);
    FUN_02132f7c(PTR_DAT_04cb2090);
    FUN_02132f7c(PTR_DAT_04cb2098);
    FUN_02132f7c(PTR_DAT_04cb2000);
    FUN_02132f7c(PTR_DAT_04cb1f90);
    FUN_02132f7c(PTR_DAT_04cb1fa8);
    FUN_02132f7c(PTR_DAT_04cb20a0);
    FUN_02132f7c(PTR_DAT_04cb1ed8);
    bRam0000000004f9bcdf = 1;
  }
  uStack_80 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  uStack_c0 = 0;
  iStack_c4 = 0;
  lVar8 = Dino_BusSand_App_MiniJson__Obj_21561ec(param_2,0);
  puVar5 = PTR_DAT_04cb1fa8;
  puVar4 = PTR_DAT_04cab608;
  puVar3 = PTR_DAT_04caa300;
  if (lVar8 == 0) {
    if (param_1 != 0) {
      lVar8 = *(long *)(param_1 + 0x40);
      uVar13 = System_String__Concat_46c82e0(param_3,*(undefined8 *)PTR_DAT_04cb1f90,0);
      if (lVar8 != 0) {
        lVar16 = *(long *)(lVar8 + 0x10);
        lVar18 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
            *puVar15 = uVar13;
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0x18);
            System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                      (lVar8,uVar2 + 1,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                      0x70) + 0x20) + 0xc0) + 0x78));
            lVar16 = *(long *)(lVar8 + 0x10);
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
            *puVar15 = uVar13;
          }
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar15 >> 0xc & 0x3f),
                         ((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
            (&uStack_f0,lVar8,*(undefined8 *)PTR_DAT_04caa2f0);
  uStack_a0 = uStack_f0;
  uStack_f0 = 0;
  uStack_98 = puStack_e8;
  plStack_88 = plStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  puStack_e8 = &uStack_a0;
LAB_023098b8:
  do {
    uVar9 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                      (&uStack_a0,*(undefined8 *)puVar3);
    plVar6 = plStack_88;
    uVar13 = uStack_90;
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_a0,*(undefined8 *)PTR_DAT_04caa2f8);
      return;
    }
    uVar10 = System_String__Concat_46d2b84(param_3,*(undefined8 *)puVar5,uStack_90,0);
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (param_5,uVar13,&uStack_a8,*(undefined8 *)puVar4);
    if ((uVar9 & 1) == 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(param_1 + 0x40);
      uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb1f30,0);
      if (lVar8 != 0) {
        lVar16 = *(long *)(lVar8 + 0x10);
        lVar18 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar8,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_023098b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb1ed8,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb1dd8,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cad280,0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb1e68,0),
           (uVar9 & 1) == 0)) {
          uVar9 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)PTR_DAT_04cb1e50,0);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            bVar7 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(plVar6,&lStack_b0);
            uVar13 = uStack_a8;
            if (((bVar7 & 0 < lStack_b0) != 1) || (999 < lStack_b0)) {
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar8 = *(long *)(param_1 + 0x40);
              uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb20a0,0);
              if (lVar8 != 0) {
                lVar16 = *(long *)(lVar8 + 0x10);
                lVar18 = *(long *)PTR_DAT_04cab718;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar16 != 0) {
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                    thunk_FUN_02134474();
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar8,uVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_023098b8;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            dStack_f8 = (double)lStack_b0;
            uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_f8);
            uVar12 = System_Int64__ToString_482e7e4(&lStack_b0,0);
            uVar10 = System_String__Concat_46d2b84(uVar10,*(undefined8 *)PTR_DAT_04caca40,uVar12,0);
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                      (param_1,param_4,uVar13,uVar11,uVar10);
            goto LAB_023098b8;
          }
          lVar8 = Dino_BusSand_App_MiniJson__Arr_2156264(plVar6,0);
          if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar8 = *(long *)(param_1 + 0x40);
            uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb2098,0);
            if (lVar8 != 0) {
              lVar16 = *(long *)(lVar8 + 0x10);
              lVar18 = *(long *)PTR_DAT_04cab718;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar8,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_023098b8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (lVar16,*(undefined8 *)PTR_DAT_04ca9b98);
          iStack_c4 = 0;
          if (*(int *)(lVar8 + 0x18) < 1) {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
          else {
            do {
              uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar8,iStack_c4,*(undefined8 *)PTR_DAT_04cb15c0);
              uVar11 = System_Int32__ToString_482d750(&iStack_c4,0);
              uVar11 = System_String__Concat_46d30e8
                                 (uVar10,*(undefined8 *)PTR_DAT_04cb2090,uVar11,
                                  *(undefined8 *)PTR_DAT_04cb2000,0);
              if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar18 = Dino_BusSand_App_Meta_EconomySettings__RewardList_220aa78
                                 (param_1,uVar13,uVar11);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar1 = *(int *)(lVar18 + 0x18);
              if (iVar1 == 0) {
                iStack_c4 = iStack_c4 + 1;
                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar8 = *(long *)(param_1 + 0x40);
                uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb2068,0);
                if (lVar8 != 0) {
                  lVar16 = *(long *)(lVar8 + 0x10);
                  lVar18 = *(long *)PTR_DAT_04cab718;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar16 != 0) {
                    uVar2 = *(uint *)(lVar8 + 0x18);
                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                      thunk_FUN_02134474();
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar8,uVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    goto LAB_023098b8;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (lVar16 == 0) {
LAB_0230a348:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar17 = *(long *)(lVar16 + 0x10);
              lVar19 = *(long *)PTR_DAT_04ca9ba0;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0230a348;
              uVar2 = *(uint *)(lVar16 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar18;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar16,lVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              iStack_c4 = iStack_c4 + 1;
            } while ((iStack_c4 < *(int *)(lVar8 + 0x18)) && (iVar1 != 0));
          }
          uVar13 = uStack_a8;
          uStack_b4 = *(uint *)(lVar16 + 0x18);
          uVar11 = System_Int32__ToString_482d750(&uStack_b4,0);
          uVar10 = System_String__Concat_46d30e8
                             (uVar10,*(undefined8 *)PTR_DAT_04caca40,uVar11,
                              *(undefined8 *)PTR_DAT_04cb2080,0);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                    (param_1,param_4,uVar13,lVar16,uVar10);
          goto LAB_023098b8;
        }
        if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = Dino_BusSand_App_Meta_EconomySettings__RewardList_220aa78(param_1,plVar6,uVar10);
        uVar13 = uStack_a8;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar8 + 0x18) == 0) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(param_1 + 0x40);
          uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb2058,0);
          if (lVar8 != 0) {
            lVar16 = *(long *)(lVar8 + 0x10);
            lVar18 = *(long *)PTR_DAT_04cab718;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar8,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_023098b8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uStack_b4 = *(uint *)(lVar8 + 0x18);
        uVar11 = System_Int32__ToString_482d750(&uStack_b4,0);
        uVar10 = System_String__Concat_46d30e8
                           (uVar10,*(undefined8 *)PTR_DAT_04caca40,uVar11,
                            *(undefined8 *)PTR_DAT_04cb2060,0);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                  (param_1,param_4,uVar13,lVar8,uVar10);
        goto LAB_023098b8;
      }
      if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Meta_EconomySettings__Ints_220a50c(plVar6,1,999);
      uVar13 = uStack_a8;
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *(long *)(param_1 + 0x40);
        uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb2070,0);
        if (lVar8 != 0) {
          lVar16 = *(long *)(lVar8 + 0x10);
          lVar18 = *(long *)PTR_DAT_04cab718;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023098b8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Meta_EconomySettings__Join_220a7b0(lVar8);
      uVar10 = System_String__Concat_46d30e8
                         (uVar10,*(undefined8 *)PTR_DAT_04cb2088,uVar11,
                          *(undefined8 *)PTR_DAT_04cb2000,0);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8(param_1,param_4,uVar13,lVar8,uVar10)
      ;
      goto LAB_023098b8;
    }
    if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x28))) {
      pbVar14 = (byte *)thunk_FUN_0216e9e4(plVar6);
      uVar13 = uStack_a8;
      bVar7 = *pbVar14;
      dStack_f8 = 0.0;
      if (bVar7 != 0) {
        dStack_f8 = 1.0;
      }
      uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_f8);
      uVar20 = *(undefined8 *)PTR_DAT_04caca40;
      uStack_b4 = (uint)bVar7;
      uVar12 = System_Int32__ToString_482d750(&uStack_b4,0);
      uVar10 = System_String__Concat_46d2b84(uVar10,uVar20,uVar12,0);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                (param_1,param_4,uVar13,uVar11,uVar10);
      goto LAB_023098b8;
    }
    if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(plVar6,&uStack_c0);
    uVar13 = uStack_a8;
    if (((uVar9 & 1) == 0) || (1 < uStack_c0)) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(param_1 + 0x40);
      uVar13 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb2078,0);
      if (lVar8 != 0) {
        lVar16 = *(long *)(lVar8 + 0x10);
        lVar18 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar8,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_023098b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    dStack_f8 = (double)(long)uStack_c0;
    uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_f8);
    uVar12 = System_Int64__ToString_482e7e4(&uStack_c0,0);
    uVar10 = System_String__Concat_46d2b84(uVar10,*(undefined8 *)PTR_DAT_04caca40,uVar12,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8(param_1,param_4,uVar13,uVar11,uVar10);
  } while( true );
}

