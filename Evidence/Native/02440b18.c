/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$add_Changed
void Dino_BusSand_Cheat_AutoQa__add_Changed (System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$add_Changed
   void Dino_BusSand_Cheat_AutoQa__add_Changed (System_Action_o* value, const MethodInfo* method);
    */

void Dino_BusSand_Cheat_AutoQa__add_Changed_2340b18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cb9568;
                    /* try { // try from 02440b28 to 02540b33 has its CatchHandler @ 02440d1c */
  if ((bRam0000000004f9c681 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c681 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
                    /* try { // try from 02440b70 to 02540b77 has its CatchHandler @ 02440d38 */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  do {
    plVar5 = (long *)System_Delegate__Combine_4872324(lVar4,param_1,0);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 02440b98 to 02540b9f has its CatchHandler @ 02440bb0 */
      if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
                    /* try { // try from 02440ba8 to 02540bab has its CatchHandler @ 02440bb4 */
    lVar6 = *(long *)puVar2;
                    /* try { // try from 02440bac to 02540bcf has its CatchHandler @ 0244098c */
                    /* catch() { ... } // from try @ 02440b98 with catch @ 02440bb0 */
    if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02440ba8 with catch @ 02440bb4 */
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x20,plVar5,lVar4);
                    /* try { // try from 02440bd0 to 02540be3 has its CatchHandler @ 02440cfc */
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
  return;
}

