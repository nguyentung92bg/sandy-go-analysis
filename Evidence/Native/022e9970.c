/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$ShouldShowLocked
bool Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$ShouldShowLocked
   bool Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked (const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked_21e9970(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bbe6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bbe6 = 1;
  }
  iVar2 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022e995c with catch @ 022e99c0 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  return iVar2 + -5 <= iVar3;
}

