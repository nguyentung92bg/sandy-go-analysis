/* IL2CPP: Dino.BusSand.App.TweenRunner$$.cctor
void Dino_BusSand_App_TweenRunner___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.TweenRunner$$.cctor
   void Dino_BusSand_App_TweenRunner___cctor (const MethodInfo* method); */

void Dino_BusSand_App_TweenRunner___cctor_2162af4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cac2d8;
  puVar2 = PTR_DAT_04cac2d0;
  puVar1 = PTR_DAT_04cac1f0;
  if ((bRam0000000004f9b838 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac2d8);
    FUN_02132f7c(PTR_DAT_04cac2d0);
    FUN_02132f7c(PTR_DAT_04cac1f0);
    bRam0000000004f9b838 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a81404(uVar4,0x100,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_02134474(puVar5,uVar4);
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a81404(uVar4,0x40,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

