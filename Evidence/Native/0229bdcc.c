/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenMain
void Dino_BusSand_App_UI_BattleRoyaleUi__OpenMain (System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenMain
   void Dino_BusSand_App_UI_BattleRoyaleUi__OpenMain (System_Action_o* onClose, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__OpenMain_219bdcc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9b9f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae098);
    FUN_02132f7c(PTR_DAT_04cadd48);
    FUN_02132f7c(PTR_DAT_04cae578);
    FUN_02132f7c(PTR_DAT_04cae580);
    FUN_02132f7c(PTR_DAT_04cae588);
    FUN_02132f7c(PTR_DAT_04cae590);
    bRam0000000004f9b9f1 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
LAB_0229bf80:
    if (param_1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0229bf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae098);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel_Param___ctor_2191eec(lVar3,0);
  if ((lVar3 != 0) && (*(undefined4 *)(lVar3 + 0x10) = 0, lVar5 != 0)) {
    Dino_BusSand_App_UI_UIManager__Open_object__2945314
              (lVar5,*(undefined8 *)PTR_DAT_04cae590,2,lVar3,*(undefined8 *)PTR_DAT_04cae580);
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadd48);
    Dino_BusSand_App_UI_BattleRoyalePanel_Param___ctor_218cef0(lVar3,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(long *)(lVar3 + 0x18) = param_1;
      thunk_FUN_02134474((long *)(lVar3 + 0x18),param_1);
      uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar5,*(undefined8 *)PTR_DAT_04cae588,3,lVar3,
                         *(undefined8 *)PTR_DAT_04cae578);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4();
      goto LAB_0229bf80;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

