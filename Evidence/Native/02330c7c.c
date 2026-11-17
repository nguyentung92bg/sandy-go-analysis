/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$PlayerRank
int32_t Dino_BusSand_App_Meta_WeeklyCupModel__PlayerRank (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$PlayerRank
   int32_t Dino_BusSand_App_Meta_WeeklyCupModel__PlayerRank (Dino_BusSand_App_Meta_WeeklyCupModel_o*
   __this, int64_t nowMs, const MethodInfo* method); */

int Dino_BusSand_App_Meta_WeeklyCupModel__PlayerRank_2230c7c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000004f9be79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf870);
    FUN_02132f7c(PTR_DAT_04caf878);
    bRam0000000004f9be79 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupModel__Board_223062c(param_1,param_2);
  puVar2 = PTR_DAT_04caf878;
  if (lVar3 == 0) {
LAB_02330d24:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(int *)(lVar3 + 0x18)) {
    iVar5 = 1;
    do {
      lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar3,iVar5 + -1,*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_02330d24;
      if (*(char *)(lVar4 + 0x18) != '\0') {
        return iVar5;
      }
      bVar1 = iVar5 < *(int *)(lVar3 + 0x18);
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  return 0;
}

