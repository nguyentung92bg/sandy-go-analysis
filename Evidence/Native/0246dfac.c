/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass26_0$$<Toggle>b__0
System_String_o* Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0___Toggle_b__0 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass26_0$$<Toggle>b__0
   System_String_o* Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0___Toggle_b__0
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
    */

long Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0___Toggle_b__0_236dfac(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246dee4 with catch @ 0246dfac
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246de6c with catch @ 0246dfb0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246de04 with catch @ 0246dfb4
                        */
  if ((bRam0000000004f9c7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbae98);
                    /* try { // try from 0246dfd0 to 0256dfd3 has its CatchHandler @ 0246dfe0 */
    FUN_02132f7c(PTR_DAT_04cbaea0);
                    /* catch() { ... } // from try @ 0246dfd0 with catch @ 0246dfe0 */
    bRam0000000004f9c7b7 = 1;
  }
  puVar3 = PTR_DAT_04cbaea0;
  plVar1 = (long *)PTR_DAT_04cbae98;
                    /* try { // try from 0246dfe4 to 0256dfeb has its CatchHandler @ 0246dff4 */
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
                    /* try { // try from 0246dfec to 0256dff7 has its CatchHandler @ 0246dc6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0246dfe4 with catch @ 0246dff4
                        */
    lVar7 = *(long *)(param_1 + 0x10);
    uVar4 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    if ((uVar4 & 1) == 0) {
      plVar1 = (long *)puVar3;
    }
    lVar6 = *plVar1;
    if ((lVar7 == 0) || (iVar2 = *(int *)(lVar7 + 0x10), iVar2 == 0)) {
      if ((lVar6 == 0) || (lVar7 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
        lVar7 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
    }
    else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
      lVar5 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar2,lVar6,0);
      System_String__FillStringChecked_46d2a48(lVar5,0,lVar7);
      System_String__FillStringChecked_46d2a48(lVar5,iVar2,lVar6);
      lVar7 = lVar5;
    }
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

