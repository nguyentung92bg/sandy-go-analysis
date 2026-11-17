/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenSpecialLose
void Dino_BusSand_App_UI_BattleRoyaleUi__OpenSpecialLose (System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenSpecialLose
   void Dino_BusSand_App_UI_BattleRoyaleUi__OpenSpecialLose (System_Action_o* done, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__OpenSpecialLose_219c284(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  if ((bRam0000000004f9b9f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae098);
    FUN_02132f7c(PTR_DAT_04cadd48);
    FUN_02132f7c(PTR_DAT_04cae578);
    FUN_02132f7c(PTR_DAT_04cae580);
    FUN_02132f7c(PTR_DAT_04cae588);
    FUN_02132f7c(PTR_DAT_04cae590);
    bRam0000000004f9b9f3 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  lVar2 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_I_2226254(0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if (((uVar3 & 1) != 0) || (lVar2 == 0)) {
    if (param_1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0229c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  Dino_BusSand_App_Meta_BattleRoyaleFeature__ApplySpecialLose_22268ec(lVar2,0);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae098);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel_Param___ctor_2191eec(lVar5,0);
  if ((lVar5 != 0) && (*(undefined4 *)(lVar5 + 0x10) = 1, lVar6 != 0)) {
    Dino_BusSand_App_UI_UIManager__Open_object__2945314
              (lVar6,*(undefined8 *)PTR_DAT_04cae590,3,lVar5,*(undefined8 *)PTR_DAT_04cae580);
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadd48);
    Dino_BusSand_App_UI_BattleRoyalePanel_Param___ctor_218cef0(lVar5,0);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(long *)(lVar5 + 0x18) = param_1;
      thunk_FUN_02134474((long *)(lVar5 + 0x18),param_1);
      uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cae588,3,lVar5,
                         *(undefined8 *)PTR_DAT_04cae578);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4();
        lVar2 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(lVar2,0);
        if (lVar2 == 0) goto LAB_0229c4d0;
        Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_48,lVar2,0);
        if (param_1 != 0) {
          (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
        }
      }
      return;
    }
  }
LAB_0229c4d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

