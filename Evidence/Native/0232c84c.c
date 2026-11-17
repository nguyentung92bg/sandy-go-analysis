/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_RemainSec
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_RemainSec (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_RemainSec
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_RemainSec
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_ClimbTowerFeature__get_RemainSec_222c84c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9be3b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be3b = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime_2229528(param_1);
  if ((uVar3 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *(long *)(lVar4 + 0x28);
    lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    auVar1 = SEXT816(lVar5 - lVar4) * SEXT816(0x20c49ba5e353f7cf);
    iVar2 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  }
  return iVar2;
}

