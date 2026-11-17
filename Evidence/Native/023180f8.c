/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapShowShop
void Dino_BusSand_App_Meta_GameTracking__IapShowShop (Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023751f8) */
/* WARNING: Removing unreachable block (ram,0x02375210) */
/* WARNING: Removing unreachable block (ram,0x0237521c) */
/* WARNING: Removing unreachable block (ram,0x0237523c) */
/* WARNING: Removing unreachable block (ram,0x0237525c) */
/* WARNING: Removing unreachable block (ram,0x0237527c) */
/* WARNING: Removing unreachable block (ram,0x023754c0) */
/* WARNING: Removing unreachable block (ram,0x0237529c) */
/* WARNING: Removing unreachable block (ram,0x023752d0) */
/* WARNING: Removing unreachable block (ram,0x023752d8) */
/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapShowShop
   void Dino_BusSand_App_Meta_GameTracking__IapShowShop (Il2CppObject* owner, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__IapShowShop_22180f8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb26b0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2640);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04cb2648);
    FUN_02132f7c(PTR_DAT_04cb2650);
    bRam0000000004f9bd63 = 1;
  }
  puVar6 = PTR_DAT_04cb26b0;
  puVar4 = PTR_DAT_04cb2648;
  puVar3 = PTR_DAT_04cb2640;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_GameTracking__get_InGameNow_2217614();
  lVar18 = *(long *)puVar6;
  uVar20 = *(undefined8 *)puVar4;
  uVar21 = *(undefined8 *)puVar3;
  lVar13 = *(long *)(lVar18 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar18);
    lVar13 = *(long *)(lVar18 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  puVar4 = PTR_DAT_04cb2650;
  puVar3 = PTR_DAT_04cae0f0;
  lVar18 = *(long *)puVar5;
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar18);
  }
  puVar5 = PTR_DAT_04cac498;
  uVar9 = *(undefined8 *)puVar4;
  if ((uVar8 & 1) == 0) {
    uVar20 = uVar21;
  }
  uVar21 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9bd62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2628);
    FUN_02132f7c(PTR_DAT_04cb2670);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2678);
    FUN_02132f7c(PTR_DAT_04cb2680);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb2688);
    FUN_02132f7c(PTR_DAT_04cb2690);
    FUN_02132f7c(PTR_DAT_04cb2650);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9bd62 = 1;
  }
  puVar6 = PTR_DAT_04cb2650;
  puVar4 = PTR_DAT_04cab748;
  puVar3 = PTR_DAT_04cab740;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__IapClose_2217d5c(param_1,0);
  lVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar18,*(undefined8 *)puVar3);
  uVar8 = System_String__op_Inequality_46d110c(uVar9,*(undefined8 *)puVar6,0);
  puVar3 = PTR_DAT_04cab718;
  if ((uVar8 & 1) != 0) {
    if (lVar13 == 0) goto LAB_02317d54;
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(lVar13 + 0x20 + uVar8 * 4);
        if (0 < iVar1) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(iVar1);
          if (lVar18 == 0) goto LAB_02317d54;
          lVar11 = *(long *)(lVar18 + 0x10);
          lVar14 = *(long *)puVar3;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_02317d54;
          uVar2 = *(uint *)(lVar18 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar18,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
  }
  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2628);
  System_Object___ctor_4870e5c(lVar13,0);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x38) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar13 + 0x38),param_1);
    puVar19 = (undefined8 *)(lVar13 + 0x10);
    *puVar19 = uVar20;
    thunk_FUN_02134474(puVar19,uVar20);
    puVar17 = (undefined8 *)(lVar13 + 0x18);
    *puVar17 = uVar9;
    thunk_FUN_02134474(puVar17,uVar9);
    puVar16 = (undefined8 *)(lVar13 + 0x20);
    *puVar16 = uVar21;
    thunk_FUN_02134474(puVar16,uVar21);
    if (lVar18 != 0) {
      if (*(int *)(lVar18 + 0x18) < 1) {
        uVar20 = *(undefined8 *)PTR_DAT_04ca9b60;
      }
      else {
        uVar20 = System_String__Join_46d39a4(*(undefined8 *)PTR_DAT_04cae4f8,lVar18,0);
      }
      puVar15 = (undefined8 *)(lVar13 + 0x28);
      *puVar15 = uVar20;
      thunk_FUN_02134474(puVar15);
      uVar22 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      lVar18 = *(long *)puVar5;
      *(undefined4 *)(lVar13 + 0x30) = uVar22;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(undefined1 **)(lVar18 + 0xb8) + 0x68);
      *(undefined1 *)(lVar13 + 0x40) = **(undefined1 **)(lVar18 + 0xb8);
      if (lVar11 != 0) {
        lVar18 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)PTR_DAT_04cb2670;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        puVar5 = PTR_DAT_04cb2240;
        if (lVar18 != 0) {
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            plVar12 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *plVar12 = lVar13;
            thunk_FUN_02134474(plVar12,lVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar11,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          Dino_BusSand_App_Meta_GameTracking__IapTimeStart_2213cc0();
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar13 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
          if ((((lVar13 != 0) &&
               (lVar13 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                   (lVar13,*(undefined8 *)PTR_DAT_04caa870,*puVar19,0), lVar13 != 0)
               ) && (lVar13 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                        (lVar13,*(undefined8 *)PTR_DAT_04cb2678,*puVar17,0),
                    lVar13 != 0)) &&
             (lVar13 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                 (lVar13,*(undefined8 *)PTR_DAT_04cb2690,*puVar16,0),
             puVar5 = PTR_DAT_04cb2688, lVar13 != 0)) {
            uVar20 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                               (lVar13,*(undefined8 *)PTR_DAT_04cb2680,*puVar15,0);
            puVar3 = PTR_DAT_04cb2240;
            uVar21 = *(undefined8 *)puVar5;
            if ((bRam0000000004f9c11b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar20,0);
              FUN_02132f7c(PTR_DAT_04cb4880);
              FUN_02132f7c(PTR_DAT_04cb4888);
              FUN_02132f7c(PTR_DAT_04cb4890);
              FUN_02132f7c(PTR_DAT_04cb4898);
              FUN_02132f7c(PTR_DAT_04caa038);
              FUN_02132f7c(PTR_DAT_04cb2240);
              FUN_02132f7c(PTR_DAT_04caccc8);
              FUN_02132f7c(PTR_DAT_04cab270);
              FUN_02132f7c(PTR_DAT_04cb48a0);
              FUN_02132f7c(PTR_DAT_04cb48a8);
              bRam0000000004f9c11b = 1;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar4 = PTR_DAT_04cb48a0;
            puVar5 = PTR_DAT_04caccc8;
            lVar13 = Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c
                               (uVar21,uVar20,&stack0xffffffffffffffb8);
            if (lVar13 != 0) {
              uVar20 = System_String__Concat_46d30e8
                                 (*(undefined8 *)puVar4,uVar21,*(undefined8 *)puVar5,lVar13,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar20);
              return;
            }
            lVar13 = *(long *)puVar3;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar13 = *(long *)puVar3;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
            uStack_68 = 0;
            System_Collections_Generic_KeyValuePair_object__object____ctor_3910e8c
                      (&uStack_68,uVar21,uVar20,*(undefined8 *)PTR_DAT_04cb4880);
            if (lVar13 != 0) {
              lVar18 = *(long *)(lVar13 + 0x10);
              lVar11 = *(long *)PTR_DAT_04cb4888;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar18 != 0) {
                uVar2 = *(uint *)(lVar13 + 0x18);
                if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)uVar2 * 0x10;
                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                  puVar16 = (undefined8 *)(lVar18 + 0x20);
                  *puVar16 = uStack_68;
                  *(undefined8 *)(lVar18 + 0x28) = 0;
                  thunk_FUN_02134474(puVar16,0);
                }
                else {
                  System_Collections_Generic_List_KeyValuePair_object__object____AddWithResize_397033c
                            (lVar13,uStack_68,0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar13 = *(long *)puVar3;
                lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                if (lVar18 != 0) {
                  if (300 < *(int *)(lVar18 + 0x18)) {
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar18 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                      if (lVar18 == 0) goto LAB_023754bc;
                    }
                    System_Collections_Generic_List_KeyValuePair_object__object____RemoveAt_3971b48
                              (lVar18,0,*(undefined8 *)PTR_DAT_04cb4890);
                    lVar13 = *(long *)puVar3;
                  }
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar13 = *(long *)puVar3;
                  }
                  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x20) != '\0') {
                    uVar9 = Dino_BusSand_App_MiniJson__Serialize_21556ec(uVar20,0);
                    uVar9 = System_String__Concat_46d30e8
                                      (*(undefined8 *)puVar4,uVar21,*(undefined8 *)PTR_DAT_04cab270,
                                       uVar9,0);
                    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                    }
                    UnityEngine_Debug__Log_4360fc8(uVar9,0);
                    lVar13 = *(long *)puVar3;
                  }
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar13 = *(long *)puVar3;
                  }
                  lVar18 = **(long **)(lVar13 + 0xb8);
                  if (lVar18 == 0) {
                    return;
                  }
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar18 = **(long **)(*(long *)puVar3 + 0xb8);
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                  (**(code **)(lVar18 + 0x18))
                            (*(undefined8 *)(lVar18 + 0x40),uVar21,uVar20,
                             *(undefined8 *)(lVar18 + 0x28));
                  return;
                }
              }
            }
LAB_023754bc:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
LAB_02317d54:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

