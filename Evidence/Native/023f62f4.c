/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$CapSnap
void Dino_BusSand_App_UI_HomeToonRig__CapSnap (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$CapSnap
   void Dino_BusSand_App_UI_HomeToonRig__CapSnap (Dino_BusSand_App_UI_HomeToonRig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__CapSnap_22f62f4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c486 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c486 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 200) = 0;
  uVar5 = _UNK_00e6a150;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = uVar5;
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xa8),0), lVar4 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
  if ((bRam0000000004f9c480 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c480 = 1;
  }
  uVar3 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(param_1);
  fVar7 = _UNK_00e20a74;
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004
            (0,(*(float *)(param_1 + 0xe4) + 90.0) * _UNK_00e20a74,0,0);
  if (lVar4 != 0) {
    UnityEngine_Transform__set_localRotation_43d156c(lVar4,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      fVar6 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0x10c);
      fVar8 = _UNK_00e207cc;
      if (fVar6 <= _UNK_00e207cc) {
        fVar8 = fVar6;
      }
      fVar10 = *(float *)(param_1 + 0x108) * _UNK_00e20488;
      fVar9 = _UNK_00e203b4;
      if (_UNK_00e207d4 <= fVar6) {
        fVar9 = 1.0 - fVar8;
      }
      fVar9 = fVar10 + fVar9;
      fVar8 = _UNK_00e20390;
      if (_UNK_00e20390 <= fVar9) {
        fVar8 = fVar9;
      }
      UnityEngine_Transform__set_localScale_43d1be0
                (1.0 / SQRT(fVar8),fVar9,1.0 / SQRT(fVar8),*(long *)(param_1 + 0x20),0);
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if ((uVar1 != 1) && (uVar1 != 0)) {
          fVar8 = *(float *)(lVar4 + 0x20);
          if (*(float *)(lVar4 + 0x20) <= *(float *)(lVar4 + 0x24)) {
            fVar8 = *(float *)(lVar4 + 0x24);
          }
          if ((2 < uVar1) && (uVar1 != 3)) {
            fVar6 = *(float *)(lVar4 + 0x28);
            if (*(float *)(lVar4 + 0x28) <= *(float *)(lVar4 + 0x2c)) {
              fVar6 = *(float *)(lVar4 + 0x2c);
            }
            fVar9 = (float)atan2f(fVar8 - fVar6,_UNK_00e203b8);
            puVar2 = PTR_DAT_04cb71b0;
            lVar4 = *(long *)(param_1 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (lVar4 != 0) {
              uVar5 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
              fVar8 = (float)((ulong)uVar5 >> 0x20) +
                      ((float)((ulong)*(undefined8 *)(param_1 + 0xfc) >> 0x20) +
                      (fVar8 + fVar6) * 0.5 + *(float *)(param_1 + 0xd4)) / 1.45;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (CONCAT44(fVar8,(float)uVar5 +
                                        ((float)*(undefined8 *)(param_1 + 0xfc) + 0.0) / 1.45),fVar8
                         ,*(float *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1) +
                          (*(float *)(param_1 + 0x104) + 0.0) / _UNK_00e20270,lVar4,0);
              fVar8 = 0.0;
              fVar6 = 0.0;
              lVar4 = *(long *)(param_1 + 0x20);
              fVar7 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                       (fVar9 * _UNK_00e202e4 * fVar7,0,0,0);
              if (lVar4 != 0) {
                fVar9 = *(float *)(param_1 + 0xec);
                fVar13 = *(float *)(param_1 + 0xf0);
                fVar12 = *(float *)(param_1 + 0xf4);
                fVar11 = *(float *)(param_1 + 0xf8);
                UnityEngine_Transform__set_localRotation_43d156c
                          ((fVar7 * fVar11 + fVar10 * fVar9 + fVar8 * fVar12) - fVar6 * fVar13,
                           (fVar6 * fVar9 + fVar8 * fVar11 + fVar10 * fVar13) - fVar7 * fVar12,
                           (fVar7 * fVar13 + fVar6 * fVar11 + fVar10 * fVar12) - fVar8 * fVar9,
                           ((fVar10 * fVar11 - fVar7 * fVar9) - fVar8 * fVar13) - fVar6 * fVar12,
                           lVar4,0);
                puVar2 = PTR_DAT_04ca9ae8;
                if ((bRam0000000004f9c489 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cb71b0);
                  FUN_02132f7c(PTR_DAT_04ca9ae8);
                  bRam0000000004f9c489 = 1;
                }
                uVar5 = *(undefined8 *)(param_1 + 0xa8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
                if ((uVar3 & 1) != 0) {
                  return;
                }
                if ((*(long *)(param_1 + 0xa8) != 0) &&
                   (lVar4 = UnityEngine_Component__get_gameObject_43bcde8
                                      (*(long *)(param_1 + 0xa8),0), lVar4 != 0)) {
                  uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
                  if ((uVar3 & 1) == 0) {
                    return;
                  }
                  fVar7 = *(float *)(param_1 + 0xbc);
                  fVar8 = 0.0;
                  if (0.0 <= fVar7) {
                    fVar7 = fVar7 + fVar7;
                    fVar8 = 1.0;
                    if (fVar7 <= 1.0) {
                      fVar8 = fVar7;
                    }
                    fVar6 = 0.0;
                    if (0.0 <= fVar7) {
                      fVar6 = fVar8;
                    }
                    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    fVar8 = 1.0 - fVar6 * fVar6 * (fVar6 * _UNK_00e200a8 + _UNK_00e203f0);
                  }
                  if (*(long *)(param_1 + 0xa8) != 0) {
                    UnityEngine_Transform__set_localPosition_43cfda8
                              (*(float *)(param_1 + 0xb0) + 0.0,
                               fVar8 * _UNK_00e20170 + *(float *)(param_1 + 0xb4),
                               *(float *)(param_1 + 0xb8) + 0.0,*(long *)(param_1 + 0xa8),0);
                    lVar4 = *(long *)(param_1 + 0xa8);
                    UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                              (fVar8 * -6.0 * _UNK_00e20a74,0,fVar8 * -3.0 * _UNK_00e20a74,0);
                    if (lVar4 != 0) {
                      UnityEngine_Transform__set_localRotation_43d156c(lVar4,0);
                      lVar4 = *(long *)(param_1 + 0xa8);
                      if (lVar4 != 0) {
                        if ((bRam0000000004fa8b3e & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04cf7a00,0);
                          bRam0000000004fa8b3e = 1;
                        }
                        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        lVar4 = *(long *)(lVar4 + 0x10);
                        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                        }
                        if (pcRam0000000004fa8bf0 == (code *)0x0) {
                          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                        }
                        (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
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

