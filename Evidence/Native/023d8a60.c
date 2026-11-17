/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnEndDrag
void Dino_BusSand_App_UI_HomeAtelier__OnEndDrag (Dino_BusSand_App_UI_HomeAtelier_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnEndDrag
   void Dino_BusSand_App_UI_HomeAtelier__OnEndDrag (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_HomeAtelier__OnEndDrag_22d8a60
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,ulong param_4,
                long param_5)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double extraout_d0;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
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
  double in_stack_ffffffffffffffc8;
  
  uVar8 = param_4;
  if ((bRam0000000004f9c3d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    uVar8 = FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c3d9 = 1;
  }
  if (*(char *)(param_4 + 200) == '\0') {
    return uVar8;
  }
  *(undefined1 *)(param_4 + 200) = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
LAB_023d8c8c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_4 + 0x20),0);
  iVar5 = UnityEngine_Screen__get_width_436a6a0(0);
  fVar2 = 1.0;
  if (1.0 <= (float)iVar5) {
    fVar2 = (float)iVar5;
  }
  if (param_5 == 0) goto LAB_023d8c8c;
  fVar27 = *(float *)(param_5 + 0x10c);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar20 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  fVar21 = _UNK_00e20a9c;
  if (_UNK_00e20a9c <= fVar20) {
    fVar21 = fVar20;
  }
  fVar20 = *(float *)(param_4 + 0xb0);
  fVar27 = fVar20 + ((((param_3 / fVar2) * fVar27) / fVar21) / *(float *)(param_4 + 0x6c)) *
                    _UNK_00e208cc;
  uVar8 = FUN_049b52f0((double)fVar27,&stack0xffffffffffffffc8);
  fVar2 = _UNK_00e2098c;
  if (0.0 <= fVar27) {
    if (extraout_d0 == 0.5) {
      fVar27 = 1.0;
      goto LAB_023d8b7c;
    }
    fVar21 = (float)(int)(fVar27 + 0.5);
  }
  else if (extraout_d0 == -0.5) {
    fVar27 = -1.0;
LAB_023d8b7c:
    fVar21 = (float)in_stack_ffffffffffffffc8;
    if (((long)in_stack_ffffffffffffffc8 & 1U) != 0) {
      fVar21 = (float)in_stack_ffffffffffffffc8 + fVar27;
    }
  }
  else {
    fVar21 = (float)(int)(fVar27 + -0.5);
  }
  fVar24 = (float)(*(int *)(param_4 + 0x58) + -1);
  fVar27 = 0.0;
  if (0.0 <= fVar24) {
    fVar27 = fVar24;
  }
  if (fVar21 <= fVar27) {
    fVar27 = fVar21;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar21) {
    fVar24 = fVar27;
  }
  *(undefined1 *)(param_4 + 0xc9) = 1;
  *(float *)(param_4 + 0xb8) = fVar24;
  *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(param_4 + 0xec);
  puVar4 = PTR_DAT_04cad568;
  if (ABS(fVar24 - fVar20) <= fVar2) {
    return uVar8;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_04cad568;
  fVar27 = _UNK_00e20ae0;
  if (**(long **)(lVar9 + 0xb8) == 0) {
    return 0;
  }
  uVar14 = 0;
  if ((bRam0000000004f9c868 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cbb4d8);
    bRam0000000004f9c868 = 1;
    uVar14 = extraout_x1_01;
  }
  puVar3 = PTR_DAT_04cbb4d8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar14 = extraout_x1_02;
  }
  puVar4 = PTR_DAT_04cab1f0;
  uVar13 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9c827 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar14);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c827 = 1;
    uVar14 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar14 = extraout_x1_00;
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar14);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  uVar14 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
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
  uVar8 = System_String__IsNullOrEmpty_46d2084(uVar13,0);
  uVar19 = 0;
  if ((uVar8 & 1) != 0) goto LAB_0247539c;
  lVar17 = *(long *)(lVar9 + 0x28);
  uVar14 = Dino_BusSand_AudioHub__Key_23746fc(lVar9,uVar13);
  if (lVar17 == 0) goto LAB_024759b8;
  uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar17,uVar14,&lStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)(lVar9 + 0x40);
    uVar14 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,uVar13,0);
    if (lVar9 == 0) goto LAB_024759b8;
    uVar8 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (lVar9,uVar14,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar8 & 1) != 0) {
      uVar14 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar14,0);
    }
