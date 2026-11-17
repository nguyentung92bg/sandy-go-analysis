/* IL2CPP: Dino.BusSand.App.Fx$$.cctor
void Dino_BusSand_App_Fx___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$.cctor
   void Dino_BusSand_App_Fx___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Fx___cctor_2151a7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04cab520;
  puVar4 = PTR_DAT_04cab518;
  puVar3 = PTR_DAT_04cab510;
  puVar2 = PTR_DAT_04cab508;
  puVar1 = PTR_DAT_04cab448;
  if ((bRam0000000004f9b7c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab510);
    FUN_02132f7c(PTR_DAT_04cab508);
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cab520);
    FUN_02132f7c(PTR_DAT_04cab518);
    bRam0000000004f9b7c4 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar6,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

