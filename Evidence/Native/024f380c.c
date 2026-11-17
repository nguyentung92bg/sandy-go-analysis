/* IL2CPP: Dino.BusSand.View.VehicleBatch$$.cctor
void Dino_BusSand_View_VehicleBatch___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$.cctor
   void Dino_BusSand_View_VehicleBatch___cctor (const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch___cctor_23f380c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cbd9e8;
  puVar2 = PTR_DAT_04cbd9e0;
  puVar1 = PTR_DAT_04cbc2c8;
  if ((bRam0000000004f9cac0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd9e8);
    FUN_02132f7c(PTR_DAT_04cbd9e0);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    bRam0000000004f9cac0 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

