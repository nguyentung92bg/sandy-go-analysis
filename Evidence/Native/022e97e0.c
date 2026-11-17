/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnBotsUpdated
void Dino_BusSand_App_UI_YachtRacingHallButton__OnBotsUpdated (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnBotsUpdated
   void Dino_BusSand_App_UI_YachtRacingHallButton__OnBotsUpdated
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__OnBotsUpdated_21e97e0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9bbe4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbe4 = 1;
  }
  uVar3 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(param_1);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 022e9830 to 023e9837 has its CatchHandler @ 022e9894 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022e9838 to 023e98c3 has its CatchHandler @ 022e9798 */
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
         lVar4 == 0)) {
LAB_022e98b8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e98b8;
        Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerRanking_22554a8
                  (*(long *)(param_1 + 0x28),0);
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        uVar7 = System_Int32__ToString_482d750(&stack0xffffffffffffffec,0);
                    /* catch() { ... } // from try @ 022e9830 with catch @ 022e9894 */
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar5,uVar7,0);
      }
    }
    return;
  }
  if ((bRam0000000004f9bbe1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb0f38);
    FUN_02132f7c(PTR_DAT_04cb0f48);
    bRam0000000004f9bbe1 = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  if ((*(char *)(param_1 + 0x8f) != '\0') && (*(long *)(param_1 + 0x28) != 0)) {
    plVar6 = (long *)(*(long *)(param_1 + 0x28) + 0x30);
    lVar4 = *plVar6;
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb0f48,0);
    plVar2 = (long *)System_Delegate__Remove_4872510(lVar4,uVar7,0);
    if (plVar2 == (long *)0x0) {
      *plVar6 = 0;
    }
    else {
      lVar4 = *(long *)puVar1;
      if ((*plVar2 != lVar4) || (*plVar6 = (long)plVar2, *plVar2 != lVar4)) goto LAB_022e8b40;
    }
    thunk_FUN_02134474(plVar6,plVar2);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x28) + 0x38);
    lVar4 = *plVar6;
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb0f38,0);
    plVar2 = (long *)System_Delegate__Remove_4872510(lVar4,uVar7,0);
    if (plVar2 == (long *)0x0) {
      *plVar6 = 0;
    }
    else {
      lVar4 = *(long *)puVar1;
      if ((*plVar2 != lVar4) || (*plVar6 = (long)plVar2, *plVar2 != lVar4)) {
LAB_022e8b40:
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar2);
      }
    }
    thunk_FUN_02134474(plVar6,plVar2);
  }
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}

