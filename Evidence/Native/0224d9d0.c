/* IL2CPP: Dino.BusSand.App.Audio$$Gameplay
void Dino_BusSand_App_Audio__Gameplay (System_String_o* key, float volumeScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Audio$$Gameplay
   void Dino_BusSand_App_Audio__Gameplay (System_String_o* key, float volumeScale, const MethodInfo*
   method); */

ulong Dino_BusSand_App_Audio__Gameplay_214d9d0(float param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  float fStack_ac;
  long lStack_a8;
  
                    /* catch() { ... } // from try @ 0224d98c with catch @ 0224d9d0 */
  puVar2 = PTR_DAT_04cab1e8;
                    /* catch() { ... } // from try @ 0224d93c with catch @ 0224d9d4 */
  if ((bRam0000000004f9b7a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    bRam0000000004f9b7a3 = 1;
  }
  uVar6 = *(ulong *)puVar2;
  if (*(int *)(uVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = *(ulong *)puVar2;
  }
  if (*(char *)(*(long *)(uVar6 + 0xb8) + 8) == '\0') {
    return uVar6;
  }
  if (*(int *)(uVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9b7a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9b7a4 = 1;
  }
  uVar6 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  puVar2 = PTR_DAT_04cab1f0;
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (lVar7 == 0) {
    return 0;
  }
  if ((bRam0000000004f9c7ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb220);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cbb120);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cbb128);
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb228);
    FUN_02132f7c(PTR_DAT_04cbb268);
    FUN_02132f7c(PTR_DAT_04cbb230);
    FUN_02132f7c(PTR_DAT_04cbb270);
    bRam0000000004f9c7ef = 1;
  }
  lStack_a8 = 0;
  fStack_ac = 0.0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  iStack_d4 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uVar6 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  uVar16 = 0;
  if ((uVar6 & 1) != 0) goto LAB_0247539c;
  lVar14 = *(long *)(lVar7 + 0x28);
  uVar8 = Dino_BusSand_AudioHub__Key_23746fc(lVar7,param_2);
  if (lVar14 == 0) goto LAB_024759b8;
  uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar14,uVar8,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x40);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,param_2,0);
    if (lVar7 == 0) goto LAB_024759b8;
    uVar6 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (lVar7,uVar8,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar6 & 1) != 0) {
      uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar8,0);
    }
