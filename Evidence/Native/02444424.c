/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Win>b__35_1
bool Dino_BusSand_Cheat_AutoQa___c___Win_b__35_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Win>b__35_1
   bool Dino_BusSand_Cheat_AutoQa___c___Win_b__35_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___Win_b__35_1_2344424(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6ad = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x38) == '\0') {
      return false;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x20) != 2) {
        return false;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar2 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (lVar2 != 0) {
        return *(int *)(lVar2 + 0x28) == 6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

