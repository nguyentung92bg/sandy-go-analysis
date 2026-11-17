/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_13
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_13 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_13
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_13
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_13_23245d8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0);
  puVar1 = PTR_DAT_04caf838;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf838,0);
    bRam0000000004f9be70 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar3,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x18) != '\0') {
      lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(lVar3);
      lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_023304e8;
      if (*(char *)(lVar3 + 0x18) != '\0') {
        return *(long *)(lVar3 + 0x10) + 0x240c8400 <= lVar2;
      }
    }
    return false;
  }
LAB_023304e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

