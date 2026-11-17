/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$.cctor
void Dino_BusSand_App_UI_CommerceUi___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$.cctor
   void Dino_BusSand_App_UI_CommerceUi___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi___cctor_22ac69c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_04cb5ea8;
  if ((bRam0000000004f9c2b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cb5eb0);
    FUN_02132f7c(PTR_DAT_04cb5ea8);
    bRam0000000004f9c2b1 = 1;
  }
  puVar4 = PTR_DAT_04cb5eb0;
  puVar2 = PTR_DAT_04cac8c0;
  puVar1 = PTR_DAT_04cac7b8;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Func_bool____ctor_379d5fc(uVar6,uVar8,*(undefined8 *)puVar4,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
  uVar7 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar7 >> 0xc & 0x3f),(uVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

