/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TryLoadNewPeriodData
void Dino_BusSand_App_Meta_ClimbTowerFeature__TryLoadNewPeriodData (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TryLoadNewPeriodData
   void Dino_BusSand_App_Meta_ClimbTowerFeature__TryLoadNewPeriodData
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__TryLoadNewPeriodData_222aea4(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2e18);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be2f = 1;
  }
  iVar4 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(2,0);
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x31) != '\0') {
LAB_0232af68:
      uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData_222aa3c(param_1);
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0x1a) = 1;
      }
      return;
    }
    lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      if (iVar4 <= *(int *)(lVar5 + 0x34) + 1) goto LAB_0232af68;
      lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        lVar10 = *(long *)PTR_DAT_04cb2e18;
        *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar2 = PTR_DAT_04cac668;
        if (param_1[2] == 0) {
          return;
        }
        uVar9 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
        lVar5 = param_1[2];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20));
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
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x130) == 0) {
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar6,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar10 + 0x130) = uVar6;
            thunk_FUN_02134474(lVar10 + 0x130,uVar6);
          }
          uVar6 = UnityEngine_JsonUtility__ToJson_44323ac(lVar5,0);
          puVar3 = PTR_DAT_04cc4910;
          if (*(long *)(lVar10 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_78,*(long *)(lVar10 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
          lStack_50 = lStack_68;
          puStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          do {
            uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar5 = lStack_50;
            if ((uVar7 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar10 = *(long *)(lVar10 + 0x130);
              lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = uVar9;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),uVar9);
                *(undefined8 *)(lVar5 + 0x18) = uVar6;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar6);
                if (lVar10 != 0) {
                  lVar11 = *(long *)(lVar10 + 0x10);
                  lVar12 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar8 = lVar5;
                      thunk_FUN_02134474(plVar8,lVar5);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar10,lVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
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
            uVar7 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar9,0);
          } while ((uVar7 & 1) == 0);
          *(undefined8 *)(lVar5 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar6);
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

