/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$OnDestroy
void Dino_BusSand_App_Gameplay_GameplayController__OnDestroy (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$OnDestroy
   void Dino_BusSand_App_Gameplay_GameplayController__OnDestroy
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__OnDestroy_229d068(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c235 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c235 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c25e == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9c25e = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar3 + 0xb8) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

