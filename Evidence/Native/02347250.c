/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimPassForHud
bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPassForHud (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimPassForHud
   bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPassForHud
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPassForHud_2247250
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf70 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0x61) != '\0') &&
       (uVar4 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094(param_1,param_2),
       (uVar4 & 1) == 0)) {
      uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8();
      Dino_BusSand_App_Meta_PassportFeature__Simulate_2246ae8
                (param_1,uVar2,&stack0xffffffffffffffec,&stack0xffffffffffffffe8);
      return param_2 < 0;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

