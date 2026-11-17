/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TryInitPassportCycleSnapshot
void Dino_BusSand_App_Meta_PassportFeature__TryInitPassportCycleSnapshot (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TryInitPassportCycleSnapshot
   void Dino_BusSand_App_Meta_PassportFeature__TryInitPassportCycleSnapshot
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__TryInitPassportCycleSnapshot_22494ac(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9bf80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf80 = 1;
  }
  uVar8 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((((uVar8 & 1) == 0) ||
      (iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1), iVar6 < 1))
     || (lVar9 = Dino_BusSand_App_Meta_PassportFeature__PackState_22493c0(param_1), lVar9 == 0)) {
    return;
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  uVar8 = Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot_2246084(param_1);
  if ((uVar8 & 1) != 0) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar6 = *(int *)(lVar10 + 0x44);
    iVar7 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1);
    if ((iVar6 == iVar7) &&
       (((uVar8 = System_String__op_Equality_46d1108
                            (*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(lVar9 + 0x80),0),
         (uVar8 & 1) == 0 || (*(char *)(lVar10 + 0x60) != '\0')) ||
        (*(char *)(lVar9 + 0x30) == '\0')))) {
      if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
      uVar8 = Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired_2246258(param_1,uVar11);
      puVar4 = PTR_DAT_04cb01b0;
      if ((uVar8 & 1) == 0) {
        return;
      }
      if ((bRam0000000004f9bf82 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb0558);
        FUN_02132f7c(PTR_DAT_04cb01b0);
        FUN_02132f7c(PTR_DAT_04caef48);
        bRam0000000004f9bf82 = 1;
      }
      lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar4);
      if (lVar9 == 0) {
LAB_02349708:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar9 + 0x14) == 2) {
        Dino_BusSand_App_Meta_PassportFeature__ResetForNewCycle_22497ec(param_1);
        Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot_224945c(param_1);
        lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar4);
        if (lVar9 == 0) goto LAB_02349708;
        *(undefined4 *)(lVar9 + 0x14) = 0;
        lVar9 = Dino_BusSand_App_Meta_PassportFeature__PackState_22493c0(param_1);
        if (((lVar9 != 0) && (*(char *)(lVar9 + 0x30) != '\0')) && (*(char *)(lVar9 + 0x6c) != '\0')
           ) {
          Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward_2249918(param_1,0,0);
        }
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                  (param_1,*(undefined8 *)PTR_DAT_04cb0558);
        puVar4 = PTR_DAT_04caef48;
        lVar9 = *(long *)PTR_DAT_04caef48;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023496f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
          return;
        }
      }
      return;
    }
  }
  iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1);
  if ((bRam0000000004f9bf7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf7e = 1;
  }
  if ((iVar6 < 1) || (lVar9 == 0)) {
    return;
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar14 = *(long *)PTR_DAT_04ca9c30;
  if (*(long *)(lVar9 + 0x80) != 0) {
    lVar14 = *(long *)(lVar9 + 0x80);
  }
  *(long *)(lVar10 + 0x48) = lVar14;
  *(int *)(lVar10 + 0x44) = iVar6;
  thunk_FUN_02134474((long *)(lVar10 + 0x48));
  uVar11 = *(undefined8 *)(lVar9 + 0x58);
  uVar1 = *(undefined1 *)(lVar9 + 0x30);
  uVar2 = *(undefined1 *)(lVar9 + 0x6c);
  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar9 + 0x60);
  *(undefined8 *)(lVar10 + 0x50) = uVar11;
  *(undefined1 *)(lVar10 + 0x60) = uVar1;
  *(undefined1 *)(lVar10 + 0x61) = uVar2;
  *(undefined1 *)(lVar10 + 0x1c) = uVar2;
  uVar11 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  lVar9 = *(long *)PTR_DAT_04cb0558;
  *(undefined8 *)(lVar10 + 0x68) = uVar11;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar4 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar11 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar10 = param_1[2];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar10,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x20));
    FUN_02132f7c(PTR_DAT_04cc4910);
    FUN_02132f7c(PTR_DAT_04cc4918);
    FUN_02132f7c(PTR_DAT_04cc4930);
    FUN_02132f7c(PTR_DAT_04cc4920);
    FUN_02132f7c(PTR_DAT_04cb4790);
    FUN_02132f7c(PTR_DAT_04cb4798);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cc4938);
    bRam0000000004f9d81f = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x130) == 0) {
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar12,*(undefined8 *)PTR_DAT_04cb4790)
      ;
      *(undefined8 *)(lVar9 + 0x130) = uVar12;
      thunk_FUN_02134474(lVar9 + 0x130,uVar12);
    }
    uVar12 = UnityEngine_JsonUtility__ToJson_44323ac(lVar10,0);
    puVar5 = PTR_DAT_04cc4910;
    if (*(long *)(lVar9 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar9 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar5);
      lVar10 = lStack_50;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar10 = *(long *)(lVar9 + 0x130);
        lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x10) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar9 + 0x10),uVar11);
          *(undefined8 *)(lVar9 + 0x18) = uVar12;
          thunk_FUN_02134474((undefined8 *)(lVar9 + 0x18),uVar12);
          if (lVar10 != 0) {
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                plVar13 = (long *)(lVar14 + (long)(int)uVar3 * 8 + 0x20);
                *plVar13 = lVar9;
                thunk_FUN_02134474(plVar13,lVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar10,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
              return;
            }
          }
        }
        goto LAB_028ef87c;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar11,0);
    } while ((uVar8 & 1) == 0);
    *(undefined8 *)(lVar10 + 0x18) = uVar12;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar12);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

