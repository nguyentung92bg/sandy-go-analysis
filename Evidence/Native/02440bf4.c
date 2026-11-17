/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$remove_Changed
void Dino_BusSand_Cheat_AutoQa__remove_Changed (System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$remove_Changed
   void Dino_BusSand_Cheat_AutoQa__remove_Changed (System_Action_o* value, const MethodInfo*
   method); */

void Dino_BusSand_Cheat_AutoQa__remove_Changed_2340bf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cb9568;
                    /* try { // try from 02440bfc to 02540bff has its CatchHandler @ 02440cf8 */
                    /* try { // try from 02440c00 to 02540c1f has its CatchHandler @ 02440cf4 */
  if ((bRam0000000004f9c682 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb9568);
                    /* try { // try from 02440c34 to 02540c37 has its CatchHandler @ 02440d18 */
    bRam0000000004f9c682 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 02440c48 to 02540c4b has its CatchHandler @ 02440d34 */
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  do {
    plVar5 = (long *)System_Delegate__Remove_4872510(lVar4,param_1,0);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar1) {
                    /* try { // try from 02440cc8 to 02540ccb has its CatchHandler @ 02440d34 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02440ccc to 02540ccf has its CatchHandler @ 02440d24 */
        FUN_021335a4(plVar5);
      }
    }
                    /* try { // try from 02440c84 to 02540c8f has its CatchHandler @ 02440d30 */
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x20,plVar5,lVar4);
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
                    /* try { // try from 02440cbc to 02540cbf has its CatchHandler @ 02440d2c */
                    /* try { // try from 02440cc0 to 02540cc3 has its CatchHandler @ 02440d30 */
                    /* try { // try from 02440cc4 to 02540cc7 has its CatchHandler @ 02440d28 */
  return;
}

