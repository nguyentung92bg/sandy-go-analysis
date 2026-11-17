/* IL2CPP: Dino.BusSand.View.VehicleView$$TickFreed
void Dino_BusSand_View_VehicleView__TickFreed (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickFreed
   void Dino_BusSand_View_VehicleView__TickFreed (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickFreed_23fe22c(float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f9caf7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caf7 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(float *)(param_2 + 0x350) < 0.0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024fe290 to 025fe2d3 has its CatchHandler @ 024fe450 */
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if (((uVar2 & 1) == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
    if (0.0 < *(float *)(param_2 + 0x354)) {
      fVar5 = *(float *)(param_2 + 0x354) - param_1;
      *(float *)(param_2 + 0x354) = fVar5;
      if (0.0 < fVar5) {
        return;
      }
      fVar5 = *(float *)(param_2 + 0x188) + _UNK_00e20814;
      *(undefined4 *)(param_2 + 0x1e4) = 0x3f866666;
      *(float *)(param_2 + 0x188) = fVar5;
      fVar6 = (*(float *)(param_2 + 0xa8) / *(float *)(param_2 + 0xbc)) * 3.0;
      fVar5 = *(float *)(param_2 + 0x370);
      if (*(float *)(param_2 + 0x370) <= fVar6) {
        fVar5 = fVar6;
      }
      *(float *)(param_2 + 0x370) = fVar5;
      *(float *)(param_2 + 0x198) = *(float *)(param_2 + 0x198) + -30.0;
    }
    lVar3 = *(long *)(param_2 + 0x68);
    param_1 = *(float *)(param_2 + 0x350) + param_1;
    fVar5 = param_1 / _UNK_00e200b4;
    *(float *)(param_2 + 0x350) = param_1;
    if (fVar5 < 1.0) {
      if (lVar3 != 0) {
        func_0x049b5320(fVar5 * _UNK_00e2082c);
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
        return;
      }
LAB_024fe40c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (lVar3 == 0) goto LAB_024fe40c;
    uVar8 = *(undefined4 *)(param_2 + 0x360);
    uVar7 = *(undefined4 *)(param_2 + 0x35c);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) == 0) goto LAB_024fe2e8;
    lVar3 = *(long *)(param_2 + 0x68);
    if (lVar3 == 0) goto LAB_024fe40c;
                    /* try { // try from 024fe2d4 to 025fe42f has its CatchHandler @ 024fe068 */
    uVar8 = *(undefined4 *)(param_2 + 0x360);
    uVar7 = *(undefined4 *)(param_2 + 0x35c);
  }
  UnityEngine_Transform__set_localScale_43d1be0
            (*(undefined4 *)(param_2 + 0x358),uVar7,uVar8,lVar3,0);
LAB_024fe2e8:
  *(undefined4 *)(param_2 + 0x350) = 0xbf800000;
  return;
}

