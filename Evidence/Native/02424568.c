/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_11
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_11 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_11
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_11
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

undefined1 Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_11_2324568(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9c5bb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xe,0);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0), lVar3 == 0)) {
    return 0;
  }
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0);
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Unlocked_2230080(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0);
    puVar1 = PTR_DAT_04caf838;
    if (lVar3 != 0) {
      if ((bRam0000000004f9be6f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf838,0);
        bRam0000000004f9be6f = 1;
      }
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (lVar3,*(undefined8 *)puVar1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      return *(undefined1 *)(lVar3 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

