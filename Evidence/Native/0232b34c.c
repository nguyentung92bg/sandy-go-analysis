/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$ForceRecordRise
void Dino_BusSand_App_Meta_ClimbTowerFeature__ForceRecordRise (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$ForceRecordRise
   void Dino_BusSand_App_Meta_ClimbTowerFeature__ForceRecordRise
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__ForceRecordRise_222b34c(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  if ((bRam0000000004f9be34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb2e18);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be34 = 1;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
  puVar5 = PTR_DAT_04caf910;
  puVar4 = PTR_DAT_04cad860;
  puVar3 = PTR_DAT_04caa160;
  lVar13 = param_1[4];
  if (lVar13 == 0) {
LAB_0232b4d8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
    uVar14 = 0;
    uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      iVar1 = *(int *)(lVar13 + 0x20 + uVar14 * 4);
      lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar5);
      if (lVar6 == 0) goto LAB_0232b4d8;
      if (iVar1 < *(int *)(lVar6 + 0x10)) {
        lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar5);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x48) == 0)) goto LAB_0232b4d8;
        uVar10 = System_Collections_Generic_List_int___Contains_3a2c3ec
                           (*(long *)(lVar6 + 0x48),iVar1,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar5);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) goto LAB_0232b4d8;
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_0232b4d8;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(int *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar6,iVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(lVar13 + 0x18));
  }
  lVar13 = *(long *)PTR_DAT_04cb2e18;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar3 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar9 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar6 = param_1[2];
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar6,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20));
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
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar3;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x130) == 0) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar13 + 0x130) = uVar7;
      thunk_FUN_02134474(lVar13 + 0x130,uVar7);
    }
    uVar7 = UnityEngine_JsonUtility__ToJson_44323ac(lVar6,0);
    puVar4 = PTR_DAT_04cc4910;
    if (*(long *)(lVar13 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar13 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_60,*(undefined8 *)puVar4);
      if ((uVar14 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar6 = *(long *)(lVar13 + 0x130);
        lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar13,0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x10) = uVar9;
          thunk_FUN_02134474((undefined8 *)(lVar13 + 0x10),uVar9);
          *(undefined8 *)(lVar13 + 0x18) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar13 + 0x18),uVar7);
          if (lVar6 != 0) {
            lVar11 = *(long *)(lVar6 + 0x10);
            lVar12 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                plVar8 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                *plVar8 = lVar13;
                thunk_FUN_02134474(plVar8,lVar13);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar14 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_68 + 0x10),uVar9,0);
    } while ((uVar14 & 1) == 0);
    *(undefined8 *)(lStack_68 + 0x18) = uVar7;
    thunk_FUN_02134474((undefined8 *)(lStack_68 + 0x18),uVar7);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

