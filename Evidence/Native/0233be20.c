/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RecommendedGoldenPackId
int32_t Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RecommendedGoldenPackId
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId_223be20(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bed6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bed6 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (**(char **)(lVar3 + 0xb8) != '\0') {
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
    if (lVar3 == 0) {
LAB_0233beec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar3 + 0x28) == '\0') {
      lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
      if (0 < iVar1) {
        lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,iVar1);
        if (lVar3 == 0) goto LAB_0233beec;
        if ((*(char *)(lVar3 + 0x30) != '\0') && (*(char *)(lVar3 + 0x6d) == '\0')) {
          lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(param_1,iVar1);
          if (lVar3 < 1) {
            iVar1 = 0;
          }
          return iVar1;
        }
      }
    }
  }
  return 0;
}

