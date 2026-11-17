/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$<AddBtnEvent>b__35_0
void Dino_BusSand_App_UI_YachtRacingTrackRow___AddBtnEvent_b__35_0 (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$<AddBtnEvent>b__35_0
   void Dino_BusSand_App_UI_YachtRacingTrackRow___AddBtnEvent_b__35_0
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow___AddBtnEvent_b__35_0_21f7078(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
                    /* WARNING: Could not recover jumptable at 0x022f70d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],*(undefined8 *)(lVar2 + 0x40)
               ,uVar1,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

