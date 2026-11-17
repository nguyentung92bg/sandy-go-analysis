/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_FinalPoint
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_FinalPoint
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint_2229364(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar1 = *(undefined4 *)(lVar2 + ((lVar3 << 0x20) + -0x100000000 >> 0x1e) + 0x20);
  }
  return uVar1;
}

