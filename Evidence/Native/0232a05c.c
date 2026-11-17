/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IndexAndProcess
void Dino_BusSand_App_Meta_ClimbTowerFeature__IndexAndProcess (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, int32_t* index, float* frac, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IndexAndProcess
   void Dino_BusSand_App_Meta_ClimbTowerFeature__IndexAndProcess
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, int32_t* index, float* frac, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__IndexAndProcess_222a05c
               (long param_1,int param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar4 = *(long *)(param_1 + 0x20);
  *param_4 = 0.0;
  *param_3 = -1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    iVar2 = (int)*(long *)(lVar4 + 0x18);
    if (iVar2 == 0) {
LAB_0232a180:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    iVar3 = *(int *)(lVar4 + 0x20);
    if (param_2 < iVar3) {
      *param_3 = 0;
      if (iVar3 == 0) {
        fVar6 = 0.0;
      }
      else {
LAB_0232a0bc:
        fVar6 = (float)param_2 / (float)iVar3;
      }
    }
    else {
      iVar1 = iVar2 + -1;
      iVar3 = ((int *)(lVar4 + 0x20))[iVar1];
      if (param_2 < iVar3) {
        if (0 < iVar1) {
          iVar3 = 0;
          piVar5 = (int *)(lVar4 + 0x24);
          do {
            if (iVar2 + iVar3 == 0) goto LAB_0232a180;
            if (piVar5[-1] == param_2) {
              *param_4 = 0.0;
              *param_3 = -iVar3;
              return;
            }
            if ((piVar5[-1] < param_2) && (param_2 < *piVar5)) {
              *param_3 = -iVar3;
              param_2 = param_2 - piVar5[-1];
              iVar3 = *piVar5 - piVar5[-1];
              goto LAB_0232a0bc;
            }
            iVar3 = iVar3 + -1;
            piVar5 = piVar5 + 1;
          } while (iVar2 + iVar3 != 1);
        }
        *param_3 = iVar1;
        return;
      }
      *param_3 = iVar1;
      fVar6 = 0.0;
      if (iVar3 != param_2) {
        fVar6 = 1.0;
      }
    }
    *param_4 = fVar6;
  }
  return;
}

