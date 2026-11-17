/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinueOrder
System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate__o* Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinueOrder
   System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate__o*
   Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder (const MethodInfo* method); */

long Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder_22c0074(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar3 = PTR_DAT_04caef48;
  if ((bRam0000000004f9c347 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9c347 = 1;
  }
  puVar2 = PTR_DAT_04caec48;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  puVar3 = PTR_DAT_04cb01b0;
  if (lVar6 == 0) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportContinue_22466cc(lVar6,0);
    lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(lVar6,*(undefined8 *)puVar3)
    ;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x44);
  }
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId_223be20(lVar7,0);
  }
  lVar6 = Dino_BusSand_App_UI_EndOfLevelRules__ContinuePriority_22c3890(uVar1);
  lVar7 = Dino_BusSand_App_UI_EndOfLevelRules__ContinuePriority_22c3890(uVar5);
  puVar2 = PTR_DAT_04cb6778;
  puVar3 = PTR_DAT_04cb6770;
  if ((bRam0000000004f9c346 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6780);
    FUN_02132f7c(PTR_DAT_04cb6788);
    FUN_02132f7c(PTR_DAT_04cb6790);
    FUN_02132f7c(PTR_DAT_04cb6778);
    FUN_02132f7c(PTR_DAT_04cb6770);
    FUN_02132f7c(PTR_DAT_04cb6798);
    FUN_02132f7c(PTR_DAT_04cb67a0);
    bRam0000000004f9c346 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate____ctor_3b30114
            (lVar8,2,*(undefined8 *)puVar2);
  if ((uVar4 & 1) != 0) {
    if (lVar8 == 0) goto LAB_023c3b5c;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)PTR_DAT_04cb6788;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_023c3b5c;
    uVar4 = *(uint *)(lVar8 + 0x18);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar4 * 0x10;
      *(uint *)(lVar8 + 0x18) = uVar4 + 1;
      *(long *)(lVar12 + 0x20) = lVar6 << 0x20;
      *(ulong *)(lVar12 + 0x28) = (ulong)uVar1 << 0x20;
    }
    else {
      System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___AddWithResize_3b30934
                (lVar8,lVar6 << 0x20,(ulong)uVar1 << 0x20,
                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (0 < (int)uVar5) {
    if (lVar8 == 0) goto LAB_023c3b5c;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar12 = *(long *)PTR_DAT_04cb6788;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_023c3b5c;
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar11 = (ulong)uVar5 << 0x20 | 1;
    uVar10 = lVar7 << 0x20 | 1;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar6 + 0x20) = uVar10;
      *(ulong *)(lVar6 + 0x28) = uVar11;
    }
    else {
      System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___AddWithResize_3b30934
                (lVar8,uVar10,uVar11,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  puVar3 = PTR_DAT_04cb67a0;
  lVar6 = *(long *)PTR_DAT_04cb67a0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar13 = *(undefined8 **)(lVar6 + 0xb8);
  lVar7 = puVar13[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar13 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar15 = *puVar13;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb6780);
    System_Comparison_EndOfLevelRules_ContinueCandidate____ctor_332a15c
              (lVar7,uVar15,*(undefined8 *)PTR_DAT_04cb6798,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar9 = lVar7;
    thunk_FUN_02134474(plVar9,lVar7);
  }
  if (lVar8 != 0) {
    System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___Sort_3b32390
              (lVar8,lVar7,*(undefined8 *)PTR_DAT_04cb6790);
    return lVar8;
  }
LAB_023c3b5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

