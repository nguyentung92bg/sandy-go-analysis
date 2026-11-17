/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingConfig$$StageInfo
Dino_BusSand_App_Meta_YachtRacingConfig_Stage_o* Dino_BusSand_App_Meta_YachtRacingConfig__StageInfo (Dino_BusSand_App_Meta_YachtRacingConfig_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingConfig$$StageInfo
   Dino_BusSand_App_Meta_YachtRacingConfig_Stage_o*
   Dino_BusSand_App_Meta_YachtRacingConfig__StageInfo (Dino_BusSand_App_Meta_YachtRacingConfig_o*
   __this, int32_t stage, const MethodInfo* method); */

long Dino_BusSand_App_Meta_YachtRacingConfig__StageInfo_2255030(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c002 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3e60);
    FUN_02132f7c(PTR_DAT_04cb3e68);
    FUN_02132f7c(PTR_DAT_04cb3e70);
    FUN_02132f7c(PTR_DAT_04cb3e78);
    bRam0000000004f9c002 = 1;
  }
  puVar2 = PTR_DAT_04cb3e68;
  puVar1 = PTR_DAT_04cb3e60;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb3e78);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar4;
}

