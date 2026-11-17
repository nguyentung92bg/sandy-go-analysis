/* IL2CPP: Dino.BusSand.View.MechanicLayer.ListPool$$.cctor
void Dino_BusSand_View_MechanicLayer_ListPool___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.ListPool$$.cctor
   void Dino_BusSand_View_MechanicLayer_ListPool___cctor (const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer_ListPool___cctor_23d39c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cbd608;
  puVar2 = PTR_DAT_04cad6e8;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9ca07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd608);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9ca07 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar4,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar3 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

