/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Note
void Dino_BusSand_Cheat_QaJourney__Note (Dino_BusSand_Cheat_QaJourney_o* __this, System_String_o* what, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Note
   void Dino_BusSand_Cheat_QaJourney__Note (Dino_BusSand_Cheat_QaJourney_o* __this, System_String_o*
   what, const MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney__Note_236ff78(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0246ff90 to 0256ff93 has its CatchHandler @ 02470968 */
  if ((bRam0000000004f9c7cd & 1) == 0) {
                    /* try { // try from 0246ff94 to 0256ff97 has its CatchHandler @ 02470980 */
                    /* try { // try from 0246ff98 to 0256ff9f has its CatchHandler @ 0247097c */
    FUN_02132f7c(PTR_DAT_04cab718);
    bRam0000000004f9c7cd = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
                    /* try { // try from 0246ffb0 to 0256ffb3 has its CatchHandler @ 02470968 */
                    /* try { // try from 0246ffb4 to 0256ffb7 has its CatchHandler @ 02470964 */
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
                    /* try { // try from 0246ffb8 to 0256ffbf has its CatchHandler @ 02470960 */
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 0246ffcc to 0256ffe7 has its CatchHandler @ 02470978 */
    lVar5 = *(long *)PTR_DAT_04cab718;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 0246ffe8 to 0256fff3 has its CatchHandler @ 02470974 */
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* try { // try from 0246fff4 to 0257007f has its CatchHandler @ 0246fa7c */
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0x18);
        System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                  (lVar3,uVar1 + 1,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        + 0x20) + 0xc0) + 0x78));
        lVar4 = *(long *)(lVar3 + 0x10);
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
      }
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                     ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

