/* IL2CPP: Dino.BusSand.View.MeshLod$$.cctor
void Dino_BusSand_View_MeshLod___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MeshLod$$.cctor
   void Dino_BusSand_View_MeshLod___cctor (const MethodInfo* method); */

void Dino_BusSand_View_MeshLod___cctor_23d7050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cbd7a0;
  puVar2 = PTR_DAT_04cbd798;
  puVar1 = PTR_DAT_04cbd750;
  if ((bRam0000000004f9ca28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd7a0);
    FUN_02132f7c(PTR_DAT_04cbd798);
    FUN_02132f7c(PTR_DAT_04cbd750);
    bRam0000000004f9ca28 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_ValueTuple_object__int___object____ctor_3384988
            (uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

