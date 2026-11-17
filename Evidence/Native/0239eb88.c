/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ShuffleSeed
int32_t Dino_BusSand_App_Gameplay_GameplayController__ShuffleSeed (Dino_BusSand_Core_LevelData_o* level, bool guided, System_Func_int__o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ShuffleSeed
   int32_t Dino_BusSand_App_Gameplay_GameplayController__ShuffleSeed (Dino_BusSand_Core_LevelData_o*
   level, bool guided, System_Func_int__o* random, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ShuffleSeed_229eb88
               (long param_1,ulong param_2,long param_3)

{
  if (((param_1 != 0) && ((param_2 & 1) != 0)) && (*(int *)(param_1 + 0x60) != 0)) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239ebac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  if (pcRam0000000004fa8150 == (code *)0x0) {
    pcRam0000000004fa8150 = (code *)FUN_02132f40(&UNK_00e51cc9);
  }
                    /* WARNING: Could not recover jumptable at 0x044b6528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8150)(0x80000000,0x7fffffff);
  return;
}