LAB_02475398:
    uVar16 = 0;
    goto LAB_0247539c;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  uVar6 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(lStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
  puVar2 = PTR_DAT_04cab1f0;
  if ((uVar6 & 1) != 0) {
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar7,param_2);
    uVar16 = 1;
    goto LAB_0247539c;
  }
  lVar14 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar14 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((lStack_a8 == 0) || (*(long *)(lVar7 + 0x48) == 0)) goto LAB_024759b8;
  uVar8 = *(undefined8 *)(lStack_a8 + 0x10);
  uVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                    (*(long *)(lVar7 + 0x48),uVar8,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
  fVar18 = fVar17 - fStack_ac;
  if ((uVar6 & 1) == 0) {
    fVar18 = _UNK_00e20560;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar18 < *(float *)(lStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(lStack_a8 + 0x58) < 1) {
    lVar14 = 0;
  }
  else {
    if (*(long *)(lVar7 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(lVar7 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar24 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar14 = 0;
    while (lVar9 = lVar14,
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_d0,*(undefined8 *)puVar3), lVar15 = lStack_c0, (uVar6 & 1) != 0
          ) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar8,0);
      lVar14 = lVar9;
      if (((((uVar6 & 1) == 0) &&
           (uVar6 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar15), (uVar6 & 1) != 0)) &&
          (*(float *)(lVar15 + 0x38) <= 0.0)) &&
         ((iVar24 = iVar24 + 1, lVar14 = lVar15, lVar9 != 0 &&
          (lVar14 = lVar9, *(float *)(lVar15 + 0x30) < *(float *)(lVar9 + 0x30))))) {
        lVar14 = lVar15;
      }
    }
    FUN_01e7a8a8(&uStack_108);
    if (lStack_a8 == 0) goto LAB_024759b8;
    lVar14 = 0;
    if (*(int *)(lStack_a8 + 0x58) <= iVar24) {
      lVar14 = lVar9;
    }
  }
  if (*(float *)(lStack_a8 + 0x68) == 0.0) {
    iVar24 = 0;
  }
  else {
    fVar23 = *(float *)(lStack_a8 + 0x6c);
    if (*(float *)(lStack_a8 + 0x6c) <= 0.0) {
      fVar23 = 1.5;
    }
    if (fVar23 <= fVar18) {
LAB_02475534:
      iVar24 = 0;
    }
    else {
      if (*(long *)(lVar7 + 0x60) == 0) goto LAB_024759b8;
      uVar6 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(lVar7 + 0x60),uVar8,&iStack_d4,*(undefined8 *)PTR_DAT_04cad650);
      if ((uVar6 & 1) == 0) goto LAB_02475534;
      iVar24 = iStack_d4 + 1;
    }
    if ((lStack_a8 == 0) || (*(long *)(lVar7 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(lStack_a8 + 0x70);
    iVar13 = iVar24;
    if (iVar1 <= iVar24) {
      iVar13 = iVar1;
    }
    if (0 < iVar1) {
      iVar24 = iVar13;
    }
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(lVar7 + 0x60),uVar8,iVar24,*(undefined8 *)PTR_DAT_04cad660);
  }
  if ((*(long *)(lVar7 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar17,*(long *)(lVar7 + 0x48),uVar8,*(undefined8 *)PTR_DAT_04cbb128),
     lStack_a8 == 0)) goto LAB_024759b8;
  lVar15 = *(long *)(lStack_a8 + 0x80);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) < 1)) {
LAB_02475720:
    uVar16 = 0;
  }
  else {
    uVar4 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar7);
    lVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar15,uVar4,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar15 == 0) goto LAB_024759b8;
    lVar9 = Dino_BusSand_AudioHub__Clip_23742fc(lVar7,*(undefined8 *)(lVar15 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar6 & 1) == 0) goto LAB_02475720;
    if (lStack_a8 == 0) goto LAB_024759b8;
    iVar13 = *(int *)(lStack_a8 + 0x5c);
    if (iVar13 < 1) {
      iVar13 = 0x80;
    }
    lVar10 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar7,iVar13);
    uVar16 = 0;
    if (lVar10 != 0) {
      if ((lVar14 != 0) && (lVar14 != lVar10)) {
        *(undefined4 *)(lVar14 + 0x38) = 0x42200000;
      }
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar25 = *(float *)(lStack_a8 + 0x38);
      fVar23 = *(float *)(lVar15 + 0x20);
      fVar18 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x3c),*(undefined4 *)(lStack_a8 + 0x40)
                                 ,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar22 = *(float *)(lStack_a8 + 0x44);
      fVar21 = *(float *)(lVar15 + 0x24);
      fVar19 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x48),*(undefined4 *)(lStack_a8 + 0x4c)
                                 ,0);
      if ((lStack_a8 == 0) || (lVar14 = *(long *)(lVar10 + 0x10), lVar14 == 0)) goto LAB_024759b8;
      fVar26 = *(float *)(lStack_a8 + 0x68);
      uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar14,0);
      if ((uVar6 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar14,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar14,lVar9,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar14,0,0);
      *(undefined8 *)(lVar10 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar8);
      if (lStack_a8 == 0) goto LAB_024759b8;
      uVar6 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
      puVar12 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar6 & 1) == 0) {
        if (lStack_a8 == 0) goto LAB_024759b8;
        puVar12 = (undefined8 *)(lStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar10 + 0x20) = *puVar12;
      thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20));
      lVar11 = *(long *)puVar2;
      *(int *)(lVar10 + 0x28) = iVar13;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar23 = (float)func_0x049b5300(0x41200000,(fVar25 + fVar23 + fVar18) / 20.0);
      fVar23 = fVar23 * param_1;
      fVar18 = 4.0;
      if (fVar23 <= 4.0) {
        fVar18 = fVar23;
      }
      *(undefined8 *)(lVar10 + 0x34) = _UNK_00e698b8;
      fVar25 = 0.0;
      if (0.0 <= fVar23) {
        fVar25 = fVar18;
      }
      *(float *)(lVar10 + 0x2c) = fVar25;
      *(float *)(lVar10 + 0x30) = fVar17;
      fVar18 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(lVar7,*(undefined8 *)(lVar10 + 0x20));
      fVar25 = fVar25 * fVar18;
      fVar18 = 1.0;
      if (fVar25 <= 1.0) {
        fVar18 = fVar25;
      }
      fVar23 = 0.0;
      if (0.0 <= fVar25) {
        fVar23 = fVar18;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar23,lVar14,0);
      fVar23 = (float)exp2f((fVar22 + fVar21 + fVar19 + fVar26 * (float)iVar24) / 1200.0);
      fVar23 = fVar23 * 1.0;
      fVar18 = 3.0;
      if (fVar23 <= 3.0) {
        fVar18 = fVar23;
      }
      fVar25 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar23) {
        fVar25 = fVar18;
      }
      UnityEngine_AudioSource__set_pitch_43484e0(fVar25,lVar14,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar18 = 0.0;
      if (*(char *)(lStack_a8 + 0x60) == '\0') {
        fVar23 = *(float *)(lStack_a8 + 100);
        if (fVar23 <= 0.0) {
          fVar23 = 1.0;
        }
        fVar23 = fVar23 * 0.0;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        fVar18 = -1.0;
        if (-1.0 <= fVar23) {
          fVar18 = fVar25;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar18,lVar14,0);
      if (lVar9 == 0) goto LAB_024759b8;
      iVar24 = *(int *)(lVar15 + 0x1c);
      fVar23 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar9,0);
      fVar19 = 0.0;
      fVar25 = (float)iVar24 / 1000.0;
      fVar18 = 0.0;
      if (0.0 <= fVar23 + _UNK_00e20000) {
        fVar18 = fVar23 + _UNK_00e20000;
      }
      if (fVar25 <= fVar18) {
        fVar18 = fVar25;
      }
      fVar23 = 0.0;
      if (0.0 <= fVar25) {
        fVar23 = fVar18;
      }
      UnityEngine_AudioSource__set_time_4348598(fVar23,lVar14,0);
      fVar18 = (float)*(int *)(lVar15 + 0x28) / 1000.0 + 0.0;
      if (fVar18 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar14,0);
      }
      else {
        dVar20 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar20 + (double)fVar18,lVar14,0);
        fVar19 = fVar17 + fVar18 + _UNK_00e2043c;
      }
      *(float *)(lVar10 + 0x3c) = fVar19;
      uVar16 = 1;
    }
  }
  if ((lStack_a8 != 0) &&
     ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),lVar7), lStack_a8 != 0)
      ))) {
    if (*(long *)(lStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar2 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_f0,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        uVar5 = Dino_BusSand_AudioHub__PlayDepth_2375064(param_1,0x3f800000,0,0,lVar7,uStack_e0,1);
        uVar16 = uVar16 | uVar5;
      }
      FUN_01e77dbc(&uStack_108);
    }
LAB_0247539c:
    return (ulong)(uVar16 & 1);
  }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

