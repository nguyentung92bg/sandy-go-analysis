/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<WinChangeStage>d__20$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_d__20__MoveNext (Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_d__20_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<WinChangeStage>d__20$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_d__20__MoveNext
   (Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_d__20_o* __this, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_d__20__MoveNext_218ede0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iStack_34;
  
  if ((bRam0000000004f9b999 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04caddc0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cade30);
    FUN_02132f7c(PTR_DAT_04cadee0);
    FUN_02132f7c(PTR_DAT_04cade00);
    FUN_02132f7c(PTR_DAT_04cade38);
    bRam0000000004f9b999 = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x28);
  iStack_34 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 0228f1c8 with catch @ 0228f184 */
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar4,uVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      if (*(long *)(lVar9 + 0x40) == 0) {
                    /* try { // try from 0228f1bc to 0238f1c7 has its CatchHandler @ 0228f1ec */
        return 0;
      }
      uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar9,*(undefined8 *)PTR_DAT_04cade30,0);
                    /* try { // try from 0228ef30 to 0238ef33 has its CatchHandler @ 0228ef3c */
      if (*(long *)(lVar9 + 0x40) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0228ef30 with catch @ 0228ef3c
                        */
        iStack_34 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                              (*(long *)(lVar9 + 0x40),0);
        iStack_34 = iStack_34 + 1;
        uVar6 = System_Int32__ToString_482d750(&iStack_34,0);
        if (*(long *)(lVar9 + 0x40) != 0) {
          iStack_34 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                                (*(long *)(lVar9 + 0x40),0);
          uVar7 = System_Int32__ToString_482d750(&iStack_34,0);
          uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
          Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar8,uVar6,0);
          Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar9,*(undefined8 *)PTR_DAT_04caddc0,1,0);
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cadee0,0);
          uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__Punch_219d230
                            (_UNK_00e20178,_UNK_00e201f4,uVar8,0);
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
          *(undefined4 *)(param_1 + 0x10) = 2;
          return 1;
        }
      }
    }
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar9,*(undefined8 *)PTR_DAT_04cade38,0);
      puVar10 = (undefined8 *)(param_1 + 0x30);
      *puVar10 = uVar8;
      thunk_FUN_02134474(puVar10,uVar8);
      if (*(long *)(lVar9 + 0x40) != 0) {
        uVar8 = *puVar10;
        uVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_SpecialWinPersonNum_2221360
                          (*(long *)(lVar9 + 0x40),0);
        if (*(long *)(lVar9 + 0x40) != 0) {
          uVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentPersonNum_2221348
                            (*(long *)(lVar9 + 0x40),0);
          uVar2 = _UNK_00e207cc;
          uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_219d2d8
                            (_UNK_00e207cc,_UNK_00e200f8,uVar8,uVar4,uVar5,1,0);
          UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar9,uVar8,0);
          uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar2,uVar8,0);
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
          *(undefined4 *)(param_1 + 0x10) = 3;
          return 1;
        }
      }
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__Punch_219d230
                        (_UNK_00e20838,_UNK_00e2098c,*(undefined8 *)(param_1 + 0x30),0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_02134474();
      *(undefined4 *)(param_1 + 0x10) = 4;
      return 1;
    }
    if (iVar1 != 4) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar9,*(undefined8 *)PTR_DAT_04cade00,1,0);
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cadee0,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

