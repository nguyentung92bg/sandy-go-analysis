/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_8
void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_8 (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_8
   void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_8
   (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_8_236cdb0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cab380;
  if ((bRam0000000004f9c7ab & 1) == 0) {
                    /* try { // try from 0246cdcc to 0256cf03 has its CatchHandler @ 0246cdcc
                       catch() { ... } // from try @ 0246cdcc with catch @ 0246cdcc
                       catch() { ... } // from try @ 0246cf80 with catch @ 0246cdcc
                       catch() { ... } // from try @ 0246cfdc with catch @ 0246cdcc
                       catch() { ... } // from try @ 0246d02c with catch @ 0246cdcc */
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9c7ab = 1;
  }
  *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 2) =
       *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 2) ^ 1;
  return;
}

