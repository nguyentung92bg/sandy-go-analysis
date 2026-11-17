/* IL2CPP: Dino.BusSand.AudioHub$$PlayDepth
bool Dino_BusSand_AudioHub__PlayDepth (Dino_BusSand_AudioHub_o* __this, System_String_o* id, float volume, float pitch, float pan, float delay, int32_t depth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.AudioHub$$PlayDepth
   bool Dino_BusSand_AudioHub__PlayDepth (Dino_BusSand_AudioHub_o* __this, System_String_o* id,
   float volume, float pitch, float pan, float delay, int32_t depth, const MethodInfo* method); */

uint Dino_BusSand_AudioHub__PlayDepth_2375064
               (float param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,int param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
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
  
  if ((bRam0000000004f9c7ef & 1) == 0) {
                    /* try { // try from 024750bc to 02575477 has its CatchHandler @ 024750bc
                       catch() { ... } // from try @ 024750bc with catch @ 024750bc
                       catch() { ... } // from try @ 024754a4 with catch @ 024750bc
                       catch() { ... } // from try @ 024754c8 with catch @ 024750bc
                       catch() { ... } // from try @ 024754fc with catch @ 024750bc
                       catch() { ... } // from try @ 02475570 with catch @ 024750bc */
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
  uVar6 = System_String__IsNullOrEmpty_46d2084(param_6,0);
  uVar15 = 0;
  if ((3 < param_7) || ((uVar6 & 1) != 0)) goto LAB_0247539c;
  lVar13 = *(long *)(param_5 + 0x28);
  uVar7 = Dino_BusSand_AudioHub__Key_23746fc(param_5,param_6);
  if (lVar13 == 0) goto LAB_024759b8;
  uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar13,uVar7,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar6 & 1) == 0) {
    lVar13 = *(long *)(param_5 + 0x40);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,param_6,0);
    if (lVar13 == 0) goto LAB_024759b8;
    uVar6 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (lVar13,uVar7,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar6 & 1) != 0) {
      uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,param_6,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar7,0);
    }
