/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Rand
float Dino_BusSand_App_UI_BattleRoyaleScenePanel__Rand (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, float a, float b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Rand
   float Dino_BusSand_App_UI_BattleRoyaleScenePanel__Rand
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, float a, float b, const MethodInfo*
   method); */

float Dino_BusSand_App_UI_BattleRoyaleScenePanel__Rand_2196448
                (float param_1,float param_2,long param_3)

{
  double dVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = *(long **)(param_3 + 0xa0);
  if (plVar2 != (long *)0x0) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    fVar3 = 0.0;
    if (0.0 <= param_2 - param_1) {
      fVar3 = param_2 - param_1;
    }
    return fVar3 * (float)dVar1 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

