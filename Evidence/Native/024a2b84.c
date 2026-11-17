/* IL2CPP: Dino.BusSand.View.GameView$$Update
void Dino_BusSand_View_GameView__Update (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Update
   void Dino_BusSand_View_GameView__Update (Dino_BusSand_View_GameView_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_GameView__Update_23a2b84(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c924 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc3e0);
    FUN_02132f7c(PTR_DAT_04cbc3e8);
    FUN_02132f7c(PTR_DAT_04cbc400);
    FUN_02132f7c(PTR_DAT_04cbc408);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cbc520);
    FUN_02132f7c(PTR_DAT_04cbc528);
    FUN_02132f7c(PTR_DAT_04cbc530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc430);
    bRam0000000004f9c924 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  fVar10 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  uVar4 = UnityEngine_Input__GetMouseButtonDown_443005c(0,0);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 024a2c60 to 025a2d9b has its CatchHandler @ 024a2c60
                       catch() { ... } // from try @ 024a2c60 with catch @ 024a2c60
                       catch() { ... } // from try @ 024a2de8 with catch @ 024a2c60
                       catch() { ... } // from try @ 024a2e9c with catch @ 024a2c60
                       catch() { ... } // from try @ 024a2ed0 with catch @ 024a2c60
                       catch() { ... } // from try @ 024a2efc with catch @ 024a2c60 */
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  if (*(float *)(param_1 + 0x10c) < *(float *)(param_1 + 0x110)) {
    *(float *)(param_1 + 0x10c) = fVar10 + *(float *)(param_1 + 0x10c);
  }
  Dino_BusSand_View_GameView__TickIdleHint_23a17e0(fVar10,param_1);
  Dino_BusSand_View_GameView__HandleInput_23a09a8(param_1);
  if ((0.0 < *(float *)(param_1 + 0x70)) && (*(char *)(param_1 + 0x40) == '\0')) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_024a3228;
    if ((*(char *)(*(long *)(param_1 + 0x20) + 0x80) == '\0') &&
       (fVar11 = *(float *)(param_1 + 0x70) - fVar10, *(float *)(param_1 + 0x70) = fVar11,
       fVar11 <= 0.0)) {
      Dino_BusSand_View_GameView__EndFever_23a3288(param_1);
    }
  }
  if ((*(char *)(param_1 + 0x40) != '\0') ||
     (*(float *)(param_1 + 0x10c) < *(float *)(param_1 + 0x110))) {
LAB_024a2d24:
    *(undefined4 *)(param_1 + 0x44) = 0;
LAB_024a2d28:
    if ((*(char *)(param_1 + 0x14d) != '\0') && (*(char *)(param_1 + 0x40) == '\0')) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_024a3228;
      uVar5 = Dino_BusSand_Core_StageEngine__AdvanceOutro_24251c4
                        ((double)(fVar10 + fVar10),*(long *)(param_1 + 0x20),0);
      Dino_BusSand_View_GameView__Handle_23a1cb8(param_1,uVar5);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_024a3228;
    uVar4 = Dino_BusSand_Core_StageEngine__get_ShouldAutoSpeedUp_2424960
                      (*(long *)(param_1 + 0x20),0);
    fVar11 = 3.0;
    if (((uVar4 & 1) == 0) && (fVar11 = _UNK_00e20838, *(float *)(param_1 + 0x70) <= 0.0)) {
      fVar11 = 1.0;
    }
    fVar11 = fVar11 * *(float *)(param_1 + 0x170);
    if (fVar11 == 0.0) goto LAB_024a2d24;
    fVar12 = *(float *)(param_1 + 0x44);
    fVar13 = -(fVar10 * 4.0);
    if (0.0 <= fVar11 - fVar12) {
      fVar13 = fVar10 * 4.0;
    }
    fVar13 = fVar12 + fVar13;
    if (ABS(fVar11 - fVar12) <= fVar10 * 4.0) {
      fVar13 = fVar11;
    }
    *(float *)(param_1 + 0x44) = fVar13;
    if (fVar13 <= 0.0) goto LAB_024a2d28;
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_024a3228;
    if (*(char *)(lVar6 + 0x80) != '\0') goto LAB_024a2d28;
    lVar9 = *(long *)(lVar6 + 0x78);
    uVar5 = Dino_BusSand_Core_StageEngine__Advance_2424e00((double)(fVar10 * fVar13),lVar6,0);
    Dino_BusSand_View_GameView__Handle_23a1cb8(param_1,uVar5);
    puVar2 = PTR_DAT_04cad568;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_024a3228;
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x78) - lVar9;
    if (0 < lVar9) {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar7 == 0)) goto LAB_024a3228;
        fVar13 = (float)lVar9 * (float)*(int *)(lVar7 + 0x78);
        fVar11 = 2.1474836e+09;
        if (fVar13 <= 2.1474836e+09) {
          fVar11 = fVar13;
        }
        iVar8 = -0x80000000;
        if (fVar11 != INFINITY) {
          iVar8 = (int)fVar11;
        }
        Dino_BusSand_GameAudio__AddSettle_2384d70(**(long **)(lVar6 + 0xb8),iVar8,0);
      }
    }
    Dino_BusSand_View_GameView__CheckEndSuction_239b0cc(param_1);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  cVar1 = *(char *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x160) != 0) {
    fVar11 = fVar10;
    if (cVar1 != '\0') {
      fVar11 = 0.0;
    }
    Dino_BusSand_View_EndSuctionCue__Tick_23961ac(fVar11);
    cVar1 = *(char *)(param_1 + 0x40);
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  fVar11 = 1.0;
                    /* try { // try from 024a2d9c to 025a2da3 has its CatchHandler @ 024a2eb0 */
  if (cVar1 != '\0') {
    fVar11 = 0.0;
  }
  fVar13 = *(float *)(param_1 + 0x44);
  if (*(float *)(param_1 + 0x44) <= fVar11) {
    fVar13 = fVar11;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024a2db8 to 025a2dbb has its CatchHandler @ 024a2ea0 */
                    /* try { // try from 024a2dbc to 025a2dcb has its CatchHandler @ 024a2eac */
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 200) == 0) goto LAB_024a3228;
    fVar11 = 1.0;
                    /* try { // try from 024a2ddc to 025a2de7 has its CatchHandler @ 024a2ea8 */
    if (*(char *)(param_1 + 0x40) != '\0') {
      fVar11 = 0.0;
    }
                    /* try { // try from 024a2de8 to 025a2e97 has its CatchHandler @ 024a2c60 */
    fVar12 = *(float *)(param_1 + 0x44);
    if (*(float *)(param_1 + 0x44) <= fVar11) {
      fVar12 = fVar11;
    }
    *(float *)(*(long *)(param_1 + 200) + 0xd0) = fVar12;
  }
  Dino_BusSand_View_GameView__SpaceEscapes_239efac(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_024a3228;
    fVar11 = 1.0;
    if (*(char *)(param_1 + 0x40) != '\0') {
      fVar11 = 0.0;
    }
    fVar12 = *(float *)(param_1 + 0x44);
    if (*(float *)(param_1 + 0x44) <= fVar11) {
      fVar12 = fVar11;
    }
    *(float *)(*(long *)(param_1 + 0xb0) + 0x174) = fVar12;
  }
  fVar13 = fVar10 * fVar13;
  Dino_BusSand_View_GameView__UpdateRoadVehicles_23a332c(fVar13,param_1);
  if ((*(long *)(param_1 + 0xe0) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0xe0),*(undefined8 *)PTR_DAT_04cbc3e0),
     puVar3 = PTR_DAT_04cbc400, puVar2 = PTR_DAT_04cbc3e8, lVar6 != 0)) {
                    /* try { // try from 024a2e98 to 025a2e9b has its CatchHandler @ 024a2ea4 */
                    /* try { // try from 024a2e9c to 025a2ecb has its CatchHandler @ 024a2c60 */
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_78,lVar6,*(undefined8 *)PTR_DAT_04cbc430);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a2db8 with catch @ 024a2ea0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a2e98 with catch @ 024a2ea4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a2ddc with catch @ 024a2ea8
                        */
    lStack_50 = lStack_68;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a2dbc with catch @ 024a2eac
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a2d9c with catch @ 024a2eb0
                        */
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                             (&uStack_60,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
                    /* try { // try from 024a2ecc to 025a2ecf has its CatchHandler @ 024a2ef0 */
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 024a2ed0 to 025a2ef3 has its CatchHandler @ 024a2c60 */
      Dino_BusSand_View_VehicleView__Tick_23ff20c(fVar13,lStack_50,0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_60,*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_04cbc530;
    puVar2 = PTR_DAT_04cbc520;
                    /* catch() { ... } // from try @ 024a2ecc with catch @ 024a2ef0 */
    if (*(long *)(param_1 + 0xe8) != 0) {
                    /* try { // try from 024a2ef4 to 025a2efb has its CatchHandler @ 024a2f04 */
      iVar8 = *(int *)(*(long *)(param_1 + 0xe8) + 0x18);
                    /* try { // try from 024a2efc to 025a2f07 has its CatchHandler @ 024a2c60 */
      if (-1 < iVar8 + -1) {
        do {
          if (*(long *)(param_1 + 0xe8) == 0) goto LAB_024a3228;
          iVar8 = iVar8 + -1;
          lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                            (*(long *)(param_1 + 0xe8),iVar8,*(undefined8 *)puVar3);
          if (lVar6 == 0) goto LAB_024a3228;
          Dino_BusSand_View_PickUpClaw__Tick_23dad70(fVar13,lVar6,0);
          if ((*(long *)(param_1 + 0xe8) == 0) ||
             (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                                (*(long *)(param_1 + 0xe8),iVar8,*(undefined8 *)puVar3), lVar6 == 0)
             ) goto LAB_024a3228;
          if (*(char *)(lVar6 + 0x3c) != '\0') {
            if ((*(long *)(param_1 + 0xe8) == 0) ||
               (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0xe8),iVar8,*(undefined8 *)puVar3),
               lVar6 == 0)) goto LAB_024a3228;
            Dino_BusSand_View_PickUpClaw__Dispose_23dae4c(lVar6,0);
            if (*(long *)(param_1 + 0xe8) == 0) goto LAB_024a3228;
            System_Collections_Generic_List_object___RemoveAt_3a833a0
                      (*(long *)(param_1 + 0xe8),iVar8,*(undefined8 *)puVar2);
          }
        } while (0 < iVar8);
      }
      fVar11 = *(float *)(param_1 + 0x118) - fVar10;
      *(float *)(param_1 + 0x118) = fVar11;
      if (fVar11 <= 0.0) {
        *(undefined4 *)(param_1 + 0x118) = 0x3e800000;
        Dino_BusSand_View_GameView__RefreshArrows_239e0ac(param_1);
      }
      Dino_BusSand_View_GameView__TickJam_23a3c6c(fVar10,param_1);
      Dino_BusSand_View_GameView__TickApproach_23a3ef4(fVar10,param_1);
      if (*(char *)(param_1 + 0x14d) != '\0') {
        if ((((*(char *)(param_1 + 0x274) == '\0') && (*(char *)(param_1 + 0x40) == '\0')) &&
            (0.5 < *(float *)(param_1 + 0x150))) &&
           (uVar4 = UnityEngine_Input__GetMouseButtonDown_443005c(0,0), (uVar4 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_View_GameView__OverUi_23a40ec();
          if ((uVar4 & 1) == 0) {
            Dino_BusSand_View_GameView__HurryOutro_23a4240(param_1);
          }
        }
        *(float *)(param_1 + 0x150) = fVar10 + *(float *)(param_1 + 0x150);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_024a3228;
        uVar4 = Dino_BusSand_Core_StageEngine__get_RoadEmpty_24252fc(*(long *)(param_1 + 0x20),0);
        if (((((uVar4 & 1) != 0) && (_UNK_00e1fea8 <= *(float *)(param_1 + 0x150))) &&
            (*(long *)(param_1 + 0x230) == 0)) || (7.0 <= *(float *)(param_1 + 0x150))) {
          *(undefined1 *)(param_1 + 0x14d) = 0;
          *(undefined4 *)(param_1 + 0x148) = 0x3eb33333;
          if (*(char *)(param_1 + 0x274) != '\0') {
            *(undefined1 *)(param_1 + 0x274) = 0;
            UnityEngine_Time__set_timeScale_43cd6d8(0x3f800000,0);
          }
        }
      }
      if (((0.0 <= *(float *)(param_1 + 0x148)) &&
          (fVar10 = *(float *)(param_1 + 0x148) - fVar10, *(float *)(param_1 + 0x148) = fVar10,
          fVar10 < 0.0)) && (lVar6 = *(long *)(param_1 + 0x48), lVar6 != 0)) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),*(undefined1 *)(param_1 + 0x14c),
                   *(undefined8 *)(lVar6 + 0x28));
      }
      return;
    }
  }
LAB_024a3228:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

