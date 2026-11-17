/* IL2CPP: Dino.BusSand.App.Tables$$.cctor
void Dino_BusSand_App_Tables___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tables$$.cctor
   void Dino_BusSand_App_Tables___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Tables___cctor_215efb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cac048;
  puVar2 = PTR_DAT_04cac040;
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9b814 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac048);
    FUN_02132f7c(PTR_DAT_04cac040);
    FUN_02132f7c(PTR_DAT_04cac018);
    bRam0000000004f9b814 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

