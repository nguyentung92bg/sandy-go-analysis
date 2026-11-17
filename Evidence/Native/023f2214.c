/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Step
void Dino_BusSand_App_UI_HomeToonFace__Step (Dino_BusSand_App_UI_HomeToonFace_o* __this, float dt, float now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Step
   void Dino_BusSand_App_UI_HomeToonFace__Step (Dino_BusSand_App_UI_HomeToonFace_o* __this, float
   dt, float now, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Step_22f2214(float param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if ((bRam0000000004f9c472 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    bRam0000000004f9c472 = 1;
  }
  iVar9 = *(int *)(param_3 + 0x50);
  uVar16 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_3 + 0x58) = param_2;
  if (0 < iVar9) {
    *(float *)(param_3 + 0x54) = *(float *)(param_3 + 0x54) + param_1;
    while (0 < iVar9) {
      lVar12 = *(long *)(param_3 + 0x48);
      if (lVar12 == 0) goto LAB_023f24c8;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_023f24cc;
      if (*(float *)(param_3 + 0x54) < *(float *)(lVar12 + 0x20)) {
        lVar12 = *(long *)(param_3 + 0x40);
        if (lVar12 == 0) goto LAB_023f24c8;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_023f24cc;
        uVar16 = *(undefined8 *)(lVar12 + 0x20);
        break;
      }
      *(float *)(param_3 + 0x54) = *(float *)(param_3 + 0x54) - *(float *)(lVar12 + 0x20);
      if (iVar9 == 1) {
        iVar9 = 1;
      }
      else {
        lVar12 = 0;
        lVar17 = 0x28;
        do {
          lVar10 = *(long *)(param_3 + 0x40);
          if (lVar10 == 0) goto LAB_023f24c8;
          if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar12 + 1U) goto LAB_023f24cc;
          *(undefined8 *)(lVar10 + lVar12 * 8 + 0x20) = *(undefined8 *)(lVar10 + lVar17);
          thunk_FUN_02134474((undefined8 *)(lVar10 + lVar17) + -1);
          lVar10 = *(long *)(param_3 + 0x48);
          if (lVar10 == 0) goto LAB_023f24c8;
          if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar12 + 1U) goto LAB_023f24cc;
          lVar10 = lVar10 + lVar12 * 4;
          iVar9 = *(int *)(param_3 + 0x50);
          lVar11 = lVar12 + 2;
          lVar12 = lVar12 + 1;
          lVar17 = lVar17 + 8;
          *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar10 + 0x24);
        } while (lVar11 < iVar9);
      }
      iVar9 = iVar9 + -1;
      *(int *)(param_3 + 0x50) = iVar9;
      if (0 < iVar9) {
        lVar12 = *(long *)(param_3 + 0x40);
        if (lVar12 == 0) goto LAB_023f24c8;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_023f24cc;
        lVar12 = *(long *)(lVar12 + 0x20);
        if (lVar12 == 0) goto LAB_023f24c8;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_023f24cc;
        if (*(float *)(lVar12 + 0x20) < 0.0) {
          lVar12 = *(long *)(param_3 + 0x10);
          if (lVar12 == 0) goto LAB_023f24c8;
          *(float *)(lVar12 + 0xe0) = *(float *)(lVar12 + 0xe0) + 7.0;
        }
      }
    }
  }
  puVar5 = PTR_DAT_04cb71a8;
  System_Array__Copy_4854300(uVar16,*(undefined8 *)(param_3 + 0x30),5,0);
  fVar29 = _UNK_00e2038c;
  lVar12 = 8;
  do {
    uVar8 = lVar12 - 8;
    lVar17 = *(long *)(param_3 + 0x20);
    fVar20 = 520.0;
    if (lVar12 != 8) {
      fVar20 = 260.0;
    }
    if (((lVar17 == 0) || (lVar10 = *(long *)(param_3 + 0x28), lVar10 == 0)) ||
       (lVar11 = *(long *)(param_3 + 0x30), lVar11 == 0)) {
LAB_023f24c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar8) {
LAB_023f24cc:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar37 = *(float *)(lVar11 + lVar12 * 4);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if ((*(uint *)(lVar17 + 0x18) <= uVar8) || (*(uint *)(lVar10 + 0x18) <= uVar8))
    goto LAB_023f24cc;
    fVar20 = (*(float *)(lVar10 + lVar12 * 4) +
             fVar20 * param_1 * (fVar37 - *(float *)(lVar17 + lVar12 * 4))) /
             (param_1 * param_1 * fVar20 + (SQRT(fVar20) + SQRT(fVar20)) * fVar29 * param_1 + 1.0);
    *(float *)(lVar10 + lVar12 * 4) = fVar20;
    *(float *)(lVar17 + lVar12 * 4) = *(float *)(lVar17 + lVar12 * 4) + fVar20 * param_1;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0xd);
  Dino_BusSand_App_UI_HomeToonFace__Gaze_22f251c(param_1,param_3);
  Dino_BusSand_App_UI_HomeToonFace__Settle_22f28a8(param_3);
  lVar12 = *(long *)(param_3 + 0x20);
  if (lVar12 != 0) {
    if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_023f1f78:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar20 = *(float *)(lVar12 + 0x28);
    fVar37 = *(float *)(lVar12 + 0x20);
    fVar29 = 1.0;
    if (fVar20 <= 1.0) {
      fVar29 = fVar20;
    }
    fVar30 = 1.0;
    if (fVar37 <= 1.0) {
      fVar30 = fVar37;
    }
    fVar19 = *(float *)(param_3 + 0x60);
    fVar32 = 0.0;
    if (0.0 <= fVar20) {
      fVar32 = fVar29 * 0.25;
    }
    fVar29 = 1.0;
    if (0.0 <= fVar37) {
      fVar29 = 1.0 - fVar30;
    }
    if (((fVar19 < 0.0) && (*(char *)(param_3 + 0xb8) != '\0')) &&
       (*(float *)(param_3 + 0x5c) <= *(float *)(param_3 + 0x58))) {
      plVar7 = *(long **)(param_3 + 0x18);
      if (plVar7 == (long *)0x0) goto LAB_023f1f74;
      dVar26 = (double)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(param_3,dVar26 < _UNK_00e6a720);
      fVar19 = *(float *)(param_3 + 0x60);
    }
    fVar20 = _UNK_00e20174;
    fVar37 = fVar37 + fVar29 * fVar32;
    if (0.0 <= fVar19) {
      fVar19 = fVar19 + param_1;
      bVar6 = _UNK_00e20174 <= fVar19;
      *(float *)(param_3 + 0x60) = fVar19;
      if (bVar6) {
        fVar20 = 1.0;
        if (_UNK_00e20754 <= fVar19) {
          fVar20 = (fVar19 + _UNK_00e207d8) / _UNK_00e2090c + 1.0;
        }
      }
      else {
        fVar20 = fVar19 / fVar20;
      }
      if (_UNK_00e1ffe8 <= fVar19) {
        fVar20 = 0.0;
        *(undefined4 *)(param_3 + 0x60) = 0xbf800000;
        if (*(char *)(param_3 + 0x69) != '\0') {
          *(undefined1 *)(param_3 + 0x69) = 0;
          *(float *)(param_3 + 0x5c) = *(float *)(param_3 + 0x58) + _UNK_00e20a94;
        }
      }
      fVar29 = 1.0;
      if (fVar20 <= 1.0) {
        fVar29 = fVar20;
      }
      fVar30 = 0.0;
      if (0.0 <= fVar20) {
        fVar30 = fVar29;
      }
      fVar20 = fVar30 * fVar30 * (3.0 - (fVar30 + fVar30));
      fVar29 = 1.0;
      if (fVar20 <= 1.0) {
        fVar29 = fVar20;
      }
      fVar30 = 0.0;
      if (0.0 <= fVar20) {
        fVar30 = fVar29;
      }
      fVar37 = fVar37 + (1.0 - fVar37) * fVar30;
    }
    fVar29 = fVar37;
    fVar20 = fVar37;
    if (0.0 <= *(float *)(param_3 + 100)) {
      param_1 = *(float *)(param_3 + 100) + param_1;
      fVar30 = (_UNK_00e208e8 - param_1) / _UNK_00e201f4;
      fVar20 = param_1 / _UNK_00e205f8;
      if (fVar30 <= param_1 / _UNK_00e205f8) {
        fVar20 = fVar30;
      }
      fVar30 = 1.0;
      if (fVar20 <= 1.0) {
        fVar30 = fVar20;
      }
      fVar32 = 0.0;
      if (0.0 <= fVar20) {
        fVar32 = fVar30;
      }
      if (_UNK_00e208e8 <= param_1) {
        param_1 = -1.0;
        fVar32 = 0.0;
      }
      *(float *)(param_3 + 100) = param_1;
      fVar20 = 0.0;
      if (0.0 <= fVar32) {
        fVar20 = fVar32;
      }
      fVar20 = fVar37 + (1.0 - fVar37) * fVar20;
      if (*(char *)(param_3 + 0x68) != '\0') {
        fVar29 = fVar20;
        fVar20 = fVar37;
      }
    }
    lVar12 = *(long *)(param_3 + 0x20);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_023f1f78;
      lVar17 = *(long *)(param_3 + 0x10);
      if (lVar17 != 0) {
        fVar37 = _UNK_00e20094;
        if (_UNK_00e20094 <= *(float *)(lVar12 + 0x30)) {
          fVar37 = *(float *)(lVar12 + 0x30);
        }
        fVar30 = _UNK_00e2098c;
        if (_UNK_00e2098c <= *(float *)(lVar12 + 0x2c)) {
          fVar30 = *(float *)(lVar12 + 0x2c);
        }
        fVar37 = fVar37 * ((fVar30 + -1.0) * 0.5 + 1.0);
        fVar32 = *(float *)(param_3 + 0x6c);
        fVar19 = *(float *)(param_3 + 0x70);
        fVar30 = *(float *)(lVar12 + 0x24);
        if ((bRam0000000004f9c47f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb71b0);
          bRam0000000004f9c47f = 1;
        }
        uVar8 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar17);
        fVar3 = _UNK_00e2090c;
        if ((uVar8 & 1) != 0) {
          fVar33 = *(float *)(lVar17 + 0xdc);
          fVar35 = 1.0;
          if (fVar32 <= 1.0) {
            fVar35 = fVar32;
          }
          fVar27 = 1.0;
          if (fVar19 <= 1.0) {
            fVar27 = fVar19;
          }
          fVar34 = -1.0;
          if (-1.0 <= fVar19) {
            fVar34 = fVar27;
          }
          fVar19 = _UNK_00e20658;
          if (-1.0 <= fVar32) {
            fVar19 = fVar35 * _UNK_00e2090c;
          }
          fVar32 = _UNK_00e20838;
          if (fVar37 <= _UNK_00e20838) {
            fVar32 = fVar37;
          }
          fVar35 = _UNK_00e20094;
          if (_UNK_00e20094 <= fVar37) {
            fVar35 = fVar32;
          }
          fVar37 = 0.25;
          if (fVar33 <= 0.25) {
            fVar37 = fVar33;
          }
          fVar32 = 0.75;
          if (-0.25 <= fVar33) {
            fVar32 = fVar37 + 1.0;
          }
          if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar37 = _UNK_00e207cc;
          fVar33 = fVar29;
          if (0.0 <= fVar29) {
            fVar33 = (float)NEON_fminnm(fVar29,0x3f800000);
            fVar37 = _UNK_00e1ff28;
          }
          fVar33 = fVar33 * fVar37;
          fVar37 = _UNK_00e207cc;
          fVar27 = fVar20;
          if (0.0 <= fVar20) {
            fVar27 = (float)NEON_fminnm(fVar20,0x3f800000);
            fVar37 = _UNK_00e1ff28;
          }
          fVar27 = fVar27 * fVar37;
          fVar37 = fVar33;
          if (fVar27 <= fVar33) {
            fVar37 = fVar27;
          }
          if (*(long *)(lVar17 + 0x48) == 0) {
LAB_023f30a8:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar21 = *(float *)(&UNK_00e6a0a0 + (ulong)(0.0 < fVar34) * 4);
          fVar35 = fVar35 * fVar32;
          UnityEngine_Transform__set_localPosition_43cfda8
                    (*(float *)(lVar17 + 0x60) + 0.0,*(float *)(lVar17 + 100) - fVar37,
                     *(float *)(lVar17 + 0x68) + 0.0,*(long *)(lVar17 + 0x48),0);
          fVar4 = _UNK_00e20af8;
          fVar2 = _UNK_00e207cc;
          fVar1 = _UNK_00e20210;
          fVar32 = _UNK_00e201f8;
          fVar36 = 1.0;
          uVar8 = 0;
          fVar22 = 0.0;
          if (0.0 <= fVar34) {
            fVar22 = fVar34;
          }
          fVar31 = 1.0;
          if (fVar30 <= 1.0) {
            fVar31 = fVar30;
          }
          fVar23 = -1.0;
          if (-1.0 <= fVar30) {
            fVar23 = fVar31;
          }
          do {
            uVar15 = (uint)uVar8;
            fVar30 = fVar29;
            if (uVar15 != 0) {
              fVar30 = fVar20;
            }
            lVar12 = *(long *)(lVar17 + 0x58);
            fVar31 = fVar33;
            if (uVar15 != 0) {
              fVar31 = fVar27;
            }
            if (lVar12 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) {
LAB_023f30a4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar10 = *(long *)(lVar17 + 0x78);
            if (lVar10 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_023f30a4;
            uVar18 = uVar8 & 0xffffffff;
            lVar12 = *(long *)(lVar12 + uVar18 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_023f30a8;
            lVar10 = lVar10 + uVar18 * 0xc;
            fVar24 = fVar30 / fVar2;
            fVar28 = fVar36;
            if (fVar24 <= 1.0) {
              fVar28 = fVar24;
            }
            fVar25 = 0.0;
            if (0.0 <= fVar24) {
              fVar25 = fVar28;
            }
            if (fVar25 <= fVar22 * 0.5) {
              fVar25 = fVar22 * 0.5;
            }
            UnityEngine_Transform__set_localPosition_43cfda8
                      (*(float *)(lVar10 + 0x20) + fVar19 + 0.0,
                       *(float *)(lVar10 + 0x24) + fVar34 * fVar21 + 0.0,
                       *(float *)(lVar10 + 0x28) + 0.0 + fVar25 * fVar1,lVar12,0);
            lVar12 = *(long *)(lVar17 + 0x58);
            if (lVar12 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_023f30a4;
            lVar10 = *(long *)(lVar17 + 0x80);
            if (lVar10 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_023f30a4;
            lVar12 = *(long *)(lVar12 + uVar18 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_023f30a8;
            lVar10 = lVar10 + uVar18 * 0xc;
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar35 * *(float *)(lVar10 + 0x20),fVar35 * *(float *)(lVar10 + 0x24),
                       fVar35 * *(float *)(lVar10 + 0x28),lVar12,0);
            uVar18 = 0;
            fVar28 = fVar36;
            if (fVar30 <= 1.0) {
              fVar28 = fVar30;
            }
            fVar24 = fVar36;
            if (0.0 <= fVar30) {
              fVar24 = fVar28 * fVar32 + 1.0;
            }
            do {
              fVar30 = fVar23 * fVar24 * fVar3;
              if (((int)uVar18 != 0) && (fVar30 = 0.0, (int)uVar18 == 2)) {
                fVar30 = fVar23 * fVar24 * fVar4;
              }
              lVar12 = *(long *)(lVar17 + 0x50);
              if (lVar12 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar12 + 0x10) <= uVar15) ||
                 (uVar13 = *(ulong *)(*(uint **)(lVar12 + 0x10) + 4),
                 (uVar13 & 0xffffffff) <= uVar18)) goto LAB_023f30a4;
              lVar10 = *(long *)(lVar17 + 0x70);
              if (lVar10 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar10 + 0x10) <= uVar15) ||
                 (uVar14 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                 (uVar14 & 0xffffffff) <= uVar18)) goto LAB_023f30a4;
              lVar12 = *(long *)(lVar12 + (uVar18 + uVar8 * uVar13) * 8 + 0x20);
              if (lVar12 == 0) goto LAB_023f30a8;
              lVar10 = lVar10 + (uVar18 + uVar8 * uVar14) * 0xc;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (*(float *)(lVar10 + 0x20) + 0.0,
                         (fVar30 - (fVar31 - fVar37)) + *(float *)(lVar10 + 0x24),
                         *(float *)(lVar10 + 0x28) + 0.0,lVar12,0);
              uVar18 = uVar18 + 1;
            } while (uVar18 != 3);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 != 2);
        }
        return;
      }
    }
  }
LAB_023f1f74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

