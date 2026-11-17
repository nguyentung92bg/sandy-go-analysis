/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$.ctor
void Dino_BusSand_App_UI_HomeToonFace___ctor (Dino_BusSand_App_UI_HomeToonFace_o* __this, Dino_BusSand_App_UI_HomeToonRig_o* rig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$.ctor
   void Dino_BusSand_App_UI_HomeToonFace___ctor (Dino_BusSand_App_UI_HomeToonFace_o* __this,
   Dino_BusSand_App_UI_HomeToonRig_o* rig, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace___ctor_22f1ac0(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = PTR_DAT_04cb71a8;
  puVar3 = PTR_DAT_04cae330;
  if ((bRam0000000004f9c46e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04cb7760);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c46e = 1;
  }
  puVar5 = PTR_DAT_04cb7760;
  puVar2 = PTR_DAT_04caadd0;
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Random___ctor_4840cc4(uVar7,0xa33,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_HomeToonFace__Pack_22f1a18(&stack0xffffffffffffffa0);
  puVar17 = (undefined8 *)(param_1 + 0x20);
  *puVar17 = uVar7;
  thunk_FUN_02134474(puVar17,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,5);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_02134474();
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,5);
  puVar18 = (undefined8 *)(param_1 + 0x30);
  *puVar18 = uVar7;
  thunk_FUN_02134474(puVar18,uVar7);
  puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
  uStack_78 = puVar11[1];
  uStack_80 = *puVar11;
  uVar7 = Dino_BusSand_App_UI_HomeToonFace__Pack_22f1a18(&uStack_80);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_02134474();
  uVar7 = FUN_02133068(*(undefined8 *)puVar5,6);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_02134474();
  uVar7 = FUN_02133068(*(undefined8 *)puVar2,6);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  thunk_FUN_02134474();
  uVar7 = _UNK_00e69c18;
  *(undefined4 *)(param_1 + 100) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f4ccccd;
  *(undefined8 *)(param_1 + 0x5c) = uVar7;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),param_2);
  System_Array__Copy_4854300(*puVar17,*puVar18,5,0);
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 != 0) {
    if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_023f1f78:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar20 = *(float *)(lVar12 + 0x28);
    fVar33 = *(float *)(lVar12 + 0x20);
    fVar27 = 1.0;
    if (fVar20 <= 1.0) {
      fVar27 = fVar20;
    }
    fVar28 = 1.0;
    if (fVar33 <= 1.0) {
      fVar28 = fVar33;
    }
    fVar21 = *(float *)(param_1 + 0x60);
    fVar30 = 0.0;
    if (0.0 <= fVar20) {
      fVar30 = fVar27 * 0.25;
    }
    fVar27 = 1.0;
    if (0.0 <= fVar33) {
      fVar27 = 1.0 - fVar28;
    }
    if (((fVar21 < 0.0) && (*(char *)(param_1 + 0xb8) != '\0')) &&
       (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58))) {
      plVar8 = *(long **)(param_1 + 0x18);
      if (plVar8 == (long *)0x0) goto LAB_023f1f74;
      dVar25 = (double)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(param_1,dVar25 < _UNK_00e6a720);
      fVar21 = *(float *)(param_1 + 0x60);
    }
    fVar20 = _UNK_00e20174;
    fVar33 = fVar33 + fVar27 * fVar30;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + 0.0;
      bVar6 = _UNK_00e20174 <= fVar21;
      *(float *)(param_1 + 0x60) = fVar21;
      if (bVar6) {
        fVar20 = 1.0;
        if (_UNK_00e20754 <= fVar21) {
          fVar20 = (fVar21 + _UNK_00e207d8) / _UNK_00e2090c + 1.0;
        }
      }
      else {
        fVar20 = fVar21 / fVar20;
      }
      if (_UNK_00e1ffe8 <= fVar21) {
        fVar20 = 0.0;
        *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
        if (*(char *)(param_1 + 0x69) != '\0') {
          *(undefined1 *)(param_1 + 0x69) = 0;
          *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x58) + _UNK_00e20a94;
        }
      }
      fVar27 = 1.0;
      if (fVar20 <= 1.0) {
        fVar27 = fVar20;
      }
      fVar28 = 0.0;
      if (0.0 <= fVar20) {
        fVar28 = fVar27;
      }
      fVar20 = fVar28 * fVar28 * (3.0 - (fVar28 + fVar28));
      fVar27 = 1.0;
      if (fVar20 <= 1.0) {
        fVar27 = fVar20;
      }
      fVar28 = 0.0;
      if (0.0 <= fVar20) {
        fVar28 = fVar27;
      }
      fVar33 = fVar33 + (1.0 - fVar33) * fVar28;
    }
    fVar27 = fVar33;
    fVar20 = fVar33;
    if (0.0 <= *(float *)(param_1 + 100)) {
      fVar20 = *(float *)(param_1 + 100) + 0.0;
      fVar30 = (_UNK_00e208e8 - fVar20) / _UNK_00e201f4;
      fVar28 = fVar20 / _UNK_00e205f8;
      if (fVar30 <= fVar20 / _UNK_00e205f8) {
        fVar28 = fVar30;
      }
      fVar30 = 1.0;
      if (fVar28 <= 1.0) {
        fVar30 = fVar28;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar28) {
        fVar21 = fVar30;
      }
      if (_UNK_00e208e8 <= fVar20) {
        fVar20 = -1.0;
        fVar21 = 0.0;
      }
      *(float *)(param_1 + 100) = fVar20;
      fVar20 = 0.0;
      if (0.0 <= fVar21) {
        fVar20 = fVar21;
      }
      fVar20 = fVar33 + (1.0 - fVar33) * fVar20;
      if (*(char *)(param_1 + 0x68) != '\0') {
        fVar27 = fVar20;
        fVar20 = fVar33;
      }
    }
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_023f1f78;
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        fVar33 = _UNK_00e20094;
        if (_UNK_00e20094 <= *(float *)(lVar12 + 0x30)) {
          fVar33 = *(float *)(lVar12 + 0x30);
        }
        fVar28 = _UNK_00e2098c;
        if (_UNK_00e2098c <= *(float *)(lVar12 + 0x2c)) {
          fVar28 = *(float *)(lVar12 + 0x2c);
        }
        fVar33 = fVar33 * ((fVar28 + -1.0) * 0.5 + 1.0);
        fVar30 = *(float *)(param_1 + 0x6c);
        fVar21 = *(float *)(param_1 + 0x70);
        fVar28 = *(float *)(lVar12 + 0x24);
        if ((bRam0000000004f9c47f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb71b0);
          bRam0000000004f9c47f = 1;
        }
        uVar10 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar9);
        fVar1 = _UNK_00e2090c;
        if ((uVar10 & 1) != 0) {
          fVar32 = *(float *)(lVar9 + 0xdc);
          fVar34 = 1.0;
          if (fVar30 <= 1.0) {
            fVar34 = fVar30;
          }
          fVar31 = 1.0;
          if (fVar21 <= 1.0) {
            fVar31 = fVar21;
          }
          fVar29 = -1.0;
          if (-1.0 <= fVar21) {
            fVar29 = fVar31;
          }
          fVar21 = _UNK_00e20658;
          if (-1.0 <= fVar30) {
            fVar21 = fVar34 * _UNK_00e2090c;
          }
          fVar30 = _UNK_00e20838;
          if (fVar33 <= _UNK_00e20838) {
            fVar30 = fVar33;
          }
          fVar34 = _UNK_00e20094;
          if (_UNK_00e20094 <= fVar33) {
            fVar34 = fVar30;
          }
          fVar33 = 0.25;
          if (fVar32 <= 0.25) {
            fVar33 = fVar32;
          }
          fVar30 = 0.75;
          if (-0.25 <= fVar32) {
            fVar30 = fVar33 + 1.0;
          }
          uStack_78._4_4_ = fVar21;
          uStack_80._4_4_ = fVar28;
          if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar33 = _UNK_00e207cc;
          fVar28 = fVar27;
          if (0.0 <= fVar27) {
            fVar28 = (float)NEON_fminnm(fVar27,0x3f800000);
            fVar33 = _UNK_00e1ff28;
          }
          fVar28 = fVar28 * fVar33;
          fVar33 = _UNK_00e207cc;
          fVar21 = fVar20;
          if (0.0 <= fVar20) {
            fVar21 = (float)NEON_fminnm(fVar20,0x3f800000);
            fVar33 = _UNK_00e1ff28;
          }
          fVar21 = fVar21 * fVar33;
          fVar33 = fVar28;
          if (fVar21 <= fVar28) {
            fVar33 = fVar21;
          }
          if (*(long *)(lVar9 + 0x48) == 0) {
LAB_023f30a8:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar34 = fVar34 * fVar30;
          uStack_78._0_4_ = fVar29 * *(float *)(&UNK_00e6a0a0 + (ulong)(0.0 < fVar29) * 4);
          UnityEngine_Transform__set_localPosition_43cfda8
                    (*(float *)(lVar9 + 0x60) + 0.0,*(float *)(lVar9 + 100) - fVar33,
                     *(float *)(lVar9 + 0x68) + 0.0,*(long *)(lVar9 + 0x48),0);
          fVar31 = _UNK_00e20af8;
          fVar32 = _UNK_00e20210;
          fVar30 = _UNK_00e201f8;
          fVar35 = 1.0;
          uVar10 = 0;
          fVar22 = 0.0;
          if (0.0 <= fVar29) {
            fVar22 = fVar29;
          }
          fVar29 = 1.0;
          if (uStack_80._4_4_ <= 1.0) {
            fVar29 = uStack_80._4_4_;
          }
          bVar6 = -1.0 <= uStack_80._4_4_;
          uStack_80._4_4_ = fVar22 * 0.5;
          fVar22 = -1.0;
          if (bVar6) {
            fVar22 = fVar29;
          }
          uStack_80._0_4_ = _UNK_00e207cc;
          do {
            uVar16 = (uint)uVar10;
            fVar29 = fVar27;
            if (uVar16 != 0) {
              fVar29 = fVar20;
            }
            lVar12 = *(long *)(lVar9 + 0x58);
            fVar36 = fVar28;
            if (uVar16 != 0) {
              fVar36 = fVar21;
            }
            if (lVar12 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar16) {
LAB_023f30a4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar13 = *(long *)(lVar9 + 0x78);
            if (lVar13 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_023f30a4;
            uVar19 = uVar10 & 0xffffffff;
            lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_023f30a8;
            lVar13 = lVar13 + uVar19 * 0xc;
            fVar23 = fVar29 / (float)uStack_80;
            fVar26 = fVar35;
            if (fVar23 <= 1.0) {
              fVar26 = fVar23;
            }
            fVar24 = 0.0;
            if (0.0 <= fVar23) {
              fVar24 = fVar26;
            }
            if (fVar24 <= uStack_80._4_4_) {
              fVar24 = uStack_80._4_4_;
            }
            UnityEngine_Transform__set_localPosition_43cfda8
                      (*(float *)(lVar13 + 0x20) + uStack_78._4_4_ + 0.0,
                       *(float *)(lVar13 + 0x24) + (float)uStack_78 + 0.0,
                       *(float *)(lVar13 + 0x28) + 0.0 + fVar24 * fVar32,lVar12,0);
            lVar12 = *(long *)(lVar9 + 0x58);
            if (lVar12 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_023f30a4;
            lVar13 = *(long *)(lVar9 + 0x80);
            if (lVar13 == 0) goto LAB_023f30a8;
            if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_023f30a4;
            lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_023f30a8;
            lVar13 = lVar13 + uVar19 * 0xc;
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar34 * *(float *)(lVar13 + 0x20),fVar34 * *(float *)(lVar13 + 0x24),
                       fVar34 * *(float *)(lVar13 + 0x28),lVar12,0);
            uVar19 = 0;
            fVar26 = fVar35;
            if (fVar29 <= 1.0) {
              fVar26 = fVar29;
            }
            fVar23 = fVar35;
            if (0.0 <= fVar29) {
              fVar23 = fVar26 * fVar30 + 1.0;
            }
            do {
              fVar29 = fVar22 * fVar23 * fVar1;
              if (((int)uVar19 != 0) && (fVar29 = 0.0, (int)uVar19 == 2)) {
                fVar29 = fVar22 * fVar23 * fVar31;
              }
              lVar12 = *(long *)(lVar9 + 0x50);
              if (lVar12 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar12 + 0x10) <= uVar16) ||
                 (uVar14 = *(ulong *)(*(uint **)(lVar12 + 0x10) + 4),
                 (uVar14 & 0xffffffff) <= uVar19)) goto LAB_023f30a4;
              lVar13 = *(long *)(lVar9 + 0x70);
              if (lVar13 == 0) goto LAB_023f30a8;
              if ((**(uint **)(lVar13 + 0x10) <= uVar16) ||
                 (uVar15 = *(ulong *)(*(uint **)(lVar13 + 0x10) + 4),
                 (uVar15 & 0xffffffff) <= uVar19)) goto LAB_023f30a4;
              lVar12 = *(long *)(lVar12 + (uVar19 + uVar10 * uVar14) * 8 + 0x20);
              if (lVar12 == 0) goto LAB_023f30a8;
              lVar13 = lVar13 + (uVar19 + uVar10 * uVar15) * 0xc;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (*(float *)(lVar13 + 0x20) + 0.0,
                         (fVar29 - (fVar36 - fVar33)) + *(float *)(lVar13 + 0x24),
                         *(float *)(lVar13 + 0x28) + 0.0,lVar12,0);
              uVar19 = uVar19 + 1;
            } while (uVar19 != 3);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 != 2);
        }
        return;
      }
    }
  }
LAB_023f1f74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

