/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$End
void Dino_BusSand_App_UI_KitAdopt__End (Dino_BusSand_App_UI_KitAdopt_Scope_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0237ed20) */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$End
   void Dino_BusSand_App_UI_KitAdopt__End (Dino_BusSand_App_UI_KitAdopt_Scope_o* s, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitAdopt__End_227e4f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  if ((bRam0000000004f9c135 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4c38);
    FUN_02132f7c(PTR_DAT_04cb4c40);
    FUN_02132f7c(PTR_DAT_04cb4c48);
    FUN_02132f7c(PTR_DAT_04cb4c50);
    FUN_02132f7c(PTR_DAT_04cb4c58);
    FUN_02132f7c(PTR_DAT_04cb4c60);
    FUN_02132f7c(PTR_DAT_04cb4c68);
    FUN_02132f7c(PTR_DAT_04cb4c70);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cb4c78);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cb4c80);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cb4c88);
    FUN_02132f7c(PTR_DAT_04cb4c90);
    FUN_02132f7c(PTR_DAT_04cb4c98);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cb4ca0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb4ca8);
    bRam0000000004f9c135 = 1;
  }
  puVar2 = PTR_DAT_04cad7b8;
  lStack_68 = 0;
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  lStack_b0 = 0;
  uStack_c8 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  if (param_1 != 0) {
    lVar10 = *(long *)PTR_DAT_04cad7b8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (**(long **)(lVar10 + 0xb8) == 0) {
LAB_0237eefc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___Remove_3a830f8
              (**(long **)(lVar10 + 0xb8),param_1,*(undefined8 *)PTR_DAT_04cb4ca0);
    plVar24 = (long *)(param_1 + 0x10);
    lVar10 = *plVar24;
    lVar23 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if (lVar23 == 0) goto LAB_0237eefc;
      lVar10 = (long)*(int *)(lVar23 + 0x24);
      if (*(int *)(lVar23 + 0x24) < *(int *)(lVar23 + 0x20)) {
        lVar20 = 0;
        do {
          lVar15 = *(long *)(param_1 + 0x28);
          if (lVar15 == 0) goto LAB_0237eefc;
          uVar22 = (uint)lVar10;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_0237ef00;
          lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
          if ((uVar11 & 1) == 0) {
            lVar16 = *(long *)(lVar23 + 0x28);
            if (lVar16 == 0) goto LAB_0237eefc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_0237ef00;
            lVar18 = *(long *)(lVar23 + 0x30);
            if (lVar18 == 0) goto LAB_0237eefc;
            if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0237ef00;
            uVar22 = *(uint *)(lVar16 + lVar10 * 4 + 0x20);
            uVar1 = *(uint *)(lVar18 + lVar10 * 4 + 0x20);
            uVar11 = (ulong)uVar1;
            plVar17 = plVar24;
            if ((int)uVar22 < 0) {
LAB_0237e7b8:
              lVar16 = *plVar17;
            }
            else {
              lVar16 = *(long *)(param_1 + 0x30);
              if (lVar16 == 0) goto LAB_0237eefc;
              if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_0237ef00;
              if (*(char *)(lVar16 + (ulong)uVar22 + 0x20) != '\0') {
                lVar16 = *(long *)(param_1 + 0x28);
                if (lVar16 != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_0237ef00;
                  plVar17 = (long *)(lVar16 + (ulong)uVar22 * 8 + 0x20);
                  goto LAB_0237e7b8;
                }
                goto LAB_0237eefc;
              }
              lVar16 = 0;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
            if ((uVar12 & 1) == 0) {
              if (lVar20 == 0) {
                lVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4c68);
                System_Collections_Generic_Dictionary_ValueTuple_int__int___object____ctor_3376398
                          (lVar20,*(undefined8 *)PTR_DAT_04cb4c50);
              }
              lStack_100 = 0;
              System_ValueTuple_int__int____ctor_30de994
                        (&lStack_100,uVar22,uVar11,*(undefined8 *)PTR_DAT_04cb4ca8);
              if (lVar20 == 0) goto LAB_0237eefc;
              uVar12 = System_Collections_Generic_Dictionary_ValueTuple_int__int___object___TryGetValue_3378bec
                                 (lVar20,lStack_100,&lStack_68,*(undefined8 *)PTR_DAT_04cb4c48);
              lVar18 = lStack_68;
              if ((uVar12 & 1) == 0) {
LAB_0237e8c4:
                if (-1 < (int)uVar1) {
                  lVar18 = *(long *)(param_1 + 0x30);
                  if (lVar18 == 0) goto LAB_0237eefc;
                  if (*(uint *)(lVar18 + 0x18) <= uVar1) {
LAB_0237ef00:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(char *)(lVar18 + uVar11 + 0x20) != '\0') {
                    lVar18 = *(long *)(param_1 + 0x28);
                    if (lVar18 == 0) goto LAB_0237eefc;
                    if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_0237ef00;
                    lVar18 = *(long *)(lVar18 + uVar11 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_0237eefc;
                    uVar13 = UnityEngine_Transform__get_parent_43d0d70(lVar18,0);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar2);
                    }
                    uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar13,lVar16,0);
                    if ((uVar12 & 1) != 0) {
                      lVar18 = *(long *)(param_1 + 0x28);
                      if (lVar18 != 0) {
                        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_0237ef00;
                        lVar18 = *(long *)(lVar18 + uVar11 * 8 + 0x20);
                        if (lVar18 != 0) goto LAB_0237e95c;
                      }
                      goto LAB_0237eefc;
                    }
                  }
                  iVar8 = -1;
                  goto LAB_0237e970;
                }
                if (lVar15 == 0) goto LAB_0237eefc;
                UnityEngine_Transform__SetParent_43d1e34(lVar15,lVar16,0,0);
                iVar8 = 0;
                if (lVar16 == 0) goto LAB_0237eefc;
LAB_0237e9b4:
                iVar9 = UnityEngine_Transform__get_childCount_43d4480(lVar16,0);
                if (iVar9 + -1 <= iVar8) {
                  iVar8 = iVar9 + -1;
                }
                UnityEngine_Transform__SetSiblingIndex_43d4730(lVar15,iVar8,0);
              }
              else {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
                if ((uVar12 & 1) == 0) goto LAB_0237e8c4;
                if (lStack_68 == 0) goto LAB_0237eefc;
                uVar13 = UnityEngine_Transform__get_parent_43d0d70(lStack_68,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar13,lVar16,0);
                if ((uVar12 & 1) == 0) goto LAB_0237e8c4;
                lVar18 = lStack_68;
                if (lStack_68 == 0) goto LAB_0237eefc;
LAB_0237e95c:
                iVar8 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar18,0);
                iVar8 = iVar8 + 1;
LAB_0237e970:
                if (lVar15 == 0) goto LAB_0237eefc;
                UnityEngine_Transform__SetParent_43d1e34(lVar15,lVar16,0,0);
                if (-1 < iVar8) {
                  if (lVar16 != 0) goto LAB_0237e9b4;
                  goto LAB_0237eefc;
                }
              }
              lStack_100 = 0;
              System_ValueTuple_int__int____ctor_30de994
                        (&lStack_100,uVar22,uVar11,*(undefined8 *)PTR_DAT_04cb4ca8);
              System_Collections_Generic_Dictionary_ValueTuple_int__int___object___set_Item_3377120
                        (lVar20,lStack_100,lVar15,*(undefined8 *)PTR_DAT_04cb4c60);
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar23 + 0x20));
      }
    }
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0237eefc;
      uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x18),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      UnityEngine_Object__DestroyImmediate_43c8260(uVar13,0);
    }
    lVar10 = *plVar24;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    if ((uVar11 & 1) == 0) {
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x40) == 0)) goto LAB_0237eefc;
      iVar8 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object____get_Count_34063f0
                        (*(long *)(lVar23 + 0x40),*(undefined8 *)PTR_DAT_04cb4c58);
      if (iVar8 != 0) {
        if (*(long *)(lVar23 + 0x40) == 0) goto LAB_0237eefc;
        System_Collections_Generic_Dictionary_int__ValueTuple_object__object____GetEnumerator_3406b88
                  (&lStack_100,*(long *)(lVar23 + 0x40),*(undefined8 *)PTR_DAT_04cb4c40);
        puVar6 = PTR_DAT_04cb4c78;
        puVar5 = PTR_DAT_04cad6f0;
        puVar4 = PTR_DAT_04cad6c0;
        puVar3 = PTR_DAT_04cabdb0;
        uStack_98 = plStack_f8;
        lStack_a0 = lStack_100;
        uStack_88 = uStack_e8;
        lStack_90 = lStack_f0;
        plStack_f8 = &lStack_a0;
        lVar10 = 0;
        uStack_78 = uStack_d8;
        uStack_80 = uStack_e0;
        lStack_100 = 0;
        while (uVar11 = System_Collections_Generic_Dictionary_Enumerator_int__ValueTuple_object__object____MoveNext_36294f4
                                  (&lStack_a0,*(undefined8 *)puVar6), uVar7 = uStack_80,
              uVar13 = uStack_88, lVar23 = lStack_100, (uVar11 & 1) != 0) {
          lVar23 = *(long *)(param_1 + 0x30);
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar22 = (uint)lStack_90;
          lVar20 = (long)(int)(uint)lStack_90;
          if (*(uint *)(lVar23 + 0x18) <= (uint)lStack_90) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(char *)(lVar23 + lVar20 + 0x20) != '\0') {
            lVar23 = *(long *)(param_1 + 0x28);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(uint *)(lVar23 + 0x18) <= (uint)lStack_90) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            uVar21 = *(undefined8 *)(lVar23 + lVar20 * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar21,0,0);
            if ((uVar11 & 1) == 0) {
              lVar23 = *(long *)(param_1 + 0x28);
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar24 = *(long **)(lVar23 + lVar20 * 8 + 0x20);
              if ((plVar24 != (long *)0x0) && (*plVar24 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(plVar24);
              }
              if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__Apply_227f07c(param_1,plVar24,uVar13,uVar7);
              if (lVar10 == 0) {
                lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
                System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar5)
                ;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
              lVar23 = *(long *)(lVar10 + 0x10);
              lVar20 = *(long *)puVar4;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar22 = *(uint *)(lVar10 + 0x18);
              if (uVar22 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar22 + 1;
                puVar14 = (undefined8 *)(lVar23 + (long)(int)uVar22 * 8 + 0x20);
                *puVar14 = plVar24;
                thunk_FUN_02134474(puVar14,plVar24);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar10,plVar24,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_int__ValueTuple_object__object____Dispose_3629630
                  (plStack_f8,*(undefined8 *)PTR_DAT_04cb4c70);
        if (lVar23 != 0) {
LAB_0237ef34:
                    /* WARNING: Subroutine does not return */
          FUN_0213321c(lVar23);
        }
        if (lVar10 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&lStack_100,lVar10,*(undefined8 *)PTR_DAT_04cad6d0);
          puVar4 = PTR_DAT_04cb4c88;
          puVar3 = PTR_DAT_04cb4c38;
          puVar2 = PTR_DAT_04cad698;
          plStack_b8 = plStack_f8;
          lStack_c0 = lStack_100;
          lStack_b0 = lStack_f0;
          plStack_f8 = &lStack_c0;
          lStack_100 = 0;
          while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&lStack_c0,*(undefined8 *)puVar2), lVar23 = lStack_100,
                (uVar11 & 1) != 0) {
            if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = UnityEngine_Component__GetComponents_object__26fa124
                               (lStack_b0,*(undefined8 *)puVar3);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
              uVar11 = 0;
              uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
              do {
                if (uVar12 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar24 = *(long **)(lVar10 + uVar11 * 8 + 0x20);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar23 = *plVar24;
                uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
                if (uVar12 != 0) {
                  piVar19 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar23 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0237ee20;
                    }
                    uVar12 = uVar12 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar12 != 0);
                }
                puVar14 = (undefined8 *)FUN_0216b7a4(plVar24,*(long *)puVar4,0);
LAB_0237ee20:
                (*(code *)*puVar14)(plVar24,puVar14[1]);
                uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (plStack_f8,*(undefined8 *)PTR_DAT_04cad688);
          if (lVar23 != 0) goto LAB_0237ef34;
        }
      }
    }
  }
  return;
}

