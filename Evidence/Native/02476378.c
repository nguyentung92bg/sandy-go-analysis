/* IL2CPP: Dino.BusSand.AudioHub$$StopAllSfx
void Dino_BusSand_AudioHub__StopAllSfx (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$StopAllSfx
   void Dino_BusSand_AudioHub__StopAllSfx (Dino_BusSand_AudioHub_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_AudioHub__StopAllSfx_2376378(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9c7f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb2a0);
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cbb2a8);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cbb2b0);
    FUN_02132f7c(PTR_DAT_04cbb2b8);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04cbb2c0);
    bRam0000000004f9c7f3 = 1;
  }
  puVar6 = PTR_DAT_04cbb2c0;
  puVar5 = PTR_DAT_04cbb2b0;
  puVar4 = PTR_DAT_04cbb2a8;
  puVar3 = PTR_DAT_04cbb2a0;
  puVar2 = PTR_DAT_04cbb208;
  puVar1 = PTR_DAT_04cbb200;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 0247642c to 0257642f has its CatchHandler @ 02476530 */
                    /* try { // try from 0247644c to 02576453 has its CatchHandler @ 02476538 */
                    /* try { // try from 02476460 to 0257646b has its CatchHandler @ 02476534 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_a8,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    lStack_60 = lStack_98;
    puStack_68 = puStack_a0;
    uStack_70 = uStack_a8;
    uStack_a8 = 0;
    puStack_a0 = &uStack_70;
                    /* try { // try from 0247648c to 02576493 has its CatchHandler @ 02476590 */
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_70,*(undefined8 *)puVar2), lVar8 = lStack_60, (uVar7 & 1) != 0
          ) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02476280 with catch @ 02476564 */
        FUN_02133224();
      }
                    /* try { // try from 024764a8 to 025764ab has its CatchHandler @ 02476558 */
      uVar7 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lStack_60);
      if ((uVar7 & 1) != 0) {
        *(undefined4 *)(lVar8 + 0x38) = 0x42200000;
      }
    }
                    /* try { // try from 024764c0 to 025764cb has its CatchHandler @ 0247658c */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar1);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar8 = System_Collections_Generic_Dictionary_object__object___get_Values_34b41c8
                          (*(long *)(param_1 + 0x70),*(undefined8 *)puVar3), lVar8 != 0)) {
                    /* try { // try from 024764dc to 025764df has its CatchHandler @ 0247653c */
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator_30b7f48
                (&uStack_a8,lVar8,*(undefined8 *)puVar6);
      lStack_80 = lStack_98;
      puStack_88 = puStack_a0;
      uStack_90 = uStack_a8;
      uStack_a8 = 0;
      puStack_a0 = &uStack_90;
      while( true ) {
                    /* try { // try from 02476504 to 02576507 has its CatchHandler @ 02476680 */
        uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext_364630c
                          (&uStack_90,*(undefined8 *)puVar5);
        lVar8 = lStack_80;
                    /* try { // try from 02476508 to 0257650b has its CatchHandler @ 02476588 */
        if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 024764dc with catch @ 0247653c
                       catch() { ... } // from try @ 02476524 with catch @ 0247653c */
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose_3646308
                    (&uStack_90,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 02476268 with catch @ 02476548 */
                    /* catch() { ... } // from try @ 0247651c with catch @ 0247654c */
                    /* catch() { ... } // from try @ 02476254 with catch @ 02476550 */
                    /* catch() { ... } // from try @ 024761d8 with catch @ 02476554 */
                    /* catch() { ... } // from try @ 024764a8 with catch @ 02476558 */
                    /* catch() { ... } // from try @ 024762b8 with catch @ 0247655c */
                    /* catch() { ... } // from try @ 02476518 with catch @ 02476560 */
          return;
        }
                    /* try { // try from 0247650c to 0257650f has its CatchHandler @ 0247657c */
                    /* try { // try from 02476510 to 02576513 has its CatchHandler @ 0247656c */
        if (lStack_80 == 0) break;
                    /* try { // try from 02476514 to 02576517 has its CatchHandler @ 02476568 */
                    /* try { // try from 02476518 to 0257651b has its CatchHandler @ 02476560 */
        if (*(long *)(lStack_80 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02476510 with catch @ 0247656c */
          FUN_02133224();
        }
                    /* try { // try from 0247651c to 0257651f has its CatchHandler @ 0247654c */
                    /* try { // try from 02476520 to 02576523 has its CatchHandler @ 02475fa8 */
        uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(*(long *)(lStack_80 + 0x10),0);
                    /* try { // try from 02476524 to 0257652b has its CatchHandler @ 0247653c */
        if ((uVar7 & 1) != 0) {
                    /* try { // try from 0247652c to 0257652f has its CatchHandler @ 02476538 */
          if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02476210 with catch @ 02476570 */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 0247642c with catch @ 02476530
                       try { // try from 02476530 to 025765af has its CatchHandler @ 02475fa8 */
                    /* catch() { ... } // from try @ 02476460 with catch @ 02476534 */
          UnityEngine_AudioSource__Stop_43488b8(*(long *)(lVar8 + 0x10),0);
                    /* catch() { ... } // from try @ 0247644c with catch @ 02476538
                       catch() { ... } // from try @ 0247652c with catch @ 02476538 */
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02476514 with catch @ 02476568 */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02476304 with catch @ 02476574 */
  FUN_02133224();
}

