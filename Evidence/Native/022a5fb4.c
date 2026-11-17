/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ScrollYFor
float Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ScrollYFor
   float Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, int32_t index, const MethodInfo* method); */

float Dino_BusSand_App_UI_ClimbTowerPanel__ScrollYFor_21a5fb4(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9ba38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04caea30);
    bRam0000000004f9ba38 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      fVar5 = 0.0;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x18) + -1;
      iVar1 = param_2;
      if (iVar2 <= param_2) {
        iVar1 = iVar2;
      }
      iVar2 = 0;
      if (-1 < param_2) {
        iVar2 = iVar1;
      }
      fVar4 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                               (lVar3,iVar2,*(undefined8 *)PTR_DAT_04caea30);
      fVar5 = (float)Dino_BusSand_App_UI_ClimbTowerPanel__get_MinScrollY_21a5f04(param_1);
      fVar7 = -(fVar4 + -250.0);
      fVar6 = 0.0;
      if (-0.0 <= fVar4 + -250.0) {
        fVar6 = fVar7;
      }
      if (fVar5 <= fVar7) {
        fVar5 = fVar6;
      }
    }
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

