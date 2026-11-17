/* IL2CPP: Dino.BusSand.View.VehicleView$$TickCover
void Dino_BusSand_View_VehicleView__TickCover (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickCover
   void Dino_BusSand_View_VehicleView__TickCover (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickCover_23fb618(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9cadf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa110);
    bRam0000000004f9cadf = 1;
  }
  if ((0.0 <= *(float *)(param_2 + 300)) && (*(long *)(param_2 + 0x120) != 0)) {
    param_1 = *(float *)(param_2 + 0x130) + param_1;
    fVar7 = param_1 / _UNK_00e20094;
    *(float *)(param_2 + 0x130) = param_1;
    fVar6 = 1.0;
    if (fVar7 <= 1.0) {
      fVar6 = fVar7;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar6;
    }
    fVar6 = *(float *)(param_2 + 300) * (1.0 - fVar8 * fVar8 * (3.0 - (fVar8 + fVar8)));
    *(float *)(param_2 + 0x128) = fVar6;
    if (1.0 <= fVar8) {
      fVar6 = 0.0;
      *(undefined8 *)(param_2 + 0x128) = _UNK_00e69830;
    }
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (fVar6,*(long *)(param_2 + 0x120),*(undefined8 *)PTR_DAT_04caa110,0);
    uVar5 = *(undefined8 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0xe8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = *(long *)(param_2 + 0x120);
      if ((bRam0000000004fa68bf & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf67a0,lVar3,0);
        bRam0000000004fa68bf = 1;
      }
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        uVar5 = 0;
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
        }
        if (pcRam0000000004fa6908 == (code *)0x0) {
          pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
        }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa6908)(lVar4,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

