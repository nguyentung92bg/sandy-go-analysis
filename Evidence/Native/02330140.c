/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$OnLevelWin
void Dino_BusSand_App_Meta_WeeklyCupFeature__OnLevelWin (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_WeeklyCupFeature__OnLevelWin
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, int32_t type, int32_t clearedLevel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_WeeklyCupFeature__OnLevelWin_2230140(long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9be6d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb30b8);
    FUN_02132f7c(PTR_DAT_04caf838);
    bRam0000000004f9be6d = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Unlocked_2230080();
  puVar2 = PTR_DAT_04caf838;
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04caf838);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x20) == 0) {
      lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
      uVar4 = Dino_BusSand_App_Meta_WeeklyCupFeature__Seed_2230210();
      if (lVar6 == 0) goto LAB_0233020c;
      *(undefined4 *)(lVar6 + 0x20) = uVar4;
    }
    lVar6 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(param_1);
    uVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    if (lVar6 != 0) {
      Dino_BusSand_App_Meta_WeeklyCupModel__AddWin_223036c(lVar6,param_2,uVar7);
      lVar6 = *(long *)PTR_DAT_04cb30b8;
      if ((bRam0000000004f9d943 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac668);
        bRam0000000004f9d943 = 1;
      }
      puVar2 = PTR_DAT_04cac668;
      if (param_1[2] == 0) {
        return;
      }
      uVar7 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      lVar12 = param_1[2];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      puVar2 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9d81f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc4908,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x20));
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
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x130) == 0) {
          uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar8,*(undefined8 *)PTR_DAT_04cb4790);
          *(undefined8 *)(lVar6 + 0x130) = uVar8;
          thunk_FUN_02134474(lVar6 + 0x130,uVar8);
        }
        uVar8 = UnityEngine_JsonUtility__ToJson_44323ac(lVar12,0);
        puVar3 = PTR_DAT_04cc4910;
        if (*(long *)(lVar6 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_78,*(long *)(lVar6 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
        lStack_50 = lStack_68;
        puStack_58 = puStack_70;
        uStack_60 = uStack_78;
        uStack_78 = 0;
        puStack_70 = &uStack_60;
        do {
          uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_60,*(undefined8 *)puVar3);
          lVar12 = lStack_50;
          if ((uVar5 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
            lVar12 = *(long *)(lVar6 + 0x130);
            lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
            Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) = uVar7;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x10),uVar7);
              *(undefined8 *)(lVar6 + 0x18) = uVar8;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar8);
              if (lVar12 != 0) {
                lVar10 = *(long *)(lVar12 + 0x10);
                lVar11 = *(long *)PTR_DAT_04cc4930;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar9 = lVar6;
                    thunk_FUN_02134474(plVar9,lVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar12,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
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
          uVar5 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar7,0);
        } while ((uVar5 & 1) == 0);
        *(undefined8 *)(lVar12 + 0x18) = uVar8;
        thunk_FUN_02134474((undefined8 *)(lVar12 + 0x18),uVar8);
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
LAB_0233020c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

