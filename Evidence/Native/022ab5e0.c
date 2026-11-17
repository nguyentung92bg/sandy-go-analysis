/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel.<Countdown>d__19$$MoveNext
bool Dino_BusSand_App_UI_GiftPackPanel__Countdown_d__19__MoveNext (Dino_BusSand_App_UI_GiftPackPanel__Countdown_d__19_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel.<Countdown>d__19$$MoveNext
   bool Dino_BusSand_App_UI_GiftPackPanel__Countdown_d__19__MoveNext
   (Dino_BusSand_App_UI_GiftPackPanel__Countdown_d__19_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GiftPackPanel__Countdown_d__19__MoveNext_21ab5e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000004f9ba60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caedc0);
    FUN_02132f7c(PTR_DAT_04caec30);
    bRam0000000004f9ba60 = 1;
  }
  puVar1 = PTR_DAT_04caec48;
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_022ab7d8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = lVar2;
    thunk_FUN_02134474(plVar6,lVar2);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x38) == 0)) || (*plVar6 == 0)) goto LAB_022ab7d8;
    lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__EndTime_223a7b8
                      (*plVar6,*(undefined4 *)(*(long *)(lVar5 + 0x38) + 0x10),0);
    *(long *)(param_1 + 0x30) = lVar2;
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
    if (lVar2 - lVar3 < 1) {
      Dino_BusSand_App_UI_UIPanel__Txt_2200924
                (lVar5,*(undefined8 *)PTR_DAT_04caec30,*(undefined8 *)PTR_DAT_04caedc0,0);
      return 0;
    }
  }
  if (*(char *)(lVar5 + 0x45) == '\0') {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcSec_2235298(0);
    lVar3 = lVar3 - lVar2;
    if (0 < lVar3) {
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Countdown__Text_214f5d0(lVar3,0);
      Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar5,*(undefined8 *)PTR_DAT_04caec30,uVar4,0);
      uVar4 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f800000);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(char *)(lVar5 + 0x45) == '\0') {
      Dino_BusSand_App_UI_UIPanel__Txt_2200924
                (lVar5,*(undefined8 *)PTR_DAT_04caec30,*(undefined8 *)PTR_DAT_04caedc0,0);
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_022ab7d8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c
                (*(long *)(param_1 + 0x28),0);
      if (*(char *)(lVar5 + 0x44) == '\0') {
        Dino_BusSand_App_UI_GiftPackPanel__Finish_21a93dc(lVar5,1);
      }
    }
  }
  return 0;
}

