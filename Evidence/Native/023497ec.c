/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ResetForNewCycle
void Dino_BusSand_App_Meta_PassportFeature__ResetForNewCycle (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ResetForNewCycle
   void Dino_BusSand_App_Meta_PassportFeature__ResetForNewCycle
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__ResetForNewCycle_22497ec(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar3 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf83 = 1;
  }
  Dino_BusSand_App_Meta_PassportFeature__DeactivatePrivilege_2245df8(param_1);
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar3)
  ;
  if (lVar5 != 0) {
    uVar12 = *(undefined8 *)(lVar5 + 0x80);
    lVar10 = *(long *)(lVar5 + 0x30);
    uVar1 = *(undefined4 *)(lVar5 + 0x74);
    *(undefined4 *)(lVar5 + 0x2c) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x15) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(lVar5 + 0x28) = 0;
    if (lVar10 != 0) {
      lVar9 = *(long *)(lVar5 + 0x38);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        *(undefined8 *)(lVar5 + 0x48) = uVar8;
        puVar3 = PTR_DAT_04cb0558;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x48));
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(undefined1 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        *(undefined8 *)(lVar5 + 0x5d) = 0;
        *(undefined4 *)(lVar5 + 0x74) = uVar1;
        *(undefined8 *)(lVar5 + 0x80) = uVar12;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x80),uVar12);
        lVar5 = *(long *)puVar3;
        if ((bRam0000000004f9d943 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac668);
          bRam0000000004f9d943 = 1;
        }
        puVar3 = PTR_DAT_04cac668;
        if (param_1[2] == 0) {
          return;
        }
        uVar12 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
        lVar10 = param_1[2];
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        puVar3 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9d81f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4908,lVar10,
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
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x130) == 0) {
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar8,*(undefined8 *)PTR_DAT_04cb4790);
            *(undefined8 *)(lVar5 + 0x130) = uVar8;
            thunk_FUN_02134474(lVar5 + 0x130,uVar8);
          }
          uVar8 = UnityEngine_JsonUtility__ToJson_44323ac(lVar10,0);
          puVar4 = PTR_DAT_04cc4910;
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
            uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_60,*(undefined8 *)puVar4);
            lVar10 = lStack_50;
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
              lVar10 = *(long *)(lVar5 + 0x130);
              lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
              Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = uVar12;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),uVar12);
                *(undefined8 *)(lVar5 + 0x18) = uVar8;
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar8);
                if (lVar10 != 0) {
                  lVar9 = *(long *)(lVar10 + 0x10);
                  lVar11 = *(long *)PTR_DAT_04cc4930;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar2 = *(uint *)(lVar10 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                      plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar7 = lVar5;
                      thunk_FUN_02134474(plVar7,lVar5);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar10,lVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
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
            uVar6 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar12,0);
          } while ((uVar6 & 1) == 0);
          *(undefined8 *)(lVar10 + 0x18) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar8);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
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

