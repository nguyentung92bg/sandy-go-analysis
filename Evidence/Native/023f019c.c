/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Hits
bool Dino_BusSand_App_UI_HomeStage__Hits (Dino_BusSand_App_UI_HomeStage_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Hits
   bool Dino_BusSand_App_UI_HomeStage__Hits (Dino_BusSand_App_UI_HomeStage_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

bool Dino_BusSand_App_UI_HomeStage__Hits_22f019c
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_5 + 0x78) != 0) {
    fVar4 = param_2;
    uVar2 = Dino_BusSand_App_UI_HomeBus__get_Away_22e020c(*(long *)(param_5 + 0x78),0);
    if ((uVar2 & 1) == 0) {
      fVar3 = (float)Dino_BusSand_App_UI_HomeStage__get_ScreenRect_22f0074(param_5);
      bVar1 = false;
      if (((fVar3 <= param_1) && (param_1 < fVar3 + param_3)) && (fVar4 <= param_2)) {
        bVar1 = param_2 < fVar4 + param_4;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

