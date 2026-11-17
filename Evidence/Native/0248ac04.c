/* IL2CPP: Dino.BusSand.RenderQuality$$ForceTier
void Dino_BusSand_RenderQuality__ForceTier (int32_t tier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$ForceTier
   void Dino_BusSand_RenderQuality__ForceTier (int32_t tier, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__ForceTier_238ac04(int param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c896 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c896 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x10) = 1;
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c898 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c898 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c958 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    cRam0000000004f9c958 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = 2;
  }
  **(int **)(lVar2 + 0xb8) = param_1;
  UnityEngine_QualitySettings__set_anisotropicFiltering_436e8b4(uVar3,0);
  if (pcRam0000000004fa6608 == (code *)0x0) {
    pcRam0000000004fa6608 = (code *)FUN_02132f40(&UNK_00e5c44c);
  }
                    /* WARNING: Could not recover jumptable at 0x0446e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa6608)(0);
  return;
}

