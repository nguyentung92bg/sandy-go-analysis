/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_5
void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_5 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, bool focused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_5
   void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_5 (Dino_BusSand_Sdk_DinoAdProvider___c_o*
   __this, bool focused, const MethodInfo* method); */

ulong Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_5_2431938(ulong param_1,ulong param_2)

{
  int iVar1;
  
  if ((bRam0000000004f9cc27 & 1) == 0) {
    param_1 = FUN_02132f7c(PTR_DAT_04cbeff0);
    bRam0000000004f9cc27 = 1;
  }
  if ((param_2 & 1) != 0) {
    return param_1;
  }
  iVar1 = FUN_02220b60(1,*(long *)(*(long *)PTR_DAT_04cbeff0 + 0xb8) + 0x14);
  DataMemoryBarrier(2,3);
  return (ulong)(iVar1 + 1);
}

