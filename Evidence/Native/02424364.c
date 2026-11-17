/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_3
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_3 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_3
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_3
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_3_2324364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9c5b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb11d8);
    FUN_02132f7c(PTR_DAT_04caf788);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9c5b8 = 1;
  }
  puVar3 = PTR_DAT_04caf788;
  puVar1 = PTR_DAT_04cac458;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xb,0);
  bVar4 = false;
  if ((lVar5 != 0) && ((uVar6 & 1) != 0)) {
    lVar7 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar5,0);
    if (lVar7 == 0) {
LAB_02422370:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(lVar7,0);
    if ((uVar6 & 1) == 0) {
      bVar4 = false;
    }
    else {
      lVar5 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar5,0);
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) ||
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x18), lVar5 == 0)) goto LAB_02422370;
      bVar4 = 0 < *(int *)(lVar5 + 0x18);
    }
  }
  return bVar4;
}

