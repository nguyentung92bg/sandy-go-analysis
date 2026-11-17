/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$LastCheckpointFloor
int32_t Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor (int32_t floor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$LastCheckpointFloor
   int32_t Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor (int32_t floor, const MethodInfo*
   method); */

int Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c1f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caffc0);
    FUN_02132f7c(PTR_DAT_04caffc8);
    FUN_02132f7c(PTR_DAT_04caffd0);
    FUN_02132f7c(PTR_DAT_04caffd8);
    bRam0000000004f9c1f4 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar3 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
  puVar2 = PTR_DAT_04caffc8;
  puVar1 = PTR_DAT_04caffc0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023944c4 to 024944db has its CatchHandler @ 02394520 */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04caffd8);
  iVar5 = 0;
  while( true ) {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar1);
                    /* try { // try from 023944b0 to 024944b7 has its CatchHandler @ 0239451c */
      return iVar5;
    }
    if (lStack_38 == 0) break;
    if (*(int *)(lStack_38 + 0x14) <= param_1) {
      iVar5 = *(int *)(lStack_38 + 0x14);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

