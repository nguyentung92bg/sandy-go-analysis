/* IL2CPP: Dino.BusSand.AudioHub$$Stop
void Dino_BusSand_AudioHub__Stop (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Stop
   void Dino_BusSand_AudioHub__Stop (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const
   MethodInfo* method); */

void Dino_BusSand_AudioHub__Stop_2376204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* try { // try from 02476210 to 0257621b has its CatchHandler @ 02476570 */
  if ((bRam0000000004f9c7f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb200);
                    /* try { // try from 02476234 to 02576237 has its CatchHandler @ 02476584 */
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cbb210);
                    /* try { // try from 02476254 to 0257625f has its CatchHandler @ 02476550 */
    FUN_02132f7c(PTR_DAT_04cbb218);
    bRam0000000004f9c7f2 = 1;
  }
                    /* try { // try from 02476268 to 02576273 has its CatchHandler @ 02476548 */
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar4 = Dino_BusSand_AudioHub__Def_2374858(param_1,param_2);
  puVar2 = PTR_DAT_04cbb208;
  puVar1 = PTR_DAT_04cbb200;
  if (lVar4 != 0) {
                    /* try { // try from 02476280 to 0257628f has its CatchHandler @ 02476564 */
    if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0247629c to 025762a7 has its CatchHandler @ 02476580 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
                    /* try { // try from 024762b8 to 025762c3 has its CatchHandler @ 0247655c */
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar2), lVar3 = lStack_38, (uVar5 & 1) != 0
          ) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 024762d8 to 025762ff has its CatchHandler @ 0247667c */
      uVar5 = System_String__op_Equality_46d1108
                        (*(undefined8 *)(lStack_38 + 0x18),*(undefined8 *)(lVar4 + 0x10),0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar3), (uVar5 & 1) != 0)) {
        *(undefined4 *)(lVar3 + 0x38) = 0x42200000;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar1);
  }
                    /* try { // try from 02476304 to 0257630f has its CatchHandler @ 02476574 */
  return;
}

