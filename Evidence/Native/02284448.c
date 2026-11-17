/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$.cctor
void Dino_BusSand_App_UI_KitPrefabs___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$.cctor
   void Dino_BusSand_App_UI_KitPrefabs___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs___cctor_2184448(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cad850;
  puVar2 = PTR_DAT_04cad848;
  puVar1 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b93a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad850);
    FUN_02132f7c(PTR_DAT_04cad848);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    bRam0000000004f9b93a = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  **(undefined1 **)(*(long *)puVar1 + 0xb8) = 1;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

