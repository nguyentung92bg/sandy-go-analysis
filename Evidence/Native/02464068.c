/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Digits
System_String_o* Dino_BusSand_Cheat_CheatManager__Digits (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Digits
   System_String_o* Dino_BusSand_Cheat_CheatManager__Digits (System_String_o* s, const MethodInfo*
   method); */

void Dino_BusSand_Cheat_CheatManager__Digits_2364068(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
                    /* try { // try from 02464080 to 02564083 has its CatchHandler @ 0246409c */
  if ((bRam0000000004f9c749 & 1) == 0) {
                    /* try { // try from 02464084 to 0256409f has its CatchHandler @ 02463e54 */
    FUN_02132f7c(PTR_DAT_04ca9b78);
    bRam0000000004f9c749 = 1;
  }
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 02464080 with catch @ 0246409c */
                    /* try { // try from 024640a0 to 025640a7 has its CatchHandler @ 024640b0 */
    uVar1 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 024640a8 to 025640b3 has its CatchHandler @ 02463e54 */
    plVar3 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024640a0 with catch @ 024640b0
                        */
                    /* try { // try from 024640b4 to 025642d3 has its CatchHandler @ 024640b4
                       catch() { ... } // from try @ 024640b4 with catch @ 024640b4
                       catch() { ... } // from try @ 02464348 with catch @ 024640b4
                       catch() { ... } // from try @ 02464464 with catch @ 024640b4
                       catch() { ... } // from try @ 0246454c with catch @ 024640b4
                       catch() { ... } // from try @ 02464614 with catch @ 024640b4
                       catch() { ... } // from try @ 0246465c with catch @ 024640b4
                       catch() { ... } // from try @ 0246466c with catch @ 024640b4
                       catch() { ... } // from try @ 024646a4 with catch @ 024640b4
                       catch() { ... } // from try @ 024646d0 with catch @ 024640b4
                       catch() { ... } // from try @ 02464710 with catch @ 024640b4
                       catch() { ... } // from try @ 0246473c with catch @ 024640b4
                       catch() { ... } // from try @ 0246477c with catch @ 024640b4
                       catch() { ... } // from try @ 024647a0 with catch @ 024640b4
                       catch() { ... } // from try @ 024647c4 with catch @ 024640b4
                       catch() { ... } // from try @ 024647f0 with catch @ 024640b4 */
    System_Text_StringBuilder___ctor_46db688(plVar3,uVar1,0);
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar4 = 0;
      do {
        iVar2 = System_String__get_Chars_46ccb24(param_1,iVar4,0);
        if (0xfff5 < (iVar2 - 0x3aU & 0xffff)) {
          if (plVar3 == (long *)0x0) goto LAB_02464134;
          System_Text_StringBuilder__Append_46dd710(plVar3,iVar2,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02464130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      return;
    }
  }
LAB_02464134:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

