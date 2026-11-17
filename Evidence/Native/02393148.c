/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_TopFloor
int32_t Dino_BusSand_App_Meta_WinStreak__get_TopFloor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_TopFloor
   int32_t Dino_BusSand_App_Meta_WinStreak__get_TopFloor (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_WinStreak__get_TopFloor_2293148(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000004f9c1e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04cb5430);
    bRam0000000004f9c1e6 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      uVar1 = 0;
    }
    else {
      lVar2 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
      lVar3 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
      if (((lVar3 == 0) || (lVar2 == 0)) ||
         (lVar2 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar2,*(int *)(lVar3 + 0x18) + -1,*(undefined8 *)PTR_DAT_04cb5430),
         lVar2 == 0)) goto LAB_023931d4;
      uVar1 = *(undefined4 *)(lVar2 + 0x14);
    }
    return uVar1;
  }
LAB_023931d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

