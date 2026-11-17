/* IL2CPP: Dino.BusSand.View.GameView$$TickJam
void Dino_BusSand_View_GameView__TickJam (Dino_BusSand_View_GameView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$TickJam
   void Dino_BusSand_View_GameView__TickJam (Dino_BusSand_View_GameView_o* __this, float dt, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__TickJam_23a3c6c(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_04cb2870;
  if ((bRam0000000004f9c926 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c926 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar4 + 0xb8);
  fVar7 = 0.0;
  if ((((*(char *)(lVar5 + 0x28) != '\0') && (*(char *)(param_2 + 0x114) == '\0')) &&
      (*(char *)(param_2 + 0x40) == '\0')) &&
     (*(float *)(param_2 + 0x110) <= *(float *)(param_2 + 0x10c))) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
      lVar5 = *(long *)(lVar4 + 0xb8);
    }
    fVar7 = *(float *)(lVar5 + 0x2c);
    if (0.0 <= fVar7) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
        fVar7 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x2c);
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar7 = (float)Dino_BusSand_Core_StageEngine__get_JamPressure_2426a34
                               (*(long *)(param_2 + 0x20),0);
      lVar4 = *(long *)puVar3;
    }
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04cad568;
  lVar5 = *(long *)(lVar4 + 0xb8);
  fVar9 = *(float *)(param_2 + 0x1d4);
  fVar6 = (fVar7 - *(float *)(lVar5 + 0x20)) / (1.0 - *(float *)(lVar5 + 0x20));
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar6) {
    fVar8 = fVar7;
  }
  if (fVar8 <= 0.0) {
    if (0.0 < fVar9) {
      if ((*(char *)(param_2 + 0x114) == '\0') && (*(char *)(param_2 + 0x40) == '\0')) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
        }
        if (*(float *)(lVar5 + 0x24) <= fVar9) {
          Dino_BusSand_View_GameView__JamReleased_23a4a10(*(undefined4 *)(param_2 + 0x1d4),param_2);
        }
      }
      *(undefined8 *)(param_2 + 0x1d4) = 0;
    }
  }
  else {
    fVar7 = *(float *)(param_2 + 0x1d8) - param_1;
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
    *(float *)(param_2 + 0x1d8) = fVar7;
    *(float *)(param_2 + 0x1d4) = fVar9;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar8;
      }
      *(float *)(param_2 + 0x1d8) = fVar7 * _UNK_00e20800 + 1.0;
      Dino_BusSand_View_GameView__JamBeat_23a4698(fVar8,param_2);
    }
  }
  fVar9 = *(float *)(param_2 + 0x1d0);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  fVar7 = -(param_1 * 1.5);
  if (0.0 <= fVar8 - fVar9) {
    fVar7 = param_1 * 1.5;
  }
  fVar7 = fVar9 + fVar7;
  if (ABS(fVar8 - fVar9) <= param_1 * 1.5) {
    fVar7 = fVar8;
  }
  *(float *)(param_2 + 0x1d0) = fVar7;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
                    /* try { // try from 024a3eb8 to 025a40eb has its CatchHandler @ 024a3eb8
                       catch() { ... } // from try @ 024a3eb8 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a411c with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a42e0 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a4384 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a43c8 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a43d8 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a442c with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a4458 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a4494 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a44b8 with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a44dc with catch @ 024a3eb8
                       catch() { ... } // from try @ 024a4500 with catch @ 024a3eb8 */
  if (**(long **)(lVar4 + 0xb8) != 0) {
    fVar9 = *(float *)(param_2 + 0x1d0);
    fVar7 = 1.0;
    if (fVar9 <= 1.0) {
      fVar7 = fVar9;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar9) {
      fVar6 = fVar7;
    }
    *(float *)(**(long **)(lVar4 + 0xb8) + 0x138) = fVar6;
    return;
  }
  return;
}

