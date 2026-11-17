/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$StateWhenPeriodEnd
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__StateWhenPeriodEnd (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$StateWhenPeriodEnd
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__StateWhenPeriodEnd
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_ClimbTowerFeature__StateWhenPeriodEnd_222a524(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9be27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be27 = 1;
  }
  uVar1 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4(param_1);
  if ((uVar1 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = 3;
    if (*(char *)(lVar2 + 0x31) != '\0') {
      uVar3 = 4;
    }
  }
  return uVar3;
}

