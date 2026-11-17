/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$OnBoot
void Dino_BusSand_App_Meta_StreakRateFeature__OnBoot (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$OnBoot
   void Dino_BusSand_App_Meta_StreakRateFeature__OnBoot (Dino_BusSand_App_Meta_StreakRateFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__OnBoot_224d024(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9bfad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    bRam0000000004f9bfad = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  if ((uVar4 & 1) != 0) {
    Dino_BusSand_App_Meta_StreakRateFeature__Prune_224d0c4(param_1);
    lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar5 != 0) {
      lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      if (lVar6 < *(long *)(lVar5 + 0x30)) {
        Dino_BusSand_App_Meta_StreakRateFeature__MarkFinished_224d208(param_1,lVar5);
      }
      puVar2 = PTR_DAT_04cb3ba8;
      *(undefined1 *)(lVar5 + 0x5c) = 0;
      lVar5 = *(long *)puVar2;
      if ((bRam0000000004f9d943 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac668);
        bRam0000000004f9d943 = 1;
      }
      puVar2 = PTR_DAT_04cac668;
      if (param_1[2] == 0) {
        return;
      }
      uVar9 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      lVar6 = param_1[2];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      puVar2 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9d81f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc4908,lVar6,
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
        uVar7 = UnityEngine_JsonUtility__ToJson_44323ac(lVar6,0);
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
          lVar6 = lStack_50;
          if ((uVar4 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
            lVar6 = *(long *)(lVar5 + 0x130);
            lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
            Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar5,0);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x10) = uVar9;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),uVar9);
              *(undefined8 *)(lVar5 + 0x18) = uVar7;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar7);
              if (lVar6 != 0) {
                lVar10 = *(long *)(lVar6 + 0x10);
                lVar11 = *(long *)PTR_DAT_04cc4930;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = lVar5;
                    thunk_FUN_02134474(plVar8,lVar5);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar6,lVar5,
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
          uVar4 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar9,0);
        } while ((uVar4 & 1) == 0);
        *(undefined8 *)(lVar6 + 0x18) = uVar7;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),uVar7);
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
  return;
}

