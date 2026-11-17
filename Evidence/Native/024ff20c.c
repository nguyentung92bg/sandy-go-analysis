/* IL2CPP: Dino.BusSand.View.VehicleView$$Tick
void Dino_BusSand_View_VehicleView__Tick (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$Tick
   void Dino_BusSand_View_VehicleView__Tick (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Tick_23ff20c
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if ((bRam0000000004f9cafd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbde68);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9cafd = 1;
  }
  if (*(int *)(param_4 + 0x2c) == 3) {
    return;
  }
  if (*(int *)(param_4 + 0x2c) == 5) {
    return;
  }
  if (*(char *)(param_4 + 0xe1) != '\0') {
    Dino_BusSand_View_VehicleView__TickCover_23fb618(param_1,param_4);
    Dino_BusSand_View_VehicleView__TickArrowAlpha_23fb44c(param_1,param_4);
    Dino_BusSand_View_VehicleView__TickFlash_23fde88(param_1,param_4);
  }
  fVar18 = _UNK_00e200b4;
  fVar20 = 0.0;
  fVar23 = 1.0;
  if (0.0 <= *(float *)(param_4 + 0x29c)) {
    fVar22 = *(float *)(param_4 + 0x2a0) + param_1;
    *(float *)(param_4 + 0x2a0) = fVar22;
    fVar21 = _UNK_00e2098c;
    fVar19 = _UNK_00e2063c;
    fVar23 = _UNK_00e20094;
    fVar22 = (fVar22 - *(float *)(param_4 + 0x29c)) / fVar18;
    if (fVar22 < 0.0) {
      lVar15 = *(long *)(param_4 + 0x40);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      if (lVar15 != 0) {
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0(*puVar11,puVar11[1],puVar11[2],lVar15,0);
        lVar15 = *(long *)(param_4 + 0x78);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        if (lVar15 == 0) goto LAB_02500094;
        goto LAB_024ff3b0;
      }
      goto LAB_02500094;
    }
    if (1.0 <= fVar22) {
      *(undefined4 *)(param_4 + 0x29c) = 0xbf800000;
      *(float *)(param_4 + 0x188) = *(float *)(param_4 + 0x188) + fVar19;
      param_3 = fVar18;
      Dino_BusSand_View_VehicleView__RestoreShadow_2400098(param_4);
      puVar4 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar15 = *(long *)puVar4;
      }
      fVar23 = 1.0;
      if (**(long **)(lVar15 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__PopIn_2382e78(**(long **)(lVar15 + 0xb8),0);
      }
    }
    else {
      if (_UNK_00e2098c <= fVar22) {
        fVar20 = fVar22 + _UNK_00e1fefc;
        fVar18 = (float)expf((fVar20 * -8.0) / _UNK_00e20094);
        fVar23 = (float)func_0x049b5320((fVar20 * _UNK_00e208fc) / fVar23);
        fVar23 = fVar23 * fVar18 * _UNK_00e207cc;
        fVar18 = 1.0;
      }
      else {
        fVar18 = (float)func_0x049b5300(1.0 - fVar22 / _UNK_00e2098c,0x40400000);
        fVar23 = (1.0 - fVar18) * _UNK_00e20994;
        fVar18 = _UNK_00e207cc;
      }
      fVar22 = fVar22 / fVar21;
      fVar23 = fVar23 + fVar18;
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar22) {
        fVar20 = fVar18;
      }
      param_3 = *(float *)(param_4 + 0xa8) / *(float *)(param_4 + 0xbc);
      fVar20 = (1.0 - fVar20 * fVar20) * _UNK_00e20094 * param_3;
      Dino_BusSand_View_VehicleView__RestoreShadow_2400098(param_4);
    }
  }
  if (*(int *)(param_4 + 0x2c) == 2) {
    Dino_BusSand_View_VehicleView__TickEscape_240039c(param_1,param_4);
  }
  else if (*(int *)(param_4 + 0x2c) == 1) {
    Dino_BusSand_View_VehicleView__TickBump_24001e8(param_1,param_4);
  }
  Dino_BusSand_View_VehicleView__TickFreed_23fe22c(param_1,param_4);
  fVar18 = *(float *)(param_4 + 0x328);
  if ((0.0 <= fVar18) && (*(int *)(param_4 + 0x2c) == 0)) {
    fVar19 = *(float *)(param_4 + 0x32c);
    if (fVar19 <= 0.0) {
      param_3 = param_1 / _UNK_00e2094c;
      fVar18 = param_3 + fVar18;
      *(float *)(param_4 + 0x328) = fVar18;
    }
    else {
      fVar19 = fVar19 - param_1;
      *(float *)(param_4 + 0x32c) = fVar19;
    }
    if (0.0 < fVar19) {
      if (*(char *)(param_4 + 0x334) == '\0') {
        fVar18 = 0.0;
        goto LAB_024ff62c;
      }
      lVar15 = *(long *)(param_4 + 0x38);
      fVar21 = *(float *)(param_4 + 0x324);
      uVar16 = *(undefined8 *)(param_4 + 0x31c);
      fVar18 = (float)FUN_02501f7c(0);
      bVar6 = true;
      uVar9 = CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar19 * 50.0,(float)uVar16 + fVar18 * 50.0)
      ;
      fVar21 = fVar21 + param_3 * 50.0;
      fVar18 = 0.0;
    }
    else {
      fVar19 = 1.0;
      if (fVar18 <= 1.0) {
        fVar19 = fVar18;
      }
      fVar21 = 1.0;
      if (0.0 <= fVar18) {
        fVar21 = 1.0 - fVar19;
      }
      fVar18 = (float)func_0x049b5300(fVar21,0x40400000);
      fVar18 = 1.0 - fVar18;
LAB_024ff62c:
      lVar15 = *(long *)(param_4 + 0x38);
      bVar6 = false;
      fVar19 = 1.0;
      if (fVar18 <= 1.0) {
        fVar19 = fVar18;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar18) {
        fVar21 = fVar19;
      }
      fVar19 = (float)*(undefined8 *)(param_4 + 0x31c);
      fVar22 = (float)((ulong)*(undefined8 *)(param_4 + 0x31c) >> 0x20);
      uVar9 = CONCAT44(fVar22 + ((float)((ulong)*(undefined8 *)(param_4 + 0x1e8) >> 0x20) - fVar22)
                                * fVar21,
                       fVar19 + ((float)*(undefined8 *)(param_4 + 0x1e8) - fVar19) * fVar21);
      fVar21 = *(float *)(param_4 + 0x324) +
               fVar21 * (*(float *)(param_4 + 0x1f0) - *(float *)(param_4 + 0x324));
    }
    if (lVar15 == 0) goto LAB_02500094;
    UnityEngine_Transform__set_position_43d0f1c(uVar9,uVar9 >> 0x20,fVar21,lVar15,0);
    bVar7 = *(char *)(param_4 + 0x334) == '\0';
    if (bVar7) {
      bVar6 = true;
    }
    fVar19 = 1.0;
    if (!bVar7) {
      fVar19 = 0.0;
    }
    if (!bVar6) {
      fVar18 = fVar18 / _UNK_00e20094;
      fVar19 = 1.0;
      if (fVar18 <= 1.0) {
        fVar19 = fVar18;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar18) {
        fVar21 = fVar19;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar19 = fVar18 * 0.5 + 0.5;
    }
    *(float *)(param_4 + 0x330) = fVar19;
    if (1.0 <= *(float *)(param_4 + 0x328)) {
      *(undefined4 *)(param_4 + 0x328) = 0xbf800000;
      *(undefined4 *)(param_4 + 0x330) = 0x3f800000;
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_02500094;
      UnityEngine_Transform__set_position_43d0f1c
                (*(undefined4 *)(param_4 + 0x1e8),*(undefined4 *)(param_4 + 0x1ec),
                 *(undefined4 *)(param_4 + 0x1f0),*(long *)(param_4 + 0x38),0);
      *(float *)(param_4 + 0x188) = *(float *)(param_4 + 0x188) + _UNK_00e204b4;
    }
  }
  if ((0.0 <= *(float *)(param_4 + 0x234)) && (*(int *)(param_4 + 0x2c) == 0)) {
    fVar19 = *(float *)(param_4 + 0x234) + param_1;
    fVar18 = fVar19 / _UNK_00e208d0;
    *(float *)(param_4 + 0x234) = fVar19;
    if (1.0 <= fVar18) {
      lVar15 = *(long *)(param_4 + 0x38);
      *(undefined4 *)(param_4 + 0x234) = 0xbf800000;
      if (lVar15 == 0) goto LAB_02500094;
      fVar19 = *(float *)(param_4 + 0x1f0);
      uVar9 = *(ulong *)(param_4 + 0x1e8);
    }
    else {
      lVar15 = *(long *)(param_4 + 0x38);
      if (lVar15 == 0) goto LAB_02500094;
      fVar22 = *(float *)(param_4 + 0x238);
      fVar19 = *(float *)(param_4 + 0x1f0);
      fVar24 = *(float *)(param_4 + 0x230);
      fVar21 = (float)func_0x049b5320(fVar18 * _UNK_00e208fc);
      fVar21 = fVar21 * (1.0 - fVar18) * fVar22;
      fVar19 = fVar19 + fVar24 * fVar21;
      uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x1e8) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_4 + 0x228) >> 0x20) * fVar21,
                       (float)*(undefined8 *)(param_4 + 0x1e8) +
                       (float)*(undefined8 *)(param_4 + 0x228) * fVar21);
    }
    UnityEngine_Transform__set_position_43d0f1c(uVar9,uVar9 >> 0x20,fVar19,lVar15,0);
  }
  pfVar1 = (float *)(param_4 + 0x188);
  Dino_BusSand_Util__Spring_238dae0(0,_UNK_00e2009c,_UNK_00e206e4,param_1,param_4 + 0x184,pfVar1,0);
  Dino_BusSand_View_VehicleView__BodyDynamics_2400c24(param_1,param_4);
  fVar21 = *(float *)(param_4 + 0x1e4);
  fVar19 = (float)expf(param_1 * -9.0);
  fVar19 = 1.0 - fVar19;
  fVar18 = 1.0;
  if (fVar19 <= 1.0) {
    fVar18 = fVar19;
  }
  fVar22 = 0.0;
  if (0.0 <= fVar19) {
    fVar22 = fVar18;
  }
  fVar19 = *(float *)(param_4 + 0x27c) + param_1 * -4.0;
  fVar18 = 0.0;
  if (0.0 <= fVar19) {
    fVar18 = fVar19;
  }
  fVar21 = fVar21 + fVar22 * (1.0 - fVar21);
  *(float *)(param_4 + 0x27c) = fVar18;
  *(float *)(param_4 + 0x1e4) = fVar21;
  if ((0.0 < *(float *)(param_4 + 0x1e0)) || (*(float *)(param_4 + 0x370) != 0.0)) {
    fVar22 = *(float *)(param_4 + 0xac) / *(float *)(param_4 + 0xbc);
    fVar24 = *(float *)(param_4 + 0x370) + fVar22 * -40.0 * param_1;
    *(float *)(param_4 + 0x370) = fVar24;
    fVar19 = *(float *)(param_4 + 0x1e0) + fVar24 * param_1;
    *(float *)(param_4 + 0x1e0) = fVar19;
    if (fVar19 <= 0.0) {
      *(undefined4 *)(param_4 + 0x1e0) = 0;
      if (fVar24 < fVar22 * _UNK_00e20640) {
        *pfVar1 = *pfVar1 + 4.5;
      }
      *(undefined4 *)(param_4 + 0x370) = 0;
    }
  }
  fVar19 = _UNK_00e2094c;
  if (*(long *)(param_4 + 0x40) != 0) {
    fVar22 = fVar18 * _UNK_00e20174 + *(float *)(param_4 + 0x184);
    fVar18 = _UNK_00e2094c;
    if (fVar22 <= _UNK_00e2094c) {
      fVar18 = fVar22;
    }
    fVar24 = _UNK_00e1fe50;
    if (_UNK_00e1fe50 <= fVar22) {
      fVar24 = fVar18;
    }
    fVar18 = *(float *)(param_4 + 0x330) * fVar23 * fVar21 * *(float *)(param_4 + 0xb0);
    UnityEngine_Transform__set_localScale_43d1be0
              (fVar18 * (fVar24 * _UNK_00e208e8 + 1.0),fVar18 * (1.0 - fVar24),
               fVar18 * (fVar24 * _UNK_00e20590 + 1.0),*(long *)(param_4 + 0x40),0);
    fVar18 = *(float *)(param_4 + 0x270);
    if (*(int *)(param_4 + 0x2c) != 2) {
      fVar21 = (float)expf(param_1 * -10.0);
      fVar21 = 1.0 - fVar21;
      fVar23 = 1.0;
      if (fVar21 <= 1.0) {
        fVar23 = fVar21;
      }
      fVar22 = 0.0;
      if (0.0 <= fVar21) {
        fVar22 = fVar23;
      }
      fVar18 = fVar18 + fVar22 * (0.0 - fVar18);
      *(float *)(param_4 + 0x270) = fVar18;
    }
    lVar15 = *(long *)(param_4 + 0x40);
    UnityEngine_Quaternion__Internal_FromEulerRad_43af004
              (*(float *)(param_4 + 0x194) * _UNK_00e20a74,fVar18 * _UNK_00e20a74,
               *(float *)(param_4 + 0x18c) * _UNK_00e20a74,0);
    if (lVar15 != 0) {
      UnityEngine_Transform__set_localRotation_43d156c(lVar15,0);
      if (*(long *)(param_4 + 0x40) != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8
                  (0,fVar20 + *(float *)(param_4 + 0x1e0),0,*(long *)(param_4 + 0x40),0);
        puVar4 = PTR_DAT_04ca9ae8;
        uVar16 = *(undefined8 *)(param_4 + 0x80);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
        if ((uVar9 & 1) != 0) {
          if ((*(long *)(param_4 + 0x80) == 0) ||
             (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x80),0),
             lVar15 == 0)) goto LAB_02500094;
          uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(param_4 + 0x80) == 0) goto LAB_02500094;
            lVar15 = TMPro_TextMeshPro__get_transform_430ef6c(*(long *)(param_4 + 0x80),0);
            puVar5 = PTR_DAT_04cbc460;
            if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbc460);
            }
            if (lVar15 == 0) goto LAB_02500094;
            lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
            UnityEngine_Transform__set_rotation_43d13f8
                      (*(undefined4 *)(lVar12 + 0x70),*(undefined4 *)(lVar12 + 0x74),
                       *(undefined4 *)(lVar12 + 0x78),*(undefined4 *)(lVar12 + 0x7c),lVar15,0);
          }
        }
        if (*(int *)(param_4 + 0x2c) != 4) {
          return;
        }
        if ((0.0 <= *(float *)(param_4 + 0x14c)) &&
           (fVar18 = *(float *)(param_4 + 0x14c) - param_1, *(float *)(param_4 + 0x14c) = fVar18,
           fVar18 < 0.0)) {
          *(undefined4 *)(param_4 + 0x148) = 0;
        }
        fVar23 = *(float *)(param_4 + 0x148);
        Dino_BusSand_Util__Spring_238dae0
                  (fVar23,*(undefined4 *)(&UNK_00e6a7e8 + (ulong)(-1.0 < fVar23) * 4),
                   *(undefined4 *)(&UNK_00e6a748 + (ulong)(-1.0 < fVar23) * 4),param_1,
                   (undefined8 *)(param_4 + 0x140),param_4 + 0x144,0);
        fVar18 = *(float *)(param_4 + 0x140);
        if (0.0 < fVar18) {
          fVar18 = 0.0;
          *(undefined8 *)(param_4 + 0x140) = 0;
        }
        puVar5 = PTR_DAT_04cad568;
        fVar20 = _UNK_00e20a28;
        if (((-1.0 < fVar23) && (*(char *)(param_4 + 0x150) == '\0')) && (-4.0 < fVar18)) {
          *(undefined8 *)(param_4 + 0x140) = 0;
          lVar15 = *(long *)puVar5;
          *(undefined1 *)(param_4 + 0x150) = 1;
          iVar3 = *(int *)(lVar15 + 0xe4);
          *(float *)(param_4 + 0x188) = *(float *)(param_4 + 0x188) + fVar20;
          if (iVar3 == 0) {
            thunk_FUN_0218fdac();
          }
          lVar15 = FUN_022c78f0(0);
          if (lVar15 != 0) {
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar17 == 0) {
              uVar16 = 0;
            }
            else {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar17 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
              }
              if ((*(long *)(param_4 + 0x38) == 0) ||
                 (UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0),
                 lVar17 == 0)) goto LAB_02500094;
              uVar16 = (**(code **)(lVar17 + 0x18))
                                 (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
            }
            Dino_BusSand_GameAudio__LidThunk_23833a0(uVar16,lVar15,0);
          }
                    /* try { // try from 024ffc04 to 025ffcb3 has its CatchHandler @ 024ffc04
                       catch() { ... } // from try @ 024ffc04 with catch @ 024ffc04
                       catch() { ... } // from try @ 024ffcc0 with catch @ 024ffc04
                       catch() { ... } // from try @ 024ffcf4 with catch @ 024ffc04
                       catch() { ... } // from try @ 024ffd54 with catch @ 024ffc04 */
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Play_2388ed8(1,0);
        }
        fVar23 = *(float *)(param_4 + 0x278);
        fVar20 = *(float *)(param_4 + 0x274);
        fVar18 = -(param_1 * _UNK_00e205ec);
        if (0.0 <= fVar20 - fVar23) {
          fVar18 = param_1 * _UNK_00e205ec;
        }
        fVar18 = fVar23 + fVar18;
        if (ABS(fVar20 - fVar23) <= param_1 * _UNK_00e205ec) {
          fVar18 = fVar20;
        }
        *(float *)(param_4 + 0x278) = fVar18;
        fVar23 = _UNK_00e2043c;
        if (*(long *)(param_4 + 0x60) != 0) {
          fVar21 = fVar18 * *(float *)(param_4 + 0x284) *
                   (*(float *)(param_4 + 0x27c) * _UNK_00e201f4 + 1.0);
          fVar22 = *(float *)(param_4 + 0x288) *
                   (*(float *)(param_4 + 0x280) + fVar18 * (1.0 - *(float *)(param_4 + 0x280)));
                    /* try { // try from 024ffcb4 to 025ffcbf has its CatchHandler @ 024ffcc4 */
          fVar20 = _UNK_00e20948;
          if (_UNK_00e20948 <= fVar21) {
            fVar20 = fVar21;
          }
                    /* try { // try from 024ffcc0 to 025ffcdb has its CatchHandler @ 024ffc04 */
          fVar21 = _UNK_00e20948;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ffcb4 with catch @ 024ffcc4
                        */
          if (_UNK_00e20948 <= fVar22) {
            fVar21 = fVar22;
          }
          fVar21 = (*(float *)(param_4 + 0x27c) * _UNK_00e2043c + 1.0) * fVar21;
          UnityEngine_Transform__set_localScale_43d1be0
                    (fVar21,fVar20,fVar21,*(long *)(param_4 + 0x60),0);
          if (*(long *)(param_4 + 0x60) != 0) {
                    /* try { // try from 024ffcdc to 025ffcf3 has its CatchHandler @ 024ffd4c */
            fVar20 = *(float *)(param_4 + 0x294);
            UnityEngine_Transform__set_localPosition_43cfda8
                      (*(undefined4 *)(param_4 + 0x28c),*(undefined4 *)(param_4 + 0x290),fVar20,
                       *(long *)(param_4 + 0x60),0);
                    /* try { // try from 024ffcf4 to 025ffd3b has its CatchHandler @ 024ffc04 */
            if (*(char *)(param_4 + 0xe1) != '\0') {
              Dino_BusSand_View_VehicleView__TickPour_23f80b0(param_1,param_4);
              Dino_BusSand_View_VehicleView__UpdatePackSand_23f79e8(param_4);
            }
            uVar16 = *(undefined8 *)(param_4 + 200);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
            if ((uVar9 & 1) != 0) {
              if (*(long *)(param_4 + 200) == 0) goto LAB_02500094;
                    /* try { // try from 024ffd3c to 025ffd4b has its CatchHandler @ 024ffd4c */
                    /* catch() { ... } // from try @ 024ffcdc with catch @ 024ffd4c
                       catch() { ... } // from try @ 024ffd3c with catch @ 024ffd4c */
                    /* try { // try from 024ffd50 to 025ffd53 has its CatchHandler @ 024ffd5c */
              UnityEngine_Material__SetFloat_4383048
                        (fVar18,*(long *)(param_4 + 200),*(undefined8 *)PTR_DAT_04caa120,0);
                    /* try { // try from 024ffd54 to 025ffd5f has its CatchHandler @ 024ffc04 */
              if (*(long *)(param_4 + 200) == 0) goto LAB_02500094;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024ffd50 with catch @ 024ffd5c
                        */
              fVar20 = 0.0;
              fVar23 = *(float *)(param_4 + 0x27c) * 1.5 + ABS(*(float *)(param_4 + 0x18c)) * fVar23
              ;
              fVar18 = 1.0;
              if (fVar23 <= 1.0) {
                fVar18 = fVar23;
              }
              fVar21 = 0.0;
              if (0.0 <= fVar23) {
                fVar21 = fVar18;
              }
              UnityEngine_Material__SetFloat_4383048
                        (fVar21,*(long *)(param_4 + 200),*(undefined8 *)PTR_DAT_04cbde68,0);
            }
            uVar16 = *(undefined8 *)(param_4 + 0x88);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (*(float *)(param_4 + 0x278) <= _UNK_00e207ec) {
              cVar13 = *(char *)(param_4 + 0x298);
            }
            else {
              cVar13 = '\x01';
            }
            if ((*(long *)(param_4 + 0x88) != 0) &&
               (fVar18 = _UNK_00e207ec,
               lVar15 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x88),0),
               lVar15 != 0)) {
              bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
              if ((cVar13 != '\0') != (bool)(bVar8 & 1)) {
                if ((*(long *)(param_4 + 0x88) == 0) ||
                   (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                       (*(long *)(param_4 + 0x88),0), lVar15 == 0))
                goto LAB_02500094;
                UnityEngine_GameObject__SetActive_43c1408(lVar15,cVar13 != '\0',0);
              }
              if (cVar13 == '\0') {
                return;
              }
              if (*(long *)(param_4 + 0x38) != 0) {
                lVar15 = *(long *)(param_4 + 0x88);
                fVar23 = (float)UnityEngine_Transform__get_position_43d0e48
                                          (*(long *)(param_4 + 0x38),0);
                if (lVar15 != 0) {
                  fVar20 = fVar20 + *(float *)(param_4 + 0x180) * _UNK_00e1fe98;
                  fVar18 = fVar18 + *(float *)(param_4 + 0x1e0) + fVar19;
                  UnityEngine_Transform__set_position_43d0f1c(fVar23 + 0.0,fVar18,fVar20,lVar15,0);
                  lVar15 = *(long *)(param_4 + 0x88);
                  if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
                  if (lVar15 != 0) {
                    UnityEngine_Transform__set_rotation_43d13f8(lVar15,0);
                    lVar15 = *(long *)(param_4 + 0x88);
                    fVar23 = (float)FUN_022996dc(0);
                    if (lVar15 != 0) {
                      fVar19 = *(float *)(param_4 + 0x180) *
                               (*(float *)(param_4 + 0x27c) * _UNK_00e205f8 + 1.0);
                      UnityEngine_Transform__set_localScale_43d1be0
                                (fVar23 * fVar19,fVar18 * fVar19,fVar20 * fVar19,lVar15,0);
                      if (*(char *)(param_4 + 0x298) == '\0') {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = _UNK_00e20470 <= *(float *)(param_4 + 0x278);
                      }
                      if ((*(long *)(param_4 + 0x90) != 0) &&
                         (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                             (*(long *)(param_4 + 0x90),0), lVar15 != 0)) {
                        bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
                        if (((bVar6 ^ bVar8) & 1) == 0) {
                          if ((*(long *)(param_4 + 0x90) == 0) ||
                             (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                                 (*(long *)(param_4 + 0x90),0), lVar15 == 0))
                          goto LAB_02500094;
                          UnityEngine_GameObject__SetActive_43c1408(lVar15,bVar6 ^ 1,0);
                        }
                        if ((*(long *)(param_4 + 0x98) != 0) &&
                           (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                               (*(long *)(param_4 + 0x98),0), lVar15 != 0)) {
                          bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
                          if (bVar6 != (bool)(bVar8 & 1)) {
                            if ((*(long *)(param_4 + 0x98) == 0) ||
                               (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                                   (*(long *)(param_4 + 0x98),0), lVar15 == 0))
                            goto LAB_02500094;
                            UnityEngine_GameObject__SetActive_43c1408(lVar15,bVar6,0);
                          }
                          if (bVar6 == false) {
                            fVar18 = *(float *)(param_4 + 0x278);
                            if ((bRam0000000004f9caea & 1) == 0) {
                              FUN_02132f7c(PTR_DAT_04ca9ae8);
                              FUN_02132f7c(PTR_DAT_04cbd610);
                              bRam0000000004f9caea = 1;
                            }
                            fVar23 = _UNK_00e20a7c;
                            if (cRam0000000004f9b9dd == '\0') {
                              FUN_02132f7c(PTR_DAT_04caa200);
                              cRam0000000004f9b9dd = '\x01';
                            }
                            fVar23 = fVar18 * 100.0 + fVar23;
                            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar10 = (uint)fVar23;
                            if (99 < (int)uVar10) {
                              uVar10 = 100;
                            }
                            uVar2 = 0;
                            if ((float)(int)fVar23 != INFINITY) {
                              uVar2 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                            }
                            if (uVar2 != *(uint *)(param_4 + 0xa0)) {
                              uVar16 = *(undefined8 *)(param_4 + 0x90);
                              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
                              if ((uVar9 & 1) == 0) {
                                plVar14 = *(long **)(param_4 + 0x90);
                                *(uint *)(param_4 + 0xa0) = uVar2;
                                uVar16 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
                                uVar16 = System_String__Concat_46c82e0
                                                   (uVar16,*(undefined8 *)PTR_DAT_04cbd610,0);
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                                (**(code **)(*plVar14 + 0x518))
                                          (plVar14,uVar16,*(undefined8 *)(*plVar14 + 0x520));
                              }
                            }
                            return;
                          }
                          fVar18 = *(float *)(param_4 + 0xa4);
                          if (fVar18 < 0.0) {
                            fVar18 = 0.0;
                            *(undefined4 *)(param_4 + 0xa4) = 0;
                          }
                          fVar23 = (fVar18 + param_1) / _UNK_00e208d0;
                          *(float *)(param_4 + 0xa4) = fVar18 + param_1;
                          fVar18 = 1.0;
                          if (fVar23 <= 1.0) {
                            fVar18 = fVar23;
                          }
                          fVar20 = 0.0;
                          if (0.0 <= fVar23) {
                            fVar20 = fVar18;
                          }
                          if (fVar20 < 1.0) {
                            func_0x049b5320(fVar20 * _UNK_00e2082c);
                          }
                          lVar15 = *(long *)(param_4 + 0x98);
                          FUN_022996dc(0);
                          if (lVar15 != 0) {
LAB_024ff3b0:
                            if ((bRam0000000004fa8b3e & 1) == 0) {
                              FUN_02132f7c(PTR_DAT_04cf7a00,0);
                              bRam0000000004fa8b3e = 1;
                            }
                            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar15 = *(long *)(lVar15 + 0x10);
                            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                        ();
                            }
                            if (pcRam0000000004fa8bf0 == (code *)0x0) {
                              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                            }
                            (*pcRam0000000004fa8bf0)(lVar15,&stack0xffffffffffffffd4);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02500094:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

