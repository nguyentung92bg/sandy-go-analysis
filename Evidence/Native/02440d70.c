/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Passed
int32_t Dino_BusSand_Cheat_AutoQa__get_Passed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Passed
   int32_t Dino_BusSand_Cheat_AutoQa__get_Passed (const MethodInfo* method); */

int Dino_BusSand_Cheat_AutoQa__get_Passed_2340d70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* catch() { ... } // from try @ 02440d58 with catch @ 02440d78 */
                    /* try { // try from 02440d7c to 02540d83 has its CatchHandler @ 02440d8c */
                    /* try { // try from 02440d84 to 02540d8f has its CatchHandler @ 0244098c */
                    /* catch() { ... } // from try @ 02440d04 with catch @ 02440d8c
                       catch() { ... } // from try @ 02440d7c with catch @ 02440d8c */
  if ((bRam0000000004f9c684 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb9578);
    FUN_02132f7c(PTR_DAT_04cb9580);
    FUN_02132f7c(PTR_DAT_04cb9588);
    FUN_02132f7c(PTR_DAT_04cb9590);
    bRam0000000004f9c684 = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cb9580;
  puVar1 = PTR_DAT_04cb9578;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04cb9590);
    iVar5 = 0;
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return iVar5;
      }
      if (lStack_38 == 0) break;
      iVar5 = iVar5 + (uint)*(byte *)(lStack_38 + 0x28);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

