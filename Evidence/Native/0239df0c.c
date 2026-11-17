/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$TapScreen
bool Dino_BusSand_App_Gameplay_GameplayController__TapScreen (Dino_BusSand_App_Gameplay_GameplayController_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$TapScreen
   bool Dino_BusSand_App_Gameplay_GameplayController__TapScreen
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, UnityEngine_Vector2_o screen, const
   MethodInfo* method); */

uint Dino_BusSand_App_Gameplay_GameplayController__TapScreen_229df0c
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c23f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c23f = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_View_GameView__Tap_23a0b98(param_1,param_2,*(long *)(param_3 + 0x38),0);
    uVar2 = ~uVar2 >> 0x1f;
  }
  return uVar2;
}

