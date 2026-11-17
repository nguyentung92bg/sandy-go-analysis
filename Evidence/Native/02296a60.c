/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<>c__DisplayClass47_0$$<NewMen>b__0
void Dino_BusSand_App_UI_BattleRoyaleScenePanel___c__DisplayClass47_0___NewMen_b__0 (Dino_BusSand_App_UI_BattleRoyaleScenePanel___c__DisplayClass47_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<>c__DisplayClass47_0$$<NewMen>b__0
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel___c__DisplayClass47_0___NewMen_b__0
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel___c__DisplayClass47_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel___c__DisplayClass47_0___NewMen_b__0_2196a60
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uStack_74;
  
  lVar12 = *(long *)(param_4 + 0x10);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02296a6c to 02396a8b has its CatchHandler @ 02296a6c
                       catch() { ... } // from try @ 02296a6c with catch @ 02296a6c
                       catch() { ... } // from try @ 02296aa0 with catch @ 02296a6c */
  uVar5 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenIndexOf_2193980
                    (lVar12,*(undefined8 *)(param_4 + 0x18));
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
  if ((int)uVar5 < 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x40) == 0) {
    return;
  }
  uVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(lVar12 + 0x40),0);
  if (uVar3 == uVar5) {
    plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    if (*(long *)(lVar12 + 0x40) == 0) goto LAB_0229602c;
    uStack_74 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentPersonNum_2221348
                          (*(long *)(lVar12 + 0x40),0);
    lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_74);
    if (plVar6 == (long *)0x0) goto LAB_0229602c;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar6[4] = lVar7;
    thunk_FUN_02134474(plVar6 + 4,lVar7);
    uVar9 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(*(undefined8 *)PTR_DAT_04cae2d0,plVar6,0);
    param_2 = -50.0;
    uVar11 = 0x44160000;
    uVar15 = 0x43960000;
    fVar16 = param_2;
    if ((uVar5 & 1) != 0) {
      fVar16 = 50.0;
    }
  }
  else {
    if ((int)uVar5 <= (int)uVar3) {
      return;
    }
    lVar8 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar9 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)PTR_DAT_04cae2d8,**(undefined8 **)(lVar7 + 0xb8),0);
    uVar11 = 0x44480000;
    uVar15 = 0x43480000;
    fVar16 = 0.0;
  }
  if (uVar5 == 0) {
    uVar13 = *(undefined8 *)(lVar12 + 0x78);
LAB_02295ea8:
    lVar7 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88(uVar13);
  }
  else {
    lVar7 = *(long *)(lVar12 + 0x70);
    if (lVar7 == 0) goto LAB_0229602c;
    if ((int)uVar5 <= *(int *)(lVar7 + 0x18)) {
      uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar7,uVar5 - 1,*(undefined8 *)PTR_DAT_04cad7c8);
      goto LAB_02295ea8;
    }
    lVar7 = 0;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar10 & 1) == 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar2 = PTR_DAT_04cad1b0;
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    uVar13 = 0;
    if ((uVar10 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0229602c;
      uVar13 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
    }
    if (lVar7 == 0) {
LAB_0229602c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar14 = UnityEngine_Transform__get_position_43d0e48(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar14,param_2,param_3,uVar13,0);
    iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
    if ((float)iVar4 * _UNK_00e207cc < param_2) {
      uVar15 = 0xc3480000;
    }
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips_21956fc
              (fVar16,uVar15,0,uVar11,lVar12,uVar5,lVar7,uVar9,
               param_2 <= (float)iVar4 * _UNK_00e207cc,0);
  }
  return;
}

