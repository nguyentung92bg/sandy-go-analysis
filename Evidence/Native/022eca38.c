/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$CountDownTime
void Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$CountDownTime
   void Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime_21eca38(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  
                    /* try { // try from 022eca38 to 023eca3b has its CatchHandler @ 022eca50 */
  puVar2 = PTR_DAT_04cade40;
                    /* try { // try from 022eca3c to 023ecacb has its CatchHandler @ 022ec9dc */
                    /* catch() { ... } // from try @ 022eca38 with catch @ 022eca50 */
  if ((bRam0000000004f9bbfb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    bRam0000000004f9bbfb = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_EndTime_22554f4(*(long *)(param_1 + 0x40),0);
    lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar4 - lVar5 < 1) {
      if (lVar6 != 0) {
        Dino_BusSand_App_Meta_YachtRacingCore__OnActivityTimeUp_2258ae4(lVar6,0);
        lVar5 = *(long *)PTR_DAT_04ca9d18;
        lVar4 = *(long *)(lVar5 + 0x38);
        if (lVar4 == 0) {
          FUN_0216b4cc(lVar5);
          lVar4 = *(long *)(lVar5 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
                    /* try { // try from 022ecb64 to 023ecb6b has its CatchHandler @ 022ecbc8 */
                    /* try { // try from 022ecb6c to 023ecbf7 has its CatchHandler @ 022ecacc */
        uVar7 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                          (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar4 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(lVar3,uVar7,0);
        *(undefined1 *)(param_1 + 0x93) = 0;
        return;
      }
    }
    else {
                    /* try { // try from 022ecacc to 023ecb63 has its CatchHandler @ 022ecacc
                       catch() { ... } // from try @ 022ecacc with catch @ 022ecacc
                       catch() { ... } // from try @ 022ecb6c with catch @ 022ecacc */
      if (lVar6 != 0) {
        uVar7 = Dino_BusSand_App_Meta_YachtRacingCore__get_EndTime_22554f4(lVar6,0);
        uVar7 = Dino_BusSand_App_UI_YachtRacingUi__RemainText_21f88d0(uVar7,0);
        puVar2 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9bc4e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cada48,uVar7,0);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004f9bc4e = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
        if ((uVar8 & 1) == 0) {
          if ((lVar3 == 0) ||
             (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                (lVar3,1,*(undefined8 *)PTR_DAT_04cada48), lVar3 == 0)) {
LAB_022f4ca0:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar1) {
            lVar4 = 0;
            do {
              if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar9 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
              if (plVar9 == (long *)0x0) goto LAB_022f4ca0;
              (**(code **)(*plVar9 + 0x518))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x520));
              uVar1 = *(uint *)(lVar3 + 0x18);
              lVar4 = lVar4 + 1;
            } while ((int)lVar4 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

