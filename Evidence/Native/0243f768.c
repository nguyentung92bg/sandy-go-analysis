/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Tick
void Dino_BusSand_Cheat_AutoPlayHand__Tick (Dino_BusSand_Cheat_AutoPlayHand_o* __this, Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Tick
   void Dino_BusSand_Cheat_AutoPlayHand__Tick (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__Tick_233f768
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,float param_4,
               long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_s0;
  undefined8 extraout_var;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c677 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9550);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c677 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
  uStack_60 = 0;
  uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  uStack_70 = 0;
  if (*(int *)(param_5 + 0x40) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_6,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (param_6 == 0) goto LAB_0243fd3c;
  uVar13 = *(undefined8 *)(param_6 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar10 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
  if (lVar10 == 0) {
    return;
  }
  fVar14 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  if (fVar14 <= 0.0) {
    return;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x44);
  *(ulong *)(param_5 + 0x44) =
       CONCAT44(fVar14 + (float)((ulong)uVar13 >> 0x20),fVar14 + (float)uVar13);
  uVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked_229bf48(param_6,0);
  fVar14 = (float)uVar13;
  if ((uVar9 & 1) == 0) {
    lVar10 = *(long *)(param_6 + 0x38);
    if (lVar10 == 0) goto LAB_0243fd3c;
    if (*(char *)(lVar10 + 0x40) != '\0') goto LAB_0243f898;
    bVar6 = Dino_BusSand_View_GameView__get_IntroPlaying_239a200(lVar10,0);
    bVar6 = bVar6 ^ 1;
  }
  else {
LAB_0243f898:
    bVar6 = 0;
  }
  fVar16 = _UNK_00e20390;
  iVar7 = *(int *)(param_5 + 0x40);
  if (iVar7 < 4) {
    if (iVar7 == 1) {
      param_3 = 0;
      Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
                (*(undefined4 *)(param_5 + 0x58),*(undefined4 *)(param_5 + 0x5c),param_5);
      fVar14 = *(float *)(param_5 + 0x7c);
      bVar5 = NAN(*(float *)(param_5 + 0x48)) || NAN(fVar14);
      bVar4 = *(float *)(param_5 + 0x48) < fVar14;
LAB_0243fba0:
      if (bVar4 != bVar5 || ((bVar6 ^ 0xff) & 1) != 0) {
        return;
      }
    }
    else {
      if (iVar7 == 2) {
        if (*(int *)(param_5 + 0x78) < 0) {
          uVar9 = *(ulong *)(param_5 + 0x70);
          uVar13 = 0;
        }
        else {
          auVar22 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6);
          uStack_60 = auVar22._0_8_;
          uStack_58 = CONCAT44(uStack_58._4_4_,auVar22._8_4_);
          if ((uStack_60 & 0xff) == 0) goto LAB_0243fbac;
          System_Nullable_Vector2___get_Value_2bd0a60(&uStack_60,*(undefined8 *)PTR_DAT_04cb71d0);
          uVar9 = CONCAT44(fVar14,extraout_s0);
          uVar13 = extraout_var;
        }
        uVar21 = *(undefined8 *)(param_5 + 0x60);
        uVar19 = *(undefined8 *)(param_5 + 0x68);
        fVar16 = *(float *)(param_5 + 0x48) / *(float *)(param_5 + 0x4c);
        fVar14 = 1.0;
        if (fVar16 <= 1.0) {
          fVar14 = fVar16;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar16) {
          fVar20 = fVar14;
        }
        fVar14 = fVar20 * fVar20 * (3.0 - (fVar20 + fVar20));
        if (*(int *)(*(long *)PTR_DAT_04cb9550 + 0xe4) == 0) {
          uStack_80 = uVar9;
          uStack_78 = uVar13;
          thunk_FUN_0218fdac();
          uVar9 = uStack_80;
        }
        fVar17 = 1.0 - fVar14;
        fVar18 = fVar14 * (fVar17 + fVar17);
        fVar16 = (float)(uVar9 >> 0x20) * fVar14 * fVar14 +
                 (float)((ulong)uVar21 >> 0x20) * fVar17 * fVar17 +
                 (float)((ulong)uVar19 >> 0x20) * fVar18;
        uVar13 = CONCAT44(fVar16,(float)uVar9 * fVar14 * fVar14 +
                                 (float)uVar21 * fVar17 * fVar17 + (float)uVar19 * fVar18);
        *(undefined8 *)(param_5 + 0x58) = uVar13;
        Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(uVar13,fVar16,0,param_5);
        if (((bVar6 & *(int *)(param_5 + 0x78) < 0) == 1) &&
           (*(float *)(param_5 + 0x54) <= *(float *)(param_5 + 0x44))) {
          *(float *)(param_5 + 0x54) = *(float *)(param_5 + 0x44) + 0.25;
          uVar13 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
          iVar7 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar13,0);
          if (-1 < iVar7) {
LAB_0243fcb4:
            Dino_BusSand_Cheat_AutoPlayHand__Decide_233fd40(param_5,param_6);
            return;
          }
        }
        if (fVar20 < 1.0) {
          return;
        }
        *(undefined4 *)(param_5 + 0x48) = 0;
        uVar15 = 3;
        if (*(int *)(param_5 + 0x78) < 0) {
          uVar15 = 6;
        }
        *(undefined4 *)(param_5 + 0x40) = uVar15;
        fVar14 = _UNK_00e20a94;
        if (*(int *)(param_5 + 0x78) < 0) {
          fVar14 = (float)UnityEngine_Random__Range_43b64a8(0x3f000000,_UNK_00e20178,0);
          fVar14 = fVar14 * _UNK_00e2068c;
        }
        *(float *)(param_5 + 0x4c) = fVar14;
        return;
      }
      if (iVar7 != 3) {
        return;
      }
      auVar22 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc
                          (param_5,param_6,*(undefined4 *)(param_5 + 0x78));
      uStack_70 = auVar22._0_8_;
      uStack_68 = CONCAT44(uStack_68._4_4_,auVar22._8_4_);
      if ((uStack_70 & 0xff) != 0) {
        uVar15 = System_Nullable_Vector2___get_Value_2bd0a60
                           (&uStack_70,*(undefined8 *)PTR_DAT_04cb71d0);
        fVar16 = _UNK_00e20a94;
        *(undefined4 *)(param_5 + 0x58) = uVar15;
        *(float *)(param_5 + 0x5c) = fVar14;
        Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(param_5);
        if (*(float *)(param_5 + 0x48) < fVar16) {
          return;
        }
        if (*(float *)(param_5 + 0x44) - *(float *)(param_5 + 0x50) < _UNK_00e208e8 ||
            ((bVar6 ^ 0xff) & 1) != 0) {
          return;
        }
        uVar15 = *(undefined4 *)(param_5 + 0x78);
        if (*(int *)(*(long *)PTR_DAT_04cb9550 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = Dino_BusSand_Cheat_AutoPlayHand__StillGood_234019c(param_6,uVar15);
        if ((uVar9 & 1) != 0) {
          if (0 < *(int *)(param_5 + 0x80)) {
            fVar16 = *(float *)(param_5 + 0x44) - *(float *)(param_5 + 0x50);
            fVar14 = *(float *)(param_5 + 0x84);
            if (fVar16 <= *(float *)(param_5 + 0x84)) {
              fVar14 = fVar16;
            }
            *(float *)(param_5 + 0x84) = fVar14;
          }
          puVar1 = PTR_DAT_04caba90;
          *(float *)(param_5 + 0x50) = *(float *)(param_5 + 0x44);
          *(int *)(param_5 + 0x80) = *(int *)(param_5 + 0x80) + 1;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(0);
          if (*(long *)(param_6 + 0x38) != 0) {
            Dino_BusSand_View_GameView__TapVehicle_23a151c
                      (*(long *)(param_6 + 0x38),*(undefined4 *)(param_5 + 0x78),0);
            uVar13 = _UNK_00e6a598;
            *(undefined4 *)(param_5 + 0x40) = 4;
            *(undefined8 *)(param_5 + 0x48) = uVar13;
            return;
          }
LAB_0243fd3c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0243fcb4;
      }
    }
LAB_0243fbac:
    if ((bRam0000000004f9c678 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb4df0);
      FUN_02132f7c(PTR_DAT_04cb71d0);
      bRam0000000004f9c678 = 1;
    }
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    if (param_6 == 0) {
LAB_0243fef8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar13 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
    iVar7 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar13,0);
    if (iVar7 < 0) {
      uStack_48 = uStack_48 & 0xffffffff00000000;
    }
    else {
      auVar22 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6,iVar7);
      puVar1 = PTR_DAT_04cb71d0;
      uStack_48 = CONCAT44(uStack_48._4_4_,auVar22._8_4_);
      if ((auVar22._0_8_ & 0xff) != 0) {
        fVar20 = *(float *)(param_5 + 0x58);
        fVar18 = *(float *)(param_5 + 0x5c);
        *(int *)(param_5 + 0x78) = iVar7;
        fVar16 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                  (&stack0xffffffffffffffb0,*(undefined8 *)puVar1);
        if (cRam0000000004f9c550 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9c550 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (*(long *)(param_5 + 0x20) != 0) {
          fVar20 = fVar20 - fVar16;
          fVar18 = fVar18 - fVar14;
          UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
          uVar13 = *(undefined8 *)puVar1;
          fVar16 = SQRT(fVar20 * fVar20 + fVar18 * fVar18) / (param_4 * _UNK_00e208e8);
          fVar14 = 1.0;
          if (fVar16 <= 1.0) {
            fVar14 = fVar16;
          }
          fVar20 = 0.0;
          if (0.0 <= fVar16) {
            fVar20 = fVar14;
          }
          fVar14 = 0.0;
          if (0.0 <= fVar20) {
            fVar14 = fVar20;
          }
          *(float *)(param_5 + 0x88) = fVar14 * _UNK_00e1fe7c + _UNK_00e20104;
          System_Nullable_Vector2___get_Value_2bd0a60(&stack0xffffffffffffffb0,uVar13);
          Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738(param_5);
          return;
        }
        goto LAB_0243fef8;
      }
    }
  }
  else {
    if (iVar7 == 4) {
      Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
                (*(undefined4 *)(param_5 + 0x58),*(undefined4 *)(param_5 + 0x5c),0x3f800000,param_5)
      ;
      if (*(float *)(param_5 + 0x48) < *(float *)(param_5 + 0x4c)) {
        return;
      }
      *(undefined4 *)(param_5 + 0x48) = 0;
      *(undefined4 *)(param_5 + 0x40) = 5;
      return;
    }
    if (iVar7 == 5) {
      fVar20 = *(float *)(param_5 + 0x48) / _UNK_00e20390;
      fVar14 = 1.0;
      if (fVar20 <= 1.0) {
        fVar14 = fVar20;
      }
      fVar18 = 1.0;
      if (0.0 <= fVar20) {
        fVar18 = 1.0 - fVar14;
      }
      param_3 = (ulong)(uint)fVar18;
      fVar14 = *(float *)(param_5 + 0x5c);
      Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(*(undefined4 *)(param_5 + 0x58),param_5);
      bVar4 = false;
      bVar5 = true;
      if (!NAN(*(float *)(param_5 + 0x48)) && !NAN(fVar16)) {
        bVar4 = *(float *)(param_5 + 0x48) < fVar16;
        bVar5 = false;
      }
      goto LAB_0243fba0;
    }
    if (iVar7 != 6) {
      return;
    }
    fVar16 = *(float *)(param_5 + 0x58);
    fVar20 = *(float *)(param_5 + 0x5c);
    fVar14 = (float)func_0x049b5320(*(float *)(param_5 + 0x44) * _UNK_00e205ec);
    param_3 = 0;
    Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(fVar16 + 0.0,fVar20 + fVar14 * 6.0,param_5);
    if (((bVar6 & 1) != 0) && (*(float *)(param_5 + 0x54) <= *(float *)(param_5 + 0x44))) {
      fVar14 = 0.25;
      *(float *)(param_5 + 0x54) = *(float *)(param_5 + 0x44) + 0.25;
      uVar13 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
      iVar7 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar13,0);
      if (-1 < iVar7) goto LAB_0243fbac;
    }
    fVar14 = *(float *)(param_5 + 0x4c);
    if (*(float *)(param_5 + 0x48) < fVar14) {
      return;
    }
  }
  if ((bRam0000000004f9c679 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c679 = 1;
  }
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  uStack_80 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uStack_48 = 0;
  *(undefined4 *)(param_5 + 0x78) = 0xffffffff;
  fVar16 = (float)Dino_BusSand_Cheat_AutoPlayHand__RestPoint_233f554(param_5);
  fVar20 = (float)UnityEngine_Random__get_value_43b6570(0);
  uVar9 = (ulong)(uint)_UNK_00e2098c;
  if (fVar20 < _UNK_00e2098c) {
    if (((param_6 == 0) ||
        (lVar10 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0),
        lVar10 == 0)) || (*(long *)(lVar10 + 0x28) == 0)) goto LAB_024406a4;
    uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar10 + 0x28),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_b8,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
    puVar2 = PTR_DAT_04cab9e8;
    puVar1 = PTR_DAT_04ca9ae8;
    iVar7 = 0;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    iVar12 = -1;
    lStack_90 = lStack_a8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_a0;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_a0,*(undefined8 *)puVar2);
      lVar10 = lStack_90;
      fVar18 = (float)param_3;
      fVar20 = (float)uVar9;
      if ((uVar11 & 1) == 0) break;
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar13 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                         (*(long *)(param_6 + 0x38),*(undefined4 *)(lStack_90 + 0x10),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
      if ((uVar11 & 1) != 0) {
        iVar7 = iVar7 + 1;
        iVar8 = UnityEngine_Random__Range_43b64e8(0,iVar7,0);
        if (iVar8 == 0) {
          iVar12 = *(int *)(lVar10 + 0x10);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)PTR_DAT_04cab9e0);
    if (iVar12 < 0) {
      uStack_80 = 0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
    }
    else {
      auVar22 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6,iVar12);
      uStack_80 = auVar22._0_8_;
      uStack_78 = CONCAT44(uStack_78._4_4_,auVar22._8_4_);
      if ((uStack_80 & 0xff) != 0) {
        fVar16 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb71d0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        fVar16 = fVar16 + fVar18 * _UNK_00e20658;
        fVar14 = fVar20 + param_4 * _UNK_00e20140;
      }
    }
  }
  cVar3 = cRam0000000004f9c550;
  fVar20 = *(float *)(param_5 + 0x58);
  fVar18 = *(float *)(param_5 + 0x5c);
  *(float *)(param_5 + 0x70) = fVar16;
  *(float *)(param_5 + 0x74) = fVar14;
  if (cVar3 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c550 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    fVar20 = fVar20 - fVar16;
    fVar18 = fVar18 - fVar14;
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
    fVar18 = SQRT(fVar20 * fVar20 + fVar18 * fVar18) / (param_4 * _UNK_00e208e8);
    fVar20 = 1.0;
    if (fVar18 <= 1.0) {
      fVar20 = fVar18;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar18) {
      fVar17 = fVar20;
    }
    fVar20 = 0.0;
    if (0.0 <= fVar17) {
      fVar20 = fVar17;
    }
    Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738
              (fVar16,fVar14,(fVar20 * _UNK_00e1fe7c + _UNK_00e20104) * _UNK_00e2068c,param_5);
    return;
  }
LAB_024406a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

