/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$PageAfterRelease
int32_t Dino_BusSand_App_UI_EndOfLevelRules__PageAfterRelease (float norm, float dragStartNorm, int32_t count, float minDelta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$PageAfterRelease
   int32_t Dino_BusSand_App_UI_EndOfLevelRules__PageAfterRelease (float norm, float dragStartNorm,
   int32_t count, float minDelta, const MethodInfo* method); */

int Dino_BusSand_App_UI_EndOfLevelRules__PageAfterRelease_22be490
              (float param_1,float param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  if ((bRam0000000004f9c34a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c34a = 1;
  }
  puVar4 = PTR_DAT_04caa200;
  if (param_4 < 2) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar6 = (float)System_Math__Max_4830ff4(0x3f800000,(float)param_4 + -1.0,0);
    fVar8 = 0.0;
    if ((0.0 <= param_1) && (fVar8 = param_1, 1.0 < param_1)) {
      fVar8 = 1.0;
    }
    if (cRam0000000004f9c3af == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9c3af = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar7 = (double)System_Math__Round_48312e4((double)(fVar6 * fVar8),0,0,0);
    param_4 = param_4 + -1;
    iVar2 = -0x80000000;
    if (dVar7 != INFINITY) {
      iVar2 = (int)dVar7;
    }
    iVar1 = iVar2;
    if (param_4 <= iVar2) {
      iVar1 = param_4;
    }
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar1;
    }
    fVar8 = 0.0;
    if ((0.0 <= param_2) && (fVar8 = param_2, 1.0 < param_2)) {
      fVar8 = 1.0;
    }
    if (cRam0000000004f9c3af == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9c3af = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar7 = (double)System_Math__Round_48312e4((double)(fVar6 * fVar8),0,0,0);
    iVar2 = -0x80000000;
    if (dVar7 != INFINITY) {
      iVar2 = (int)dVar7;
    }
    iVar1 = iVar2;
    if (param_4 <= iVar2) {
      iVar1 = param_4;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar1;
    }
    fVar6 = (float)System_Math__Max_4830ff4(0,param_3,0);
    if (param_1 - fVar8 <= fVar6) {
      if (param_1 - fVar8 < -fVar6) {
        iVar3 = iVar3 + -1;
        iVar2 = iVar3;
        if (param_4 <= iVar3) {
          iVar2 = param_4;
        }
        iVar5 = 0;
        if (-1 < iVar3) {
          iVar5 = iVar2;
        }
      }
    }
    else {
      if (iVar3 + 1 < param_4) {
        param_4 = iVar3 + 1;
      }
      iVar5 = 0;
      if (-2 < iVar3) {
        iVar5 = param_4;
      }
    }
  }
  return iVar5;
}

