/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Rank
int32_t Dino_BusSand_App_Meta_WeeklyCupFeature__get_Rank (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Rank
   int32_t Dino_BusSand_App_Meta_WeeklyCupFeature__get_Rank
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_WeeklyCupFeature__get_Rank_2230c54(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0();
  uVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf870);
    FUN_02132f7c(PTR_DAT_04caf878);
    bRam0000000004f9be79 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupModel__Board_223062c(lVar3,uVar4);
  puVar2 = PTR_DAT_04caf878;
  if (lVar3 == 0) {
LAB_02330d24:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(int *)(lVar3 + 0x18)) {
    iVar6 = 1;
    do {
      lVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar3,iVar6 + -1,*(undefined8 *)puVar2);
      if (lVar5 == 0) goto LAB_02330d24;
      if (*(char *)(lVar5 + 0x18) != '\0') {
        return iVar6;
      }
      bVar1 = iVar6 < *(int *)(lVar3 + 0x18);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  return 0;
}

