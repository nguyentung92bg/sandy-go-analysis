/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ForceWin
void Dino_BusSand_App_Gameplay_GameplayController__ForceWin (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$ForceWin
   void Dino_BusSand_App_Gameplay_GameplayController__ForceWin
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__ForceWin_229fb40
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  bool bVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f9c250 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c250 = 1;
  }
  if ((*(int *)(param_4 + 0x20) != 2) ||
     (lVar19 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_4),
     lVar19 == 0)) {
    return;
  }
  uVar20 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_4);
  if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
  }
  Dino_BusSand_App_Meta_JourneyTracking__MarkForced_221cf50(uVar20,0);
  lVar24 = *(long *)(param_4 + 0x38);
  lVar19 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_4);
  if ((lVar19 == 0) ||
     (lVar19 = Dino_BusSand_Core_StageEngine__ForceEnd_242bb94(lVar19,1,0,0), lVar24 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c92c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4f8,lVar19,0);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc500);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cbc508);
    FUN_02132f7c(PTR_DAT_04cbc510);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc518);
    bRam0000000004f9c92c = 1;
  }
  puVar16 = PTR_DAT_04cbc510;
  puVar15 = PTR_DAT_04cad568;
  uVar14 = _UNK_00e2094c;
  uVar13 = _UNK_00e208e8;
  uVar12 = _UNK_00e20830;
  uVar11 = _UNK_00e205f8;
  uVar10 = _UNK_00e20590;
  uVar9 = _UNK_00e20390;
  uVar8 = _UNK_00e2038c;
  uVar7 = _UNK_00e2032c;
  uVar6 = _UNK_00e20328;
  uVar5 = _UNK_00e20274;
  uVar4 = _UNK_00e2009c;
  uVar3 = _UNK_00e20094;
  fVar2 = _UNK_00e1fea8;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_d8 = 0;
  if (lVar19 == 0) {
    return;
  }
  if (*(int *)(lVar19 + 0x18) < 1) {
    bVar27 = false;
LAB_024a286c:
    uVar20 = *(undefined8 *)(lVar24 + 200);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar22 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
    puVar15 = PTR_DAT_04cbc510;
    if (((uVar22 & 1) != 0) && (0 < *(int *)(lVar19 + 0x18))) {
      iVar25 = 0;
      do {
        lVar26 = *(long *)(lVar24 + 200);
        System_Collections_Generic_List_SimEvent___get_Item_3abf900
                  (&uStack_f0,lVar19,iVar25,*(undefined8 *)puVar15);
        if (lVar26 == 0) {
LAB_024a293c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uStack_130 = uStack_e0;
        Dino_BusSand_View_MechanicLayer__Handle_23caa6c(lVar26,auStack_140,0);
        iVar25 = iVar25 + 1;
      } while (iVar25 < *(int *)(lVar19 + 0x18));
    }
    if (!bVar27) {
      return;
    }
    Dino_BusSand_View_GameView__RefreshCounter_239e460(lVar24);
    return;
  }
  iVar25 = 0;
  bVar1 = false;
LAB_024a1e64:
  System_Collections_Generic_List_SimEvent___get_Item_3abf900
            (&uStack_f0,lVar19,iVar25,*(undefined8 *)puVar16);
  uVar20 = uStack_e0;
  iVar17 = iStack_e8;
  uVar18 = uStack_ec;
  bVar27 = true;
  switch(uStack_f0) {
  case 0:
    Dino_BusSand_View_GameView__OnBlocked_23a5860(lVar24,uStack_ec);
    break;
  case 1:
    Dino_BusSand_View_GameView__OnRoadFull_23a5aa0(lVar24,uStack_ec);
    break;
  case 2:
    Dino_BusSand_View_GameView__OnEscaped_23a4c58(lVar24,uStack_ec,iStack_e8 == 1,iStack_e8 == 2);
    goto LAB_024a2740;
  case 4:
    Dino_BusSand_View_GameView__SpawnVehicle_239d0c8(lVar24,iStack_e8);
    Dino_BusSand_View_GameView__UpdateRoute_23a7a28(lVar24,iVar17);
    if (*(long *)(lVar24 + 200) != 0) {
      Dino_BusSand_View_MechanicLayer__OnSpawned_23d320c(*(long *)(lVar24 + 200),iVar17,0);
    }
    if (*(long *)(lVar24 + 0xf0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xf0),uVar18,&lStack_c8,*(undefined8 *)PTR_DAT_04cbc500);
    lVar26 = lStack_c8;
    if ((uVar22 & 1) == 0) goto LAB_024a2844;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar22 = UnityEngine_Object__op_Inequality_43c8dec(lVar26,0,0);
    if ((uVar22 & 1) != 0) {
      if (lStack_c8 == 0) goto LAB_024a293c;
      Dino_BusSand_View_GarageView__Pulse_23b18dc(lStack_c8,0);
      if (*(long *)(lVar24 + 0x20) == 0) goto LAB_024a293c;
      lVar21 = Dino_BusSand_Core_StageEngine__GarageById_242b7c4(*(long *)(lVar24 + 0x20),uVar18,0);
      lVar26 = lStack_c8;
      if (lVar21 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = Dino_BusSand_Core_Garage__get_Remaining_2423ac0(lVar21,0);
      }
      if (lVar26 == 0) goto LAB_024a293c;
      Dino_BusSand_View_GarageView__SetCount_23b0b90(lVar26,uVar18,0);
      if (*(long *)(lVar24 + 0xe0) == 0) goto LAB_024a293c;
      uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                         (*(long *)(lVar24 + 0xe0),iVar17,&lStack_d8,*(undefined8 *)PTR_DAT_04cbc4b8
                         );
      lVar26 = lStack_d8;
      if ((uVar22 & 1) != 0) {
        if (((lStack_c8 == 0) ||
            (lVar21 = UnityEngine_Component__get_transform_43bcd18(lStack_c8,0), lVar21 == 0)) ||
           (UnityEngine_Transform__get_position_43d0e48(lVar21,0), lVar26 == 0)) goto LAB_024a293c;
        Dino_BusSand_View_VehicleView__EmergeFrom_23fd6b4(lVar26,1,0);
      }
      if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(puVar15);
        cRam0000000004f9b94e = '\x01';
      }
      lVar26 = *(long *)puVar15;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar26 = *(long *)puVar15;
      }
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 != 0) {
        if ((lStack_c8 == 0) ||
           (lVar21 = UnityEngine_Component__get_transform_43bcd18(lStack_c8,0), lVar21 == 0))
        goto LAB_024a293c;
        UnityEngine_Transform__get_position_43d0e48(lVar21,0);
        uVar18 = Dino_BusSand_View_GameView__PanOf_23a7184(lVar24);
        Dino_BusSand_GameAudio__Mechanic_2384944(0,uVar18,lVar26,0xc,0);
      }
    }
    goto LAB_024a2844;
  case 5:
    if (*(long *)(lVar24 + 0xf0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xf0),uStack_ec,&lStack_d0,
                        *(undefined8 *)PTR_DAT_04cbc500);
    lVar26 = lStack_d0;
    if ((uVar22 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar22 = UnityEngine_Object__op_Inequality_43c8dec(lVar26,0,0);
      if ((uVar22 & 1) != 0) {
        if (lStack_d0 == 0) goto LAB_024a293c;
        Dino_BusSand_View_GarageView__Spend_23b18e8(lStack_d0,0);
        if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(puVar15);
          cRam0000000004f9b94e = '\x01';
        }
        lVar26 = *(long *)puVar15;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar26 = *(long *)puVar15;
        }
        lVar26 = **(long **)(lVar26 + 0xb8);
        if (lVar26 != 0) {
          if ((lStack_d0 == 0) ||
             (lVar21 = UnityEngine_Component__get_transform_43bcd18(lStack_d0,0), lVar21 == 0))
          goto LAB_024a293c;
          UnityEngine_Transform__get_position_43d0e48(lVar21,0);
          uVar29 = Dino_BusSand_View_GameView__PanOf_23a7184(lVar24);
          Dino_BusSand_GameAudio__Mechanic_2384944(0,uVar29,lVar26,0xd,0);
        }
      }
    }
    if (*(long *)(lVar24 + 0xf0) == 0) goto LAB_024a293c;
    System_Collections_Generic_Dictionary_int__object___Remove_34387d4
              (*(long *)(lVar24 + 0xf0),uVar18,*(undefined8 *)PTR_DAT_04cbc4f8);
    break;
  case 6:
    Dino_BusSand_View_GameView__OnRevealed_23a7b3c(lVar24,uStack_ec);
    break;
  case 7:
    Dino_BusSand_View_GameView__OnShuffled_23a7f40(lVar24);
    break;
  case 9:
    if (*(long *)(lVar24 + 0xe0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xe0),uStack_ec,&lStack_b0,
                        *(undefined8 *)PTR_DAT_04cbc4b8);
    if ((uVar22 & 1) != 0) {
      if (lStack_b0 == 0) goto LAB_024a293c;
      Dino_BusSand_View_VehicleView__Kick_23fd8a0(uVar9,0,lStack_b0,0);
    }
    break;
  case 0xb:
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(puVar15);
      cRam0000000004f9b94e = '\x01';
    }
    lVar26 = *(long *)puVar15;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar26 = *(long *)puVar15;
    }
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 != 0) {
      uVar29 = Dino_BusSand_View_GameView__FillOf_23a5bd8(lVar24,uVar18);
      uVar30 = Dino_BusSand_View_GameView__PanOfTruck_23a5c1c(lVar24,uVar18);
      Dino_BusSand_GameAudio__AddFlux_2384d0c(uVar29,uVar30,lVar26,iVar17,0);
    }
    uVar23 = 0;
    uVar29 = uVar10;
    goto code_r0x024a2660;
  case 0xc:
    Dino_BusSand_View_GameView__OnCompleted_23a6888(lVar24,uStack_ec);
    goto LAB_024a2740;
  case 0xd:
    Dino_BusSand_View_GameView__OnExiting_23a6e7c(lVar24,uStack_ec);
    break;
  case 0xe:
    if (*(long *)(lVar24 + 0x78) != 0) {
      Dino_BusSand_View_SuctionBeams__Remove_23ecd8c(*(long *)(lVar24 + 0x78),uStack_ec,0);
    }
    if (*(long *)(lVar24 + 0xe0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xe0),uVar18,&lStack_c0,*(undefined8 *)PTR_DAT_04cbc4b8);
    if ((uVar22 & 1) != 0) {
      if (lStack_c0 == 0) goto LAB_024a293c;
      Dino_BusSand_View_VehicleView__Hide_23fec68(lStack_c0,0);
    }
    if (*(long *)(lVar24 + 0xb0) == 0) goto LAB_024a293c;
    Dino_BusSand_View_GrainParticles__ClearTarget_23b4eb4(*(long *)(lVar24 + 0xb0),uVar18,0);
    break;
  case 0xf:
    goto LAB_024a2850;
  case 0x10:
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(puVar15);
      cRam0000000004f9b94e = '\x01';
    }
    lVar26 = *(long *)puVar15;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar26 = *(long *)puVar15;
    }
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 != 0) {
      uVar29 = Dino_BusSand_View_GameView__FillOf_23a5bd8(lVar24,uVar18);
      uVar30 = Dino_BusSand_View_GameView__PanOfTruck_23a5c1c(lVar24,uVar18);
      Dino_BusSand_GameAudio__AddFlux_2384d0c(uVar29,uVar30,lVar26,iVar17,0);
    }
    uVar23 = 1;
    uVar29 = uVar3;
