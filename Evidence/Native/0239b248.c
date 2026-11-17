/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_Engine
Dino_BusSand_Core_StageEngine_o* Dino_BusSand_App_Gameplay_GameplayController__get_Engine (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_Engine
   Dino_BusSand_Core_StageEngine_o* Dino_BusSand_App_Gameplay_GameplayController__get_Engine
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c222 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c222 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  return uVar3;
}

