/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$Update
void Dino_BusSand_App_UI_EventIntroPanel__Update (Dino_BusSand_App_UI_EventIntroPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$Update
   void Dino_BusSand_App_UI_EventIntroPanel__Update (Dino_BusSand_App_UI_EventIntroPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_EventIntroPanel__Update_21bf500(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bad7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04cac668);
                    /* try { // try from 022bf544 to 023bf54f has its CatchHandler @ 022bf58c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022bf550 to 023bf5a7 has its CatchHandler @ 022bf4f8 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bad7 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
                    /* catch() { ... } // from try @ 022bf544 with catch @ 022bf58c */
  if (((uVar3 & 1) != 0) ||
     (fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     fVar9 < *(float *)(param_1 + 0x40))) {
    return;
  }
  fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 022bf5a8 to 023bf5fb has its CatchHandler @ 022bf5a8
                       catch() { ... } // from try @ 022bf5a8 with catch @ 022bf5a8
                       catch() { ... } // from try @ 022bf618 with catch @ 022bf5a8 */
  iVar1 = *(int *)(*(long *)PTR_DAT_04cac668 + 0xe4);
  *(float *)(param_1 + 0x40) = fVar9 + 1.0;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf3e0);
  if (lVar4 == 0) {
    plVar6 = *(long **)(param_1 + 0x38);
  }
  else {
    lVar4 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar4,0);
    plVar6 = *(long **)(param_1 + 0x38);
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + 0x38);
      lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* try { // try from 022bf5fc to 023bf60b has its CatchHandler @ 022bf698 */
                    /* try { // try from 022bf60c to 023bf617 has its CatchHandler @ 022bf668 */
      if (*(int *)(*(long *)PTR_DAT_04caf220 + 0xe4) == 0) {
                    /* try { // try from 022bf618 to 023bf6b3 has its CatchHandler @ 022bf5a8 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf220);
      }
      uVar5 = Dino_BusSand_App_Countdown__Text_214f5d0((lVar8 - lVar4) / 1000,0);
      uVar7 = uVar5;
      goto LAB_022bf668;
    }
  }
  uVar5 = 0;
  uVar7 = *(undefined8 *)PTR_DAT_04ca9c30;
LAB_022bf668:
                    /* catch() { ... } // from try @ 022bf60c with catch @ 022bf668 */
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022bf684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x518))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x520));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar5,uVar7);
}

