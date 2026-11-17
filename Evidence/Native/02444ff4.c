/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_8
bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_8 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_8
   bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_8 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_8_2344ff4(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02445004 to 02545007 has its CatchHandler @ 02445020 */
                    /* try { // try from 02445008 to 02545023 has its CatchHandler @ 02444d0c */
  if ((bRam0000000004f9c6c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
                    /* catch() { ... } // from try @ 02445004 with catch @ 02445020 */
    bRam0000000004f9c6c2 = 1;
  }
                    /* try { // try from 02445024 to 0254502b has its CatchHandler @ 02445034 */
                    /* try { // try from 0244502c to 02545037 has its CatchHandler @ 02444d0c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02445024 with catch @ 02445034
                        */
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x38) == '\0') {
      bVar2 = false;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (lVar3 == 0) goto LAB_0244507c;
      bVar2 = *(int *)(lVar3 + 0x20) == 2;
    }
    return bVar2;
  }
LAB_0244507c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

