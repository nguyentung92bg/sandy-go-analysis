/* IL2CPP: Dino.BusSand.GameAudio$$IapSuccess
void Dino_BusSand_GameAudio__IapSuccess (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$IapSuccess
   void Dino_BusSand_GameAudio__IapSuccess (Dino_BusSand_GameAudio_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_GameAudio__IapSuccess_2383a8c(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c84a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cad278);
    bRam0000000004f9c84a = 1;
  }
  puVar3 = PTR_DAT_04cad278;
  uVar6 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar4 = *(long *)puVar2;
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_GameAudio__Play_2382750(0x3f800000,0x3f800000,0,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04cab1f0;
  fVar9 = _UNK_00e208e8;
  fVar1 = _UNK_00e20178;
  if ((uVar5 & 1) != 0) {
    if ((bRam0000000004f9c861 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab1f0);
      bRam0000000004f9c861 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88a == '\0') {
      FUN_02132f7c(PTR_DAT_04cab1f0);
      cRam0000000004f9b88a = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar9) {
        fVar7 = fVar8;
      }
      fVar9 = *(float *)(lVar4 + 0xb4);
      fVar8 = *(float *)(lVar4 + 0xb0);
      if (fVar7 <= *(float *)(lVar4 + 0xb0)) {
        fVar8 = fVar7;
      }
      *(float *)(lVar4 + 0xb0) = fVar8;
      fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      if (fVar9 <= fVar8 + fVar1) {
        fVar9 = fVar8 + fVar1;
      }
      *(float *)(lVar4 + 0xb4) = fVar9;
    }
    return;
  }
  return;
}

