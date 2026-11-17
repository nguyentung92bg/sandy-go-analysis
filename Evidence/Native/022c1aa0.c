/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ShowBar
void Dino_BusSand_App_UI_StreakEventPanel__ShowBar (Dino_BusSand_App_UI_StreakEventPanel_o* __this, int32_t index, int32_t score, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ShowBar
   void Dino_BusSand_App_UI_StreakEventPanel__ShowBar (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, int32_t index, int32_t score, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__ShowBar_21c1aa0(long param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  int iStack_44;
  
  iStack_44 = param_3;
  if ((bRam0000000004f9bae6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cafcc8);
    FUN_02132f7c(PTR_DAT_04caf318);
    FUN_02132f7c(PTR_DAT_04cafcd0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bae6 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0);
  }
  else {
    lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28
                      (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0);
  }
  else {
    lVar8 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94
                      (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
  }
  puVar4 = PTR_DAT_04ca9d18;
  if (lVar8 != 0) {
                    /* try { // try from 022c1bb0 to 023c1bbb has its CatchHandler @ 022c1bfc */
    if ((int)param_2 < *(int *)(lVar8 + 0x18)) {
      if (lVar7 == 0) goto LAB_022c1e28;
      if ((int)param_2 < (int)*(uint *)(lVar7 + 0x18)) {
        if (param_2 < *(uint *)(lVar7 + 0x18)) {
          lVar1 = lVar7 + (long)(int)param_2 * 4;
          iVar2 = *(int *)(lVar1 + 0x20);
          if (iVar2 < 1) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (float)param_3 / (float)iVar2;
          }
          Dino_BusSand_App_UI_StreakEventPanel__SetFill_21c27a4(fVar12,param_1);
                    /* catch() { ... } // from try @ 022c1e0c with catch @ 022c1d58
                       catch() { ... } // from try @ 022c1fd4 with catch @ 022c1d58 */
          plVar11 = *(long **)(param_1 + 0x78);
          uVar9 = System_Int32__ToString_482d750(&iStack_44,0);
          if (param_2 < *(uint *)(lVar7 + 0x18)) {
            uVar10 = System_Int32__ToString_482d750(lVar1 + 0x20,0);
            uVar9 = System_String__Concat_46d2b84(uVar9,*(undefined8 *)PTR_DAT_04cabd10,uVar10,0);
            if (plVar11 == (long *)0x0) goto LAB_022c1e28;
            (**(code **)(*plVar11 + 0x518))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x520));
            if (param_2 < *(uint *)(lVar8 + 0x18)) {
              uVar10 = *(undefined8 *)(param_1 + 0x70);
              uVar9 = *(undefined8 *)(param_1 + 0x80);
              uVar3 = *(undefined4 *)(lVar8 + (long)(int)param_2 * 4 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_04caf220 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* try { // try from 022c1e08 to 023c1e0b has its CatchHandler @ 022c1fd4 */
                    /* try { // try from 022c1e0c to 023c1fcb has its CatchHandler @ 022c1d58 */
              Dino_BusSand_App_UI_BusStreakUi__SetReward_21b3558
                        (_UNK_00e205e8,_UNK_00e207cc,uVar10,uVar9,uVar3);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c1bb0 with catch @ 022c1bfc
                        */
    Dino_BusSand_App_UI_StreakEventPanel__SetFill_21c27a4(0x3f800000,param_1);
    lVar8 = *(long *)puVar4;
    plVar11 = *(long **)(param_1 + 0x78);
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cad330;
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    puVar6 = PTR_DAT_04cafcd0;
    puVar5 = PTR_DAT_04cafcc8;
                    /* try { // try from 022c1c6c to 023c1caf has its CatchHandler @ 022c1c6c
                       catch() { ... } // from try @ 022c1c6c with catch @ 022c1c6c
                       catch() { ... } // from try @ 022c1cc0 with catch @ 022c1c6c */
    uVar9 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar9 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                      (*(undefined8 *)puVar5,*(undefined8 *)puVar6,uVar9,0);
    puVar4 = PTR_DAT_04caf318;
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 022c1cb0 to 023c1cbf has its CatchHandler @ 022c1cf8 */
                    /* try { // try from 022c1cc0 to 023c1d0b has its CatchHandler @ 022c1c6c */
      (**(code **)(*plVar11 + 0x518))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x520));
      lVar7 = *(long *)(param_1 + 0x70);
      uVar9 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar4,0);
      if (lVar7 != 0) {
        UnityEngine_UI_Image__set_sprite_44a7258(lVar7,uVar9,0);
                    /* catch() { ... } // from try @ 022c1cb0 with catch @ 022c1cf8 */
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*(long *)(param_1 + 0x70),0),
           lVar7 != 0)) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x42a40000,0x428a0000,lVar7,0);
          plVar11 = *(long **)(param_1 + 0x80);
          if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022c1d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)PTR_DAT_04ca9c30,*(undefined8 *)(*plVar11 + 0x520));
            return;
          }
        }
      }
    }
  }
LAB_022c1e28:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

