/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$RefreshStage
void Dino_BusSand_App_UI_YachtRacingPanel__RefreshStage (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$RefreshStage
   void Dino_BusSand_App_UI_YachtRacingPanel__RefreshStage (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__RefreshStage_21ec2b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
                    /* try { // try from 022ec2b8 to 023ec2bf has its CatchHandler @ 022ec31c */
                    /* try { // try from 022ec2c0 to 023ec34b has its CatchHandler @ 022ec220 */
  if ((bRam0000000004f9bbf7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb1108);
    FUN_02132f7c(PTR_DAT_04cb1110);
    FUN_02132f7c(PTR_DAT_04cb1118);
    FUN_02132f7c(PTR_DAT_04cb1120);
                    /* catch() { ... } // from try @ 022ec2b8 with catch @ 022ec31c */
    FUN_02132f7c(PTR_DAT_04cb1128);
    FUN_02132f7c(PTR_DAT_04cb1130);
    FUN_02132f7c(PTR_DAT_04cb1138);
    FUN_02132f7c(PTR_DAT_04cb1140);
                    /* try { // try from 022ec34c to 023ec3e3 has its CatchHandler @ 022ec34c
                       catch() { ... } // from try @ 022ec34c with catch @ 022ec34c
                       catch() { ... } // from try @ 022ec3ec with catch @ 022ec34c */
    FUN_02132f7c(PTR_DAT_04cb1148);
    FUN_02132f7c(PTR_DAT_04cb1150);
    FUN_02132f7c(PTR_DAT_04cb1158);
    FUN_02132f7c(PTR_DAT_04cb1160);
    FUN_02132f7c(PTR_DAT_04cb1168);
    FUN_02132f7c(PTR_DAT_04cb1170);
    FUN_02132f7c(PTR_DAT_04cb1178);
    FUN_02132f7c(PTR_DAT_04caccf0);
    bRam0000000004f9bbf7 = 1;
  }
  puVar10 = PTR_DAT_04cb1170;
  puVar9 = PTR_DAT_04cb1168;
  puVar8 = PTR_DAT_04cb1160;
  puVar7 = PTR_DAT_04cb1158;
  puVar6 = PTR_DAT_04cb1150;
  puVar5 = PTR_DAT_04cb1120;
  puVar4 = PTR_DAT_04cb1110;
  puVar3 = PTR_DAT_04caccf0;
  puVar2 = PTR_DAT_04ca9c20;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 1) {
                    /* catch() { ... } // from try @ 022ec72c with catch @ 022ec790 */
    return;
  }
                    /* try { // try from 022ec3e4 to 023ec3eb has its CatchHandler @ 022ec448 */
                    /* try { // try from 022ec3ec to 023ec477 has its CatchHandler @ 022ec34c */
  iStack_68 = 1;
  iStack_64 = 0;
  do {
    uVar11 = System_Int32__ToString_482d750(&iStack_68,0);
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar8,uVar11,0);
                    /* catch() { ... } // from try @ 022ec3e4 with catch @ 022ec448 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar11,iVar1 == iStack_68,0);
    uVar11 = System_Int32__ToString_482d750(&iStack_68,0);
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar11,0);
                    /* try { // try from 022ec478 to 023ec50f has its CatchHandler @ 022ec478
                       catch() { ... } // from try @ 022ec478 with catch @ 022ec478
                       catch() { ... } // from try @ 022ec518 with catch @ 022ec478 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar11,iVar1 == iStack_68,0);
    uVar11 = System_Int32__ToString_482d750(&iStack_68,0);
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar10,uVar11,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar11,iVar1 == iStack_68,0);
    uVar11 = System_Int32__ToString_482d750(&iStack_68,0);
    uVar11 = System_String__Concat_46d2b84(*(undefined8 *)puVar9,uVar11,*(undefined8 *)puVar3,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar11,iVar1 == iStack_68,0);
                    /* try { // try from 022ec510 to 023ec517 has its CatchHandler @ 022ec574 */
    uVar11 = System_Int32__ToString_482d750(&iStack_68,0);
                    /* try { // try from 022ec518 to 023ec5a3 has its CatchHandler @ 022ec478 */
    uVar11 = System_String__Concat_46d2b84(*(undefined8 *)puVar9,uVar11,*(undefined8 *)puVar4,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar11,iVar1 == iStack_68,0);
    iStack_68 = iStack_68 + 1;
  } while (iStack_68 < 4);
  uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
                    /* catch() { ... } // from try @ 022ec510 with catch @ 022ec574 */
  plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
  iStack_6c = iVar1;
  lVar13 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_6c);
  if (plVar12 != (long *)0x0) {
                    /* catch() { ... } // from try @ 022ec604 with catch @ 022ec5a4 */
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
      uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar11,0);
    }
    if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar12[4] = lVar13;
    thunk_FUN_02134474(plVar12 + 4,lVar13);
    uVar15 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)puVar5,plVar12,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar15,0);
    uVar11 = *(undefined8 *)(param_1 + 0x78);
                    /* try { // try from 022ec600 to 023ec603 has its CatchHandler @ 022ec618 */
    iStack_64 = iVar1;
    if (2 < iVar1) {
      iStack_64 = 3;
    }
                    /* try { // try from 022ec604 to 023ec693 has its CatchHandler @ 022ec5a4 */
    uVar15 = System_Int32__ToString_482d750(&iStack_64,0);
                    /* catch() { ... } // from try @ 022ec600 with catch @ 022ec618 */
    uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1128,uVar15,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar11,uVar15,0,0);
    uVar15 = *(undefined8 *)(param_1 + 0x88);
    uVar11 = System_Int32__ToString_482d750(&iStack_64,0);
    uVar11 = System_String__Concat_46d2b84
                       (*(undefined8 *)PTR_DAT_04cb1130,uVar11,*(undefined8 *)PTR_DAT_04cb1148,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar15,uVar11,0,0);
                    /* try { // try from 022ec694 to 023ec72b has its CatchHandler @ 022ec694
                       catch() { ... } // from try @ 022ec694 with catch @ 022ec694
                       catch() { ... } // from try @ 022ec734 with catch @ 022ec694 */
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1108,0);
    uVar15 = System_Int32__ToString_482d750(&iStack_64,0);
    uVar15 = System_String__Concat_46d2b84
                       (*(undefined8 *)PTR_DAT_04cb1138,uVar15,*(undefined8 *)PTR_DAT_04cb1118,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar11,uVar15,0,0);
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1178,0);
    uVar15 = System_Int32__ToString_482d750(&iStack_64,0);
                    /* try { // try from 022ec72c to 023ec733 has its CatchHandler @ 022ec790 */
                    /* try { // try from 022ec734 to 023ec7bf has its CatchHandler @ 022ec694 */
    uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1140,uVar15,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar11,uVar15,0,0);
    lVar13 = *(long *)(param_1 + 0x40);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
      if (iVar1 <= *(int *)(*(long *)(lVar13 + 0x10) + 0x50)) {
        return;
      }
      Dino_BusSand_App_Meta_YachtRacingCore__SetLifeCycleMaxStage_2258eb8(lVar13,iVar1,0);
      uVar11 = Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_21ed018(param_1);
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

