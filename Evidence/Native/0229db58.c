/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<RunSpecialWin>d__9$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleUi__RunSpecialWin_d__9__MoveNext (Dino_BusSand_App_UI_BattleRoyaleUi__RunSpecialWin_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<RunSpecialWin>d__9$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleUi__RunSpecialWin_d__9__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleUi__RunSpecialWin_d__9_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleUi__RunSpecialWin_d__9__MoveNext_219db58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_88 [24];
  
  if ((bRam0000000004f9ba09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae098);
    FUN_02132f7c(PTR_DAT_04cadd48);
    FUN_02132f7c(PTR_DAT_04cae630);
    FUN_02132f7c(PTR_DAT_04cae638);
    FUN_02132f7c(PTR_DAT_04cae640);
    FUN_02132f7c(PTR_DAT_04cae578);
    FUN_02132f7c(PTR_DAT_04cae648);
    FUN_02132f7c(PTR_DAT_04cae580);
    FUN_02132f7c(PTR_DAT_04cae588);
    FUN_02132f7c(PTR_DAT_04cae590);
    FUN_02132f7c(PTR_DAT_04cae650);
    bRam0000000004f9ba09 = 1;
  }
  puVar1 = PTR_DAT_04cae640;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x34) = 0xffffffff;
      return 0;
    }
    goto LAB_0229dfbc;
  }
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar5,0);
    plVar9 = (long *)(param_1 + 0x20);
    *plVar9 = lVar5;
    thunk_FUN_02134474(plVar9,lVar5);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    lVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0();
    plVar10 = (long *)(param_1 + 0x28);
    *plVar10 = lVar5;
    thunk_FUN_02134474(plVar10,lVar5);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    lVar5 = *plVar10;
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar9 == 0) goto LAB_0229dfbc;
    *(undefined1 *)(*plVar9 + 0x10) = 0;
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar5,0);
    if (*plVar10 == 0) goto LAB_0229dfbc;
    iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(*plVar10,0);
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae098);
    Dino_BusSand_App_UI_BattleRoyaleScenePanel_Param___ctor_2191eec(lVar5,0);
    if ((lVar5 == 0) || (*(undefined4 *)(lVar5 + 0x10) = 2, lVar8 == 0)) goto LAB_0229dfbc;
    Dino_BusSand_App_UI_UIManager__Open_object__2945314
              (lVar8,*(undefined8 *)PTR_DAT_04cae590,2,lVar5,*(undefined8 *)PTR_DAT_04cae580);
    lVar11 = *plVar9;
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadd48);
    Dino_BusSand_App_UI_BattleRoyalePanel_Param___ctor_218cef0(lVar5,0);
    puVar2 = PTR_DAT_04caa458;
    if (lVar5 == 0) goto LAB_0229dfbc;
    lVar13 = *plVar9;
    *(undefined4 *)(lVar5 + 0x10) = 2;
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar7,lVar13,*(undefined8 *)PTR_DAT_04cae638,0);
    *(undefined8 *)(lVar5 + 0x18) = uVar7;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar7);
    uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar8,*(undefined8 *)PTR_DAT_04cae588,4,lVar5,*(undefined8 *)PTR_DAT_04cae578
                      );
    if (lVar11 == 0) goto LAB_0229dfbc;
    puVar12 = (undefined8 *)(lVar11 + 0x18);
    *puVar12 = uVar7;
    thunk_FUN_02134474(puVar12,uVar7);
    if (*plVar9 == 0) goto LAB_0229dfbc;
    uVar7 = *(undefined8 *)(*plVar9 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4();
      if (*plVar10 != 0) {
        Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_88,*plVar10,0);
        return 0;
      }
      goto LAB_0229dfbc;
    }
    if (iVar3 == iVar4 + -1) {
      lVar5 = *plVar9;
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar7,lVar5,*(undefined8 *)PTR_DAT_04cae630,0);
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar8,*(undefined8 *)PTR_DAT_04cae650,2,uVar7,*(undefined8 *)PTR_DAT_04cae648);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\0') &&
       (fVar15 = *(float *)(param_1 + 0x30), fVar15 < 900.0)) {
      fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(param_1 + 0x30) = fVar15 + fVar14;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HaveHallCommand_221f168
                        (*(long *)(param_1 + 0x28),0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar7 = Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_218c244(0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_0229dfbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

