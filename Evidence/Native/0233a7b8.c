/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EndTime
int64_t Dino_BusSand_App_Meta_GiftPackFeature__EndTime (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$EndTime
   int64_t Dino_BusSand_App_Meta_GiftPackFeature__EndTime (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, int32_t packId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__EndTime_223a7b8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0(param_1,param_2);
    return lVar1 + lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