code_r0x024a2660:
    Dino_BusSand_View_GameView__OnSuction_23a5cb4(uVar29,lVar24,uVar18,iVar17,uVar20,uVar23);
    break;
  case 0x11:
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(puVar15);
      cRam0000000004f9b94e = '\x01';
    }
    lVar26 = *(long *)puVar15;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar26 = *(long *)puVar15;
    }
    if (**(long **)(lVar26 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar26 + 0xb8),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(2);
    if (*(long *)(lVar24 + 0xe0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xe0),uVar18,&lStack_b8,*(undefined8 *)PTR_DAT_04cbc4b8);
    if ((uVar22 & 1) != 0) {
      if ((lStack_b8 == 0) ||
         (Dino_BusSand_View_VehicleView__Kick_23fd8a0(uVar9,uVar11,lStack_b8,0), lStack_b8 == 0))
      goto LAB_024a293c;
      lVar26 = *(long *)(lVar24 + 0xb8);
      Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_b8,0);
      if (lVar26 == 0) goto LAB_024a293c;
      Dino_BusSand_View_Fx__Glow_2398b34(lVar26);
    }
    break;
  case 0x12:
    Dino_BusSand_View_GameView__OnColorCleared_23a7298(lVar24,uStack_ec);
    break;
  case 0x13:
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(puVar15);
      cRam0000000004f9b94e = '\x01';
    }
    lVar26 = *(long *)puVar15;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar26 = *(long *)puVar15;
    }
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 != 0) {
      if (*(long *)(lVar24 + 0xa0) == 0) goto LAB_024a293c;
      Dino_BusSand_View_WorldView__get_CounterWorld_240ac64(*(long *)(lVar24 + 0xa0),0);
      Dino_BusSand_View_GameView__PanOf_23a7184(lVar24);
      Dino_BusSand_GameAudio__BoosterUsed_2383cec(lVar26,0,0);
    }
    fVar31 = *(float *)(lVar24 + 0x220);
    fVar28 = (float)UnityEngine_Time__get_time_43cd540(0);
    fVar32 = 1.0;
    lVar26 = *(long *)(lVar24 + 0xc0);
    if (fVar31 <= fVar28 + 1.0) {
      fVar31 = fVar28 + 1.0;
    }
    *(float *)(lVar24 + 0x220) = fVar31;
    if (lVar26 != 0) {
      if (*(long *)(lVar24 + 0xa0) == 0) goto LAB_024a293c;
      fVar32 = 1.0;
      Dino_BusSand_View_WorldView__get_CounterWorld_240ac64(*(long *)(lVar24 + 0xa0),0);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      Dino_BusSand_View_MechFx__Play_23be070(lVar26,*(undefined8 *)PTR_DAT_04cbc518,0,&uStack_108,0)
      ;
    }
    if (*(long *)(lVar24 + 0xa0) != 0) {
      fVar31 = (float)Dino_BusSand_View_WorldView__get_CounterWorld_240ac64
                                (*(long *)(lVar24 + 0xa0),0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar26 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      if (*(long *)(lVar24 + 0x30) == 0) {
        fVar28 = 0.5;
      }
      else {
        fVar28 = *(float *)(*(long *)(lVar24 + 0x30) + 0x60) * fVar2;
      }
      if (*(long *)(lVar24 + 0xb8) != 0) {
        param_3 = param_3 + *(float *)(lVar26 + 0x20) * fVar28;
        fVar32 = fVar32 + *(float *)(lVar26 + 0x1c) * fVar28;
        fVar31 = fVar31 + *(float *)(lVar26 + 0x18) * fVar28;
        Dino_BusSand_View_Fx__Glow_2398b34
                  (fVar31,fVar32,param_3,0x3f800000,0x3f800000,uVar12,fVar2,uVar7);
        if (*(long *)(lVar24 + 0xb8) != 0) {
          Dino_BusSand_View_Fx__Ring_2398a10
                    (fVar31,fVar32,param_3,uVar14,0x3f800000,uVar14,uVar8,uVar4);
          if (*(long *)(lVar24 + 0xb8) != 0) {
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_110 = 0;
            Dino_BusSand_View_Fx__Stars_2392818
                      (fVar31,fVar32,param_3,uVar5,uVar13,0,0,0,*(long *)(lVar24 + 0xb8),10,
                       &uStack_120);
LAB_024a2740:
            bVar27 = true;
            goto LAB_024a2850;
          }
        }
      }
    }
    goto LAB_024a293c;
  case 0x14:
    uVar20 = 1;
    goto code_r0x024a2670;
  case 0x15:
    uVar20 = 0;
code_r0x024a2670:
    Dino_BusSand_View_GameView__OnStageEnded_23a8808(lVar24,uVar20);
    break;
  case 0x17:
  case 0x18:
  case 0x1e:
    goto LAB_024a2844;
  case 0x19:
    Dino_BusSand_View_GameView__UpdateRoute_23a7a28(lVar24,uStack_ec);
    goto LAB_024a2844;
  case 0x1a:
  case 0x1c:
    Dino_BusSand_View_GameView__SpawnVehicle_239d0c8(lVar24,iStack_e8);
    Dino_BusSand_View_GameView__UpdateRoute_23a7a28(lVar24,iVar17);
    if (*(long *)(lVar24 + 200) != 0) {
      Dino_BusSand_View_MechanicLayer__OnSpawned_23d320c(*(long *)(lVar24 + 200),iVar17,0);
    }
LAB_024a2844:
    Dino_BusSand_View_GameView__RefreshArrows_239e0ac(lVar24);
    break;
  case 0x23:
    if (*(long *)(lVar24 + 0xe0) == 0) goto LAB_024a293c;
    uVar22 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(lVar24 + 0xe0),uStack_ec,&lStack_a8,
                        *(undefined8 *)PTR_DAT_04cbc4b8);
    lVar26 = lStack_a8;
    if ((uVar22 & 1) != 0) {
      if ((((lStack_a8 == 0) || (*(long *)(lStack_a8 + 0x38) == 0)) ||
          (UnityEngine_Transform__get_right_43d15f4(*(long *)(lStack_a8 + 0x38),0),
          *(long *)(lVar24 + 0x30) == 0)) ||
         (Dino_BusSand_View_VehicleView__Wiggle_23fda78(lVar26,0), lStack_a8 == 0))
      goto LAB_024a293c;
      Dino_BusSand_View_VehicleView__Kick_23fd8a0(uVar6,0,lStack_a8,0);
    }
    if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(puVar15);
      cRam0000000004f9b94e = '\x01';
    }
    lVar26 = *(long *)puVar15;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar26 = *(long *)puVar15;
    }
    if (**(long **)(lVar26 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Mechanic_2384944(0,0,**(long **)(lVar26 + 0xb8),9,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(1);
  }
  bVar27 = bVar1;
LAB_024a2850:
  iVar25 = iVar25 + 1;
  bVar1 = bVar27;
  if (*(int *)(lVar19 + 0x18) <= iVar25) goto LAB_024a286c;
  goto LAB_024a1e64;
}

