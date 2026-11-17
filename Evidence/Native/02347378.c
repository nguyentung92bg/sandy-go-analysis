/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AddPendingKeys
void Dino_BusSand_App_Meta_PassportFeature__AddPendingKeys (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AddPendingKeys
   void Dino_BusSand_App_Meta_PassportFeature__AddPendingKeys
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t amount, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__AddPendingKeys_2247378(long *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9bf71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf71 = 1;
  }
  if (param_2 < 1) {
    return;
  }
  lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  uVar8 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = Dino_BusSand_App_Meta_PassportFeature__IsAllStageMaxed_2246d38(param_1);
    uVar8 = uVar8 & 0xffffffff;
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_38 = 0;
  Dino_BusSand_App_Meta_PassportFeature__Simulate_2246ae8
            (param_1,*(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x24),(long)&uStack_38 + 4,&uStack_38
            );
  iVar6 = uStack_38._4_4_;
  uStack_38 = 0;
  param_2 = *(int *)(lVar7 + 0x24) + param_2;
  *(int *)(lVar7 + 0x24) = param_2;
  Dino_BusSand_App_Meta_PassportFeature__Simulate_2246ae8
            (param_1,*(int *)(lVar7 + 0x20) + param_2,(long)&uStack_38 + 4,&uStack_38);
  iVar4 = uStack_38._4_4_;
  if (iVar6 < uStack_38._4_4_) {
    iVar6 = iVar6 + 1;
    do {
      iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
      if (iVar5 < iVar6) break;
      Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage_2247500(param_1,iVar6 + -1);
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar4);
    iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    if (iVar4 == iVar6) {
      Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage_2247500(param_1,iVar4);
    }
  }
  puVar2 = PTR_DAT_04cb0558;
  if ((uVar8 & 1) == 0) {
    iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
    if (iVar5 + iVar6 <= iVar4) {
      *(undefined1 *)(lVar7 + 0x78) = 1;
    }
  }
  lVar7 = *(long *)puVar2;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar2 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar11 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar14 = param_1[2];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar14,
                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20));
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
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x130) == 0) {
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar7 + 0x130) = uVar9;
      thunk_FUN_02134474(lVar7 + 0x130,uVar9);
    }
    uVar9 = UnityEngine_JsonUtility__ToJson_44323ac(lVar14,0);
    puVar3 = PTR_DAT_04cc4910;
    if (*(long *)(lVar7 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar7 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar3);
      lVar14 = lStack_50;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar14 = *(long *)(lVar7 + 0x130);
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x10) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar11);
          *(undefined8 *)(lVar7 + 0x18) = uVar9;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar9);
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar7;
                thunk_FUN_02134474(plVar10,lVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar14,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
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
    *(undefined8 *)(lVar14 + 0x18) = uVar9;
    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x18),uVar9);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

