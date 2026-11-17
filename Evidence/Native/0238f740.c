/* IL2CPP: Dino.BusSand.App.UI.KitPop$$.cctor
void Dino_BusSand_App_UI_KitPop___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$.cctor
   void Dino_BusSand_App_UI_KitPop___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop___cctor_228f740(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cb5308;
  puVar2 = PTR_DAT_04cb5300;
  puVar1 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb5308);
    FUN_02132f7c(PTR_DAT_04cb5300);
    bRam0000000004f9c1b0 = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = 0x3e99999a;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

