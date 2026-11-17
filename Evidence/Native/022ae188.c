/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_1$$<BindHall>b__2
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_1___BindHall_b__2 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0233abe4) */
/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass10_1$$<BindHall>b__2
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_1___BindHall_b__2
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_1_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass10_1___BindHall_b__2_21ae188(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9ba7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec80);
    bRam0000000004f9ba7a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__HallIconPackId_223b204
                      (lVar3,*(undefined8 *)(param_1 + 0x10),0);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    uVar4 = uVar4 & 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)PTR_DAT_04caec80;
      if ((bRam0000000004f9beca & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec68);
        bRam0000000004f9beca = 1;
      }
      lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar3,uVar4);
      if (((lVar5 != 0) &&
          (uVar6 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(lVar3,uVar4),
          (uVar6 & 1) != 0)) &&
         (uVar6 = Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4(lVar3,uVar4),
         (uVar6 & 1) != 0)) {
        Dino_BusSand_App_Meta_GiftPackFeature__MarkPopupShown_223a8c8(lVar3,uVar4);
        if (*(int *)(lVar5 + 0x54) == 4) {
          return 1;
        }
        uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__PanelPath_2235bb4(lVar3,uVar4);
        uVar1 = *(undefined4 *)(lVar5 + 0x54);
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
        }
        uVar4 = Dino_BusSand_App_UI_GiftPackUi__OpenPack_21abc44(uVar4,uVar7,uVar1,uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30(lVar3);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

