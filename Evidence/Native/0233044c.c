/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_ResultDue
bool Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_ResultDue
   bool Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue_223044c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04caf838;
  if ((bRam0000000004f9be70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf838);
    bRam0000000004f9be70 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x18) != '\0') {
      lVar2 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(param_1);
      lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_023304e8;
      if (*(char *)(lVar2 + 0x18) != '\0') {
        return *(long *)(lVar2 + 0x10) + 0x240c8400 <= lVar3;
      }
    }
    return false;
  }
LAB_023304e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

