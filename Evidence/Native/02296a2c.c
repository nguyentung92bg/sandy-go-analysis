/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$<OnOpen>b__41_0
void Dino_BusSand_App_UI_BattleRoyaleScenePanel___OnOpen_b__41_0 (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02295dd4) */
/* WARNING: Removing unreachable block (ram,0x02295e70) */
/* WARNING: Removing unreachable block (ram,0x02295e78) */
/* WARNING: Removing unreachable block (ram,0x02295e94) */
/* WARNING: Removing unreachable block (ram,0x02295e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$<OnOpen>b__41_0
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel___OnOpen_b__41_0
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel___OnOpen_b__41_0_2196a2c
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_74;
  
  if ((bRam0000000004f9b9c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cae2d0);
    FUN_02132f7c(PTR_DAT_04cae2d8);
    bRam0000000004f9b9c2 = 1;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                      (*(long *)(param_4 + 0x40),0);
    if (iVar3 == 0) {
      plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      if (*(long *)(param_4 + 0x40) == 0) goto LAB_0229602c;
      uStack_74 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentPersonNum_2221348
                            (*(long *)(param_4 + 0x40),0);
      lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_74);
      if (plVar4 == (long *)0x0) goto LAB_0229602c;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar4[4] = lVar5;
      thunk_FUN_02134474(plVar4 + 4,lVar5);
      uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                        (*(undefined8 *)PTR_DAT_04cae2d0,plVar4,0);
      param_2 = -50.0;
      uVar9 = 0x44160000;
      uVar12 = 0x43960000;
      uVar13 = 0xc2480000;
    }
    else {
      if (-1 < iVar3) {
        return;
      }
      lVar6 = *(long *)PTR_DAT_04ca9d18;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                        (*(undefined8 *)PTR_DAT_04cae2d8,**(undefined8 **)(lVar5 + 0xb8),0);
      uVar13 = 0;
      uVar9 = 0x44480000;
      uVar12 = 0x43480000;
    }
    lVar5 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88
                      (*(undefined8 *)(param_4 + 0x78));
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar2 = PTR_DAT_04cad1b0;
    uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    uVar10 = 0;
    if ((uVar8 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0229602c;
      uVar10 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
    }
    if (lVar5 == 0) {
LAB_0229602c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar5,0);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar11,param_2,param_3,uVar10,0);
    iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
    if ((float)iVar3 * _UNK_00e207cc < param_2) {
      uVar12 = 0xc3480000;
    }
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips_21956fc
              (uVar13,uVar12,0,uVar9,param_4,0,lVar5,uVar7,param_2 <= (float)iVar3 * _UNK_00e207cc,0
              );
  }
  return;
}

