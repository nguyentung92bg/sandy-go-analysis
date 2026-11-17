/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$RecordLast
void Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$RecordLast
   void Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar4 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be31 = 1;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar4)
  ;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x10);
    lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_04caf910;
    if (lVar6 != 0) {
      uVar2 = *(undefined4 *)(lVar6 + 0x10);
      if ((bRam0000000004f9be30 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb2e18);
        FUN_02132f7c(PTR_DAT_04caf910);
        bRam0000000004f9be30 = 1;
      }
      lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar4);
      if (lVar6 != 0) {
        uVar10 = *(undefined8 *)puVar4;
        *(int *)(lVar6 + 0x10) = iVar1;
        lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar10);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) < iVar1) {
            lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                              (param_1,*(undefined8 *)puVar4);
            if (lVar6 == 0) goto LAB_0232b054;
            *(int *)(lVar6 + 0x18) = iVar1;
          }
          lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar4);
          puVar4 = PTR_DAT_04cb2e18;
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x14) = uVar2;
            lVar6 = *(long *)puVar4;
            if ((bRam0000000004f9d943 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cac668);
              bRam0000000004f9d943 = 1;
            }
            puVar4 = PTR_DAT_04cac668;
            if (param_1[2] == 0) {
              return;
            }
            uVar10 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
            lVar13 = param_1[2];
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            puVar4 = PTR_DAT_04cabaf8;
            if ((bRam0000000004f9d81f & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cc4908,lVar13,
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
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar6 = *(long *)puVar4;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar4;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar6 != 0) {
              if (*(long *)(lVar6 + 0x130) == 0) {
                uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
                System_Collections_Generic_List_object____ctor_3a8138c
                          (uVar7,*(undefined8 *)PTR_DAT_04cb4790);
                *(undefined8 *)(lVar6 + 0x130) = uVar7;
                thunk_FUN_02134474(lVar6 + 0x130,uVar7);
              }
              uVar7 = UnityEngine_JsonUtility__ToJson_44323ac(lVar13,0);
              puVar5 = PTR_DAT_04cc4910;
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
                uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_60,*(undefined8 *)puVar5);
                lVar13 = lStack_50;
                if ((uVar8 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                  lVar13 = *(long *)(lVar6 + 0x130);
                  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
                  Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar6,0);
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) = uVar10;
                    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x10),uVar10);
                    *(undefined8 *)(lVar6 + 0x18) = uVar7;
                    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar7);
                    if (lVar13 != 0) {
                      lVar11 = *(long *)(lVar13 + 0x10);
                      lVar12 = *(long *)PTR_DAT_04cc4930;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar11 != 0) {
                        uVar3 = *(uint *)(lVar13 + 0x18);
                        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                          plVar9 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                          *plVar9 = lVar6;
                          thunk_FUN_02134474(plVar9,lVar6);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                    (lVar13,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
                uVar8 = System_String__op_Equality_46d1108
                                  (*(undefined8 *)(lStack_50 + 0x10),uVar10,0);
              } while ((uVar8 & 1) == 0);
              *(undefined8 *)(lVar13 + 0x18) = uVar7;
              thunk_FUN_02134474((undefined8 *)(lVar13 + 0x18),uVar7);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
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
LAB_0232b054:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

