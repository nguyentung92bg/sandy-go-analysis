/* IL2CPP: Dino.BusSand.AudioHub$$BusGain
float Dino_BusSand_AudioHub__BusGain (Dino_BusSand_AudioHub_o* __this, System_String_o* bus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$BusGain
   float Dino_BusSand_AudioHub__BusGain (Dino_BusSand_AudioHub_o* __this, System_String_o* bus,
   const MethodInfo* method); */

float Dino_BusSand_AudioHub__BusGain_2374ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_38;
  
                    /* try { // try from 02474af0 to 02574b07 has its CatchHandler @ 02474b80 */
                    /* try { // try from 02474b08 to 02574b6f has its CatchHandler @ 024749e4 */
  if ((bRam0000000004f9c7ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb220);
    FUN_02132f7c(PTR_DAT_04cbb228);
    FUN_02132f7c(PTR_DAT_04cbb230);
    FUN_02132f7c(PTR_DAT_04cbb238);
    bRam0000000004f9c7ec = 1;
  }
  puVar3 = PTR_DAT_04cbb220;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02474b70 to 02574b7f has its CatchHandler @ 02474b80 */
    uVar5 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                      (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbb238,
                       (long)&uStack_38 + 4,*(undefined8 *)PTR_DAT_04cbb220);
                    /* catch() { ... } // from try @ 02474af0 with catch @ 02474b80
                       catch() { ... } // from try @ 02474b70 with catch @ 02474b80 */
    fVar10 = uStack_38._4_4_;
                    /* try { // try from 02474b84 to 02574b87 has its CatchHandler @ 02474b90 */
                    /* try { // try from 02474b88 to 02574b93 has its CatchHandler @ 024749e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02474b84 with catch @ 02474b90
                        */
    uVar6 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    puVar4 = PTR_DAT_04cbb230;
    puVar2 = PTR_DAT_04cab1f0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = *(undefined8 *)PTR_DAT_04cbb228;
      if ((uVar6 & 1) == 0) {
        uVar1 = param_2;
      }
      uVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                        (*(long *)(param_1 + 0x30),uVar1,&uStack_38,*(undefined8 *)puVar3);
      fVar12 = (float)uStack_38;
      uVar7 = System_String__op_Equality_46d1108(uVar1,*(undefined8 *)puVar4,0);
      lVar8 = *(long *)puVar2;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        pcVar9 = (char *)(*(long *)(lVar8 + 0xb8) + 0x29);
      }
      else {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        pcVar9 = (char *)(*(long *)(lVar8 + 0xb8) + 0x2a);
      }
      if ((uVar6 & 1) == 0) {
        fVar12 = 1.0;
      }
      if ((uVar5 & 1) == 0) {
        fVar10 = 1.0;
      }
      fVar11 = 0.0;
      if (*pcVar9 != '\0') {
        fVar11 = fVar10 * fVar12;
      }
      return fVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

