/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$.cctor
void Dino_BusSand_App_UI_LevelEnterPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$.cctor
   void Dino_BusSand_App_UI_LevelEnterPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel___cctor_231a930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb8548;
  puVar2 = PTR_DAT_04cae208;
  puVar1 = PTR_DAT_04cae200;
  if ((bRam0000000004f9c583 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cb8548);
    bRam0000000004f9c583 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_HashSet_int____ctor_37daeb0(uVar4,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar3 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

