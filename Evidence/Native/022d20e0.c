/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<Finish>d__9$$MoveNext
bool Dino_BusSand_App_UI_PassportGetPanel__Finish_d__9__MoveNext (Dino_BusSand_App_UI_PassportGetPanel__Finish_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel.<Finish>d__9$$MoveNext
   bool Dino_BusSand_App_UI_PassportGetPanel__Finish_d__9__MoveNext
   (Dino_BusSand_App_UI_PassportGetPanel__Finish_d__9_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_PassportGetPanel__Finish_d__9__MoveNext_21d20e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9bb45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb04f0);
                    /* try { // try from 022d2128 to 023d22bf has its CatchHandler @ 022d2500 */
    bRam0000000004f9bb45 = 1;
  }
  puVar3 = PTR_DAT_04caef48;
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb04f0,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e207cc,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar7 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    if (lVar4 != 0) {
      Dino_BusSand_App_Meta_PassportFeature__SetGivenPurchaseRewardDisplayed_224a764(lVar4,0);
    }
    Dino_BusSand_App_UI_PassportPanel__ForceClose_21d224c(1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar5 = (long *)(lVar7 + 0x38);
    lVar4 = *plVar5;
    *plVar5 = 0;
    thunk_FUN_02134474(plVar5,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar7,0);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return iVar1 == 0;
}

