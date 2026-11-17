/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsPackActive
bool Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsPackActive
   bool Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610
               (undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  
  Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c();
  lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x30) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(lVar2 + 0x6d) == '\0';
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

