/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ConsumeIconFirstShow
bool Dino_BusSand_App_Meta_GiftPackFeature__ConsumeIconFirstShow (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ConsumeIconFirstShow
   bool Dino_BusSand_App_Meta_GiftPackFeature__ConsumeIconFirstShow
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__ConsumeIconFirstShow_223b474
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9bed1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefe8);
    bRam0000000004f9bed1 = 1;
  }
  lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x50);
    lVar5 = *(long *)(lVar1 + 0x20);
    if (lVar4 < lVar5) {
      lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      uVar3 = *(undefined8 *)PTR_DAT_04caefe8;
      *(long *)(lVar1 + 0x50) = lVar2 / 1000;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar3);
    }
    return lVar4 < lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