LAB_02475398:
    uVar19 = 0;
    goto LAB_0247539c;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  uVar8 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(lStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
  puVar4 = PTR_DAT_04cab1f0;
  if ((uVar8 & 1) != 0) {
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar9,uVar13);
    uVar19 = 1;
    goto LAB_0247539c;
  }
  lVar17 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar21 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((lStack_a8 == 0) || (*(long *)(lVar9 + 0x48) == 0)) goto LAB_024759b8;
  uVar14 = *(undefined8 *)(lStack_a8 + 0x10);
  uVar8 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                    (*(long *)(lVar9 + 0x48),uVar14,&fStack_ac,*(undefined8 *)PTR_DAT_04cbb220);
  fVar20 = fVar21 - fStack_ac;
  if ((uVar8 & 1) == 0) {
    fVar20 = _UNK_00e20560;
  }
  if (lStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(lStack_a8 + 0x50)) && (fVar20 < *(float *)(lStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(lStack_a8 + 0x58) < 1) {
    lVar17 = 0;
  }
  else {
    if (*(long *)(lVar9 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(lVar9 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar5 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar17 = 0;
    while (lVar10 = lVar17,
          uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_d0,*(undefined8 *)puVar3), lVar18 = lStack_c0, (uVar8 & 1) != 0
          ) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar14,0);
      lVar17 = lVar10;
      if (((((uVar8 & 1) == 0) &&
           (uVar8 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar18), (uVar8 & 1) != 0)) &&
          (*(float *)(lVar18 + 0x38) <= 0.0)) &&
         ((iVar5 = iVar5 + 1, lVar17 = lVar18, lVar10 != 0 &&
          (lVar17 = lVar10, *(float *)(lVar18 + 0x30) < *(float *)(lVar10 + 0x30))))) {
        lVar17 = lVar18;
      }
    }
    FUN_01e7a8a8(&uStack_108);
    if (lStack_a8 == 0) goto LAB_024759b8;
    lVar17 = 0;
    if (*(int *)(lStack_a8 + 0x58) <= iVar5) {
      lVar17 = lVar10;
    }
  }
  if (*(float *)(lStack_a8 + 0x68) == 0.0) {
    iVar5 = 0;
  }
  else {
    fVar24 = *(float *)(lStack_a8 + 0x6c);
    if (*(float *)(lStack_a8 + 0x6c) <= 0.0) {
      fVar24 = 1.5;
    }
    if (fVar24 <= fVar20) {
LAB_02475534:
      iVar5 = 0;
    }
    else {
      if (*(long *)(lVar9 + 0x60) == 0) goto LAB_024759b8;
      uVar8 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(lVar9 + 0x60),uVar14,&iStack_d4,*(undefined8 *)PTR_DAT_04cad650);
      if ((uVar8 & 1) == 0) goto LAB_02475534;
      iVar5 = iStack_d4 + 1;
    }
    if ((lStack_a8 == 0) || (*(long *)(lVar9 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(lStack_a8 + 0x70);
    iVar16 = iVar5;
    if (iVar1 <= iVar5) {
      iVar16 = iVar1;
    }
    if (0 < iVar1) {
      iVar5 = iVar16;
    }
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(lVar9 + 0x60),uVar14,iVar5,*(undefined8 *)PTR_DAT_04cad660);
  }
  if ((*(long *)(lVar9 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar21,*(long *)(lVar9 + 0x48),uVar14,*(undefined8 *)PTR_DAT_04cbb128),
     lStack_a8 == 0)) goto LAB_024759b8;
  lVar18 = *(long *)(lStack_a8 + 0x80);
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) < 1)) {
LAB_02475720:
    uVar19 = 0;
  }
  else {
    uVar6 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar9);
    lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar18,uVar6,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar18 == 0) goto LAB_024759b8;
    lVar10 = Dino_BusSand_AudioHub__Clip_23742fc(lVar9,*(undefined8 *)(lVar18 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar8 & 1) == 0) goto LAB_02475720;
    if (lStack_a8 == 0) goto LAB_024759b8;
    iVar16 = *(int *)(lStack_a8 + 0x5c);
    if (iVar16 < 1) {
      iVar16 = 0x80;
    }
    lVar11 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar9,iVar16);
    uVar19 = 0;
    if (lVar11 != 0) {
      if ((lVar17 != 0) && (lVar17 != lVar11)) {
        *(undefined4 *)(lVar17 + 0x38) = 0x42200000;
      }
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar28 = *(float *)(lStack_a8 + 0x38);
      fVar24 = *(float *)(lVar18 + 0x20);
      fVar20 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x3c),*(undefined4 *)(lStack_a8 + 0x40)
                                 ,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar26 = *(float *)(lStack_a8 + 0x44);
      fVar25 = *(float *)(lVar18 + 0x24);
      fVar22 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(lStack_a8 + 0x48),*(undefined4 *)(lStack_a8 + 0x4c)
                                 ,0);
      if ((lStack_a8 == 0) || (lVar17 = *(long *)(lVar11 + 0x10), lVar17 == 0)) goto LAB_024759b8;
      fVar29 = *(float *)(lStack_a8 + 0x68);
      uVar8 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar17,0);
      if ((uVar8 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar17,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar17,lVar10,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar17,0,0);
      *(undefined8 *)(lVar11 + 0x18) = uVar14;
      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar14);
      if (lStack_a8 == 0) goto LAB_024759b8;
      uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_a8 + 0x20),0);
      puVar15 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar8 & 1) == 0) {
        if (lStack_a8 == 0) goto LAB_024759b8;
        puVar15 = (undefined8 *)(lStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar11 + 0x20) = *puVar15;
      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20));
      lVar12 = *(long *)puVar4;
      *(int *)(lVar11 + 0x28) = iVar16;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar24 = (float)func_0x049b5300(0x41200000,(fVar28 + fVar24 + fVar20) / 20.0);
      fVar24 = fVar24 * fVar2;
      fVar20 = 4.0;
      if (fVar24 <= 4.0) {
        fVar20 = fVar24;
      }
      *(undefined8 *)(lVar11 + 0x34) = _UNK_00e698b8;
      fVar28 = 0.0;
      if (0.0 <= fVar24) {
        fVar28 = fVar20;
      }
      *(float *)(lVar11 + 0x2c) = fVar28;
      *(float *)(lVar11 + 0x30) = fVar21;
      fVar20 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(lVar9,*(undefined8 *)(lVar11 + 0x20));
      fVar28 = fVar28 * fVar20;
      fVar20 = 1.0;
      if (fVar28 <= 1.0) {
        fVar20 = fVar28;
      }
      fVar24 = 0.0;
      if (0.0 <= fVar28) {
        fVar24 = fVar20;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar24,lVar17,0);
      fVar24 = (float)exp2f((fVar26 + fVar25 + fVar22 + fVar29 * (float)iVar5) / 1200.0);
      fVar24 = fVar24 * fVar27;
      fVar20 = 3.0;
      if (fVar24 <= 3.0) {
        fVar20 = fVar24;
      }
      fVar28 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar24) {
        fVar28 = fVar20;
      }
      UnityEngine_AudioSource__set_pitch_43484e0(fVar28,lVar17,0);
      if (lStack_a8 == 0) goto LAB_024759b8;
      fVar20 = 0.0;
      if (*(char *)(lStack_a8 + 0x60) == '\0') {
        fVar24 = *(float *)(lStack_a8 + 100);
        if (fVar24 <= 0.0) {
          fVar24 = 1.0;
        }
        fVar24 = fVar24 * 0.0;
        fVar28 = 1.0;
        if (fVar24 <= 1.0) {
          fVar28 = fVar24;
        }
        fVar20 = -1.0;
        if (-1.0 <= fVar24) {
          fVar20 = fVar28;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar20,lVar17,0);
      if (lVar10 == 0) goto LAB_024759b8;
      iVar5 = *(int *)(lVar18 + 0x1c);
      fVar24 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar10,0);
      fVar22 = 0.0;
      fVar28 = (float)iVar5 / 1000.0;
      fVar20 = 0.0;
      if (0.0 <= fVar24 + _UNK_00e20000) {
        fVar20 = fVar24 + _UNK_00e20000;
      }
      if (fVar28 <= fVar20) {
        fVar20 = fVar28;
      }
      fVar24 = 0.0;
      if (0.0 <= fVar28) {
        fVar24 = fVar20;
      }
      UnityEngine_AudioSource__set_time_4348598(fVar24,lVar17,0);
      fVar20 = (float)*(int *)(lVar18 + 0x28) / 1000.0 + 0.0;
      if (fVar20 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar17,0);
      }
      else {
        dVar23 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar23 + (double)fVar20,lVar17,0);
        fVar22 = fVar21 + fVar20 + _UNK_00e2043c;
      }
      *(float *)(lVar11 + 0x3c) = fVar22;
      uVar19 = 1;
    }
  }
  if ((lStack_a8 != 0) &&
     ((*(float *)(lStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(lStack_a8 + 0x74),lVar9), lStack_a8 != 0)
      ))) {
    if (*(long *)(lStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(lStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar4 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_f0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        uVar7 = Dino_BusSand_AudioHub__PlayDepth_2375064(fVar2,fVar27,0,0,lVar9,uStack_e0,1);
        uVar19 = uVar19 | uVar7;
      }
      FUN_01e77dbc(&uStack_108);
    }
LAB_0247539c:
    return (ulong)(uVar19 & 1);
  }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

