/* IL2CPP: Dino.BusSand.GameAudio$$Duck
void Dino_BusSand_GameAudio__Duck (Dino_BusSand_GameAudio_o* __this, float level, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$Duck
   void Dino_BusSand_GameAudio__Duck (Dino_BusSand_GameAudio_o* __this, float level, float seconds,
   const MethodInfo* method); */

void Dino_BusSand_GameAudio__Duck_2383b30(float param_1,float param_2)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c861 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9c861 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    fVar5 = 1.0;
    if (param_1 <= 1.0) {
      fVar5 = param_1;
    }
    fVar4 = 0.0;
    if (0.0 <= param_1) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(lVar2 + 0xb4);
    fVar3 = *(float *)(lVar2 + 0xb0);
    if (fVar4 <= *(float *)(lVar2 + 0xb0)) {
      fVar3 = fVar4;
    }
    *(float *)(lVar2 + 0xb0) = fVar3;
    fVar4 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (fVar5 <= fVar4 + param_2) {
      fVar5 = fVar4 + param_2;
    }
    *(float *)(lVar2 + 0xb4) = fVar5;
  }
  return;
}

