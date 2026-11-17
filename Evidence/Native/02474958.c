/* IL2CPP: Dino.BusSand.AudioHub$$get_BusyVoices
int32_t Dino_BusSand_AudioHub__get_BusyVoices (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$get_BusyVoices
   int32_t Dino_BusSand_AudioHub__get_BusyVoices (Dino_BusSand_AudioHub_o* __this, const MethodInfo*
   method); */

int Dino_BusSand_AudioHub__get_BusyVoices_2374958(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* catch() { ... } // from try @ 02474950 with catch @ 0247496c */
                    /* try { // try from 02474970 to 02574977 has its CatchHandler @ 02474980 */
  if ((bRam0000000004f9c7eb & 1) == 0) {
                    /* try { // try from 02474978 to 02574983 has its CatchHandler @ 0247469c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02474970 with catch @ 02474980
                        */
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cbb218);
    bRam0000000004f9c7eb = 1;
  }
  puVar2 = PTR_DAT_04cbb208;
  puVar1 = PTR_DAT_04cbb200;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 024749e4 to 02574a8f has its CatchHandler @ 024749e4
                       catch() { ... } // from try @ 024749e4 with catch @ 024749e4
                       catch() { ... } // from try @ 02474ac4 with catch @ 024749e4
                       catch() { ... } // from try @ 02474b08 with catch @ 024749e4
                       catch() { ... } // from try @ 02474b88 with catch @ 024749e4 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
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
      uVar3 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c();
      iVar5 = iVar5 + (uVar3 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

