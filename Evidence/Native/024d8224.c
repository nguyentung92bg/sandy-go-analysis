/* IL2CPP: Dino.BusSand.View.PackVehicle$$Step
void Dino_BusSand_View_PackVehicle__Step (Dino_BusSand_View_PackVehicle_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$Step
   void Dino_BusSand_View_PackVehicle__Step (Dino_BusSand_View_PackVehicle_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__Step_23d8224(float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_2c [4];
  float fStack_28;
  float fStack_24;
  
  fVar5 = _UNK_00e203f4;
  fVar8 = 1.0;
  if (0.0 <= *(float *)(param_2 + 0x78)) {
    fVar8 = *(float *)(param_2 + 0x7c) + param_1;
    *(float *)(param_2 + 0x7c) = fVar8;
    fVar5 = (fVar8 - *(float *)(param_2 + 0x78)) / fVar5;
    fVar8 = 0.0;
    if (fVar5 < 0.0) goto LAB_024d82f4;
    fVar8 = 1.0;
    if (1.0 <= fVar5) {
      *(undefined4 *)(param_2 + 0x78) = 0xbf800000;
      *(float *)(param_2 + 0x68) = *(float *)(param_2 + 0x68) + 4.5;
    }
    else if (_UNK_00e2094c <= fVar5) {
      fVar5 = fVar5 + _UNK_00e2044c;
      fVar8 = (float)expf(fVar5 * -7.0);
      fVar5 = (float)func_0x049b5320(fVar5 * 9.0);
      fVar8 = fVar5 * fVar8 * _UNK_00e20aec + 1.0;
    }
    else {
      fVar8 = (float)func_0x049b5300(fVar5 / _UNK_00e2044c + 1.0,0x40400000);
      fVar8 = 1.0 - fVar8;
    }
  }
  fVar5 = *(float *)(param_2 + 0x68) +
          (*(float *)(param_2 + 100) * -160.0 + *(float *)(param_2 + 0x68) * -9.0) * param_1;
  *(float *)(param_2 + 100) = *(float *)(param_2 + 100) + fVar5 * param_1;
  *(float *)(param_2 + 0x68) = fVar5;
  if ((0.0 < *(float *)(param_2 + 0x6c)) || (0.0 < *(float *)(param_2 + 0x70))) {
    fVar7 = *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x60) * -30.0 * param_1;
    fVar6 = *(float *)(param_2 + 0x6c) + fVar7 * param_1;
    *(float *)(param_2 + 0x6c) = fVar6;
    *(float *)(param_2 + 0x70) = fVar7;
    if (fVar6 <= 0.0) {
      *(undefined4 *)(param_2 + 0x6c) = 0;
      *(undefined4 *)(param_2 + 0x70) = 0;
      *(float *)(param_2 + 0x68) = fVar5 + _UNK_00e20a28;
    }
  }
LAB_024d82f4:
  if ((bRam0000000004f9ca31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca31 = 1;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    fVar6 = *(float *)(param_2 + 100);
    fVar5 = _UNK_00e2098c;
    if (fVar6 <= _UNK_00e2098c) {
      fVar5 = fVar6;
    }
    fVar7 = _UNK_00e20864;
    if (_UNK_00e20864 <= fVar6) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x74) * fVar8;
    UnityEngine_Transform__set_localScale_43d1be0
              (fVar5 * (fVar7 * 0.5 + 1.0),fVar5 * (1.0 - fVar7),
               fVar5 * (fVar7 * _UNK_00e207cc + 1.0),*(long *)(param_2 + 0x28),0);
    if (*(long *)(param_2 + 0x28) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(float *)(param_2 + 0x90) + 0.0,
                 *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x94),
                 *(float *)(param_2 + 0x98) + 0.0,*(long *)(param_2 + 0x28),0);
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_2 + 0x28) != 0) {
        UnityEngine_Transform__set_localRotation_43d156c
                  (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                   *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),
                   *(long *)(param_2 + 0x28),0);
        uVar3 = *(undefined8 *)(param_2 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0x48);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar4 != 0) {
          fVar6 = *(float *)(param_2 + 0x60);
          fVar5 = _UNK_00e20754;
          if (_UNK_00e20754 <= fVar6) {
            fVar5 = fVar6;
          }
          fVar7 = *(float *)(param_2 + 0x6c) / (fVar5 * 3.0);
          fVar5 = 1.0;
          if (fVar7 <= 1.0) {
            fVar5 = fVar7;
          }
          fStack_28 = 1.0;
          if (0.0 <= fVar7) {
            fStack_28 = fVar5 * _UNK_00e1fe50 + 1.0;
          }
          fStack_28 = fVar6 * fVar8 * fStack_28;
          fStack_24 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * fStack_28;
          fStack_28 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x10) * fStack_28;
          if ((bRam0000000004fa8b3e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b3e = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8bf0 == (code *)0x0) {
                pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
              }
              (*pcRam0000000004fa8bf0)(lVar4,auStack_2c);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

