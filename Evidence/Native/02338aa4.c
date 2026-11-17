/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EvaluateCondition
bool Dino_BusSand_App_Meta_GiftPackFeature__EvaluateCondition (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, bool firstAttempt, int32_t* matchedGroup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02338cf0) */
/* WARNING: Removing unreachable block (ram,0x02338db0) */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EvaluateCondition
   bool Dino_BusSand_App_Meta_GiftPackFeature__EvaluateCondition
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, bool
   firstAttempt, int32_t* matchedGroup, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_GiftPackFeature__EvaluateCondition_2238aa4
          (undefined8 param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  if ((bRam0000000004f9beb7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3508);
    FUN_02132f7c(PTR_DAT_04cb3510);
    FUN_02132f7c(PTR_DAT_04cb3518);
    FUN_02132f7c(PTR_DAT_04cb3520);
    FUN_02132f7c(PTR_DAT_04cb3528);
    FUN_02132f7c(PTR_DAT_04cb3530);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb3538);
    FUN_02132f7c(PTR_DAT_04cb3540);
    FUN_02132f7c(PTR_DAT_04cb3548);
    FUN_02132f7c(PTR_DAT_04cb3550);
    FUN_02132f7c(PTR_DAT_04cb3558);
    bRam0000000004f9beb7 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  *param_4 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) goto LAB_02338db8;
LAB_02338bac:
    puVar10 = (undefined8 *)(param_2 + 0x68);
  }
  else {
    if (param_2 == 0) goto LAB_02338db8;
    puVar10 = (undefined8 *)(param_2 + 0x70);
    uVar7 = System_String__IsNullOrWhiteSpace_46d20a0(*puVar10,0);
    if ((uVar7 & 1) != 0) goto LAB_02338bac;
  }
  uVar11 = *puVar10;
  uVar7 = System_String__IsNullOrWhiteSpace_46d20a0(uVar11,0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_2),
     (uVar7 & 1) == 0)) {
    lVar8 = Dino_BusSand_App_Meta_GiftPackCycle__Parse_2232f58(uVar11);
    if (lVar8 == 0) {
LAB_02338db8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar5 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel_22352c4();
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_d0,lVar8,*(undefined8 *)PTR_DAT_04cb3548);
      puVar4 = PTR_DAT_04cb3550;
      puVar3 = PTR_DAT_04cb3520;
      puVar2 = PTR_DAT_04cb3518;
      puVar1 = PTR_DAT_04cb3510;
      puStack_78 = puStack_c8;
      uStack_80 = uStack_d0;
      uStack_70 = uStack_c0;
      puStack_a8 = &uStack_80;
      lStack_b0 = 0;
      do {
        uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_80,*(undefined8 *)puVar3);
        uVar7 = uStack_70;
        if ((uVar9 & 1) == 0) {
          uVar5 = 0;
          goto LAB_02338d68;
        }
        if (uStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(uStack_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_KeyValuePair_Int32Enum__object____GetEnumerator_396b5a8
                  (&uStack_d0,*(long *)(uStack_70 + 0x18),*(undefined8 *)puVar4);
        uStack_a0 = uStack_d0;
        uStack_d0 = 0;
        puStack_98 = puStack_c8;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        puStack_c8 = &uStack_a0;
        do {
          uVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_Int32Enum__object____MoveNext_35b61b0
                            (&uStack_a0,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) break;
          uVar9 = Dino_BusSand_App_Meta_GiftPackFeature__EvaluateSingle_223916c
                            (param_1,uStack_90 & 0xffffffff,uStack_88,uVar5);
        } while ((uVar9 & 1) != 0);
        System_Collections_Generic_List_Enumerator_KeyValuePair_Int32Enum__object____Dispose_35b61ac
                  (&uStack_a0,*(undefined8 *)puVar1);
      } while (((uVar6 ^ 1) & 1) == 0);
      *param_4 = *(undefined4 *)(uVar7 + 0x10);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8
                        (param_1,*(undefined4 *)(param_2 + 0x10));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = 1;
      *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(uVar7 + 0x10);
LAB_02338d68:
      lVar8 = lStack_b0;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_a8,*(undefined8 *)PTR_DAT_04cb3508);
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213321c(lVar8);
      }
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

