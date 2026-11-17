/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$.cctor
void Dino_BusSand_App_Levels_LevelDatabase___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$.cctor
   void Dino_BusSand_App_Levels_LevelDatabase___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Levels_LevelDatabase___cctor_229b098(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb57b8;
  puVar2 = PTR_DAT_04cb57b0;
  puVar1 = PTR_DAT_04cacb18;
  if ((bRam0000000004f9c21e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb57b8);
    FUN_02132f7c(PTR_DAT_04cb57b0);
    FUN_02132f7c(PTR_DAT_04cacb18);
    bRam0000000004f9c21e = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

