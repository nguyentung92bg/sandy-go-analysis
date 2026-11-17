/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$.cctor
void Dino_BusSand_App_Meta_DailyChallengeModel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$.cctor
   void Dino_BusSand_App_Meta_DailyChallengeModel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_DailyChallengeModel___cctor_222eb44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb2f10;
  puVar2 = PTR_DAT_04caf808;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9be5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2f10);
    bRam0000000004f9be5b = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

