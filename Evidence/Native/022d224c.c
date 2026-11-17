/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ForceClose
void Dino_BusSand_App_UI_PassportPanel__ForceClose (bool invoke, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$ForceClose
   void Dino_BusSand_App_UI_PassportPanel__ForceClose (bool invoke, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__ForceClose_21d224c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar3 = PTR_DAT_04cb04f8;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb04f8);
    bRam0000000004f9bb4b = 1;
  }
  uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 022d22f4 to 023d24df has its CatchHandler @ 022d24f8 */
    return;
  }
  lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar5 + 0x48) == '\0') {
    *(undefined1 *)(lVar5 + 0x48) = 1;
    if ((*(char *)(lVar5 + 0x49) != '\0') && (*(long *)(lVar5 + 0x40) != 0)) {
      Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(*(long *)(lVar5 + 0x40),0);
      if (*(long *)(lVar5 + 0x40) == 0) goto LAB_022d2ec4;
      Dino_BusSand_App_Meta_PassportFeature__SetPendingKeysCommitDirty_22478ec
                (*(long *)(lVar5 + 0x40),0,0);
    }
    if (*(long *)(lVar5 + 0x38) == 0) {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar5,0);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar5 + 0x38) + 0x10);
      lVar11 = *plVar6;
      *plVar6 = 0;
      thunk_FUN_02134474(plVar6,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar5,0);
      if (((param_1 & 1) != 0) && (lVar11 != 0)) {
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
    }
    if ((*(long *)(lVar5 + 0x40) != 0) &&
       (uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_HasRedPoint_22490c0
                          (*(long *)(lVar5 + 0x40),0), puVar2 = PTR_DAT_04cb01b0, (uVar4 & 1) != 0))
    {
      plVar6 = *(long **)(lVar5 + 0x40);
      if (plVar6 != (long *)0x0) {
        if ((bRam0000000004f9bf7b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb0558,0);
          FUN_02132f7c(PTR_DAT_04cb01b0);
          bRam0000000004f9bf7b = 1;
        }
        lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (plVar6,*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_04cb0558;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined1 *)(lVar5 + 0x78) = 0;
        lVar5 = *(long *)puVar2;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar2 = PTR_DAT_04cac668;
        if (plVar6[2] == 0) {
          return;
        }
        uVar10 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        lVar11 = plVar6[2];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20));
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
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x130) == 0) {
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar7,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar5 + 0x130) = uVar7;
            thunk_FUN_02134474(lVar5 + 0x130,uVar7);
          }
          uVar7 = UnityEngine_JsonUtility__ToJson_44323ac(lVar11,0);
          puVar3 = PTR_DAT_04cc4910;
          if (*(long *)(lVar5 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_78,*(long *)(lVar5 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
          lStack_50 = lStack_68;
          puStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          do {
            uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar3);
            lVar11 = lStack_50;
            if ((uVar4 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar11 = *(long *)(lVar5 + 0x130);
              lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = uVar10;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),uVar10);
                *(undefined8 *)(lVar5 + 0x18) = uVar7;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar7);
                if (lVar11 != 0) {
                  lVar8 = *(long *)(lVar11 + 0x10);
                  lVar9 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar6 = lVar5;
                      thunk_FUN_02134474(plVar6,lVar5);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar11,lVar5,
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
            uVar4 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar10,0);
          } while ((uVar4 & 1) == 0);
          *(undefined8 *)(lVar11 + 0x18) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar7);
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

