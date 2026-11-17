/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Finish
void Dino_BusSand_App_UI_PassportPanel__Finish (Dino_BusSand_App_UI_PassportPanel_o* __this, bool invoke, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Finish
   void Dino_BusSand_App_UI_PassportPanel__Finish (Dino_BusSand_App_UI_PassportPanel_o* __this, bool
   invoke, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__Finish_21d2df4(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
    if ((*(char *)(param_1 + 0x49) != '\0') && (*(long *)(param_1 + 0x40) != 0)) {
      Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d2ec4;
      Dino_BusSand_App_Meta_PassportFeature__SetPendingKeysCommitDirty_22478ec
                (*(long *)(param_1 + 0x40),0,0);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar11 = *plVar4;
      *plVar4 = 0;
      thunk_FUN_02134474(plVar4,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
      if (((param_2 & 1) != 0) && (lVar11 != 0)) {
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
                    /* try { // try from 022d2ea0 to 023d3083 has its CatchHandler @ 022d309c */
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_HasRedPoint_22490c0
                          (*(long *)(param_1 + 0x40),0), puVar2 = PTR_DAT_04cb01b0, (uVar5 & 1) != 0
       )) {
      plVar4 = *(long **)(param_1 + 0x40);
      if (plVar4 != (long *)0x0) {
        if ((bRam0000000004f9bf7b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb0558,0);
          FUN_02132f7c(PTR_DAT_04cb01b0);
          bRam0000000004f9bf7b = 1;
        }
        lVar11 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (plVar4,*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_04cb0558;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined1 *)(lVar11 + 0x78) = 0;
        lVar11 = *(long *)puVar2;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar2 = PTR_DAT_04cac668;
        if (plVar4[2] == 0) {
          return;
        }
        uVar7 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
        lVar10 = plVar4[2];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20));
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
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar11 != 0) {
          if (*(long *)(lVar11 + 0x130) == 0) {
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar6,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar11 + 0x130) = uVar6;
            thunk_FUN_02134474(lVar11 + 0x130,uVar6);
          }
          uVar6 = UnityEngine_JsonUtility__ToJson_44323ac(lVar10,0);
          puVar3 = PTR_DAT_04cc4910;
          if (*(long *)(lVar11 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_78,*(long *)(lVar11 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
          lStack_50 = lStack_68;
          puStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          do {
            uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar10 = lStack_50;
            if ((uVar5 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar10 = *(long *)(lVar11 + 0x130);
              lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar11,0);
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) = uVar7;
                thunk_FUN_02134474((undefined8 *)(lVar11 + 0x10),uVar7);
                *(undefined8 *)(lVar11 + 0x18) = uVar6;
                thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar6);
                if (lVar10 != 0) {
                  lVar8 = *(long *)(lVar10 + 0x10);
                  lVar9 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar4 = lVar11;
                      thunk_FUN_02134474(plVar4,lVar11);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar10,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
          *(undefined8 *)(lVar10 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar6);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        }
        return;
      }
LAB_022d2ec4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

