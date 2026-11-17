/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryOpen
bool Dino_BusSand_App_Meta_GiftPackFeature__TryOpen (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, System_Action_o* onClosed, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryOpen
   bool Dino_BusSand_App_Meta_GiftPackFeature__TryOpen (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, int32_t packId, System_Action_o* onClosed, System_String_o* source, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_Meta_GiftPackFeature__TryOpen_223aadc
          (undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9beca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    bRam0000000004f9beca = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  if (((lVar2 != 0) &&
      (uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(param_1,param_2),
      (uVar3 & 1) != 0)) &&
     (uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(param_1,param_2),
     (uVar3 & 1) != 0)) {
    Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown_223a8c8(param_1,param_2);
    if (*(int *)(lVar2 + 0x54) == 4) {
      uVar5 = 1;
      uVar1 = 1;
      goto joined_r0x0233abe0;
    }
    uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__PanelPath_2235bb4(param_1,param_2);
    uVar5 = *(undefined4 *)(lVar2 + 0x54);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    uVar3 = Dino_BusSand_App_UI_GiftPackUi__OpenPack_21abc44(param_2,uVar4,uVar5,param_4,param_3,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30(param_1);
  }
  uVar5 = 0;
  uVar1 = 0;
joined_r0x0233abe0:
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    uVar1 = uVar5;
  }
  return uVar1;
}

