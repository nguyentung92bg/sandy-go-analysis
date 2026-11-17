/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$.ctor
void Dino_BusSand_App_UI_HomeBus___ctor (Dino_BusSand_App_UI_HomeBus_o* __this, UnityEngine_Transform_o* parent, Dino_BusSand_App_UI_HomePuffs_o* puffs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$.ctor
   void Dino_BusSand_App_UI_HomeBus___ctor (Dino_BusSand_App_UI_HomeBus_o* __this,
   UnityEngine_Transform_o* parent, Dino_BusSand_App_UI_HomePuffs_o* puffs, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeBus___ctor_22dfc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar7 = PTR_DAT_04cb7190;
  puVar6 = PTR_DAT_04cb7188;
  puVar5 = PTR_DAT_04cafe68;
  puVar4 = PTR_DAT_04cae330;
  puVar3 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c407 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7198);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb71a0);
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04cb7190);
    FUN_02132f7c(PTR_DAT_04cb7188);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04cafe68);
    bRam0000000004f9c407 = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Random___ctor_4840cc4(uVar8,0x7d2,0);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar8);
  uVar2 = _UNK_00e6a878;
  uVar8 = _UNK_00e6a280;
  uVar18 = NEON_fmov(0xbf800000,4);
  uVar9 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x98) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xa8) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar18;
  *(undefined8 *)(param_1 + 0xd4) = uVar8;
  uVar8 = thunk_FUN_0216e89c(uVar9);
  System_Collections_Generic_List_ValueTuple_float__object_____ctor_39c0fa4
            (uVar8,4,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0xe8) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xe8),uVar8);
  *(undefined4 *)(param_1 + 0x100) = 0xbf800000;
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),param_3);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_GameObject___ctor_43c20cc(lVar10,*(undefined8 *)puVar5,0);
  if (lVar10 != 0) {
    lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    plVar15 = (long *)(param_1 + 0x10);
    *plVar15 = lVar10;
    thunk_FUN_02134474(plVar15,lVar10);
    puVar3 = PTR_DAT_04ca9ae8;
    if (*plVar15 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(*plVar15,param_2,0,0);
      uVar8 = Dino_BusSand_App_UI_HomeToonBusArt__Load_22f1780(0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar16 = *plVar15;
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb71b0);
      Dino_BusSand_App_UI_HomeToonRig___ctor_22f34d8(lVar10,lVar16,uVar8,0);
      if (lVar10 != 0) {
        uVar11 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar10,0);
        puVar3 = PTR_DAT_04cb6dd8;
        if ((uVar11 & 1) == 0) {
          if ((bRam0000000004f9c47c & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb6dd8,0);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9c47c = 1;
          }
          plVar15 = (long *)FUN_02133068(*(undefined8 *)puVar3,2);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar16 = *(long *)(lVar10 + 0x38);
          if ((lVar16 != 0) &&
             (lVar12 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0)) {
LAB_023f56ac:
            uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar8,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar16;
            thunk_FUN_02134474(plVar15 + 4,lVar16);
            lVar16 = *(long *)(lVar10 + 0x40);
            if ((lVar16 != 0) &&
               (lVar12 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0))
            goto LAB_023f56ac;
            puVar3 = PTR_DAT_04ca9ae8;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
              plVar15[5] = lVar16;
              thunk_FUN_02134474(plVar15 + 5,lVar16);
              if (0 < (int)plVar15[3]) {
                uVar11 = 0;
                uVar13 = plVar15[3] & 0xffffffff;
                do {
                  if (uVar13 <= uVar11) goto LAB_023f56a8;
                  lVar16 = plVar15[uVar11 + 4];
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    UnityEngine_Object__Destroy_43c8114(lVar16,0);
                  }
                  uVar13 = (ulong)*(uint *)(plVar15 + 3);
                  uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)*(uint *)(plVar15 + 3));
              }
              uVar8 = *(undefined8 *)(lVar10 + 0xa0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
              if ((uVar11 & 1) == 0) {
                return;
              }
              lVar10 = *(long *)(lVar10 + 0xa0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar3 = PTR_DAT_04ca9ae8;
              uVar8 = 0;
              if ((bRam0000000004fa8603 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9ae8,0);
                bRam0000000004fa8603 = 1;
                uVar8 = extraout_x1;
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                uVar8 = extraout_x1_00;
              }
              puVar3 = PTR_DAT_04cf6418;
              if ((bRam0000000004fa8602 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf6418,uVar8);
                FUN_02132f7c(PTR_DAT_04ca9ae8);
                bRam0000000004fa8602 = 1;
              }
              if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
                FUN_0216b4cc();
              }
              uVar8 = 0;
              if (lVar10 != 0) {
                uVar8 = *(undefined8 *)(lVar10 + 0x10);
              }
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (pcRam0000000004fa8680 == (code *)0x0) {
                pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
              }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8680)(0,uVar8);
              return;
            }
          }
