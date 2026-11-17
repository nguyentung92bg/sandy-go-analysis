/* IL2CPP: Dino.BusSand.Sdk.GooglePlayTangle$$.cctor
void Dino_BusSand_Sdk_GooglePlayTangle___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.GooglePlayTangle$$.cctor
   void Dino_BusSand_Sdk_GooglePlayTangle___cctor (const MethodInfo* method); */

void Dino_BusSand_Sdk_GooglePlayTangle___cctor_2434894(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_04ca9b88;
  if ((bRam0000000004f9cc3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88);
    FUN_02132f7c(PTR_DAT_04cbf1e0);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbf1e8);
    FUN_02132f7c(PTR_DAT_04cbf1f0);
    bRam0000000004f9cc3c = 1;
  }
  puVar5 = PTR_DAT_04cbf1f0;
  puVar4 = PTR_DAT_04cbf1e8;
  puVar3 = PTR_DAT_04cbf1e0;
  puVar2 = PTR_DAT_04caec70;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = System_Convert__FromBase64String_47c4440(*(undefined8 *)puVar5,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
  uVar6 = FUN_02133068(*(undefined8 *)puVar2,0xf);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar4,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

