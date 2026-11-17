/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_6
bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_6
   bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_6 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_6_2344ef8(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6c0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
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
      if (lVar3 == 0) goto LAB_02444f80;
      bVar2 = *(int *)(lVar3 + 0x20) == 2;
    }
    return bVar2;
  }
LAB_02444f80:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02444f80 to 02544f8b has its CatchHandler @ 02444fc4 */
  FUN_02133224();
}

