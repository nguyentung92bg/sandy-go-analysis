/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$ApplyWinProgress
void Dino_BusSand_App_Meta_StreakRateFeature__ApplyWinProgress (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, int32_t rewardIndex, bool track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$ApplyWinProgress
   void Dino_BusSand_App_Meta_StreakRateFeature__ApplyWinProgress
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   int32_t rewardIndex, bool track, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__ApplyWinProgress_224f0e4
               (long *param_1,long param_2,int param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
                    /* try { // try from 0234f0f4 to 0244f0ff has its CatchHandler @ 0234f358 */
                    /* try { // try from 0234f100 to 0244f2bb has its CatchHandler @ 0234eb70 */
  plVar7 = param_1;
  if ((bRam0000000004f9bfb9 & 1) == 0) {
    plVar7 = (long *)FUN_02132f7c(PTR_DAT_04cb3ba8);
    bRam0000000004f9bfb9 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  iVar6 = Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore_224c840(plVar7,param_2);
  iVar1 = *(int *)(param_2 + 0x14) + 1;
  *(int *)(param_2 + 0x14) = iVar1;
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
  if (*(int *)(param_2 + 0x18) < iVar1) {
    *(int *)(param_2 + 0x18) = iVar1;
  }
  if ((param_4 & 1) != 0) {
    Dino_BusSand_App_Meta_StreakRateFeature__TrackWin_224f858
              (param_1,param_2,*(int *)(param_2 + 0x48) + 1,param_3 + 1,iVar6);
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + iVar6;
  *(int *)(param_2 + 0x50) = param_3;
  lVar8 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(param_1,param_2);
  puVar4 = PTR_DAT_04cb3ba8;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar8 + 0x18);
  if (0 < iVar1) {
    do {
      iVar6 = Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore_224c1d0(param_1,param_2);
      if ((iVar6 < 1) || (*(int *)(param_2 + 0x4c) < iVar6)) break;
      iVar2 = *(int *)(param_2 + 0x48) + 1;
      *(int *)(param_2 + 0x48) = iVar2;
      *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) - iVar6;
    } while (iVar2 < iVar1);
  }
  lVar8 = *(long *)puVar4;
  *(undefined1 *)(param_2 + 0x54) = 0;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar4 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar11 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar14 = param_1[2];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar14,
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20));
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
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x130) == 0) {
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar8 + 0x130) = uVar9;
      thunk_FUN_02134474(lVar8 + 0x130,uVar9);
    }
    uVar9 = UnityEngine_JsonUtility__ToJson_44323ac(lVar14,0);
    puVar5 = PTR_DAT_04cc4910;
    if (*(long *)(lVar8 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar8 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_60,*(undefined8 *)puVar5);
      lVar14 = lStack_50;
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar14 = *(long *)(lVar8 + 0x130);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar8,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x10) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x10),uVar11);
          *(undefined8 *)(lVar8 + 0x18) = uVar9;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar9);
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar3 = *(uint *)(lVar14 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                plVar7 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                *plVar7 = lVar8;
                thunk_FUN_02134474(plVar7,lVar8);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar14,lVar8,
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
      uVar10 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar11,0);
    } while ((uVar10 & 1) == 0);
    *(undefined8 *)(lVar14 + 0x18) = uVar9;
    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x18),uVar9);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

