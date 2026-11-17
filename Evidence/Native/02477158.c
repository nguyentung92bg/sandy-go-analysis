/* IL2CPP: Dino.BusSand.AudioHub$$Update
void Dino_BusSand_AudioHub__Update (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.AudioHub$$Update
   void Dino_BusSand_AudioHub__Update (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_AudioHub__Update_2377158(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9c7fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb230);
    bRam0000000004f9c7fa = 1;
  }
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_98 = 0;
  fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  puVar6 = PTR_DAT_04cbb230;
  puVar5 = PTR_DAT_04cbb208;
  puVar4 = PTR_DAT_04cbb200;
  puVar3 = PTR_DAT_04cab1f0;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_024777e4;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_b0,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
  lStack_80 = lStack_a0;
  puStack_88 = puStack_a8;
  uStack_90 = uStack_b0;
  uStack_b0 = 0;
  puStack_a8 = &uStack_90;
  while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_90,*(undefined8 *)puVar5), lVar8 = lStack_80, (uVar7 & 1) != 0)
  {
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lStack_80);
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),0);
    }
    else {
      fVar14 = *(float *)(lVar8 + 0x34);
      if (0.0 < *(float *)(lVar8 + 0x38)) {
        fVar14 = fVar14 - fVar11 * *(float *)(lVar8 + 0x38);
        *(float *)(lVar8 + 0x34) = fVar14;
        if (0.0 < fVar14) goto LAB_024772b4;
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_AudioSource__Stop_43488b8(*(long *)(lVar8 + 0x10),0);
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined4 *)(lVar8 + 0x34) = 0;
        *(undefined4 *)(lVar8 + 0x38) = 0;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),0);
        *(undefined4 *)(lVar8 + 0x3c) = 0;
      }
      else {
LAB_024772b4:
        lVar10 = *(long *)(lVar8 + 0x10);
        fVar15 = *(float *)(lVar8 + 0x2c);
        fVar12 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8
                                  (param_1,*(undefined8 *)(lVar8 + 0x20));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar12 = fVar15 * fVar14 * fVar12;
        fVar14 = 1.0;
        if (fVar12 <= 1.0) {
          fVar14 = fVar12;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar12) {
          fVar15 = fVar14;
        }
        UnityEngine_AudioSource__set_volume_434840c(fVar15,lVar10,0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_90,*(undefined8 *)puVar4);
  fVar14 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0xb4) < fVar14) {
    fVar12 = *(float *)(param_1 + 0xb0);
    fVar14 = -(fVar11 * _UNK_00e200f8);
    if (0.0 <= 1.0 - fVar12) {
      fVar14 = fVar11 * _UNK_00e200f8;
    }
    fVar14 = fVar12 + fVar14;
    if (ABS(1.0 - fVar12) <= fVar11 * _UNK_00e200f8) {
      fVar14 = 1.0;
    }
    *(float *)(param_1 + 0xb0) = fVar14;
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (lVar10 == 0) {
    fVar14 = 1.0;
  }
  else {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      if (lVar10 == 0) goto LAB_024777e4;
    }
    fVar15 = (float)(**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    fVar12 = 1.0;
    if (fVar15 <= 1.0) {
      fVar12 = fVar15;
    }
    fVar14 = 0.0;
    if (0.0 <= fVar15) {
      fVar14 = fVar12;
    }
  }
  fVar12 = *(float *)(param_1 + 0xb0);
  if (fVar14 <= *(float *)(param_1 + 0xb0)) {
    fVar12 = fVar14;
  }
  fVar15 = *(float *)(param_1 + 0xb8);
  fVar14 = 3.0;
  if (fVar15 <= fVar12) {
    fVar14 = _UNK_00e20094;
  }
  fVar13 = -(fVar11 * fVar14);
  if (0.0 <= fVar12 - fVar15) {
    fVar13 = fVar11 * fVar14;
  }
  fVar13 = fVar15 + fVar13;
  if (ABS(fVar12 - fVar15) <= fVar11 * fVar14) {
    fVar13 = fVar12;
  }
  *(float *)(param_1 + 0xb8) = fVar13;
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x94);
  fVar15 = *(float *)(param_1 + 0x98);
  uVar9 = *(undefined8 *)puVar6;
  fVar13 = fVar11 * *(float *)(param_1 + 0x9c);
  fVar14 = -(fVar11 * *(float *)(param_1 + 0x9c));
  if (0.0 <= fVar15 - fVar12) {
    fVar14 = fVar13;
  }
  fVar14 = fVar12 + fVar14;
  if (ABS(fVar15 - fVar12) <= fVar13) {
    fVar14 = fVar15;
  }
  *(float *)(param_1 + 0x94) = fVar14;
  fVar14 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(param_1,uVar9);
  lVar8 = *(long *)(param_1 + 0x78);
  if (lVar8 == 0) goto LAB_024777e4;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x80)) goto LAB_024777ec;
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x80), lVar10 == 0)) goto LAB_024777e4;
  lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
  if (*(int *)(lVar10 + 0x18) < 2) {
LAB_024775b0:
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    if ((*(char *)(*(long *)(lVar10 + 0xb8) + 0x2a) != '\0') && (*(float *)(param_1 + 0xa4) < 0.0))
    {
      if (lVar8 == 0) goto LAB_024777e4;
      uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        if ((((uVar7 & 1) != 0) &&
            (uVar7 = UnityEngine_AudioSource__get_loop_4348adc(lVar8,0), (uVar7 & 1) == 0)) &&
           (fVar12 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
           2.0 < fVar12 - *(float *)(param_1 + 0xbc))) {
          *(undefined4 *)(param_1 + 0x94) = 0;
          if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x58) == 0))
          goto LAB_024777e4;
          uVar7 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                            (*(long *)(param_1 + 0x58),
                             *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10),&uStack_98,
                             *(undefined8 *)PTR_DAT_04cad650);
          uVar9 = 0;
          uVar1 = (undefined4)uStack_98;
LAB_02477698:
          if ((uVar7 & 1) == 0) {
            uVar1 = 0;
          }
          Dino_BusSand_AudioHub__StartTrack_2376d50(param_1,uVar1,uVar9);
        }
      }
    }
  }
  else {
    if (lVar8 == 0) goto LAB_024777e4;
    uVar9 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0), (uVar7 & 1) == 0)) ||
       (0.0 <= *(float *)(param_1 + 0xa4))) goto LAB_024775b0;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_024777e4;
    fVar12 = *(float *)(*(long *)(param_1 + 0x88) + 0x7c);
    lVar10 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
    if (lVar10 == 0) goto LAB_024777e4;
    if (fVar12 <= 0.0) {
      fVar12 = 1.5;
    }
    fVar15 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar10,0);
    fVar13 = (float)UnityEngine_AudioSource__get_time_43484e4(lVar8,0);
    if (fVar15 - fVar13 <= fVar12) {
      if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_024777e4;
      uVar7 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10)
                         ,(long)&uStack_98 + 4,*(undefined8 *)PTR_DAT_04cad650);
      uVar9 = 1;
      uVar1 = uStack_98._4_4_;
      goto LAB_02477698;
    }
  }
  fVar12 = 1.0;
  lVar8 = *(long *)(param_1 + 0x78);
  if (0.0 <= *(float *)(param_1 + 0xa4)) {
    fVar11 = fVar11 + *(float *)(param_1 + 0xa4);
    fVar12 = fVar11 / *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa4) = fVar11;
    fVar11 = 1.0;
    if (fVar12 <= 1.0) {
      fVar11 = fVar12;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar12) {
      fVar15 = fVar11;
    }
    if (lVar8 == 0) goto LAB_024777e4;
    uVar2 = 1 - *(int *)(param_1 + 0x80);
    if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_024777ec;
    lVar8 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_024777e4;
    fVar13 = *(float *)(param_1 + 0xb8);
    fVar16 = *(float *)(param_1 + 0x94);
    fVar17 = *(float *)(param_1 + 0xac);
    fVar12 = fVar15 * _UNK_00e2082c * 0.5;
    fVar11 = (float)cosf(fVar12);
    UnityEngine_AudioSource__set_volume_434840c(fVar14 * fVar13 * fVar16 * fVar11 * fVar17,lVar8,0);
    if (1.0 <= fVar15) {
      UnityEngine_AudioSource__Stop_43488b8(lVar8,0);
      *(undefined4 *)(param_1 + 0xa4) = 0xbf800000;
    }
    fVar12 = (float)func_0x049b5320(fVar12);
    lVar8 = *(long *)(param_1 + 0x78);
  }
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x80)) {
LAB_024777ec:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
    if (lVar8 != 0) {
      UnityEngine_AudioSource__set_volume_434840c
                (fVar14 * *(float *)(param_1 + 0xb8) *
                          *(float *)(param_1 + 0x94) * fVar12 * *(float *)(param_1 + 0xa8),lVar8,0);
      return;
    }
  }
LAB_024777e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

