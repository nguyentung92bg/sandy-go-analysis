/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshTop
void Dino_BusSand_App_UI_PassportPanel__RefreshTop (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshTop
   void Dino_BusSand_App_UI_PassportPanel__RefreshTop (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__RefreshTop_21d56a8(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_28;
  uint uStack_24;
  
  if ((bRam0000000004f9bb57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caebf0);
    FUN_02132f7c(PTR_DAT_04cb05f8);
    FUN_02132f7c(PTR_DAT_04cadfe8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb0618);
                    /* try { // try from 022d5710 to 023d57bb has its CatchHandler @ 022d517c */
    FUN_02132f7c(PTR_DAT_04cb06f8);
    bRam0000000004f9bb57 = 1;
  }
  puVar3 = PTR_DAT_04cb0618;
  puVar2 = PTR_DAT_04cb05f8;
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_IsPurchased_22463a8
                      (*(long *)(param_1 + 0x40),0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018
              (param_1,*(undefined8 *)puVar2,(uVar4 ^ 0xffffffff) & 1,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,uVar4 & 1,0);
                    /* catch() { ... } // from try @ 022d5208 with catch @ 022d5774 */
                    /* catch() { ... } // from try @ 022d557c with catch @ 022d5778 */
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 022d5318 with catch @ 022d577c */
                    /* catch() { ... } // from try @ 022d5278 with catch @ 022d5780
                       catch() { ... } // from try @ 022d53b4 with catch @ 022d5780 */
      uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentStageIndex_22468d0
                        (*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar9 = Dino_BusSand_App_Meta_PassportFeature__IsBankFull_2246de8
                          (*(long *)(param_1 + 0x40),0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar7 = Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60
                              (*(long *)(param_1 + 0x40),uVar4,0);
            uStack_24 = uVar7;
            if ((int)uVar7 < 1) {
              Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec(0,param_1);
              uVar14 = *(undefined8 *)PTR_DAT_04caebf0;
                    /* try { // try from 022d5960 to 023d59d3 has its CatchHandler @ 022d5dc4 */
              uVar11 = *(undefined8 *)PTR_DAT_04cb06f8;
LAB_022d5964:
              Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar14,uVar11,0);
              Dino_BusSand_App_UI_PassportPanel__SetStageNum_21d6af4(param_1,uVar4);
              return;
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentKeys_2246928
                                (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 022d58c0 to 023d5907 has its CatchHandler @ 022d5dc8 */
              fVar15 = (float)iVar5 / (float)(int)uVar7;
              fVar16 = 1.0;
              if (fVar15 <= 1.0) {
                fVar16 = fVar15;
              }
              fVar1 = 0.0;
              if (0.0 <= fVar15) {
                fVar1 = fVar16;
              }
              Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec(fVar1,param_1);
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar14 = *(undefined8 *)PTR_DAT_04caebf0;
                uStack_28 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentKeys_2246928
                                      (*(long *)(param_1 + 0x40),0);
                uVar11 = System_Int32__ToString_482d750(&uStack_28,0);
                uVar10 = System_Int32__ToString_482d750(&uStack_24,0);
                uVar11 = System_String__Concat_46d2b84
                                   (uVar11,*(undefined8 *)PTR_DAT_04cabd10,uVar10,0);
                goto LAB_022d5964;
              }
            }
          }
        }
        else {
          Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec(0x3f800000,param_1);
          lVar13 = *(long *)PTR_DAT_04ca9d18;
          lVar12 = *(long *)(lVar13 + 0x38);
          if (lVar12 == 0) {
                    /* try { // try from 022d57c4 to 023d584f has its CatchHandler @ 022d57c4
                       catch() { ... } // from try @ 022d57c4 with catch @ 022d57c4
                       catch() { ... } // from try @ 022d5d58 with catch @ 022d57c4 */
            FUN_0216b4cc(lVar13);
            lVar12 = *(long *)(lVar13 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_0216b470();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_0216b470();
          }
          Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                    (param_1,*(undefined8 *)PTR_DAT_04caebf0,*(undefined8 *)PTR_DAT_04cadfe8,
                     **(undefined8 **)(lVar12 + 0xb8),0);
          if (*(long *)(param_1 + 0x40) != 0) {
            iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                              (*(long *)(param_1 + 0x40),0);
            if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022d5850 to 023d5863 has its CatchHandler @ 022d5dbc */
              iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50
                                (*(long *)(param_1 + 0x40),0);
              puVar2 = PTR_DAT_04cad9b8;
              uVar7 = (iVar5 + iVar6) - 1;
              uStack_24 = uVar4;
              if ((int)uVar7 <= (int)uVar4) {
                uStack_24 = uVar7;
              }
              if ((bRam0000000004f9bb59 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cb07d8);
                FUN_02132f7c(PTR_DAT_04cad9b8);
                FUN_02132f7c(PTR_DAT_04cb07e0);
                FUN_02132f7c(PTR_DAT_04cb07e8);
                bRam0000000004f9bb59 = 1;
              }
              uStack_28 = 0;
              uVar11 = System_Int32__ToString_482d750(&uStack_24,0);
              Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar2,uVar11,0);
              uVar4 = uStack_24;
              puVar3 = PTR_DAT_04cb07e0;
              puVar2 = PTR_DAT_04cb07d8;
              if (*(long *)(param_1 + 0x40) != 0) {
                iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                                  (*(long *)(param_1 + 0x40),0);
                Dino_BusSand_App_UI_UIPanel__Show_21f4018
                          (param_1,*(undefined8 *)puVar2,(int)uVar4 < iVar5,0);
                Dino_BusSand_App_UI_UIPanel__Show_21f4018
                          (param_1,*(undefined8 *)puVar3,iVar5 <= (int)uVar4,0);
                puVar2 = PTR_DAT_04cb07e8;
                if (*(long *)(param_1 + 0x40) != 0) {
                  uVar8 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin_22455c8
                                    (*(long *)(param_1 + 0x40),0);
                  _uStack_28 = CONCAT44(uStack_24,uVar8);
                  uVar11 = System_Int32__ToString_482d750(&uStack_28,0);
                  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar2,uVar11,0);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

