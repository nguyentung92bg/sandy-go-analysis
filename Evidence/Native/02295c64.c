/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnMenIndexClicked
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnMenIndexClicked (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnMenIndexClicked
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnMenIndexClicked
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, int32_t index, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnMenIndexClicked_2195c64
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uStack_74;
  
                    /* try { // try from 02295c7c to 02395cd3 has its CatchHandler @ 02295c7c
                       catch() { ... } // from try @ 02295c7c with catch @ 02295c7c
                       catch() { ... } // from try @ 02295d50 with catch @ 02295c7c */
  if ((bRam0000000004f9b9c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02295cd4 to 02395ce7 has its CatchHandler @ 02295d8c */
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cae2d0);
    FUN_02132f7c(PTR_DAT_04cae2d8);
                    /* try { // try from 02295cf8 to 02395d13 has its CatchHandler @ 02295d88 */
    bRam0000000004f9b9c2 = 1;
  }
  if ((int)param_5 < 0) {
    return;
  }
  if (*(long *)(param_4 + 0x40) == 0) {
    return;
  }
  uVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(param_4 + 0x40),0);
  if (uVar3 == param_5) {
    plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_0229602c;
                    /* try { // try from 02295d40 to 02395d4f has its CatchHandler @ 02295d84 */
    uStack_74 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentPersonNum_2221348
                          (*(long *)(param_4 + 0x40),0);
                    /* try { // try from 02295d50 to 02395d9f has its CatchHandler @ 02295c7c */
    lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_74);
    if (plVar5 == (long *)0x0) goto LAB_0229602c;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar8,0);
    }
                    /* catch() { ... } // from try @ 02295d40 with catch @ 02295d84 */
                    /* catch() { ... } // from try @ 02295cf8 with catch @ 02295d88 */
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* catch() { ... } // from try @ 02295cd4 with catch @ 02295d8c */
    plVar5[4] = lVar6;
    thunk_FUN_02134474(plVar5 + 4,lVar6);
    uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(*(undefined8 *)PTR_DAT_04cae2d0,plVar5,0);
    param_2 = -50.0;
    uVar10 = 0x44160000;
    uVar13 = 0x43960000;
    fVar14 = param_2;
    if ((param_5 & 1) != 0) {
      fVar14 = 50.0;
    }
  }
  else {
    if ((int)param_5 <= (int)uVar3) {
      return;
    }
    lVar7 = *(long *)PTR_DAT_04ca9d18;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_0216b4cc(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    uVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)PTR_DAT_04cae2d8,**(undefined8 **)(lVar6 + 0xb8),0);
    uVar10 = 0x44480000;
    uVar13 = 0x43480000;
    fVar14 = 0.0;
  }
  if (param_5 == 0) {
    uVar11 = *(undefined8 *)(param_4 + 0x78);
LAB_02295ea8:
    lVar6 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88(uVar11);
  }
  else {
    lVar6 = *(long *)(param_4 + 0x70);
    if (lVar6 == 0) goto LAB_0229602c;
    if ((int)param_5 <= *(int *)(lVar6 + 0x18)) {
      uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar6,param_5 - 1,*(undefined8 *)PTR_DAT_04cad7c8);
      goto LAB_02295ea8;
    }
    lVar6 = 0;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar9 & 1) == 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar2 = PTR_DAT_04cad1b0;
    uVar11 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    uVar11 = 0;
    if ((uVar9 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0229602c;
      uVar11 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
    }
    if (lVar6 == 0) {
LAB_0229602c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar12,param_2,param_3,uVar11,0);
    iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
    if ((float)iVar4 * _UNK_00e207cc < param_2) {
      uVar13 = 0xc3480000;
    }
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips_21956fc
              (fVar14,uVar13,0,uVar10,param_4,param_5,lVar6,uVar8,
               param_2 <= (float)iVar4 * _UNK_00e207cc,0);
  }
  return;
}

