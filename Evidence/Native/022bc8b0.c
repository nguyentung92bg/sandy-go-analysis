/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$OnQuit
bool Dino_BusSand_App_UI_EventStakeUi__OnQuit (System_Action_o* quit, System_Action_o* stay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$OnQuit
   bool Dino_BusSand_App_UI_EventStakeUi__OnQuit (System_Action_o* quit, System_Action_o* stay,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_EventStakeUi__OnQuit_21bc8b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9baca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf8f0);
    FUN_02132f7c(PTR_DAT_04caf8f8);
    bRam0000000004f9baca = 1;
  }
  lVar3 = Dino_BusSand_App_UI_EventStakeUi__Stakes_21bc5c0();
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 == 0) {
LAB_022bca40:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar2 = PTR_DAT_04cad1b0;
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        lVar3 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04caf8f8,4,
                           lVar3,*(undefined8 *)PTR_DAT_04caf8f0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x38) = param_1;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_1);
          *(undefined8 *)(lVar3 + 0x40) = param_2;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40),param_2);
          return 1;
        }
      }
      goto LAB_022bca40;
    }
  }
  return 0;
}

