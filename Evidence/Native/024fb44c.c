/* IL2CPP: Dino.BusSand.View.VehicleView$$TickArrowAlpha
void Dino_BusSand_View_VehicleView__TickArrowAlpha (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickArrowAlpha
   void Dino_BusSand_View_VehicleView__TickArrowAlpha (Dino_BusSand_View_VehicleView_o* __this,
   float dt, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickArrowAlpha_23fb44c
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cade & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cade = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x118);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  fVar10 = *(float *)(param_5 + 0x318);
  fVar11 = _UNK_00e20980;
  if (*(char *)(param_5 + 0x13c) != '\0') {
    fVar11 = 1.0;
  }
  if (cRam0000000004f9c305 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5bf8);
    cRam0000000004f9c305 = '\x01';
  }
  puVar1 = PTR_DAT_04cb5bf8;
  fVar9 = _UNK_00e20900;
  fVar6 = ABS(fVar10);
  if (fVar6 <= fVar11) {
    fVar6 = fVar11;
  }
  fVar8 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
  fVar7 = fVar6 * _UNK_00e20900;
  if (fVar6 * _UNK_00e20900 <= fVar8) {
    fVar7 = fVar8;
  }
  if (ABS(fVar11 - fVar10) < fVar7) {
    if (*(long *)(param_5 + 0x118) == 0) goto LAB_024fb614;
    UnityEngine_SpriteRenderer__get_color_434e15c(*(long *)(param_5 + 0x118),0);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    fVar6 = **(float **)(*(long *)puVar1 + 0xb8) * 8.0;
    fVar10 = ABS(param_4);
    if (ABS(param_4) <= fVar11) {
      fVar10 = fVar11;
    }
    fVar7 = fVar10 * fVar9;
    if (fVar10 * fVar9 <= fVar6) {
      fVar7 = fVar6;
    }
    if (ABS(fVar11 - param_4) < fVar7) {
      return;
    }
  }
  fVar9 = *(float *)(param_5 + 0x318);
  lVar3 = *(long *)(param_5 + 0x118);
  param_1 = param_1 / _UNK_00e20328;
  fVar10 = -param_1;
  if (0.0 <= fVar11 - fVar9) {
    fVar10 = param_1;
  }
  fVar10 = fVar9 + fVar10;
  if (ABS(fVar11 - fVar9) <= param_1) {
    fVar10 = fVar11;
  }
  *(float *)(param_5 + 0x318) = fVar10;
  if (lVar3 != 0) {
    if ((bRam0000000004fa5872 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6088,0);
      bRam0000000004fa5872 = 1;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa5880 == (code *)0x0) {
        pcRam0000000004fa5880 = (code *)FUN_02132f40(&UNK_00e57cfc);
      }
      (*pcRam0000000004fa5880)(lVar4,&stack0xffffffffffffffd0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
  }
LAB_024fb614:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

