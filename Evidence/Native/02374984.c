/* IL2CPP: Dino.BusSand.App.Meta.Profile$$.cctor
void Dino_BusSand_App_Meta_Profile___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$.cctor
   void Dino_BusSand_App_Meta_Profile___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile___cctor_2274984(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_04cb4810;
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c112 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb4810);
    bRam0000000004f9c112 = 1;
  }
  puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar3 = *(undefined8 *)puVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

