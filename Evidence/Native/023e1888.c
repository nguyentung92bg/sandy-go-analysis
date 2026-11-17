/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$CloseRoof
void Dino_BusSand_App_UI_HomeBus__CloseRoof (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$CloseRoof
   void Dino_BusSand_App_UI_HomeBus__CloseRoof (Dino_BusSand_App_UI_HomeBus_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__CloseRoof_22e1888(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
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
  float fVar34;
  float fVar35;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  Dino_BusSand_App_UI_HomeBus__Heap_22e1738
            (ZEXT816(0),*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
             *(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar5 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(param_1 + 0x18),0);
    puVar3 = PTR_DAT_04cad568;
    puVar2 = PTR_DAT_04ca9ae8;
    if ((uVar5 & 1) == 0) {
      if ((bRam0000000004f9c40e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568);
        FUN_02132f7c(PTR_DAT_04cb7200);
        FUN_02132f7c(PTR_DAT_04cb71e8);
        FUN_02132f7c(PTR_DAT_04cb71f0);
        bRam0000000004f9c40e = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__LidThunk_23833a0(ZEXT816(0),**(long **)(lVar6 + 0xb8),0);
      }
      puVar2 = PTR_DAT_04cb7200;
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = Dino_BusSand_App_UI_HomeToonRig__get_HasCap_22f6144(lVar6,0);
        uVar13 = _UNK_00e205f0;
        if ((uVar5 & 1) == 0) {
          uVar13 = _UNK_00e20590;
        }
        Dino_BusSand_App_UI_HomeToonRig__Kick_22f5958(uVar13,_UNK_00e205f0,lVar6,0);
        lVar6 = *(long *)puVar2;
        lVar8 = *(long *)(param_1 + 0x20);
        *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + _UNK_00e20864;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        puVar4 = PTR_DAT_04cb71f0;
        puVar3 = PTR_DAT_04cb71e8;
        if (lVar8 != 0) {
          auVar19 = *(undefined1 (*) [16])(*(long *)(lVar6 + 0xb8) + 0x40);
          uStack_d0 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x50);
          uStack_d8 = auVar19._8_8_;
          uStack_e0 = auVar19._0_8_;
          Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar8,&uStack_e0,0);
          lVar10 = *(long *)(param_1 + 0x20);
          lVar6 = FUN_02133068(*(undefined8 *)puVar3,2);
          uStack_f8 = 0;
          uStack_f0 = 0;
          lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
          uStack_e8 = 0;
          uStack_110 = *(undefined8 *)(lVar8 + 0x68);
          uStack_108 = *(undefined8 *)(lVar8 + 0x70);
          uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar8 + 0x78));
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (&uStack_f8,&uStack_110,*(undefined8 *)puVar4);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x30) = uStack_e8;
              *(undefined8 *)(lVar6 + 0x28) = uStack_f0;
              *(undefined8 *)(lVar6 + 0x20) = uStack_f8;
              uStack_110 = 0;
              uStack_108 = 0;
              uStack_100 = 0;
              lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
              uStack_c0 = *(undefined8 *)(lVar8 + 0x54);
              uStack_b8 = *(undefined8 *)(lVar8 + 0x5c);
              uStack_b0 = *(undefined4 *)(lVar8 + 100);
              System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                        (&uStack_110,&uStack_c0,*(undefined8 *)puVar4);
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar6 + 0x48) = uStack_100;
                *(undefined8 *)(lVar6 + 0x40) = uStack_108;
                *(undefined8 *)(lVar6 + 0x38) = uStack_110;
                if (lVar10 != 0) {
                  Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar10,lVar6,0);
                  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x88);
                  if (*(long *)(param_1 + 0x18) != 0) {
                    uVar5 = Dino_BusSand_App_UI_HomeToonRig__get_HasCap_22f6144
                                      (*(long *)(param_1 + 0x18),0);
                    puVar3 = PTR_DAT_04caa208;
                    puVar2 = PTR_DAT_04caa200;
                    uVar13 = _UNK_00e20aec;
                    fVar32 = _UNK_00e20a08;
                    fVar31 = _UNK_00e20994;
                    fVar30 = _UNK_00e207cc;
                    fVar29 = _UNK_00e2047c;
                    fVar24 = _UNK_00e20328;
                    fVar17 = _UNK_00e202d4;
                    fVar34 = _UNK_00e2027c;
                    fVar18 = _UNK_00e1ffe0;
                    if ((uVar5 & 1) != 0) {
                      NEON_fmov(0x3f800000,4);
                      iVar12 = 0;
                      do {
                        plVar7 = *(long **)(param_1 + 0x30);
                        if (plVar7 == (long *)0x0) goto LAB_023e1f2c;
                        lVar6 = *(long *)(param_1 + 0x18);
                        auVar19 = (**(code **)(*plVar7 + 0x1b8))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                        if (lVar6 == 0) goto LAB_023e1f2c;
                        fVar25 = (float)auVar19._0_8_ * fVar17 + -2.0;
                        fVar33 = fVar18;
                        uVar14 = Dino_BusSand_App_UI_HomeToonRig__World_22f56bc(lVar6,0);
                        if (*(long *)(param_1 + 0x18) == 0) goto LAB_023e1f2c;
                        fVar26 = 0.0;
                        fVar22 = fVar18;
                        fVar15 = (float)Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                                                  (*(long *)(param_1 + 0x18),0);
                        if (*(long *)(param_1 + 0x18) == 0) goto LAB_023e1f2c;
                        fVar35 = 0.0;
                        fVar28 = fVar18;
                        fVar16 = (float)Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                                                  (ZEXT816(0),*(long *)(param_1 + 0x18),0);
                        if (cRam0000000004f9b65c == '\0') {
                          FUN_02132f7c(puVar2);
                          cRam0000000004f9b65c = '\x01';
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        fVar15 = fVar15 - fVar16;
                        fVar22 = fVar22 - fVar28;
                        fVar26 = fVar26 - fVar35;
                        fVar28 = SQRT(fVar26 * fVar26 + fVar15 * fVar15 + fVar22 * fVar22);
                        if (fVar28 <= fVar32) {
                          if (cRam0000000004f9b65d == '\0') {
                            FUN_02132f7c(puVar3);
                            cRam0000000004f9b65d = '\x01';
                          }
                          pfVar9 = *(float **)(*(long *)puVar3 + 0xb8);
                          fVar15 = *pfVar9;
                          fVar22 = pfVar9[1];
                          fVar26 = pfVar9[2];
                        }
                        else {
                          fVar15 = fVar15 / fVar28;
                          fVar22 = fVar22 / fVar28;
                          fVar26 = fVar26 / fVar28;
                        }
                        plVar7 = *(long **)(param_1 + 0x30);
                        if (plVar7 == (long *)0x0) goto LAB_023e1f2c;
                        lVar6 = *(long *)(param_1 + 0x28);
                        auVar19 = (**(code **)(*plVar7 + 0x1b8))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                        if (cRam0000000004f9bcf8 == '\0') {
                          FUN_02132f7c(puVar3);
                          cRam0000000004f9bcf8 = '\x01';
                        }
                        plVar7 = *(long **)(param_1 + 0x30);
                        if (plVar7 == (long *)0x0) goto LAB_023e1f2c;
                        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                        fVar28 = *(float *)(lVar8 + 0x20);
                        fVar35 = *(float *)(lVar8 + 0x18);
                        fVar16 = *(float *)(lVar8 + 0x1c);
                        auVar20 = (**(code **)(*plVar7 + 0x1b8))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                        plVar7 = *(long **)(param_1 + 0x30);
                        if (plVar7 == (long *)0x0) goto LAB_023e1f2c;
                        auVar21 = (**(code **)(*plVar7 + 0x1b8))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                        plVar7 = *(long **)(param_1 + 0x30);
                        if (plVar7 == (long *)0x0) goto LAB_023e1f2c;
                        (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                        plVar7 = *(long **)(param_1 + 0x30);
                        if ((plVar7 == (long *)0x0) ||
                           ((**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
                           lVar6 == 0)) goto LAB_023e1f2c;
                        fVar23 = (float)auVar19._0_8_ * fVar34 + fVar31;
                        fVar27 = (float)auVar20._0_8_ * fVar29 + fVar24;
                        Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
                                  (uVar14,fVar33,fVar25,fVar15 * fVar23 + fVar35 * fVar27,
                                   fVar22 * fVar23 + fVar16 * fVar27,
                                   fVar26 * fVar23 + fVar28 * fVar27,
                                   (float)auVar21._0_8_ * fVar30 + 0.5,uVar13,lVar6,0);
                        iVar12 = iVar12 + 1;
                      } while (iVar12 != 6);
                    }
                    return;
                  }
                }
                goto LAB_023e1f2c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
      }
LAB_023e1f2c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      if ((bRam0000000004f9c485 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004f9c485 = 1;
      }
      uVar11 = *(undefined8 *)(lVar6 + 0xa8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
      if (((uVar5 & 1) != 0) || (*(char *)(lVar6 + 200) == '\0')) {
        return;
      }
      *(undefined1 *)(lVar6 + 200) = 0;
      *(undefined4 *)(lVar6 + 0xbc) = 0;
      if ((*(long *)(lVar6 + 0xa8) == 0) ||
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0xa8),0),
         lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
      if ((bRam0000000004f9c480 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb71b0);
        bRam0000000004f9c480 = 1;
      }
      uVar5 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar6);
      fVar18 = _UNK_00e20a74;
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar8 = *(long *)(lVar6 + 0x18);
      UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                (ZEXT816(0),(*(float *)(lVar6 + 0xe4) + 90.0) * _UNK_00e20a74,0,0);
      if (lVar8 != 0) {
        UnityEngine_Transform__set_localRotation_43d156c(lVar8,0);
        if (*(long *)(lVar6 + 0x20) != 0) {
          fVar17 = *(float *)(lVar6 + 0xcc) - *(float *)(lVar6 + 0x10c);
          fVar34 = _UNK_00e207cc;
          if (fVar17 <= _UNK_00e207cc) {
            fVar34 = fVar17;
          }
          fVar29 = *(float *)(lVar6 + 0x108) * _UNK_00e20488;
          fVar24 = _UNK_00e203b4;
          if (_UNK_00e207d4 <= fVar17) {
            fVar24 = 1.0 - fVar34;
          }
          fVar24 = fVar29 + fVar24;
          fVar34 = _UNK_00e20390;
          if (_UNK_00e20390 <= fVar24) {
            fVar34 = fVar24;
          }
          UnityEngine_Transform__set_localScale_43d1be0
                    (1.0 / SQRT(fVar34),fVar24,1.0 / SQRT(fVar34),*(long *)(lVar6 + 0x20),0);
          lVar8 = *(long *)(lVar6 + 0x88);
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if ((uVar1 != 1) && (uVar1 != 0)) {
              fVar34 = *(float *)(lVar8 + 0x20);
              if (*(float *)(lVar8 + 0x20) <= *(float *)(lVar8 + 0x24)) {
                fVar34 = *(float *)(lVar8 + 0x24);
              }
              if ((2 < uVar1) && (uVar1 != 3)) {
                fVar17 = *(float *)(lVar8 + 0x28);
                if (*(float *)(lVar8 + 0x28) <= *(float *)(lVar8 + 0x2c)) {
                  fVar17 = *(float *)(lVar8 + 0x2c);
                }
                fVar24 = (float)atan2f(fVar34 - fVar17,_UNK_00e203b8);
                puVar2 = PTR_DAT_04cb71b0;
                lVar8 = *(long *)(lVar6 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (lVar8 != 0) {
                  uVar11 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                  auVar19._0_4_ =
                       (float)uVar11 + ((float)*(undefined8 *)(lVar6 + 0xfc) + 0.0) / 1.45;
                  auVar19._4_4_ =
                       (float)((ulong)uVar11 >> 0x20) +
                       ((float)((ulong)*(undefined8 *)(lVar6 + 0xfc) >> 0x20) +
                       (fVar34 + fVar17) * 0.5 + *(float *)(lVar6 + 0xd4)) / 1.45;
                  auVar19._8_8_ = 0;
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (auVar19,auVar19._4_4_,
                             *(float *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1) +
                             (*(float *)(lVar6 + 0x104) + 0.0) / _UNK_00e20270,lVar8,0);
                  fVar34 = 0.0;
                  fVar17 = 0.0;
                  lVar8 = *(long *)(lVar6 + 0x20);
                  fVar18 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                            (fVar24 * _UNK_00e202e4 * fVar18,0,0,0);
                  if (lVar8 != 0) {
                    fVar24 = *(float *)(lVar6 + 0xec);
                    fVar33 = *(float *)(lVar6 + 0xf0);
                    fVar32 = *(float *)(lVar6 + 0xf4);
                    fVar30 = *(float *)(lVar6 + 0xf8);
                    fVar31 = fVar18 * fVar30 + fVar29 * fVar24 + fVar34 * fVar32;
                    UnityEngine_Transform__set_localRotation_43d156c
                              (fVar31 - fVar17 * fVar33,
                               (fVar17 * fVar24 + fVar34 * fVar30 + fVar29 * fVar33) -
                               fVar18 * fVar32,
                               (fVar18 * fVar33 + fVar17 * fVar30 + fVar29 * fVar32) -
                               fVar34 * fVar24,
                               ((fVar29 * fVar30 - fVar18 * fVar24) - fVar34 * fVar33) -
                               fVar17 * fVar32,fVar17 * fVar32,fVar31,fVar17 * fVar33,lVar8,0);
                    puVar2 = PTR_DAT_04ca9ae8;
                    if ((bRam0000000004f9c489 & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cb71b0);
                      FUN_02132f7c(PTR_DAT_04ca9ae8);
                      bRam0000000004f9c489 = 1;
                    }
                    uVar11 = *(undefined8 *)(lVar6 + 0xa8);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
                    if ((uVar5 & 1) != 0) {
                      return;
                    }
                    if ((*(long *)(lVar6 + 0xa8) != 0) &&
                       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8
                                          (*(long *)(lVar6 + 0xa8),0), lVar8 != 0)) {
                      uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
                      if ((uVar5 & 1) == 0) {
                        return;
                      }
                      fVar18 = *(float *)(lVar6 + 0xbc);
                      fVar34 = 0.0;
                      if (0.0 <= fVar18) {
                        fVar18 = fVar18 + fVar18;
                        fVar34 = 1.0;
                        if (fVar18 <= 1.0) {
                          fVar34 = fVar18;
                        }
                        fVar17 = 0.0;
                        if (0.0 <= fVar18) {
                          fVar17 = fVar34;
                        }
                        if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        fVar34 = 1.0 - fVar17 * fVar17 * (fVar17 * _UNK_00e200a8 + _UNK_00e203f0);
                      }
                      if (*(long *)(lVar6 + 0xa8) != 0) {
                        UnityEngine_Transform__set_localPosition_43cfda8
                                  (*(float *)(lVar6 + 0xb0) + 0.0,
                                   fVar34 * _UNK_00e20170 + *(float *)(lVar6 + 0xb4),
                                   *(float *)(lVar6 + 0xb8) + 0.0,0,*(float *)(lVar6 + 0xb4),
                                   *(float *)(lVar6 + 0xb0),*(long *)(lVar6 + 0xa8),0);
                        lVar8 = *(long *)(lVar6 + 0xa8);
                        UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                  (fVar34 * -6.0 * _UNK_00e20a74,0,fVar34 * -3.0 * _UNK_00e20a74,0);
                        if (lVar8 != 0) {
                          UnityEngine_Transform__set_localRotation_43d156c(lVar8,0);
                          lVar6 = *(long *)(lVar6 + 0xa8);
                          if (lVar6 != 0) {
                            if ((bRam0000000004fa8b3e & 1) == 0) {
                              FUN_02132f7c(PTR_DAT_04cf7a00,0);
                              bRam0000000004fa8b3e = 1;
                            }
                            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar6 = *(long *)(lVar6 + 0x10);
                            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                        ();
                            }
                            if (pcRam0000000004fa8bf0 == (code *)0x0) {
                              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                            }
                            (*pcRam0000000004fa8bf0)(lVar6,&stack0xffffffffffffffd4);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

