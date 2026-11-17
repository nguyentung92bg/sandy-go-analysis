/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$get_Dt
float Dino_BusSand_App_UI_UiMotion__get_Dt (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$get_Dt
   float Dino_BusSand_App_UI_UiMotion__get_Dt (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_04cac1e8;
  if ((bRam0000000004f9c1b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c1b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cac1e8;
  if ((bRam0000000004f9b821 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9b821 = 1;
  }
  iVar2 = UnityEngine_Time__get_frameCount_43cd710(0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
    lVar4 = *(long *)puVar1;
  }
  if (iVar2 != *(int *)(*(long *)(lVar4 + 0xb8) + 0xc)) {
    uVar3 = UnityEngine_Time__get_frameCount_43cd710(0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar4 + 0xb8);
    fVar6 = *(float *)(lVar5 + 4);
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    if (0.0 <= fVar6) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
        lVar4 = *(long *)puVar1;
        lVar5 = *(long *)(lVar4 + 0xb8);
        fVar6 = *(float *)(lVar5 + 4);
      }
      fVar7 = *(float *)(lVar5 + 8) - fVar6;
      fVar9 = _UNK_00e20164;
      if (fVar7 <= _UNK_00e20164) {
        fVar9 = fVar7;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar9;
      }
      *(float *)(lVar5 + 0x10) = fVar8;
      *(float *)(lVar5 + 4) = fVar6 + fVar8;
    }
    else {
      uVar3 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      lVar4 = *(long *)puVar1;
      fVar6 = (float)NEON_fminnm(uVar3,_UNK_00e2043c);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
        lVar4 = *(long *)puVar1;
      }
      (*(float **)(lVar4 + 0xb8))[4] = fVar6 * **(float **)(lVar4 + 0xb8);
    }
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
  }
  return *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
}

