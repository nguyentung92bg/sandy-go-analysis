/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$ResetDefaults
void Dino_BusSand_App_Meta_FeatureGate__ResetDefaults (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$ResetDefaults
   void Dino_BusSand_App_Meta_FeatureGate__ResetDefaults (const MethodInfo* method); */

void Dino_BusSand_App_Meta_FeatureGate__ResetDefaults_220bbec(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9bcf0 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = *(undefined4 **)(lVar4 + 0xb8);
  *puVar5 = 0x1010101;
  *(undefined2 *)(puVar5 + 1) = 0;
  Dino_BusSand_App_Meta_FeatureGate__ResetFeatureFlags_220bc50();
  puVar2 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bcf6 = 1;
  }
  puVar3 = PTR_DAT_04cac668;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar3;
  uVar1 = **(undefined1 **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
    lVar6 = *(long *)puVar3;
  }
  *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 8) = uVar1;
  return;
}

