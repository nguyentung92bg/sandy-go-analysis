/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<Run>d__7$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<Run>d__7$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__MoveNext_2184c58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = param_1;
  if ((bRam0000000004f9b950 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02284ce0 with catch @ 02284cb0
                        */
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02284cdc to 02384cdf has its CatchHandler @ 02284cec */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02284ce0 to 02384cef has its CatchHandler @ 02284cb0 */
    FUN_02132f7c(PTR_DAT_04cad8a8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02284cdc with catch @ 02284cec
                        */
    FUN_02132f7c(PTR_DAT_04cad8b0);
    FUN_02132f7c(PTR_DAT_04cad8b8);
    FUN_02132f7c(PTR_DAT_04cad8c0);
    bRam0000000004f9b950 = 1;
  }
  puVar1 = PTR_DAT_04cacb20;
  iVar5 = *(int *)(param_1 + 0x10);
  uVar7 = 0;
  plStack_40 = &lStack_38;
  lStack_48 = 0;
  if (iVar5 < 3) {
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar1;
        param_1 = lStack_38;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      iVar5 = *(int *)(*(long *)(lVar11 + 0xb8) + 0xc) + 1;
      lVar8 = *(long *)PTR_DAT_04ca9ae8;
      *(int *)(*(long *)(lVar11 + 0xb8) + 0xc) = iVar5;
      *(int *)(param_1 + 0x30) = iVar5;
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar7 & 1) == 0) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = 0;
      }
      else {
        if (*(long *)(lStack_38 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = *(undefined8 *)(*(long *)(lStack_38 + 0x20) + 0x20);
      }
      *(undefined8 *)(lStack_38 + 0x38) = uVar10;
      thunk_FUN_02134474();
      uVar10 = *(undefined8 *)(lStack_38 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
      param_1 = lStack_38;
      if ((uVar7 & 1) == 0) goto LAB_022850a0;
    }
    else {
      if (iVar5 != 1) {
        if (iVar5 != 2) goto LAB_022853b0;
        fVar14 = 0.0;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        goto LAB_02284f24;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_022850a0:
      puVar1 = PTR_DAT_04cabaf8;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar7);
      }
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x3a) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                    /* try { // try from 022850d8 to 02385107 has its CatchHandler @ 022850d8
                       catch() { ... } // from try @ 022850d8 with catch @ 022850d8
                       catch() { ... } // from try @ 02285154 with catch @ 022850d8 */
        if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar6 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(0x3eb,0);
        if (iVar5 == iVar6) {
                    /* try { // try from 02285108 to 02385113 has its CatchHandler @ 02285154 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          bVar4 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(*(undefined8 *)PTR_DAT_04cad8b0,0);
          bVar4 = bVar4 ^ 1;
        }
        else {
          bVar4 = 0;
        }
        puVar2 = PTR_DAT_04cacb20;
        lVar11 = *(long *)PTR_DAT_04cacb20;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar2;
        }
                    /* try { // try from 022851ac to 023851bb has its CatchHandler @ 022851d0 */
        *(byte *)(*(long *)(lVar11 + 0xb8) + 8) = bVar4 & 1;
        if ((bVar4 & 1) != 0) {
                    /* try { // try from 022851bc to 023851e3 has its CatchHandler @ 02285174 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* catch() { ... } // from try @ 022851ac with catch @ 022851d0 */
          Dino_BusSand_App_Meta_Profile__SetFlag_227375c(*(undefined8 *)PTR_DAT_04cad8b0,1,0);
          lVar11 = *(long *)puVar2;
        }
        uVar10 = *(undefined8 *)(lStack_38 + 0x28);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = Dino_BusSand_App_UI_LevelEnterFlow__GrantUnlockGifts_233d508(uVar10,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_78,lVar11,*(undefined8 *)PTR_DAT_04cad8a0);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        uStack_50 = uStack_68;
                    /* try { // try from 02285230 to 023852a3 has its CatchHandler @ 02285230
                       catch() { ... } // from try @ 02285230 with catch @ 02285230
                       catch() { ... } // from try @ 022852b0 with catch @ 02285230 */
        *(undefined8 *)(lStack_38 + 0x48) = uStack_70;
        *(undefined8 *)(lStack_38 + 0x40) = uStack_78;
        *(undefined8 *)(lStack_38 + 0x50) = uStack_68;
        thunk_FUN_02134474(lStack_38 + 0x40,0);
        *(undefined4 *)(lStack_38 + 0x10) = 0xfffffffd;
        goto LAB_02285250;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
                    /* try { // try from 02285148 to 02385153 has its CatchHandler @ 02285158 */
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02285108 with catch @ 02285154
                       try { // try from 02285154 to 02385173 has its CatchHandler @ 022850d8 */
                    /* catch() { ... } // from try @ 02285148 with catch @ 02285158 */
      uVar7 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar10,uVar9,0);
      if ((uVar7 & 1) != 0) {
        *(undefined8 *)(lStack_38 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(lStack_38 + 0x18),0);
                    /* try { // try from 02285174 to 023851ab has its CatchHandler @ 02285174
                       catch() { ... } // from try @ 02285174 with catch @ 02285174
                       catch() { ... } // from try @ 022851bc with catch @ 02285174 */
        uVar7 = 1;
        *(undefined4 *)(lStack_38 + 0x10) = 1;
        goto LAB_022853b0;
      }
    }
LAB_02285180:
    uVar7 = 0;
  }
  else {
    if (iVar5 < 5) {
      if (iVar5 == 3) {
        fVar14 = *(float *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        fVar15 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar14 = fVar14 + fVar15;
        param_1 = lStack_38;
LAB_02284f24:
        puVar1 = PTR_DAT_04cad4f8;
        *(float *)(param_1 + 0x58) = fVar14;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_App_UI_BoosterFly__get_InFlight_217f4b0(0);
        if (((uVar7 & 1) == 0) || (2.5 <= *(float *)(lStack_38 + 0x58))) {
          *(undefined4 *)(lStack_38 + 0x58) = 0;
LAB_02284f80:
          *(undefined8 *)(lStack_38 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(lStack_38 + 0x18),0);
          uVar9 = 4;
        }
        else {
          *(undefined8 *)(lStack_38 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(lStack_38 + 0x18),0);
          uVar9 = 3;
        }
      }
      else {
        if (iVar5 != 4) goto LAB_022853b0;
        fVar15 = *(float *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar15 = fVar15 + fVar14;
        bVar3 = fVar15 < _UNK_00e20590;
        *(float *)(lStack_38 + 0x58) = fVar15;
        if (bVar3) goto LAB_02284f80;
        uVar10 = *(undefined8 *)(lStack_38 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lStack_38 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                    (*(long *)(lStack_38 + 0x38),0,*(undefined8 *)PTR_DAT_04cad8c0,0);
        }
        puVar1 = PTR_DAT_04cacb20;
        uVar10 = *(undefined8 *)(lStack_38 + 0x38);
        uVar9 = *(undefined4 *)(lStack_38 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar10,uVar9,0);
        if ((uVar7 & 1) == 0) {
          uVar10 = *(undefined8 *)(lStack_38 + 0x28);
          uVar9 = *(undefined4 *)(lStack_38 + 0x30);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_LevelEnterFlow__Abort_233d0e4(uVar10,uVar9,0);
          Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7____m__Finally1_21854e0(lStack_38);
          goto LAB_02285180;
        }
LAB_02285250:
        uVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                          (lStack_38 + 0x40,*(undefined8 *)PTR_DAT_04cad890);
        if ((uVar7 & 1) == 0) {
          Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7____m__Finally1_21854e0();
          puVar1 = PTR_DAT_04cacb20;
          *(undefined8 *)(lStack_38 + 0x48) = 0;
          *(undefined8 *)(lStack_38 + 0x50) = 0;
          uVar10 = *(undefined8 *)(lStack_38 + 0x20);
          uVar12 = *(undefined8 *)(lStack_38 + 0x28);
          lVar11 = *(long *)puVar1;
          *(undefined8 *)(lStack_38 + 0x40) = 0;
          uVar13 = *(undefined8 *)(lStack_38 + 0x38);
          uVar9 = *(undefined4 *)(lStack_38 + 0x30);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_233d96c
                             (uVar10,uVar12,uVar13,uVar9,0);
          *(undefined8 *)(lStack_38 + 0x18) = uVar10;
          thunk_FUN_02134474();
          uVar9 = 5;
        }
        else {
          if (*(long *)(lStack_38 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = *(undefined4 *)(lStack_38 + 0x50);
          Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                    (*(long *)(lStack_38 + 0x38),1,*(undefined8 *)PTR_DAT_04cad8c0,0);
          if (*(long *)(lStack_38 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 022852a4 to 023852af has its CatchHandler @ 022852e0 */
          lVar11 = *(long *)(*(long *)(lStack_38 + 0x20) + 0x28);
                    /* try { // try from 022852b0 to 023852fb has its CatchHandler @ 02285230 */
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
          uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_60);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 022852a4 with catch @ 022852e0 */
          uVar10 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                             (lVar11,*(undefined8 *)PTR_DAT_04cad8b8,2,uVar10,
                              *(undefined8 *)PTR_DAT_04cad8a8);
                    /* try { // try from 022852fc to 023853f7 has its CatchHandler @ 022852fc
                       catch() { ... } // from try @ 022852fc with catch @ 022852fc
                       catch() { ... } // from try @ 02285404 with catch @ 022852fc */
          uVar12 = *(undefined8 *)(lStack_38 + 0x38);
          uVar9 = *(undefined4 *)(lStack_38 + 0x30);
          if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_233d8d4(uVar10,uVar12,uVar9,0);
          *(undefined8 *)(lStack_38 + 0x18) = uVar10;
          thunk_FUN_02134474();
          uVar9 = 2;
        }
      }
    }
    else {
      if (iVar5 != 5) {
        if (iVar5 == 6) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        }
        goto LAB_022853b0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar10,uVar9,0);
      if ((uVar7 & 1) == 0) {
        uVar10 = *(undefined8 *)(lStack_38 + 0x28);
        uVar9 = *(undefined4 *)(lStack_38 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_LevelEnterFlow__Abort_233d0e4(uVar10,uVar9,0);
        goto LAB_02285180;
      }
      uVar10 = *(undefined8 *)(lStack_38 + 0x20);
      uVar12 = *(undefined8 *)(lStack_38 + 0x28);
      uVar13 = *(undefined8 *)(lStack_38 + 0x38);
      uVar9 = *(undefined4 *)(lStack_38 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_233dac8(uVar10,uVar12,uVar13,uVar9,0)
      ;
      *(undefined8 *)(lStack_38 + 0x18) = uVar10;
      thunk_FUN_02134474();
      uVar9 = 6;
    }
    *(undefined4 *)(lStack_38 + 0x10) = uVar9;
    uVar7 = 1;
  }
LAB_022853b0:
  lVar11 = lStack_48;
  if (lStack_48 == 0) {
    return uVar7;
  }
  FUN_01e783b4(&plStack_40);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022854c4 to 023854d7 has its CatchHandler @ 022854ec */
  FUN_0213321c(lVar11);
}

