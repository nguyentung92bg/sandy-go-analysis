/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_FailType
System_String_o* Dino_BusSand_App_Gameplay_GameplayController__get_FailType (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_FailType
   System_String_o* Dino_BusSand_App_Gameplay_GameplayController__get_FailType
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000004f9c224 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4a50);
    FUN_02132f7c(PTR_DAT_04cb4aa0);
    FUN_02132f7c(PTR_DAT_04cb4ab0);
    FUN_02132f7c(PTR_DAT_04cac640);
    bRam0000000004f9c224 = 1;
  }
  lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  puVar1 = PTR_DAT_04cb4ab0;
  puVar3 = (undefined8 *)puVar1;
  if (lVar2 != 0) {
    lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (lVar2 == 0) {
LAB_0239c064:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    puVar3 = (undefined8 *)PTR_DAT_04cac640;
    if (*(int *)(lVar2 + 0x84) != 1) {
      lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
      if (lVar2 == 0) goto LAB_0239c064;
      puVar3 = (undefined8 *)PTR_DAT_04cb4a50;
      if (*(int *)(lVar2 + 0x84) != 2) {
        lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
        if (lVar2 == 0) goto LAB_0239c064;
        puVar3 = (undefined8 *)PTR_DAT_04cb4aa0;
        if (*(int *)(lVar2 + 0x84) != 3) {
          puVar3 = (undefined8 *)puVar1;
        }
      }
    }
  }
  return *puVar3;
}

