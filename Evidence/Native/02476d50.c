/* IL2CPP: Dino.BusSand.AudioHub$$StartTrack
void Dino_BusSand_AudioHub__StartTrack (Dino_BusSand_AudioHub_o* __this, int32_t index, bool crossfade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x035aa7d4) */
/* WARNING: Removing unreachable block (ram,0x035aa7e0) */
/* IL2CPP: Dino.BusSand.AudioHub$$StartTrack
   void Dino_BusSand_AudioHub__StartTrack (Dino_BusSand_AudioHub_o* __this, int32_t index, bool
   crossfade, const MethodInfo* method); */

undefined8 Dino_BusSand_AudioHub__StartTrack_2376d50(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  
  if ((bRam0000000004f9c7f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f8 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x88);
  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
     (lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (*(long *)(lVar14 + 0x80),param_2,*(undefined8 *)PTR_DAT_04cb1850),
     puVar2 = PTR_DAT_04ca9ae8, lVar4 == 0)) {
LAB_024770ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = Dino_BusSand_AudioHub__Clip_23742fc(param_1,*(undefined8 *)(lVar4 + 0x10));
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    uVar20 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar9 = *(long *)(lVar14 + 0x80);
    *(undefined4 *)(param_1 + 0xbc) = uVar20;
    *(int *)(param_1 + 0x90) = param_2;
    if ((lVar9 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
      iVar24 = *(int *)(lVar9 + 0x18);
      iVar13 = 0;
      if (iVar24 != 0) {
        iVar13 = (param_2 + 1) / iVar24;
      }
      System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                (*(long *)(param_1 + 0x58),*(undefined8 *)(lVar14 + 0x10),
                 (param_2 + 1) - iVar13 * iVar24,*(undefined8 *)PTR_DAT_04cad660);
      if ((param_3 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x78);
        if (lVar9 == 0) goto LAB_024770ac;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar3) {
          lVar10 = 0;
          do {
            if (uVar3 <= (uint)lVar10) goto LAB_024770b0;
            lVar11 = *(long *)(lVar9 + 0x20 + lVar10 * 8);
            if (lVar11 == 0) goto LAB_024770ac;
            UnityEngine_AudioSource__Stop_43488b8(lVar11,0);
            uVar3 = *(uint *)(lVar9 + 0x18);
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < (int)uVar3);
        }
      }
      else {
        fVar21 = *(float *)(lVar14 + 0x7c);
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa8);
        *(int *)(param_1 + 0x80) = 1 - *(int *)(param_1 + 0x80);
        if (fVar21 <= 0.0) {
          fVar21 = 1.5;
        }
        *(float *)(param_1 + 0xa0) = fVar21;
      }
      lVar9 = *(long *)(param_1 + 0x78);
      if (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x80)) {
LAB_024770b0:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
        if (lVar9 != 0) {
          UnityEngine_AudioSource__set_clip_434875c(lVar9,lVar5,0);
          if ((*(long *)(lVar14 + 0x80) != 0) &&
             (UnityEngine_AudioSource__set_loop_4348b90
                        (lVar9,*(int *)(*(long *)(lVar14 + 0x80) + 0x18) == 1,0), lVar5 != 0)) {
            iVar24 = *(int *)(lVar4 + 0x1c);
            fVar22 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar5,0);
            fVar23 = (float)iVar24 / 1000.0;
            fVar21 = 0.0;
            if (0.0 <= fVar22 + -1.0) {
              fVar21 = fVar22 + -1.0;
            }
            if (fVar23 <= fVar21) {
              fVar21 = fVar23;
            }
            fVar22 = 0.0;
            if (0.0 <= fVar23) {
              fVar22 = fVar21;
            }
            UnityEngine_AudioSource__set_time_4348598(fVar22,lVar9,0);
            fVar22 = (float)exp2f((*(float *)(lVar14 + 0x44) + *(float *)(lVar4 + 0x24)) / 1200.0);
            fVar21 = 2.0;
            if (fVar22 <= 2.0) {
              fVar21 = fVar22;
            }
            fVar23 = 0.5;
            if (0.5 <= fVar22) {
              fVar23 = fVar21;
            }
            UnityEngine_AudioSource__set_pitch_43484e0(fVar23,lVar9,0);
            puVar2 = PTR_DAT_04cab1f0;
            fVar21 = *(float *)(lVar14 + 0x38);
            fVar22 = *(float *)(lVar4 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar20 = func_0x049b5300(0x41200000,(fVar21 + fVar22) / 20.0);
            *(undefined4 *)(param_1 + 0xa8) = uVar20;
            uVar17 = UnityEngine_AudioSource__set_volume_434840c(0,lVar9,0);
            if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2a) != '\0') {
              if ((bRam0000000004fa5561 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf5ef0);
                FUN_02132f7c(PTR_DAT_04cb1c18);
                bRam0000000004fa5561 = 1;
              }
              if (lVar9 != 0) {
                lVar14 = *(long *)(lVar9 + 0x10);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                            (lVar9,*(undefined8 *)PTR_DAT_04cb1c18,0);
                }
                if (pcRam0000000004fa5580 == (code *)0x0) {
                  pcRam0000000004fa5580 = (code *)FUN_02132f40(&UNK_00e5bea3);
                }
                    /* WARNING: Could not recover jumptable at 0x04448210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar17 = (*pcRam0000000004fa5580)(lVar14,0);
                return uVar17;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                        (0,*(undefined8 *)PTR_DAT_04cb1c18,0);
            }
            return uVar17;
          }
        }
      }
    }
    goto LAB_024770ac;
  }
  if ((*(long *)(lVar14 + 0x80) == 0) || (lVar4 = *(long *)(param_1 + 0x58), lVar4 == 0))
  goto LAB_024770ac;
  iVar24 = *(int *)(*(long *)(lVar14 + 0x80) + 0x18);
  plVar8 = *(long **)(lVar14 + 0x10);
  iVar13 = 0;
  if (iVar24 != 0) {
    iVar13 = (param_2 + 1) / iVar24;
  }
  iVar24 = (param_2 + 1) - iVar13 * iVar24;
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cad660 + 0x20) + 0xc0) + 0x118);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_48419e0(5);
  }
  *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
  if (*(long *)(lVar4 + 0x10) == 0) {
    System_Collections_Generic_Dictionary_object__int___Initialize_34aa290
              (lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x10));
  }
  plVar15 = *(long **)(lVar4 + 0x30);
  lVar5 = *(long *)(lVar4 + 0x18);
  if (plVar15 == (long *)0x0) {
    if (plVar8 == (long *)0x0) goto LAB_035aa7ec;
    uVar3 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470(lVar9);
    }
    lVar10 = *plVar15;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_035aa46c;
        }
        uVar6 = uVar6 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar9,1);
LAB_035aa46c:
    uVar3 = (*(code *)*puVar7)(plVar15,plVar8,puVar7[1]);
  }
  lVar9 = *(long *)(lVar4 + 0x10);
  if (lVar9 == 0) goto LAB_035aa7ec;
  uVar18 = *(uint *)(lVar9 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar13 = 0;
  if (uVar18 != 0) {
    iVar13 = (int)uVar3 / (int)uVar18;
  }
  uVar16 = uVar3 - iVar13 * uVar18;
  if (uVar16 < uVar18) {
    piVar19 = (int *)(lVar9 + (ulong)uVar16 * 4 + 0x20);
    uVar18 = *piVar19 - 1;
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)FUN_02773e98(*(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x18));
      if (lVar5 == 0) goto LAB_035aa7ec;
      uVar17 = *(undefined8 *)(lVar5 + 0x18);
      uVar16 = (uint)uVar17;
      if (uVar18 < uVar16) {
        lVar9 = lVar5 + 0x20;
        iVar13 = 0;
        do {
          uVar16 = (uint)uVar17;
          if (*(uint *)(lVar9 + (long)(int)uVar18 * 0x18) == uVar3) {
            if (plVar15 == (long *)0x0) goto LAB_035aa7ec;
            uVar6 = (**(code **)(*plVar15 + 0x1b8))
                              (plVar15,*(undefined8 *)(lVar9 + (long)(int)uVar18 * 0x18 + 8),plVar8,
                               *(undefined8 *)(*plVar15 + 0x1c0));
            if ((uVar6 & 1) != 0) {
              if (*(uint *)(lVar5 + 0x18) <= uVar18) goto LAB_035aa7e8;
              lVar9 = lVar9 + (long)(int)uVar18 * 0x18;
              goto LAB_035aa7c8;
            }
            uVar16 = *(uint *)(lVar5 + 0x18);
          }
          if (uVar16 <= uVar18) goto LAB_035aa7e8;
          uVar18 = *(uint *)(lVar9 + (long)(int)uVar18 * 0x18 + 4);
          if ((int)uVar16 <= iVar13) {
            System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                      (0);
          }
          uVar17 = *(undefined8 *)(lVar5 + 0x18);
          iVar13 = iVar13 + 1;
          uVar16 = (uint)uVar17;
        } while (uVar18 < uVar16);
      }
    }
    else {
      if (lVar5 == 0) goto LAB_035aa7ec;
      uVar17 = *(undefined8 *)(lVar5 + 0x18);
      uVar16 = (uint)uVar17;
      if (uVar18 < uVar16) {
        lVar9 = lVar5 + 0x20;
        iVar13 = 0;
        do {
          uVar16 = (uint)uVar17;
          if (*(uint *)(lVar9 + (long)(int)uVar18 * 0x18) == uVar3) {
            lVar10 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 8);
            uVar17 = *(undefined8 *)(lVar9 + (long)(int)uVar18 * 0x18 + 8);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0216b470(lVar10);
            }
            lVar11 = *plVar15;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar10) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_035aa560;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar10,0);
LAB_035aa560:
            uVar6 = (*(code *)*puVar7)(plVar15,uVar17,plVar8,puVar7[1]);
            if ((uVar6 & 1) != 0) {
              if (uVar18 < *(uint *)(lVar5 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar18 * 0x18;
LAB_035aa7c8:
                *(int *)(lVar9 + 0x10) = iVar24;
                return 1;
              }
              goto LAB_035aa7e8;
            }
            uVar16 = *(uint *)(lVar5 + 0x18);
          }
          if (uVar16 <= uVar18) goto LAB_035aa7e8;
          uVar18 = *(uint *)(lVar9 + (long)(int)uVar18 * 0x18 + 4);
          if ((int)uVar16 <= iVar13) {
            System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                      (0);
          }
          uVar17 = *(undefined8 *)(lVar5 + 0x18);
          iVar13 = iVar13 + 1;
          uVar16 = (uint)uVar17;
        } while (uVar18 < uVar16);
      }
    }
    if (*(int *)(lVar4 + 0x28) < 1) {
      uVar18 = *(uint *)(lVar4 + 0x20);
      if (uVar18 == uVar16) {
        System_Collections_Generic_Dictionary_object__int___Resize_34aabb4
                  (lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x1b8));
        lVar14 = *(long *)(lVar4 + 0x10);
        *(uint *)(lVar4 + 0x20) = uVar16 + 1;
        if (lVar14 == 0) goto LAB_035aa7ec;
        uVar16 = *(uint *)(lVar14 + 0x18);
        iVar13 = 0;
        if (uVar16 != 0) {
          iVar13 = (int)uVar3 / (int)uVar16;
        }
        uVar1 = uVar3 - iVar13 * uVar16;
        if (uVar16 <= uVar1) goto LAB_035aa7e8;
        lVar5 = *(long *)(lVar4 + 0x18);
        piVar19 = (int *)(lVar14 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar5 = *(long *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x20) = uVar18 + 1;
      }
      if (lVar5 == 0) {
LAB_035aa7ec:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar18) goto LAB_035aa7e8;
      lVar5 = lVar5 + (long)(int)uVar18 * 0x18;
    }
    else {
      uVar18 = *(uint *)(lVar4 + 0x24);
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      if (uVar16 <= uVar18) goto LAB_035aa7e8;
      lVar5 = lVar5 + (long)(int)uVar18 * 0x18;
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
    }
    *(uint *)(lVar5 + 0x20) = uVar3;
    iVar13 = *piVar19;
    *(long *)(lVar5 + 0x28) = (long)plVar8;
    *(int *)(lVar5 + 0x24) = iVar13 + -1;
    thunk_FUN_02134474((long *)(lVar5 + 0x28),plVar8);
    *(int *)(lVar5 + 0x30) = iVar24;
    *piVar19 = uVar18 + 1;
    return 1;
  }
LAB_035aa7e8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

