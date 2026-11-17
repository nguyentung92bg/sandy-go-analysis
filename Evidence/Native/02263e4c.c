/* IL2CPP: Dino.BusSand.App.UiAssets$$.cctor
void Dino_BusSand_App_UiAssets___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$.cctor
   void Dino_BusSand_App_UiAssets___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UiAssets___cctor_2163e4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04cac3e8;
  puVar4 = PTR_DAT_04cac3e0;
  puVar3 = PTR_DAT_04cab800;
  puVar2 = PTR_DAT_04cab7f0;
  puVar1 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b846 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac3e8);
    FUN_02132f7c(PTR_DAT_04cac3e0);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b846 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar6,*(undefined8 *)puVar2);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar6,*(undefined8 *)puVar2);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