LAB_023f56a8:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(long *)(param_1 + 0x18) = lVar10;
        thunk_FUN_02134474((long *)(param_1 + 0x18),lVar10);
        lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb71a8);
        Dino_BusSand_App_UI_HomeToonFace___ctor_22f1ac0(lVar16,lVar10,0);
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7198);
        System_Func_int__Nullable_Vector3_____ctor_37a2110
                  (uVar8,param_1,*(undefined8 *)PTR_DAT_04cb71a0,0);
        if (lVar16 != 0) {
          *(undefined8 *)(lVar16 + 0xa0) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar16 + 0xa0),uVar8);
          *(long *)(param_1 + 0x20) = lVar16;
          thunk_FUN_02134474((long *)(param_1 + 0x20),lVar16);
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 != 0) {
            uVar11 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar10,0);
            if ((uVar11 & 1) == 0) {
              return;
            }
            fVar17 = *(float *)(lVar10 + 0xd0) +
                     (*(float *)(lVar10 + 0xcc) * -160.0 + *(float *)(lVar10 + 0xd0) * -9.0) * 0.0;
            *(float *)(lVar10 + 0xcc) = *(float *)(lVar10 + 0xcc) + fVar17 * 0.0;
            *(float *)(lVar10 + 0xd0) = fVar17;
            if ((0.0 < *(float *)(lVar10 + 0xd4)) || (0.0 < *(float *)(lVar10 + 0xd8))) {
              fVar21 = *(float *)(lVar10 + 0xd8) + -0.0;
              fVar20 = *(float *)(lVar10 + 0xd4) + fVar21 * 0.0;
              *(float *)(lVar10 + 0xd4) = fVar20;
              *(float *)(lVar10 + 0xd8) = fVar21;
              if (fVar20 <= 0.0) {
                *(undefined4 *)(lVar10 + 0xd4) = 0;
                *(undefined4 *)(lVar10 + 0xd8) = 0;
                *(float *)(lVar10 + 0xd0) = fVar17 + _UNK_00e20a28;
              }
            }
            lVar16 = *(long *)(lVar10 + 0x88);
            fVar20 = *(float *)(lVar10 + 0xe0) +
                     (*(float *)(lVar10 + 0xdc) * -220.0 + *(float *)(lVar10 + 0xe0) * -13.0) * 0.0;
            fVar17 = *(float *)(lVar10 + 0xe8) +
                     ((*(float *)(lVar10 + 0x110) - *(float *)(lVar10 + 0xe4)) * 60.0 +
                     *(float *)(lVar10 + 0xe8) * -11.0) * 0.0;
            *(float *)(lVar10 + 0xdc) = *(float *)(lVar10 + 0xdc) + fVar20 * 0.0;
            *(float *)(lVar10 + 0xe0) = fVar20;
            *(float *)(lVar10 + 0xe4) = *(float *)(lVar10 + 0xe4) + fVar17 * 0.0;
            *(float *)(lVar10 + 0xe8) = fVar17;
            if (lVar16 == 0) {
LAB_023f5bd8:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar11 = 0;
            uVar1 = *(uint *)(lVar16 + 0x18);
            lVar16 = lVar16 + 0x20;
            do {
              if (uVar1 == uVar11) goto LAB_023f5bd4;
              lVar14 = *(long *)(lVar10 + 0x90);
              lVar12 = lVar14 + uVar11 * 4;
              if (*(float *)(lVar16 + uVar11 * 4) <= 0.0) {
                if (lVar14 == 0) goto LAB_023f5bd8;
                if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_023f5bd4;
                if (0.0 < *(float *)(lVar12 + 0x20)) goto LAB_023f5b68;
              }
              else {
                if (lVar14 == 0) goto LAB_023f5bd8;
LAB_023f5b68:
                if (*(uint *)(lVar14 + 0x18) <= uVar11) {
LAB_023f5bd4:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                fVar17 = *(float *)(lVar12 + 0x20) - 0.0;
                *(float *)(lVar12 + 0x20) = fVar17;
                fVar17 = *(float *)(lVar16 + uVar11 * 4) + fVar17 * 0.0;
                *(float *)(lVar16 + uVar11 * 4) = fVar17;
                if (fVar17 <= 0.0) {
                  *(undefined4 *)(lVar16 + uVar11 * 4) = 0;
                  *(undefined4 *)(lVar12 + 0x20) = 0;
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != 4);
            Dino_BusSand_App_UI_HomeToonRig__StepCap_22f5bdc(0,lVar10);
            if ((bRam0000000004f9c480 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cb71b0);
              bRam0000000004f9c480 = 1;
            }
            uVar11 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(lVar10);
            fVar17 = _UNK_00e20a74;
            if ((uVar11 & 1) == 0) {
              return;
            }
            lVar16 = *(long *)(lVar10 + 0x18);
            UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                      (0,(*(float *)(lVar10 + 0xe4) + 90.0) * _UNK_00e20a74,0,0);
            if (lVar16 != 0) {
              UnityEngine_Transform__set_localRotation_43d156c(lVar16,0);
              if (*(long *)(lVar10 + 0x20) != 0) {
                fVar21 = *(float *)(lVar10 + 0xcc) - *(float *)(lVar10 + 0x10c);
                fVar20 = _UNK_00e207cc;
                if (fVar21 <= _UNK_00e207cc) {
                  fVar20 = fVar21;
                }
                fVar22 = *(float *)(lVar10 + 0x108) * _UNK_00e20488;
                fVar19 = _UNK_00e203b4;
                if (_UNK_00e207d4 <= fVar21) {
                  fVar19 = 1.0 - fVar20;
                }
                fVar19 = fVar22 + fVar19;
                fVar20 = _UNK_00e20390;
                if (_UNK_00e20390 <= fVar19) {
                  fVar20 = fVar19;
                }
                UnityEngine_Transform__set_localScale_43d1be0
                          (1.0 / SQRT(fVar20),fVar19,1.0 / SQRT(fVar20),*(long *)(lVar10 + 0x20),0);
                lVar16 = *(long *)(lVar10 + 0x88);
                if (lVar16 != 0) {
                  uVar1 = *(uint *)(lVar16 + 0x18);
                  if ((uVar1 != 1) && (uVar1 != 0)) {
                    fVar20 = *(float *)(lVar16 + 0x20);
                    if (*(float *)(lVar16 + 0x20) <= *(float *)(lVar16 + 0x24)) {
                      fVar20 = *(float *)(lVar16 + 0x24);
                    }
                    if ((2 < uVar1) && (uVar1 != 3)) {
                      fVar21 = *(float *)(lVar16 + 0x28);
                      if (*(float *)(lVar16 + 0x28) <= *(float *)(lVar16 + 0x2c)) {
                        fVar21 = *(float *)(lVar16 + 0x2c);
                      }
                      fVar19 = (float)atan2f(fVar20 - fVar21,_UNK_00e203b8);
                      puVar3 = PTR_DAT_04cb71b0;
                      lVar16 = *(long *)(lVar10 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (lVar16 != 0) {
                        uVar8 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
                        fVar20 = (float)((ulong)uVar8 >> 0x20) +
                                 ((float)((ulong)*(undefined8 *)(lVar10 + 0xfc) >> 0x20) +
                                 (fVar20 + fVar21) * 0.5 + *(float *)(lVar10 + 0xd4)) / 1.45;
                        UnityEngine_Transform__set_localPosition_43cfda8
                                  (CONCAT44(fVar20,(float)uVar8 +
                                                   ((float)*(undefined8 *)(lVar10 + 0xfc) + 0.0) /
                                                   1.45),fVar20,
                                   *(float *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1) +
                                   (*(float *)(lVar10 + 0x104) + 0.0) / _UNK_00e20270,lVar16,0);
                        fVar20 = 0.0;
                        fVar21 = 0.0;
                        lVar16 = *(long *)(lVar10 + 0x20);
                        fVar17 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                                  (fVar19 * _UNK_00e202e4 * fVar17,0,0,0);
                        if (lVar16 != 0) {
                          fVar19 = *(float *)(lVar10 + 0xec);
                          fVar25 = *(float *)(lVar10 + 0xf0);
                          fVar24 = *(float *)(lVar10 + 0xf4);
                          fVar23 = *(float *)(lVar10 + 0xf8);
                          UnityEngine_Transform__set_localRotation_43d156c
                                    ((fVar17 * fVar23 + fVar22 * fVar19 + fVar20 * fVar24) -
                                     fVar21 * fVar25,
                                     (fVar21 * fVar19 + fVar20 * fVar23 + fVar22 * fVar25) -
                                     fVar17 * fVar24,
                                     (fVar17 * fVar25 + fVar21 * fVar23 + fVar22 * fVar24) -
                                     fVar20 * fVar19,
                                     ((fVar22 * fVar23 - fVar17 * fVar19) - fVar20 * fVar25) -
                                     fVar21 * fVar24,lVar16,0);
                          puVar3 = PTR_DAT_04ca9ae8;
                          if ((bRam0000000004f9c489 & 1) == 0) {
                            FUN_02132f7c(PTR_DAT_04cb71b0);
                            FUN_02132f7c(PTR_DAT_04ca9ae8);
                            bRam0000000004f9c489 = 1;
                          }
                          uVar8 = *(undefined8 *)(lVar10 + 0xa8);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
                          if ((uVar11 & 1) != 0) {
                            return;
                          }
                          if ((*(long *)(lVar10 + 0xa8) != 0) &&
                             (lVar16 = UnityEngine_Component__get_gameObject_43bcde8
                                                 (*(long *)(lVar10 + 0xa8),0), lVar16 != 0)) {
                            uVar11 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar16,0);
                            if ((uVar11 & 1) == 0) {
                              return;
                            }
                            fVar17 = *(float *)(lVar10 + 0xbc);
                            fVar20 = 0.0;
                            if (0.0 <= fVar17) {
                              fVar17 = fVar17 + fVar17;
                              fVar20 = 1.0;
                              if (fVar17 <= 1.0) {
                                fVar20 = fVar17;
                              }
                              fVar21 = 0.0;
                              if (0.0 <= fVar17) {
                                fVar21 = fVar20;
                              }
                              if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              fVar20 = 1.0 - fVar21 * fVar21 *
                                             (fVar21 * _UNK_00e200a8 + _UNK_00e203f0);
                            }
                            if (*(long *)(lVar10 + 0xa8) != 0) {
                              UnityEngine_Transform__set_localPosition_43cfda8
                                        (*(float *)(lVar10 + 0xb0) + 0.0,
                                         fVar20 * _UNK_00e20170 + *(float *)(lVar10 + 0xb4),
                                         *(float *)(lVar10 + 0xb8) + 0.0,*(long *)(lVar10 + 0xa8),0)
                              ;
                              lVar16 = *(long *)(lVar10 + 0xa8);
                              UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                        (fVar20 * -6.0 * _UNK_00e20a74,0,
                                         fVar20 * -3.0 * _UNK_00e20a74,0);
                              if (lVar16 != 0) {
                                UnityEngine_Transform__set_localRotation_43d156c(lVar16,0);
                                lVar10 = *(long *)(lVar10 + 0xa8);
                                if (lVar10 != 0) {
                                  if ((bRam0000000004fa8b3e & 1) == 0) {
                                    FUN_02132f7c(PTR_DAT_04cf7a00,0);
                                    bRam0000000004fa8b3e = 1;
                                  }
                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02133224();
                                  }
                                  lVar10 = *(long *)(lVar10 + 0x10);
                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                              ();
                                  }
                                  if (pcRam0000000004fa8bf0 == (code *)0x0) {
                                    pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                                  }
                                  (*pcRam0000000004fa8bf0)(lVar10,&stack0xffffffffffffffd4);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

