/* IL2CPP: Dino.BusSand.View.GameView$$DraftProximity
float Dino_BusSand_View_GameView__DraftProximity (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float lateral, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$DraftProximity
   float Dino_BusSand_View_GameView__DraftProximity (Dino_BusSand_View_GameView_o* __this,
   Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float lateral, const
   MethodInfo* method); */

float Dino_BusSand_View_GameView__DraftProximity_239fdc8
                (float param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 != 0) &&
     (fVar1 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(param_3,0), param_4 != 0)
     ) {
    fVar2 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(param_4,0);
    if (*(long *)(param_2 + 0x30) != 0) {
      fVar2 = (ABS(param_1) + (fVar1 + fVar2) * -0.5) /
              (*(float *)(*(long *)(param_2 + 0x30) + 0xfc) * _UNK_00e20874) + 1.0;
      fVar1 = 1.0;
      if (fVar2 <= 1.0) {
        fVar1 = fVar2;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar1;
      }
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

