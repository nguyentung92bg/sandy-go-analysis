/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$OnGiveUp
bool Dino_BusSand_App_UI_EventStakeUi__OnGiveUp (System_Action_int__o* revive, System_Action_o* decline, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$OnGiveUp
   bool Dino_BusSand_App_UI_EventStakeUi__OnGiveUp (System_Action_int__o* revive, System_Action_o*
   decline, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_EventStakeUi__OnGiveUp_21bc700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bac9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf8e0);
    FUN_02132f7c(PTR_DAT_04caf8e8);
    bRam0000000004f9bac9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(0);
  if ((uVar3 & 1) != 0) {
    lVar4 = Dino_BusSand_App_UI_EventStakeUi__Stakes_21bc5c0();
    if (lVar4 == 0) {
LAB_022bc8ac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      puVar2 = PTR_DAT_04cad1b0;
      puVar1 = PTR_DAT_04ca9ae8;
      uVar5 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
          lVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04caf8e8,2,
                             lVar4,*(undefined8 *)PTR_DAT_04caf8e0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
          if ((uVar3 & 1) != 0) {
            return 0;
          }
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x38) = param_2;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x38),param_2);
            return 1;
          }
        }
        goto LAB_022bc8ac;
      }
    }
  }
  return 0;
}

