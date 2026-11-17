/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Push
void Dino_BusSand_App_UI_HomeToonFace__Push (Dino_BusSand_App_UI_HomeToonFace_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Push
   void Dino_BusSand_App_UI_HomeToonFace__Push (Dino_BusSand_App_UI_HomeToonFace_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Push_22f1cc8(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  lVar9 = *(long *)(param_2 + 0x20);
  if (lVar9 != 0) {
    if ((*(uint *)(lVar9 + 0x18) == 0) || (*(uint *)(lVar9 + 0x18) < 3)) {
LAB_023f1f78:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar15 = *(float *)(lVar9 + 0x28);
    fVar31 = *(float *)(lVar9 + 0x20);
    fVar25 = 1.0;
    if (fVar15 <= 1.0) {
      fVar25 = fVar15;
    }
    fVar26 = 1.0;
    if (fVar31 <= 1.0) {
      fVar26 = fVar31;
    }
    fVar16 = *(float *)(param_2 + 0x60);
    fVar28 = 0.0;
    if (0.0 <= fVar15) {
      fVar28 = fVar25 * 0.25;
    }
    fVar25 = 1.0;
    if (0.0 <= fVar31) {
      fVar25 = 1.0 - fVar26;
    }
    if (((fVar16 < 0.0) && (*(char *)(param_2 + 0xb8) != '\0')) &&
       (*(float *)(param_2 + 0x5c) <= *(float *)(param_2 + 0x58))) {
      plVar6 = *(long **)(param_2 + 0x18);
      if (plVar6 == (long *)0x0) goto LAB_023f1f74;
      dVar22 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(param_2,dVar22 < _UNK_00e6a720);
      fVar16 = *(float *)(param_2 + 0x60);
    }
    fVar15 = _UNK_00e20174;
    fVar31 = fVar31 + fVar25 * fVar28;
    if (0.0 <= fVar16) {
      fVar16 = fVar16 + param_1;
      bVar5 = _UNK_00e20174 <= fVar16;
      *(float *)(param_2 + 0x60) = fVar16;
      if (bVar5) {
        fVar15 = 1.0;
        if (_UNK_00e20754 <= fVar16) {
          fVar15 = (fVar16 + _UNK_00e207d8) / _UNK_00e2090c + 1.0;
        }
      }
      else {
        fVar15 = fVar16 / fVar15;
      }
      if (_UNK_00e1ffe8 <= fVar16) {
        fVar15 = 0.0;
        *(undefined4 *)(param_2 + 0x60) = 0xbf800000;
        if (*(char *)(param_2 + 0x69) != '\0') {
          *(undefined1 *)(param_2 + 0x69) = 0;
          *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x58) + _UNK_00e20a94;
        }
      }
      fVar25 = 1.0;
      if (fVar15 <= 1.0) {
        fVar25 = fVar15;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar15) {
        fVar26 = fVar25;
      }
      fVar15 = fVar26 * fVar26 * (3.0 - (fVar26 + fVar26));
      fVar25 = 1.0;
      if (fVar15 <= 1.0) {
        fVar25 = fVar15;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar15) {
        fVar26 = fVar25;
      }
      fVar31 = fVar31 + (1.0 - fVar31) * fVar26;
    }
    fVar25 = fVar31;
    fVar15 = fVar31;
    if (0.0 <= *(float *)(param_2 + 100)) {
      param_1 = *(float *)(param_2 + 100) + param_1;
      fVar26 = (_UNK_00e208e8 - param_1) / _UNK_00e201f4;
      fVar15 = param_1 / _UNK_00e205f8;
      if (fVar26 <= param_1 / _UNK_00e205f8) {
        fVar15 = fVar26;
      }
      fVar26 = 1.0;
      if (fVar15 <= 1.0) {
        fVar26 = fVar15;
      }
      fVar28 = 0.0;
      if (0.0 <= fVar15) {
        fVar28 = fVar26;
      }
      if (_UNK_00e208e8 <= param_1) {
        param_1 = -1.0;
        fVar28 = 0.0;
      }
      *(float *)(param_2 + 100) = param_1;
      fVar15 = 0.0;
      if (0.0 <= fVar28) {
        fVar15 = fVar28;
      }
      fVar15 = fVar31 + (1.0 - fVar31) * fVar15;
      if (*(char *)(param_2 + 0x68) != '\0') {
        fVar25 = fVar15;
        fVar15 = fVar31;
      }
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_023f1f78;
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 != 0) {
        fVar31 = _UNK_00e20094;
        if (_UNK_00e20094 <= *(float *)(lVar9 + 0x30)) {
          fVar31 = *(float *)(lVar9 + 0x30);
        }
        fVar26 = _UNK_00e2098c;
        if (_UNK_00e2098c <= *(float *)(lVar9 + 0x2c)) {
          fVar26 = *(float *)(lVar9 + 0x2c);
        }
        fVar31 = fVar31 * ((fVar26 + -1.0) * 0.5 + 1.0);
        fVar28 = *(float *)(param_2 + 0x6c);
        fVar16 = *(float *)(param_2 + 0x70);
        fVar26 = *(float *)(lVar9 + 0x24);
        if ((bRam0000000004f9c47f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb71b0);
          bRam0000000004f9c47f = 1;
        }
        uVar8 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar7);
        fVar3 = _UNK_00e2090c;
        if ((uVar8 & 1) != 0) {
          fVar29 = *(float *)(lVar7 + 0xdc);
          fVar32 = 1.0;
          if (fVar28 <= 1.0) {
            fVar32 = fVar28;
          }
          fVar23 = 1.0;
          if (fVar16 <= 1.0) {
            fVar23 = fVar16;
          }
          fVar30 = -1.0;
          if (-1.0 <= fVar16) {
            fVar30 = fVar23;
          }
          fVar16 = _UNK_00e20658;
          if (-1.0 <= fVar28) {
            fVar16 = fVar32 * _UNK_00e2090c;
          }
          fVar28 = _UNK_00e20838;
          if (fVar31 <= _UNK_00e20838) {
            fVar28 = fVar31;
          }
          fVar32 = _UNK_00e20094;
          if (_UNK_00e20094 <= fVar31) {
            fVar32 = fVar28;
          }
          fVar31 = 0.25;
          if (fVar29 <= 0.25) {
            fVar31 = fVar29;
          }
          fVar28 = 0.75;
          if (-0.25 <= fVar29) {
            fVar28 = fVar31 + 1.0;
          }
          if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar31 = _UNK_00e207cc;
          fVar29 = fVar25;
          if (0.0 <= fVar25) {
            fVar29 = (float)NEON_fminnm(fVar25,0x3f800000);
            fVar31 = _UNK_00e1ff28;
          }
          fVar29 = fVar29 * fVar31;
          fVar31 = _UNK_00e207cc;
          fVar23 = fVar15;
          if (0.0 <= fVar15) {
            fVar23 = (float)NEON_fminnm(fVar15,0x3f800000);
            fVar31 = _UNK_00e1ff28;
          }
          fVar23 = fVar23 * fVar31;
          fVar31 = fVar29;
          if (fVar23 <= fVar29) {
            fVar31 = fVar23;
          }
          if (*(long *)(lVar7 + 0x48) == 0) {
LAB_023f30a8:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar17 = *(float *)(&UNK_00e6a0a0 + (ulong)(0.0 < fVar30) * 4);
          fVar32 = fVar32 * fVar28;
          UnityEngine_Transform__set_localPosition_43cfda8
                    (*(float *)(lVar7 + 0x60) + 0.0,*(float *)(lVar7 + 100) - fVar31,
                     *(float *)(lVar7 + 0x68) + 0.0,*(long *)(lVar7 + 0x48),0);
          fVar4 = _UNK_00e20af8;
          fVar2 = _UNK_00e207cc;
          fVar1 = _UNK_00e20210;
          fVar28 = _UNK_00e201f8;
          fVar33 = 1.0;
          uVar8 = 0;
          fVar18 = 0.0;
          if (0.0 <= fVar30) {
            fVar18 = fVar30;
          }
          fVar27 = 1.0;
          if (fVar26 <= 1.0) {
            fVar27 = fVar26;
          }
          fVar19 = -1.0;
          if (-1.0 <= fVar26) {
            fVar19 = fVar27;
          }
          do {
            uVar13 = (uint)uVar8;
            fVar26 = fVar25;
            if (uVar13 != 0) {
              fVar26 = fVar15;
            }
            lVar9 = *(long *)(lVar7 + 0x58);
            fVar27 = fVar29;
            if (uVar13 != 0) {
              fVar27 = fVar23;
            }
            if (lVar9 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_023f30a4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar10 = *(long *)(lVar7 + 0x78);
            if (lVar10 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_023f30a4;
            uVar14 = uVar8 & 0xffffffff;
            lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_023f30a8;
            lVar10 = lVar10 + uVar14 * 0xc;
            fVar20 = fVar26 / fVar2;
            fVar24 = fVar33;
            if (fVar20 <= 1.0) {
              fVar24 = fVar20;
            }
            fVar21 = 0.0;
            if (0.0 <= fVar20) {
              fVar21 = fVar24;
            }
            if (fVar21 <= fVar18 * 0.5) {
              fVar21 = fVar18 * 0.5;
            }
            UnityEngine_Transform__set_localPosition_43cfda8
                      (*(float *)(lVar10 + 0x20) + fVar16 + 0.0,
                       *(float *)(lVar10 + 0x24) + fVar30 * fVar17 + 0.0,
                       *(float *)(lVar10 + 0x28) + 0.0 + fVar21 * fVar1,lVar9,0);
            lVar9 = *(long *)(lVar7 + 0x58);
            if (lVar9 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_023f30a4;
            lVar10 = *(long *)(lVar7 + 0x80);
            if (lVar10 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_023f30a4;
            lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_023f30a8;
            lVar10 = lVar10 + uVar14 * 0xc;
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar32 * *(float *)(lVar10 + 0x20),fVar32 * *(float *)(lVar10 + 0x24),
                       fVar32 * *(float *)(lVar10 + 0x28),lVar9,0);
            uVar14 = 0;
            fVar24 = fVar33;
            if (fVar26 <= 1.0) {
              fVar24 = fVar26;
            }
            fVar20 = fVar33;
            if (0.0 <= fVar26) {
              fVar20 = fVar24 * fVar28 + 1.0;
            }
            do {
              fVar26 = fVar19 * fVar20 * fVar3;
              if (((int)uVar14 != 0) && (fVar26 = 0.0, (int)uVar14 == 2)) {
                fVar26 = fVar19 * fVar20 * fVar4;
              }
              lVar9 = *(long *)(lVar7 + 0x50);
              if (lVar9 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar9 + 0x10) <= uVar13) ||
                 (uVar11 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4), (uVar11 & 0xffffffff) <= uVar14
                 )) goto LAB_023f30a4;
              lVar10 = *(long *)(lVar7 + 0x70);
              if (lVar10 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar10 + 0x10) <= uVar13) ||
                 (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                 (uVar12 & 0xffffffff) <= uVar14)) goto LAB_023f30a4;
              lVar9 = *(long *)(lVar9 + (uVar14 + uVar8 * uVar11) * 8 + 0x20);
              if (lVar9 == 0) goto LAB_023f30a8;
              lVar10 = lVar10 + (uVar14 + uVar8 * uVar12) * 0xc;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (*(float *)(lVar10 + 0x20) + 0.0,
                         (fVar26 - (fVar27 - fVar31)) + *(float *)(lVar10 + 0x24),
                         *(float *)(lVar10 + 0x28) + 0.0,lVar9,0);
              uVar14 = uVar14 + 1;
            } while (uVar14 != 3);
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

