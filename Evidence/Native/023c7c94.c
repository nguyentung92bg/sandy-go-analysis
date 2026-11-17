/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$.cctor
void Dino_BusSand_App_UI_GuideDimHoles___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$.cctor
   void Dino_BusSand_App_UI_GuideDimHoles___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_GuideDimHoles___cctor_22c7c94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cb68f0;
  puVar1 = PTR_DAT_04cabdb8;
  if ((bRam0000000004f9c364 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c364 = 1;
  }
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,8);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
  uVar4 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

