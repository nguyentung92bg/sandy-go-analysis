/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_Progress01
float Dino_BusSand_App_Gameplay_GameplayController__get_Progress01 (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_Progress01
   float Dino_BusSand_App_Gameplay_GameplayController__get_Progress01
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_Gameplay_GameplayController__get_Progress01_229b3c8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  fVar3 = 0.0;
  if ((lVar1 != 0) && (0 < *(int *)(param_1 + 0x4c))) {
    lVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(0,param_1);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar2 = 1.0 - (float)*(int *)(*(long *)(lVar1 + 0x18) + 0x70) / (float)*(int *)(param_1 + 0x4c);
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
  }
  return fVar3;
}

