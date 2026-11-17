/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AppPause
void Dino_BusSand_App_Meta_GameTracking__AppPause (bool paused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AppPause
   void Dino_BusSand_App_Meta_GameTracking__AppPause (bool paused, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__AppPause_2215124(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd54 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb24a0);
    FUN_02132f7c(PTR_DAT_04cb2420);
    FUN_02132f7c(PTR_DAT_04cb2448);
    FUN_02132f7c(PTR_DAT_04cabc00);
    bRam0000000004f9bd54 = 1;
  }
  fVar9 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar4 = *(long *)puVar2;
  if ((param_1 & 1) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar4 + 0xb8);
    fVar10 = *(float *)(lVar6 + 0x34);
    if (0.0 <= fVar10) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
        fVar10 = *(float *)(lVar6 + 0x34);
      }
      *(undefined4 *)(lVar6 + 0x34) = 0xbf800000;
      *(float *)(lVar6 + 0x30) = *(float *)(lVar6 + 0x30) + (fVar9 - fVar10);
    }
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_GameTracking__get_ExternalNow_2214ba4();
    puVar1 = PTR_DAT_04caba90;
    if (**(char **)(*(long *)puVar2 + 0xb8) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Meta_JourneyTracking__LevelSnapshot_2214db8(uVar3 & 1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt_2211ba8(lVar4,1);
      if ((uVar3 & 1) == 0 && lVar4 != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_JourneyTracking__SnapshotChanged_2215444();
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar8);
            lVar8 = *(long *)puVar2;
          }
          puVar1 = PTR_DAT_04ca9ac8;
          uStack_34 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4);
          uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
          if (lVar6 == 0) {
LAB_02315440:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 023152bc to 024152bf has its CatchHandler @ 023152dc */
                    /* try { // try from 023152c0 to 024152c7 has its CatchHandler @ 02314df8 */
          lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar6,*(undefined8 *)PTR_DAT_04cabc00,uVar7,0);
                    /* try { // try from 023152c8 to 024152cb has its CatchHandler @ 023152dc */
                    /* try { // try from 023152cc to 024152d7 has its CatchHandler @ 02314df8 */
                    /* try { // try from 023152d8 to 024152db has its CatchHandler @ 023152dc */
                    /* catch() { ... } // from try @ 023152bc with catch @ 023152dc
                       catch() { ... } // from try @ 023152c8 with catch @ 023152dc
                       catch() { ... } // from try @ 023152d8 with catch @ 023152dc
                       try { // try from 023152dc to 024152eb has its CatchHandler @ 02314df8 */
          uStack_38 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c);
                    /* catch() { ... } // from try @ 02314f04 with catch @ 023152e4 */
          uVar7 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
          if ((lVar6 == 0) ||
             (lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                (lVar6,*(undefined8 *)PTR_DAT_04cb2420,uVar7,0), lVar6 == 0))
          goto LAB_02315440;
          uVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar6,*(undefined8 *)PTR_DAT_04cb2448,lVar4,0);
          Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc
                    (*(undefined8 *)PTR_DAT_04cb24a0,uVar7,0);
        }
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__AppPause_22154d4(uVar3 & 1);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar4 + 0xb8);
    if (*(float *)(lVar6 + 0x38) < 0.0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
        lVar6 = *(long *)(lVar4 + 0xb8);
      }
      if (*(float *)(lVar6 + 0x3c) < 0.0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
          lVar6 = *(long *)(lVar4 + 0xb8);
        }
        if (*(float *)(lVar6 + 0x34) < 0.0) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
          }
          *(float *)(lVar6 + 0x34) = fVar9;
        }
      }
    }
  }
  return;
}

