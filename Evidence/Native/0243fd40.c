/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Decide
void Dino_BusSand_Cheat_AutoPlayHand__Decide (Dino_BusSand_Cheat_AutoPlayHand_o* __this, Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Decide
   void Dino_BusSand_Cheat_AutoPlayHand__Decide (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__Decide_233fd40
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5,
               long param_6)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined1 aauStack_80 [4] [12];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c678 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    bRam0000000004f9c678 = 1;
  }
  uStack_48._0_4_ = 0;
  auStack_50 = (undefined1  [8])0x0;
  auVar1 = ZEXT812(0);
  if (param_6 == 0) {
LAB_0243fef8:
    _auStack_50 = auVar1;
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
  iVar5 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar7,0);
  if (iVar5 < 0) {
    uStack_48._0_4_ = 0;
  }
  else {
    _auStack_50 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6,iVar5);
    puVar2 = PTR_DAT_04cb71d0;
    if ((auStack_50 & 0xff) != 0) {
      fVar14 = *(float *)(param_5 + 0x58);
      fVar13 = *(float *)(param_5 + 0x5c);
      *(int *)(param_5 + 0x78) = iVar5;
      fVar11 = (float)System_Nullable_Vector2___get_Value_2bd0a60(auStack_50,*(undefined8 *)puVar2);
      if (cRam0000000004f9c550 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9c550 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auVar1 = _auStack_50;
      if (*(long *)(param_5 + 0x20) != 0) {
        fVar14 = fVar14 - fVar11;
        fVar13 = fVar13 - param_2;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        uVar7 = *(undefined8 *)puVar2;
        fVar14 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) / (param_4 * _UNK_00e208e8);
        fVar11 = 1.0;
        if (fVar14 <= 1.0) {
          fVar11 = fVar14;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar11;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar13) {
          fVar11 = fVar13;
        }
        *(float *)(param_5 + 0x88) = fVar11 * _UNK_00e1fe7c + _UNK_00e20104;
        System_Nullable_Vector2___get_Value_2bd0a60(auStack_50,uVar7);
        Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738(param_5);
        return;
      }
      goto LAB_0243fef8;
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
  aauStack_80[0]._8_4_ = 0;
  aauStack_80[0]._0_8_ = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uStack_48 = 0;
  *(undefined4 *)(param_5 + 0x78) = 0xffffffff;
  fVar11 = (float)Dino_BusSand_Cheat_AutoPlayHand__RestPoint_233f554(param_5);
  fVar14 = (float)UnityEngine_Random__get_value_43b6570(0);
  if (fVar14 < _UNK_00e2098c) {
    if (param_6 == 0) goto LAB_024406a4;
    fVar14 = _UNK_00e2098c;
    lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
    auVar1._8_4_ = aauStack_80[0]._8_4_;
    auVar1._0_8_ = aauStack_80[0]._0_8_;
    if ((lVar8 == 0) || (aauStack_80[0] = auVar1, *(long *)(lVar8 + 0x28) == 0)) goto LAB_024406a4;
    uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar8 + 0x28),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_b8,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
    puVar3 = PTR_DAT_04cab9e8;
    puVar2 = PTR_DAT_04ca9ae8;
    iVar5 = 0;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    iVar10 = -1;
    lStack_90 = lStack_a8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_a0;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_a0,*(undefined8 *)puVar3);
      lVar8 = lStack_90;
      fVar13 = (float)param_3;
      if ((uVar9 & 1) == 0) break;
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                        (*(long *)(param_6 + 0x38),*(undefined4 *)(lStack_90 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        iVar5 = iVar5 + 1;
        iVar6 = UnityEngine_Random__Range_43b64e8(0,iVar5,0);
        if (iVar6 == 0) {
          iVar10 = *(int *)(lVar8 + 0x10);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)PTR_DAT_04cab9e0);
    if (iVar10 < 0) {
      aauStack_80[0] = ZEXT812(0);
    }
    else {
      aauStack_80[0] = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6,iVar10)
      ;
      if ((aauStack_80[0]._0_8_ & 0xff) != 0) {
        fVar11 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                  (aauStack_80,*(undefined8 *)PTR_DAT_04cb71d0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        fVar11 = fVar11 + fVar13 * _UNK_00e20658;
        param_2 = fVar14 + param_4 * _UNK_00e20140;
      }
    }
  }
  cVar4 = cRam0000000004f9c550;
  fVar14 = *(float *)(param_5 + 0x58);
  fVar13 = *(float *)(param_5 + 0x5c);
  *(float *)(param_5 + 0x70) = fVar11;
  *(float *)(param_5 + 0x74) = param_2;
  if (cVar4 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c550 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    fVar14 = fVar14 - fVar11;
    fVar13 = fVar13 - param_2;
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
    fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) / (param_4 * _UNK_00e208e8);
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar13) {
      fVar12 = fVar14;
    }
    fVar14 = 0.0;
    if (0.0 <= fVar12) {
      fVar14 = fVar12;
    }
    Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738
              (fVar11,param_2,(fVar14 * _UNK_00e1fe7c + _UNK_00e20104) * _UNK_00e2068c,param_5);
    return;
  }
LAB_024406a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

