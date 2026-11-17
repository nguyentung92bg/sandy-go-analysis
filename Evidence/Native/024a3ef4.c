/* IL2CPP: Dino.BusSand.View.GameView$$TickApproach
void Dino_BusSand_View_GameView__TickApproach (Dino_BusSand_View_GameView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$TickApproach
   void Dino_BusSand_View_GameView__TickApproach (Dino_BusSand_View_GameView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__TickApproach_23a3ef4(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9c929 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c929 = 1;
  }
  puVar2 = PTR_DAT_04cb2870;
  if (*(int *)(param_2 + 0x210) < 1) {
    fVar8 = 1.0;
  }
  else {
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x18), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar8 = (float)*(int *)(lVar5 + 0x70) / (float)*(int *)(param_2 + 0x210);
  }
  fVar7 = 0.0;
  cVar4 = *(char *)(param_2 + 0x114);
  if ((cVar4 == '\0') && (0.0 < fVar8)) {
    lVar5 = *(long *)PTR_DAT_04cb2870;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    fVar7 = 0.0;
    fVar6 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (fVar8 < fVar6) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        fVar6 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      }
      fVar7 = 1.0 - fVar8 / fVar6;
    }
    cVar4 = *(char *)(param_2 + 0x114);
  }
  puVar3 = PTR_DAT_04cb2870;
  puVar2 = PTR_DAT_04cad568;
  if ((cVar4 != '\0') && (*(char *)(param_2 + 0x14c) != '\0')) {
    fVar8 = *(float *)(param_2 + 0x240);
    fVar6 = *(float *)(param_2 + 0x1dc);
    lVar5 = *(long *)PTR_DAT_04cb2870;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    if (fVar8 < fVar6 * *(float *)(*(long *)(lVar5 + 0xb8) + 0x34)) {
      fVar7 = *(float *)(param_2 + 0x1dc);
    }
  }
  fVar6 = *(float *)(param_2 + 0x1dc);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  fVar8 = -(param_1 * _UNK_00e20094);
  if (0.0 <= fVar7 - fVar6) {
    fVar8 = param_1 * _UNK_00e20094;
  }
  fVar8 = fVar6 + fVar8;
  if (ABS(fVar7 - fVar6) <= param_1 * _UNK_00e20094) {
    fVar8 = fVar7;
  }
  *(float *)(param_2 + 0x1dc) = fVar8;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    fVar8 = 0.0;
    if (*(char *)(param_2 + 0x114) == '\0') {
      fVar8 = *(float *)(param_2 + 0x1dc);
    }
    fVar7 = 1.0;
    if (fVar8 <= 1.0) {
      fVar7 = fVar8;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar7;
    }
    *(float *)(**(long **)(lVar5 + 0xb8) + 0x13c) = fVar6;
    return;
  }
  return;
}

