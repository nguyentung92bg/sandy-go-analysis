/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$Apply
void Dino_BusSand_App_Meta_FeatureGate__Apply (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$Apply
   void Dino_BusSand_App_Meta_FeatureGate__Apply (const MethodInfo* method); */

void Dino_BusSand_App_Meta_FeatureGate__Apply_220bd64(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
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
  lVar5 = *(long *)puVar3;
  uVar1 = **(undefined1 **)(lVar4 + 0xb8);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
    lVar5 = *(long *)puVar3;
  }
  *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 8) = uVar1;
  return;
}

