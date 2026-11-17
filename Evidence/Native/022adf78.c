/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c$$<Install>b__3_1
bool Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_1 (Dino_BusSand_App_UI_GiftPackUi___c_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c$$<Install>b__3_1
   bool Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_1 (Dino_BusSand_App_UI_GiftPackUi___c_o*
   __this, int32_t id, const MethodInfo* method); */

byte Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_1_21adf78(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04caef48;
  if ((bRam0000000004f9ba77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9ba77 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  if ((((lVar4 != 0) &&
       (uVar5 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(lVar4,0),
       (uVar5 & 1) != 0)) &&
      (iVar3 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(lVar4,0),
      iVar3 == param_2)) &&
     (uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8(lVar4,0),
     puVar1 = PTR_DAT_04cb01b0, (uVar5 & 1) == 0)) {
    if ((bRam0000000004f9bf58 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb01b0,0);
      FUN_02132f7c(PTR_DAT_04caef48);
      bRam0000000004f9bf58 = 1;
    }
    lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar4,*(undefined8 *)puVar1)
    ;
    if (lVar6 != 0) {
      if ((*(int *)(lVar6 + 0x14) == 1) &&
         (uVar5 = Dino_BusSand_App_Meta_PassportFeature__SnapshotValid_22460ec(lVar4),
         (uVar5 & 1) != 0)) {
        bVar2 = 0;
        if (*(char *)(lVar6 + 0x60) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
          bVar2 = Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired_2246258(lVar4,uVar7);
          bVar2 = bVar2 ^ 1;
        }
      }
      else {
        bVar2 = 0;
      }
      return bVar2 & 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

