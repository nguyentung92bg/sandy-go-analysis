/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_1
void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_1 (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_1
   void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_1
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_1_229fd2c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),param_2 & 1,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

