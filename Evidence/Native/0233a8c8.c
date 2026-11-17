/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$MarkPopupShown
void Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$MarkPopupShown
   void Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown_223a8c8(long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9bec8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9bec8 = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(param_1,param_2);
  puVar2 = PTR_DAT_04caec48;
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  iVar4 = Dino_BusSand_App_Meta_GiftPackCycle__DayKey_2233654(lVar7 / 1000);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x70) == iVar4) {
      iVar11 = *(int *)(lVar6 + 0x74) + 1;
    }
    else {
      iVar11 = 1;
      *(int *)(lVar6 + 0x70) = iVar4;
      *(undefined4 *)(lVar6 + 0x74) = 0;
    }
    *(int *)(lVar6 + 0x74) = iVar11;
    *(long *)(lVar6 + 0x40) = lVar7 / 1000;
    puVar2 = PTR_DAT_04cb3390;
    *(int *)(lVar6 + 0x48) = iVar4;
    uVar10 = *(undefined8 *)puVar2;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    *(ulong *)(lVar6 + 0x34) =
         CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 0x34) >> 0x20) + 1,
                  (int)*(undefined8 *)(lVar6 + 0x34) + 1);
    lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar10);
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)puVar2;
      *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
      lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar10);
      if (lVar6 != 0) {
        lVar7 = *(long *)PTR_DAT_04caefe8;
        *(int *)(lVar6 + 0x54) = *(int *)(lVar6 + 0x54) + 1;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar2 = PTR_DAT_04cac668;
        if (param_1[2] == 0) {
          return;
        }
        uVar10 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
        lVar6 = param_1[2];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar6,
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
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar8,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar7 + 0x130) = uVar8;
            thunk_FUN_02134474(lVar7 + 0x130,uVar8);
          }
          uVar8 = UnityEngine_JsonUtility__ToJson_44323ac(lVar6,0);
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
            uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar6 = lStack_50;
            if ((uVar5 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar7 = *(long *)(lVar7 + 0x130);
              lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar6,0);
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x10) = uVar10;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x10),uVar10);
                *(undefined8 *)(lVar6 + 0x18) = uVar8;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar8);
                if (lVar7 != 0) {
                  lVar12 = *(long *)(lVar7 + 0x10);
                  lVar13 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar12 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar9 = lVar6;
                      thunk_FUN_02134474(plVar9,lVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar7,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                      ;
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
            uVar5 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar10,0);
          } while ((uVar5 & 1) == 0);
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

