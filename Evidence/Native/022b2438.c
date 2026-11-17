/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<Countdown>d__30$$MoveNext
bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_d__30__MoveNext (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_d__30_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<Countdown>d__30$$MoveNext
   bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_d__30__MoveNext
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_d__30_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_d__30__MoveNext_21b2438(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9ba95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cab390);
    bRam0000000004f9ba95 = 1;
  }
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x5d) != '\0') {
      return 0;
    }
    if ((*(long *)(lVar6 + 0x38) != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                        (*(long *)(lVar6 + 0x40),*(undefined4 *)(*(long *)(lVar6 + 0x38) + 0x10),0);
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar6,*(undefined8 *)PTR_DAT_04cade40,0);
      puVar1 = PTR_DAT_04caec68;
      lVar5 = *(long *)PTR_DAT_04caec68;
      if (lVar2 < 1) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar3,*(undefined8 *)PTR_DAT_04cab390,0);
        if (*(char *)(lVar6 + 0x5c) == '\0') {
          Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Finish_21afae4(lVar6,0);
          return 0;
        }
      }
      else {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
        }
        uVar4 = Dino_BusSand_App_UI_GiftPackUi__IconCountdown_21ad87c(lVar2,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar3,uVar4,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f800000,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

