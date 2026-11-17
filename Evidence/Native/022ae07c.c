/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_0$$<BindHall>b__1
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__1 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0233abe4) */
/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_0$$<BindHall>b__1
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__1
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_0___BindHall_b__1_21ae07c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9ba79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caec80);
    FUN_02132f7c(PTR_DAT_04caef18);
    bRam0000000004f9ba79 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  puVar2 = PTR_DAT_04caec68;
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = UnityEngine_Transform__Find_43d4bec
                    (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04caef18,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar4,0);
  uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar3,0);
  if (0 < (int)uVar5) {
    uVar5 = uVar5 & 0xffffffff;
    uVar4 = *(undefined8 *)PTR_DAT_04caec80;
    if ((bRam0000000004f9beca & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caec68);
      bRam0000000004f9beca = 1;
    }
    lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar3,uVar5);
    if (((lVar6 != 0) &&
        (uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(lVar3,uVar5),
        (uVar7 & 1) != 0)) &&
       (uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(lVar3,uVar5),
       (uVar7 & 1) != 0)) {
      Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown_223a8c8(lVar3,uVar5);
      if (*(int *)(lVar6 + 0x54) == 4) {
        return 1;
      }
      uVar8 = Dino_BusSand_App_Meta_GiftPackFeature__PanelPath_2235bb4(lVar3,uVar5);
      uVar1 = *(undefined4 *)(lVar6 + 0x54);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      uVar5 = Dino_BusSand_App_UI_GiftPackUi__OpenPack_21abc44(uVar5,uVar8,uVar1,uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30(lVar3);
    }
    return 0;
  }
  return uVar5;
}

