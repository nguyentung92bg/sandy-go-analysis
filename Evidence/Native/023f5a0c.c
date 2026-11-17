/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Step
void Dino_BusSand_App_UI_HomeToonRig__Step (Dino_BusSand_App_UI_HomeToonRig_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Step
   void Dino_BusSand_App_UI_HomeToonRig__Step (Dino_BusSand_App_UI_HomeToonRig_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__Step_22f5a0c(float param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar4 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c();
  if ((uVar4 & 1) == 0) {
    return;
  }
  fVar7 = *(float *)(param_2 + 0xd0) +
          (*(float *)(param_2 + 0xcc) * -160.0 + *(float *)(param_2 + 0xd0) * -9.0) * param_1;
  *(float *)(param_2 + 0xcc) = *(float *)(param_2 + 0xcc) + fVar7 * param_1;
  *(float *)(param_2 + 0xd0) = fVar7;
  if ((0.0 < *(float *)(param_2 + 0xd4)) || (0.0 < *(float *)(param_2 + 0xd8))) {
    fVar10 = *(float *)(param_2 + 0xd8) + param_1 * -30.0;
    fVar9 = *(float *)(param_2 + 0xd4) + fVar10 * param_1;
    *(float *)(param_2 + 0xd4) = fVar9;
    *(float *)(param_2 + 0xd8) = fVar10;
    if (fVar9 <= 0.0) {
      *(undefined4 *)(param_2 + 0xd4) = 0;
      *(undefined4 *)(param_2 + 0xd8) = 0;
      *(float *)(param_2 + 0xd0) = fVar7 + _UNK_00e20a28;
    }
  }
  lVar5 = *(long *)(param_2 + 0x88);
  fVar9 = *(float *)(param_2 + 0xe0) +
          (*(float *)(param_2 + 0xdc) * -220.0 + *(float *)(param_2 + 0xe0) * -13.0) * param_1;
  fVar7 = *(float *)(param_2 + 0xe8) +
          ((*(float *)(param_2 + 0x110) - *(float *)(param_2 + 0xe4)) * 60.0 +
          *(float *)(param_2 + 0xe8) * -11.0) * param_1;
  *(float *)(param_2 + 0xdc) = *(float *)(param_2 + 0xdc) + fVar9 * param_1;
  *(float *)(param_2 + 0xe0) = fVar9;
  *(float *)(param_2 + 0xe4) = *(float *)(param_2 + 0xe4) + fVar7 * param_1;
  *(float *)(param_2 + 0xe8) = fVar7;
  if (lVar5 == 0) {
LAB_023f5bd8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = 0;
  uVar2 = *(uint *)(lVar5 + 0x18);
  lVar5 = lVar5 + 0x20;
  do {
    if (uVar2 == uVar4) goto LAB_023f5bd4;
    lVar6 = *(long *)(param_2 + 0x90);
    lVar1 = lVar6 + uVar4 * 4;
    if (*(float *)(lVar5 + uVar4 * 4) <= 0.0) {
      if (lVar6 == 0) goto LAB_023f5bd8;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_023f5bd4;
      if (0.0 < *(float *)(lVar1 + 0x20)) goto LAB_023f5b68;
    }
    else {
      if (lVar6 == 0) goto LAB_023f5bd8;
LAB_023f5b68:
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_023f5bd4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      fVar7 = *(float *)(lVar1 + 0x20) - param_1 * 40.0;
      *(float *)(lVar1 + 0x20) = fVar7;
      fVar7 = *(float *)(lVar5 + uVar4 * 4) + fVar7 * param_1;
      *(float *)(lVar5 + uVar4 * 4) = fVar7;
      if (fVar7 <= 0.0) {
        *(undefined4 *)(lVar5 + uVar4 * 4) = 0;
        *(undefined4 *)(lVar1 + 0x20) = 0;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  Dino_BusSand_App_UI_HomeToonRig__StepCap_22f5bdc(param_1,param_2);
  if ((bRam0000000004f9c480 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c480 = 1;
  }
  uVar4 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(param_2);
  fVar7 = _UNK_00e20a74;
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x18);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004
            (0,(*(float *)(param_2 + 0xe4) + 90.0) * _UNK_00e20a74,0,0);
  if (lVar5 != 0) {
    UnityEngine_Transform__set_localRotation_43d156c(lVar5,0);
    if (*(long *)(param_2 + 0x20) != 0) {
      fVar10 = *(float *)(param_2 + 0xcc) - *(float *)(param_2 + 0x10c);
      fVar9 = _UNK_00e207cc;
      if (fVar10 <= _UNK_00e207cc) {
        fVar9 = fVar10;
      }
      fVar12 = *(float *)(param_2 + 0x108) * _UNK_00e20488;
      fVar8 = _UNK_00e203b4;
      if (_UNK_00e207d4 <= fVar10) {
        fVar8 = 1.0 - fVar9;
      }
      fVar8 = fVar12 + fVar8;
      fVar9 = _UNK_00e20390;
      if (_UNK_00e20390 <= fVar8) {
        fVar9 = fVar8;
      }
      UnityEngine_Transform__set_localScale_43d1be0
                (1.0 / SQRT(fVar9),fVar8,1.0 / SQRT(fVar9),*(long *)(param_2 + 0x20),0);
      lVar5 = *(long *)(param_2 + 0x88);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if ((uVar2 != 1) && (uVar2 != 0)) {
          fVar9 = *(float *)(lVar5 + 0x20);
          if (*(float *)(lVar5 + 0x20) <= *(float *)(lVar5 + 0x24)) {
            fVar9 = *(float *)(lVar5 + 0x24);
          }
          if ((2 < uVar2) && (uVar2 != 3)) {
            fVar10 = *(float *)(lVar5 + 0x28);
            if (*(float *)(lVar5 + 0x28) <= *(float *)(lVar5 + 0x2c)) {
              fVar10 = *(float *)(lVar5 + 0x2c);
            }
            fVar8 = (float)atan2f(fVar9 - fVar10,_UNK_00e203b8);
            puVar3 = PTR_DAT_04cb71b0;
            lVar5 = *(long *)(param_2 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (lVar5 != 0) {
              uVar11 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
              fVar9 = (float)((ulong)uVar11 >> 0x20) +
                      ((float)((ulong)*(undefined8 *)(param_2 + 0xfc) >> 0x20) +
                      (fVar9 + fVar10) * 0.5 + *(float *)(param_2 + 0xd4)) / 1.45;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (CONCAT44(fVar9,(float)uVar11 +
                                        ((float)*(undefined8 *)(param_2 + 0xfc) + 0.0) / 1.45),fVar9
                         ,*(float *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1) +
                          (*(float *)(param_2 + 0x104) + 0.0) / _UNK_00e20270,lVar5,0);
              fVar9 = 0.0;
              fVar10 = 0.0;
              lVar5 = *(long *)(param_2 + 0x20);
              fVar7 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                       (fVar8 * _UNK_00e202e4 * fVar7,0,0,0);
              if (lVar5 != 0) {
                fVar8 = *(float *)(param_2 + 0xec);
                fVar15 = *(float *)(param_2 + 0xf0);
                fVar14 = *(float *)(param_2 + 0xf4);
                fVar13 = *(float *)(param_2 + 0xf8);
                UnityEngine_Transform__set_localRotation_43d156c
                          ((fVar7 * fVar13 + fVar12 * fVar8 + fVar9 * fVar14) - fVar10 * fVar15,
                           (fVar10 * fVar8 + fVar9 * fVar13 + fVar12 * fVar15) - fVar7 * fVar14,
                           (fVar7 * fVar15 + fVar10 * fVar13 + fVar12 * fVar14) - fVar9 * fVar8,
                           ((fVar12 * fVar13 - fVar7 * fVar8) - fVar9 * fVar15) - fVar10 * fVar14,
                           lVar5,0);
                puVar3 = PTR_DAT_04ca9ae8;
                if ((bRam0000000004f9c489 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cb71b0);
                  FUN_02132f7c(PTR_DAT_04ca9ae8);
                  bRam0000000004f9c489 = 1;
                }
                uVar11 = *(undefined8 *)(param_2 + 0xa8);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
                if ((uVar4 & 1) != 0) {
                  return;
                }
                if ((*(long *)(param_2 + 0xa8) != 0) &&
                   (lVar5 = UnityEngine_Component__get_gameObject_43bcde8
                                      (*(long *)(param_2 + 0xa8),0), lVar5 != 0)) {
                  uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
                  if ((uVar4 & 1) == 0) {
                    return;
                  }
                  fVar7 = *(float *)(param_2 + 0xbc);
                  fVar9 = 0.0;
                  if (0.0 <= fVar7) {
                    fVar7 = fVar7 + fVar7;
                    fVar9 = 1.0;
                    if (fVar7 <= 1.0) {
                      fVar9 = fVar7;
                    }
                    fVar10 = 0.0;
                    if (0.0 <= fVar7) {
                      fVar10 = fVar9;
                    }
                    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    fVar9 = 1.0 - fVar10 * fVar10 * (fVar10 * _UNK_00e200a8 + _UNK_00e203f0);
                  }
                  if (*(long *)(param_2 + 0xa8) != 0) {
                    UnityEngine_Transform__set_localPosition_43cfda8
                              (*(float *)(param_2 + 0xb0) + 0.0,
                               fVar9 * _UNK_00e20170 + *(float *)(param_2 + 0xb4),
                               *(float *)(param_2 + 0xb8) + 0.0,*(long *)(param_2 + 0xa8),0);
                    lVar5 = *(long *)(param_2 + 0xa8);
                    UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                              (fVar9 * -6.0 * _UNK_00e20a74,0,fVar9 * -3.0 * _UNK_00e20a74,0);
                    if (lVar5 != 0) {
                      UnityEngine_Transform__set_localRotation_43d156c(lVar5,0);
                      lVar5 = *(long *)(param_2 + 0xa8);
                      if (lVar5 != 0) {
                        if ((bRam0000000004fa8b3e & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04cf7a00,0);
                          bRam0000000004fa8b3e = 1;
                        }
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        lVar5 = *(long *)(lVar5 + 0x10);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                        }
                        if (pcRam0000000004fa8bf0 == (code *)0x0) {
                          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                        }
                        (*pcRam0000000004fa8bf0)(lVar5,&stack0xffffffffffffffd4);
                        return;
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
            goto LAB_023f5054;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_023f5054:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

