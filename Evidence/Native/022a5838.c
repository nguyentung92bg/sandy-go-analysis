/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$HeightOf
float Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$HeightOf
   float Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, int32_t c, const MethodInfo* method); */

float Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838(long param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    Dino_BusSand_App_Meta_ClimbTowerFeature__IndexAndProcess_222a05c
              (*(long *)(param_1 + 0x38),param_2,(long)&uStack_18 + 4,&uStack_18,0);
    if (uStack_18 < 0) {
      fVar2 = 0.0;
    }
    else {
      fVar1 = (float)uStack_18 * 644.0;
      if (uStack_18._4_4_ != 0) {
        fVar1 = ((float)uStack_18 + (float)(uStack_18._4_4_ + -1)) * 860.0 + 644.0;
      }
      fVar3 = *(float *)(param_1 + 0xb0);
      if (fVar1 <= *(float *)(param_1 + 0xb0)) {
        fVar3 = fVar1;
      }
      fVar2 = 0.0;
      if (0.0 <= fVar1) {
        fVar2 = fVar3;
      }
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

