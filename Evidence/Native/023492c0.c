/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CaptureFromGiftPack
void Dino_BusSand_App_Meta_PassportFeature__CaptureFromGiftPack (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t packId, Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CaptureFromGiftPack
   void Dino_BusSand_App_Meta_PassportFeature__CaptureFromGiftPack
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t packId,
   Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__CaptureFromGiftPack_22492c0
               (long *param_1,int param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9bf7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf7e = 1;
  }
  if ((param_2 < 1) || (param_3 == 0)) {
    return;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *(long *)PTR_DAT_04ca9c30;
  if (*(long *)(param_3 + 0x80) != 0) {
    lVar11 = *(long *)(param_3 + 0x80);
  }
  *(long *)(lVar6 + 0x48) = lVar11;
  *(int *)(lVar6 + 0x44) = param_2;
  thunk_FUN_02134474((long *)(lVar6 + 0x48));
  uVar7 = *(undefined8 *)(param_3 + 0x58);
  uVar1 = *(undefined1 *)(param_3 + 0x30);
  uVar2 = *(undefined1 *)(param_3 + 0x6c);
  *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  *(undefined1 *)(lVar6 + 0x60) = uVar1;
  *(undefined1 *)(lVar6 + 0x61) = uVar2;
  *(undefined1 *)(lVar6 + 0x1c) = uVar2;
  uVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  lVar11 = *(long *)PTR_DAT_04cb0558;
  *(undefined8 *)(lVar6 + 0x68) = uVar7;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar4 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar7 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar6 = param_1[2];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar6,
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
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar4;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x130) == 0) {
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar8,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar11 + 0x130) = uVar8;
      thunk_FUN_02134474(lVar11 + 0x130,uVar8);
    }
    uVar8 = UnityEngine_JsonUtility__ToJson_44323ac(lVar6,0);
    puVar5 = PTR_DAT_04cc4910;
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
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar5);
      lVar6 = lStack_50;
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar11 = *(long *)(lVar11 + 0x130);
        lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar6,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x10) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x10),uVar7);
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar8);
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar3 = *(uint *)(lVar11 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                plVar10 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                *plVar10 = lVar6;
                thunk_FUN_02134474(plVar10,lVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
      uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar7,0);
    } while ((uVar9 & 1) == 0);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar8);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