LAB_02475398:
    uVar15 = 0;
    goto LAB_0247539c;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  uVar6 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(lStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
  puVar2 = PTR_DAT_04cab1f0;
  if ((uVar6 & 1) != 0) {
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,param_5,param_6);
    uVar15 = 1;
    goto LAB_0247539c;
  }
  lVar13 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar16 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((lStack_a8 == 0) || (*(long *)(param_5 + 0x48) == 0)) goto LAB_024759b8;
  uVar7 = *(undefined8 *)(lStack_a8 + 0x10);
  uVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                    (*(long *)(param_5 + 0x48),uVar7,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
  fVar17 = fVar16 - fStack_ac;
  if ((uVar6 & 1) == 0) {
    fVar17 = _UNK_00e20560;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar17 < *(float *)(lStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(lStack_a8 + 0x58) < 1) {
    lVar13 = 0;
  }
  else {
    if (*(long *)(param_5 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(param_5 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar23 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar13 = 0;
    while (lVar8 = lVar13,
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_d0,*(undefined8 *)puVar3), lVar14 = lStack_c0, (uVar6 & 1) != 0
          ) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar7,0);
      lVar13 = lVar8;
                    /* try { // try from 02475478 to 0257547b has its CatchHandler @ 024754c8 */
      if (((((uVar6 & 1) == 0) &&
           (uVar6 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar14), (uVar6 & 1) != 0)) &&
          (*(float *)(lVar14 + 0x38) <= 0.0)) &&
         ((iVar23 = iVar23 + 1, lVar13 = lVar14, lVar8 != 0 &&
          (lVar13 = lVar8, *(float *)(lVar14 + 0x30) < *(float *)(lVar8 + 0x30))))) {
        lVar13 = lVar14;
      }
    }
    FUN_01e7a8a8(&uStack_108);
                    /* try { // try from 024754c4 to 025754c7 has its CatchHandler @ 024754cc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475478 with catch @ 024754c8
                       try { // try from 024754c8 to 025754e3 has its CatchHandler @ 024750bc */
    if (lStack_a8 == 0) goto LAB_024759b8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475498 with catch @ 024754cc
                       catch(type#1 @ 049bb748) { ... } // from try @ 024754c4 with catch @ 024754cc
                        */
    lVar13 = 0;
    if (*(int *)(lStack_a8 + 0x58) <= iVar23) {
      lVar13 = lVar8;
    }
  }
  if (*(float *)(lStack_a8 + 0x68) == 0.0) {
                    /* try { // try from 024754e4 to 025754fb has its CatchHandler @ 02475568 */
    iVar23 = 0;
  }
  else {
    fVar22 = *(float *)(lStack_a8 + 0x6c);
    if (*(float *)(lStack_a8 + 0x6c) <= 0.0) {
      fVar22 = 1.5;
    }
                    /* try { // try from 024754fc to 02575557 has its CatchHandler @ 024750bc */
    if (fVar22 <= fVar17) {
LAB_02475534:
      iVar23 = 0;
    }
    else {
      if (*(long *)(param_5 + 0x60) == 0) goto LAB_024759b8;
      uVar6 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(param_5 + 0x60),uVar7,&iStack_d4,*(undefined8 *)PTR_DAT_04cad650)
      ;
      if ((uVar6 & 1) == 0) goto LAB_02475534;
      iVar23 = iStack_d4 + 1;
    }
    if ((lStack_a8 == 0) || (*(long *)(param_5 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(lStack_a8 + 0x70);
                    /* try { // try from 02475558 to 02575567 has its CatchHandler @ 02475568 */
    iVar12 = iVar23;
    if (iVar1 <= iVar23) {
      iVar12 = iVar1;
    }
                    /* catch() { ... } // from try @ 024754e4 with catch @ 02475568
                       catch() { ... } // from try @ 02475558 with catch @ 02475568 */
    if (0 < iVar1) {
      iVar23 = iVar12;
    }
                    /* try { // try from 0247556c to 0257556f has its CatchHandler @ 02475578 */
                    /* try { // try from 02475570 to 0257557b has its CatchHandler @ 024750bc */
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(param_5 + 0x60),uVar7,iVar23,*(undefined8 *)PTR_DAT_04cad660);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0247556c with catch @ 02475578
                        */
                    /* try { // try from 0247557c to 02575a37 has its CatchHandler @ 0247557c
                       catch() { ... } // from try @ 0247557c with catch @ 0247557c
                       catch() { ... } // from try @ 02475b38 with catch @ 0247557c
                       catch() { ... } // from try @ 02475ce4 with catch @ 0247557c
                       catch() { ... } // from try @ 02475d2c with catch @ 0247557c
                       catch() { ... } // from try @ 02475d58 with catch @ 0247557c */
  if ((*(long *)(param_5 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar16,*(long *)(param_5 + 0x48),uVar7,*(undefined8 *)PTR_DAT_04cbb128),
     lStack_a8 == 0)) goto LAB_024759b8;
  lVar14 = *(long *)(lStack_a8 + 0x80);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) < 1)) {
LAB_02475720:
    uVar15 = 0;
  }
  else {
    uVar4 = Dino_BusSand_AudioHub__PickClip_2375c0c(param_5);
    lVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar14,uVar4,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar14 == 0) goto LAB_024759b8;
    lVar8 = Dino_BusSand_AudioHub__Clip_23742fc(param_5,*(undefined8 *)(lVar14 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar6 & 1) == 0) goto LAB_02475720;
    if (lStack_a8 == 0) goto LAB_024759b8;
    iVar12 = *(int *)(lStack_a8 + 0x5c);
    if (iVar12 < 1) {
      iVar12 = 0x80;
    }
    lVar9 = Dino_BusSand_AudioHub__Acquire_2375f30(param_5,iVar12);
    uVar15 = 0;
    if (lVar9 != 0) {
      if ((lVar13 != 0) && (lVar13 != lVar9)) {
        *(undefined4 *)(lVar13 + 0x38) = 0x42200000;
      }
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar24 = *(float *)(lStack_a8 + 0x38);
      fVar22 = *(float *)(lVar14 + 0x20);
      fVar17 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x3c),*(undefined4 *)(lStack_a8 + 0x40)
                                 ,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar21 = *(float *)(lStack_a8 + 0x44);
      fVar20 = *(float *)(lVar14 + 0x24);
      fVar18 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x48),*(undefined4 *)(lStack_a8 + 0x4c)
                                 ,0);
      if ((lStack_a8 == 0) || (lVar13 = *(long *)(lVar9 + 0x10), lVar13 == 0)) goto LAB_024759b8;
      fVar25 = *(float *)(lStack_a8 + 0x68);
      uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar13,0);
      if ((uVar6 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar13,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar13,lVar8,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar13,0,0);
      *(undefined8 *)(lVar9 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x18),uVar7);
      if (lStack_a8 == 0) goto LAB_024759b8;
      uVar6 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
      puVar11 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar6 & 1) == 0) {
        if (lStack_a8 == 0) goto LAB_024759b8;
        puVar11 = (undefined8 *)(lStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar9 + 0x20) = *puVar11;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
      lVar10 = *(long *)puVar2;
      *(int *)(lVar9 + 0x28) = iVar12;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar22 = (float)func_0x049b5300(0x41200000,(fVar24 + fVar22 + fVar17) / 20.0);
      fVar22 = fVar22 * param_1;
      fVar17 = 4.0;
      if (fVar22 <= 4.0) {
        fVar17 = fVar22;
      }
      *(undefined8 *)(lVar9 + 0x34) = _UNK_00e698b8;
      fVar24 = 0.0;
      if (0.0 <= fVar22) {
        fVar24 = fVar17;
      }
      *(float *)(lVar9 + 0x2c) = fVar24;
      *(float *)(lVar9 + 0x30) = fVar16;
      fVar17 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(param_5,*(undefined8 *)(lVar9 + 0x20));
      fVar24 = fVar24 * fVar17;
      fVar17 = 1.0;
      if (fVar24 <= 1.0) {
        fVar17 = fVar24;
      }
      fVar22 = 0.0;
      if (0.0 <= fVar24) {
        fVar22 = fVar17;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar22,lVar13,0);
      fVar22 = (float)exp2f((fVar21 + fVar20 + fVar18 + fVar25 * (float)iVar23) / 1200.0);
      fVar22 = fVar22 * param_2;
      fVar17 = 3.0;
      if (fVar22 <= 3.0) {
        fVar17 = fVar22;
      }
      fVar24 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar22) {
        fVar24 = fVar17;
      }
      UnityEngine_AudioSource__set_pitch_43484e0(fVar24,lVar13,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar17 = 0.0;
      if (*(char *)(lStack_a8 + 0x60) == '\0') {
        fVar22 = *(float *)(lStack_a8 + 100);
        if (fVar22 <= 0.0) {
          fVar22 = 1.0;
        }
        fVar22 = fVar22 * param_3;
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        fVar17 = -1.0;
        if (-1.0 <= fVar22) {
          fVar17 = fVar24;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar17,lVar13,0);
      if (lVar8 == 0) goto LAB_024759b8;
      iVar23 = *(int *)(lVar14 + 0x1c);
      fVar22 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar8,0);
      fVar18 = 0.0;
      fVar24 = (float)iVar23 / 1000.0;
      fVar17 = 0.0;
      if (0.0 <= fVar22 + _UNK_00e20000) {
        fVar17 = fVar22 + _UNK_00e20000;
      }
      if (fVar24 <= fVar17) {
        fVar17 = fVar24;
      }
      fVar22 = 0.0;
      if (0.0 <= fVar24) {
        fVar22 = fVar17;
      }
      UnityEngine_AudioSource__set_time_4348598(fVar22,lVar13,0);
      fVar17 = (float)*(int *)(lVar14 + 0x28) / 1000.0 + param_4;
      if (fVar17 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar13,0);
      }
      else {
        dVar19 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar19 + (double)fVar17,lVar13,0);
        fVar18 = fVar16 + fVar17 + _UNK_00e2043c;
      }
      *(float *)(lVar9 + 0x3c) = fVar18;
      uVar15 = 1;
    }
  }
  if ((lStack_a8 != 0) &&
     ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),param_5),
      lStack_a8 != 0)))) {
    if (*(long *)(lStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar2 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_f0,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        uVar5 = Dino_BusSand_AudioHub__PlayDepth_2375064
                          (param_1,param_2,param_3,param_4,param_5,uStack_e0,param_7 + 1);
        uVar15 = uVar15 | uVar5;
      }
      FUN_01e77dbc(&uStack_108);
    }
LAB_0247539c:
    return uVar15 & 1;
  }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

