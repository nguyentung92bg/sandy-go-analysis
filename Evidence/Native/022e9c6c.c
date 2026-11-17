/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnCountDown
void Dino_BusSand_App_UI_YachtRacingHallButton__OnCountDown (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnCountDown
   void Dino_BusSand_App_UI_YachtRacingHallButton__OnCountDown
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__OnCountDown_21e9c6c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000004f9bbe9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0fa8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    bRam0000000004f9bbe9 = 1;
  }
  if ((*(int *)(param_1 + 0x88) != 5) && (*(int *)(param_1 + 0x88) != 3)) {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 022e9ce0 to 023e9ce7 has its CatchHandler @ 022e9d44 */
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 022e9ce8 to 023e9d73 has its CatchHandler @ 022e9c48 */
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  lVar8 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_022e9e3c;
    lVar8 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_EndTime_22554f4(*(long *)(param_1 + 0x28),0);
    lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* catch() { ... } // from try @ 022e9ce0 with catch @ 022e9d44 */
    if (lVar4 - lVar5 < 1) {
                    /* try { // try from 022e9d74 to 023e9e0b has its CatchHandler @ 022e9d74
                       catch() { ... } // from try @ 022e9d74 with catch @ 022e9d74
                       catch() { ... } // from try @ 022e9e14 with catch @ 022e9d74 */
      if (*(int *)(param_1 + 0x88) == 5) {
        Dino_BusSand_App_UI_YachtRacingUi__OpenRace_21f7cdc(0,0,0,0);
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9e3c;
      Dino_BusSand_App_Meta_YachtRacingCore__OnActivityTimeUp_2258ae4(*(long *)(param_1 + 0x28),0);
      Dino_BusSand_App_UI_YachtRacingHallButton__RefreshState_21e91ec(param_1);
      puVar2 = PTR_DAT_04ca9d18;
      *(undefined1 *)(param_1 + 0x8e) = 0;
      lVar5 = *(long *)puVar2;
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
                    /* try { // try from 022e9e0c to 023e9e13 has its CatchHandler @ 022e9e70 */
                    /* try { // try from 022e9e14 to 023e9e9f has its CatchHandler @ 022e9d74 */
      uVar7 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                        (*(undefined8 *)PTR_DAT_04cb0fa8,**(undefined8 **)(lVar4 + 0xb8),0);
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9e3c;
      uVar7 = Dino_BusSand_App_Meta_YachtRacingCore__get_EndTime_22554f4
                        (*(long *)(param_1 + 0x28),0);
      uVar7 = Dino_BusSand_App_UI_YachtRacingUi__RemainText_21f88d0(uVar7,0);
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9bc4e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cada48,uVar7,0);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9bc4e = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar3 & 1) == 0) {
      if ((lVar8 == 0) ||
         (lVar8 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (lVar8,1,*(undefined8 *)PTR_DAT_04cada48), lVar8 == 0)) {
LAB_022f4ca0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar6 = *(long **)(lVar8 + 0x20 + lVar4 * 8);
          if (plVar6 == (long *)0x0) goto LAB_022f4ca0;
          (**(code **)(*plVar6 + 0x518))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x520));
          uVar1 = *(uint *)(lVar8 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
    }
    return;
  }
LAB_022e9e3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

