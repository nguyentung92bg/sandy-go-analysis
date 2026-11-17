/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$.cctor
void Dino_BusSand_Cheat_AutoQa___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$.cctor
   void Dino_BusSand_Cheat_AutoQa___c___cctor (const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa___c___cctor_2344344(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb9778;
  if ((bRam0000000004f9c6ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9778);
    bRam0000000004f9c6ab = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

