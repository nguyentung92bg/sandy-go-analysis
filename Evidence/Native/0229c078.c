/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenGuide
void Dino_BusSand_App_UI_BattleRoyaleUi__OpenGuide (System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$OpenGuide
   void Dino_BusSand_App_UI_BattleRoyaleUi__OpenGuide (System_Action_o* onClose, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__OpenGuide_219c078(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9b9f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae098);
    FUN_02132f7c(PTR_DAT_04cadd48);
    FUN_02132f7c(PTR_DAT_04cae578);
    FUN_02132f7c(PTR_DAT_04cae580);
    FUN_02132f7c(PTR_DAT_04cae588);
    FUN_02132f7c(PTR_DAT_04cae590);
    bRam0000000004f9b9f2 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  lVar4 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0();
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar2 = PTR_DAT_04cae098;
  if (((uVar5 & 1) == 0) && (lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x38) = 1;
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    Dino_BusSand_App_UI_BattleRoyaleScenePanel_Param___ctor_2191eec(lVar4,0);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined1 *)(lVar4 + 0x14) = 1;
      if (lVar8 != 0) {
        Dino_BusSand_App_UI_UIManager__Open_object__2945314
                  (lVar8,*(undefined8 *)PTR_DAT_04cae590,2,lVar4,*(undefined8 *)PTR_DAT_04cae580);
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadd48);
        Dino_BusSand_App_UI_BattleRoyalePanel_Param___ctor_218cef0(lVar4,0);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x10) = 0;
          *(long *)(lVar4 + 0x18) = param_1;
          thunk_FUN_02134474((long *)(lVar4 + 0x18),param_1);
          puVar3 = PTR_DAT_04cae588;
          puVar2 = PTR_DAT_04cae578;
          *(undefined1 *)(lVar4 + 0x20) = 1;
          uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar8,*(undefined8 *)puVar3,3,lVar4,*(undefined8 *)puVar2);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar4);
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4();
          goto LAB_0229c250;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0229c250:
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0229c26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  return;
}

