/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TrackRewardUnlock
void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackRewardUnlock (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t changeType, int32_t stageId, int32_t rewardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TrackRewardUnlock
   void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackRewardUnlock
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t changeType, int32_t stageId, int32_t
   rewardId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackRewardUnlock_222bf68
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9be3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb2e40);
    FUN_02132f7c(PTR_DAT_04cb2b18);
    FUN_02132f7c(PTR_DAT_04cb2e30);
    FUN_02132f7c(PTR_DAT_04cb2e48);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    bRam0000000004f9be3d = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,10);
  puVar1 = PTR_DAT_04cb2b28;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar3 + 0x40)),
     lVar4 == 0)) goto LAB_0232c34c;
  puVar2 = PTR_DAT_04cb2e30;
  if ((int)plVar3[3] == 0) goto LAB_0232c348;
  plVar3[4] = *(long *)puVar1;
  thunk_FUN_02134474();
  lVar4 = *(long *)puVar2;
  if ((lVar4 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_0232c34c;
  puVar1 = PTR_DAT_04cb2b30;
  if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_0232c348;
  plVar3[5] = *(long *)puVar2;
  thunk_FUN_02134474();
  lVar4 = *(long *)puVar1;
  if ((lVar4 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar3 + 3) < 3) goto LAB_0232c348;
  plVar3[6] = *(long *)puVar1;
  thunk_FUN_02134474();
  uStack_44 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo_222c7a4(param_1);
  puVar1 = PTR_DAT_04ca9ac8;
  lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_44);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0232c34c;
  puVar2 = PTR_DAT_04cb2bb0;
  if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_0232c348;
  plVar3[7] = lVar4;
  thunk_FUN_02134474(plVar3 + 7,lVar4);
  lVar4 = *(long *)puVar2;
  if ((lVar4 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar3 + 3) < 5) goto LAB_0232c348;
  plVar3[8] = *(long *)puVar2;
  thunk_FUN_02134474();
  uStack_48 = param_2;
  lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0232c34c;
  puVar2 = PTR_DAT_04cb2e48;
  if (*(uint *)(plVar3 + 3) < 6) goto LAB_0232c348;
  plVar3[9] = lVar4;
  thunk_FUN_02134474(plVar3 + 9,lVar4);
  lVar4 = *(long *)puVar2;
  if ((lVar4 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar3 + 3) < 7) goto LAB_0232c348;
  plVar3[10] = *(long *)puVar2;
  thunk_FUN_02134474();
  uStack_4c = param_3;
  lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_4c);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0232c34c;
  puVar1 = PTR_DAT_04cb2b18;
  if ((*(uint *)(plVar3 + 3) & 0xfffffff8) == 0) goto LAB_0232c348;
  plVar3[0xb] = lVar4;
  thunk_FUN_02134474(plVar3 + 0xb,lVar4);
  lVar4 = *(long *)puVar1;
  if ((lVar4 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_0232c34c;
  puVar2 = PTR_DAT_04cb2e40;
  if (*(uint *)(plVar3 + 3) < 9) goto LAB_0232c348;
  plVar3[0xc] = *(long *)puVar1;
  thunk_FUN_02134474();
  lVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__TrackRewardItems_22501d0(param_4,0);
  uVar6 = *(undefined8 *)puVar2;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar4,*(undefined8 *)PTR_DAT_04ca9b98);
    if (lVar4 != 0) goto LAB_0232c2d8;
  }
  else {
LAB_0232c2d8:
    lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 == 0) {
LAB_0232c34c:
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
  }
  puVar1 = PTR_DAT_04cac5c0;
  if (9 < *(uint *)(plVar3 + 3)) {
    plVar3[0xd] = lVar4;
    thunk_FUN_02134474(plVar3 + 0xd,lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Analytics__Log_216d0c8(uVar6,plVar3,0);
    return;
  }
LAB_0232c348:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

