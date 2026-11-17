/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel.<Animate>d__12$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_d__12__MoveNext (Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_d__12_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel.<Animate>d__12$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_d__12__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_d__12_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_d__12__MoveNext_219ed64
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  
  if ((bRam0000000004f9ba10 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae048);
    FUN_02132f7c(PTR_DAT_04cadf60);
    bRam0000000004f9ba10 = 1;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar7 = *(float *)(param_4 + 0x28);
    fVar9 = *(float *)(param_4 + 0x2c);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_0229f06c;
    lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04cadf60,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    lVar6 = 0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_0229f06c;
      lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar2,*(undefined8 *)PTR_DAT_04cada30);
                    /* try { // try from 0229ee50 to 0239ee5b has its CatchHandler @ 0229ee8c */
    }
                    /* try { // try from 0229ee5c to 0239eea7 has its CatchHandler @ 0229ed54 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    fVar7 = 2.0;
    if ((uVar3 & 1) != 0) {
      if (lVar6 == 0) goto LAB_0229f06c;
      uVar4 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
                    /* catch() { ... } // from try @ 0229ee50 with catch @ 0229ee8c */
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar2);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      fVar7 = 2.0;
      if ((uVar3 & 1) != 0) {
        lVar2 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
        if (lVar2 == 0) goto LAB_0229f06c;
        fVar7 = (float)UnityEngine_AnimationClip__get_length_4338218(lVar2,0);
      }
    }
    fVar9 = 0.0;
    *(float *)(param_4 + 0x28) = fVar7;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    *(undefined1 *)(param_4 + 0x30) = 0;
  }
  if (fVar7 <= fVar9) {
    if (lVar5 == 0) goto LAB_0229f06c;
    Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum_219e81c(lVar5,*(undefined4 *)(lVar5 + 0x50));
    uVar4 = 0;
    *(undefined1 *)(lVar5 + 0x58) = 1;
  }
  else {
    fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    *(float *)(param_4 + 0x2c) = fVar9 + fVar7;
    if (lVar5 == 0) {
LAB_0229f06c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(lVar5 + 0x48) == 0) goto LAB_0229f06c;
      UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(lVar5 + 0x48),0);
      iVar8 = *(int *)(lVar5 + 0x50);
                    /* try { // try from 0229ef58 to 0239efcb has its CatchHandler @ 0229ef58
                       catch() { ... } // from try @ 0229ef58 with catch @ 0229ef58
                       catch() { ... } // from try @ 0229efd8 with catch @ 0229ef58 */
      if (cRam0000000004f9ba93 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9ba93 = '\x01';
      }
      param_3 = param_3 * (float)iVar8;
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar8 = -0x80000000;
      if ((float)(int)param_3 != INFINITY) {
        iVar8 = (int)param_3;
      }
      if (*(int *)(lVar5 + 0x50) <= iVar8) {
        iVar8 = *(int *)(lVar5 + 0x50);
      }
      Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum_219e81c(lVar5,iVar8);
    }
    puVar1 = PTR_DAT_04cab230;
                    /* try { // try from 0229efcc to 0239efd7 has its CatchHandler @ 0229f008 */
                    /* try { // try from 0229efd8 to 0239f023 has its CatchHandler @ 0229ef58 */
    if ((*(char *)(param_4 + 0x30) == '\0') &&
       (*(float *)(param_4 + 0x28) * 0.5 < *(float *)(param_4 + 0x2c))) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 0229efcc with catch @ 0229f008 */
      Dino_BusSand_App_Haptics__Vibrate_214dd74(*(undefined8 *)PTR_DAT_04cae048,0);
    }
    *(undefined8 *)(param_4 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
    uVar4 = 1;
    *(undefined4 *)(param_4 + 0x10) = 1;
  }
  return uVar4;
}

