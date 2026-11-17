/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RefreshPassportCycleSnapshot
void Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$RefreshPassportCycleSnapshot
   void Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot_224945c(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  uVar9 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58();
  if (((uVar9 & 1) == 0) ||
     (lVar10 = Dino_BusSand_App_Meta_PassportFeature__PackState_22493c0(param_1), lVar10 == 0)) {
    return;
  }
  iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1);
  if ((bRam0000000004f9bf7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf7e = 1;
  }
  if ((iVar6 < 1) || (lVar10 == 0)) {
    return;
  }
  lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *(long *)PTR_DAT_04ca9c30;
  if (*(long *)(lVar10 + 0x80) != 0) {
    lVar13 = *(long *)(lVar10 + 0x80);
  }
  *(long *)(lVar7 + 0x48) = lVar13;
  *(int *)(lVar7 + 0x44) = iVar6;
  thunk_FUN_02134474((long *)(lVar7 + 0x48));
  uVar8 = *(undefined8 *)(lVar10 + 0x58);
  uVar1 = *(undefined1 *)(lVar10 + 0x30);
  uVar2 = *(undefined1 *)(lVar10 + 0x6c);
  *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(lVar10 + 0x60);
  *(undefined8 *)(lVar7 + 0x50) = uVar8;
  *(undefined1 *)(lVar7 + 0x60) = uVar1;
  *(undefined1 *)(lVar7 + 0x61) = uVar2;
  *(undefined1 *)(lVar7 + 0x1c) = uVar2;
  uVar8 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  lVar10 = *(long *)PTR_DAT_04cb0558;
  *(undefined8 *)(lVar7 + 0x68) = uVar8;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar4 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar8 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar7 = param_1[2];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar7,
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
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x130) == 0) {
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar11,*(undefined8 *)PTR_DAT_04cb4790)
      ;
      *(undefined8 *)(lVar10 + 0x130) = uVar11;
      thunk_FUN_02134474(lVar10 + 0x130,uVar11);
    }
    uVar11 = UnityEngine_JsonUtility__ToJson_44323ac(lVar7,0);
    puVar5 = PTR_DAT_04cc4910;
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
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar5);
      lVar7 = lStack_50;
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar7 = *(long *)(lVar10 + 0x130);
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar10,0);
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x10),uVar8);
          *(undefined8 *)(lVar10 + 0x18) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar11);
          if (lVar7 != 0) {
            lVar13 = *(long *)(lVar7 + 0x10);
            lVar14 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar3 = *(uint *)(lVar7 + 0x18);
              if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                plVar12 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
                *plVar12 = lVar10;
                thunk_FUN_02134474(plVar12,lVar10);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar7,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
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
      uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar8,0);
    } while ((uVar9 & 1) == 0);
    *(undefined8 *)(lVar7 + 0x18) = uVar11;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar11);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

