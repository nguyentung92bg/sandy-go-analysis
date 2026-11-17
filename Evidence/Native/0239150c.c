/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$.cctor
void Dino_BusSand_App_UI_UiMotion___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$.cctor
   void Dino_BusSand_App_UI_UiMotion___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___cctor_229150c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb53a0;
  puVar2 = PTR_DAT_04cb5398;
  puVar1 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c1c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb53a0);
    FUN_02132f7c(PTR_DAT_04cb5398);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1c7 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__Vector2____ctor_34c4c0c(uVar4,*(undefined8 *)puVar3)
  ;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

