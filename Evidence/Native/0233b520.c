/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenHallVisible
bool Dino_BusSand_App_Meta_GiftPackFeature__GoldenHallVisible (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$GoldenHallVisible
   bool Dino_BusSand_App_Meta_GiftPackFeature__GoldenHallVisible
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__GoldenHallVisible_223b520(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9bed2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bed2 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
  puVar2 = PTR_DAT_04caec48;
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x10), 0 < iVar1)) {
    lVar3 = *(long *)PTR_DAT_04caec48;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    if (**(char **)(lVar3 + 0xb8) != '\0') {
      Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
      lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,iVar1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(char *)(lVar3 + 0x30) != '\0') && (*(char *)(lVar3 + 0x6d) == '\0')) {
        lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        lVar5 = *(long *)(lVar3 + 0x20);
        lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0(param_1,iVar1);
        return lVar4 / 1000 < lVar3 + lVar5;
      }
    }
  }
  return false;
}

