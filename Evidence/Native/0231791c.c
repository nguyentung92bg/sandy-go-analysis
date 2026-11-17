/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapShow
void Dino_BusSand_App_Meta_GameTracking__IapShow (Il2CppObject* owner, System_String_o* placement, System_String_o* showType, System_String_o* trigger, System_Int32_array* storeItems, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapShow
   void Dino_BusSand_App_Meta_GameTracking__IapShow (Il2CppObject* owner, System_String_o*
   placement, System_String_o* showType, System_String_o* trigger, System_Int32_array* storeItems,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__IapShow_221791c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04cac498;
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
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)puVar3);
  uVar8 = System_String__op_Inequality_46d110c(param_3,*(undefined8 *)puVar6,0);
  puVar3 = PTR_DAT_04cab718;
  if ((uVar8 & 1) != 0) {
    if (param_5 == 0) goto LAB_02317d54;
    if (0 < (int)*(ulong *)(param_5 + 0x18)) {
      uVar8 = 0;
      uVar11 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(param_5 + 0x20 + uVar8 * 4);
        if (0 < iVar1) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(iVar1);
          if (lVar7 == 0) goto LAB_02317d54;
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_02317d54;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar7,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar11 = (ulong)*(uint *)(param_5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(param_5 + 0x18));
    }
  }
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2628);
  System_Object___ctor_4870e5c(lVar12,0);
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x38) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar12 + 0x38),param_1);
    puVar20 = (undefined8 *)(lVar12 + 0x10);
    *puVar20 = param_2;
    thunk_FUN_02134474(puVar20,param_2);
    puVar19 = (undefined8 *)(lVar12 + 0x18);
    *puVar19 = param_3;
    thunk_FUN_02134474(puVar19,param_3);
    puVar18 = (undefined8 *)(lVar12 + 0x20);
    *puVar18 = param_4;
    thunk_FUN_02134474(puVar18,param_4);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        uVar9 = *(undefined8 *)PTR_DAT_04ca9b60;
      }
      else {
        uVar9 = System_String__Join_46d39a4(*(undefined8 *)PTR_DAT_04cae4f8,lVar7,0);
      }
      puVar17 = (undefined8 *)(lVar12 + 0x28);
      *puVar17 = uVar9;
      thunk_FUN_02134474(puVar17);
      uVar21 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      lVar7 = *(long *)puVar5;
      *(undefined4 *)(lVar12 + 0x30) = uVar21;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar5;
      }
      lVar15 = *(long *)(*(undefined1 **)(lVar7 + 0xb8) + 0x68);
      *(undefined1 *)(lVar12 + 0x40) = **(undefined1 **)(lVar7 + 0xb8);
      if (lVar15 != 0) {
        lVar7 = *(long *)(lVar15 + 0x10);
        lVar16 = *(long *)PTR_DAT_04cb2670;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        puVar5 = PTR_DAT_04cb2240;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            plVar13 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02134474(plVar13,lVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar15,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          Dino_BusSand_App_Meta_GameTracking__IapTimeStart_2213cc0();
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
                    /* catch() { ... } // from try @ 02317da4 with catch @ 02317cc4 */
          if ((((lVar7 != 0) &&
               (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                  (lVar7,*(undefined8 *)PTR_DAT_04caa870,*puVar20,0), lVar7 != 0))
              && (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar7,*(undefined8 *)PTR_DAT_04cb2678,*puVar19,0), lVar7 != 0))
             && (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                   (lVar7,*(undefined8 *)PTR_DAT_04cb2690,*puVar18,0),
                puVar5 = PTR_DAT_04cb2688, lVar7 != 0)) {
            uVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar7,*(undefined8 *)PTR_DAT_04cb2680,*puVar17,0);
            puVar3 = PTR_DAT_04cb2240;
            uVar14 = *(undefined8 *)puVar5;
            if ((bRam0000000004f9c11b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar9,0);
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
            lVar7 = Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c
                              (uVar14,uVar9,&stack0xffffffffffffffb8);
            if (lVar7 != 0) {
              uVar9 = System_String__Concat_46d30e8
                                (*(undefined8 *)puVar4,uVar14,*(undefined8 *)puVar5,lVar7,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar9);
              return;
            }
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uStack_68 = 0;
            System_Collections_Generic_KeyValuePair_object__object____ctor_3910e8c
                      (&uStack_68,uVar14,uVar9,*(undefined8 *)PTR_DAT_04cb4880);
            if (lVar7 != 0) {
              lVar12 = *(long *)(lVar7 + 0x10);
              lVar15 = *(long *)PTR_DAT_04cb4888;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar2 = *(uint *)(lVar7 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)uVar2 * 0x10;
                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                  puVar18 = (undefined8 *)(lVar12 + 0x20);
                  *puVar18 = uStack_68;
                  *(undefined8 *)(lVar12 + 0x28) = 0;
                  thunk_FUN_02134474(puVar18,0);
                }
                else {
                  System_Collections_Generic_List_KeyValuePair_object__object____AddWithResize_397033c
                            (lVar7,uStack_68,0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                lVar7 = *(long *)puVar3;
                lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                if (lVar12 != 0) {
                  if (300 < *(int *)(lVar12 + 0x18)) {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                      if (lVar12 == 0) goto LAB_023754bc;
                    }
                    System_Collections_Generic_List_KeyValuePair_object__object____RemoveAt_3971b48
                              (lVar12,0,*(undefined8 *)PTR_DAT_04cb4890);
                    lVar7 = *(long *)puVar3;
                  }
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar3;
                  }
                  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x20) != '\0') {
                    uVar10 = Dino_BusSand_App_MiniJson__Serialize_21556ec(uVar9,0);
                    uVar10 = System_String__Concat_46d30e8
                                       (*(undefined8 *)puVar4,uVar14,*(undefined8 *)PTR_DAT_04cab270
                                        ,uVar10,0);
                    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                    }
                    UnityEngine_Debug__Log_4360fc8(uVar10,0);
                    lVar7 = *(long *)puVar3;
                  }
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar3;
                  }
                  lVar12 = **(long **)(lVar7 + 0xb8);
                  if (lVar12 == 0) {
                    return;
                  }
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                  (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),uVar14,uVar9,
                             *(undefined8 *)(lVar12 + 0x28));
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

