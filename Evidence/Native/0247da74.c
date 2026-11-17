/* IL2CPP: Dino.BusSand.GameAssets$$.cctor
void Dino_BusSand_GameAssets___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$.cctor
   void Dino_BusSand_GameAssets___cctor (const MethodInfo* method); */

void Dino_BusSand_GameAssets___cctor_237da74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cab800;
  puVar2 = PTR_DAT_04cab7f0;
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    bRam0000000004f9c81c = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar4,*(undefined8 *)puVar2);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

