/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<RunStart>d__10$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_d__10__MoveNext (Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<RunStart>d__10$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_d__10__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_d__10_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_d__10__MoveNext_219e00c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9ba0a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae3b0);
    FUN_02132f7c(PTR_DAT_04cae660);
    FUN_02132f7c(PTR_DAT_04cae668);
    FUN_02132f7c(PTR_DAT_04cae5b8);
    FUN_02132f7c(PTR_DAT_04cae5c0);
    bRam0000000004f9ba0a = 1;
  }
  puVar1 = PTR_DAT_04cae668;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar3;
    thunk_FUN_02134474(plVar7,lVar3);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar3 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    puVar2 = PTR_DAT_04cae3b0;
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*plVar7 == 0) goto LAB_0229e27c;
    *(undefined1 *)(*plVar7 + 0x10) = 0;
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar5,0);
    if (lVar5 == 0) goto LAB_0229e27c;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)PTR_DAT_04caa458;
    *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)(param_1 + 0x20);
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action___ctor_47b5ed0(uVar6,uVar8,*(undefined8 *)PTR_DAT_04cae660,0);
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar6);
    if (lVar3 == 0) goto LAB_0229e27c;
    uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar3,*(undefined8 *)PTR_DAT_04cae5c0,2,lVar5,*(undefined8 *)PTR_DAT_04cae5b8
                      );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') &&
       (fVar10 = *(float *)(param_1 + 0x30), fVar10 < 1800.0)) {
      fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(param_1 + 0x30) = fVar10 + fVar9;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    return 0;
  }
LAB_0229e27c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

