/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ValueString
System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__ValueString (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ValueString
   System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__ValueString
   (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakTowerUtil__ValueString_2252014(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000004f9bfd1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb3ca0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb3ca8);
    FUN_02132f7c(PTR_DAT_04cb2d00);
    bRam0000000004f9bfd1 = 1;
  }
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 < 1) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar3 = *param_1;
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cb2d00,uVar3,0);
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)PTR_DAT_04cb3ca8,0);
    uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)PTR_DAT_04ca9c30,0);
    uVar8 = System_String__op_Equality_46d1108(uVar7,*(undefined8 *)PTR_DAT_04cb3ca0,0);
    lVar6 = System_Int64__ToString_482e7e4(param_1 + 2,0);
    if ((uVar8 & 1) != 0) {
      return lVar6;
    }
    lVar9 = *(long *)PTR_DAT_04cabb10;
    if ((lVar9 == 0) || (iVar4 = *(int *)(lVar9 + 0x10), iVar4 == 0)) {
      if ((lVar6 == 0) || (lVar9 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
    }
    else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
      lVar11 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar4,lVar6,0);
      System_String__FillStringChecked_46d2a48(lVar11,0,lVar9);
      System_String__FillStringChecked_46d2a48(lVar11,iVar4,lVar6);
      lVar9 = lVar11;
    }
    return lVar9;
  }
  iVar4 = (int)lVar6;
  if ((bRam0000000004f9bfd2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3cb0);
    FUN_02132f7c(PTR_DAT_04cb3cb8);
    FUN_02132f7c(PTR_DAT_04caef20);
    FUN_02132f7c(PTR_DAT_04cb3cc0);
    FUN_02132f7c(PTR_DAT_04cb3cc8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bfd2 = 1;
  }
  dVar15 = (double)iVar4;
  fVar13 = (float)iVar4 / 3600.0;
  iVar4 = -0x80000000;
  if (fVar13 != INFINITY) {
    iVar4 = (int)fVar13;
  }
  dVar14 = (double)fmod(dVar15,_UNK_00e6a580);
  iVar1 = -0x80000000;
  if (dVar14 / 60.0 != INFINITY) {
    iVar1 = (int)(dVar14 / 60.0);
  }
  dVar15 = (double)fmod(dVar15);
  puVar5 = PTR_DAT_04ca9ac8;
  iVar2 = -0x80000000;
  if (dVar15 != INFINITY) {
    iVar2 = (int)dVar15;
  }
  if (iVar4 < 1) {
    if (iVar1 < 1) {
      if (iVar2 < 1) {
        return *(long *)PTR_DAT_04ca9c30;
      }
      iStack_24 = iVar2;
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      puVar12 = (undefined8 *)PTR_DAT_04cb3cc0;
    }
    else {
      iStack_24 = iVar1;
      if (0 < iVar2) {
        uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
        iStack_28 = iVar2;
        uVar10 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&iStack_28);
        puVar12 = (undefined8 *)PTR_DAT_04caef20;
        goto LAB_023522cc;
      }
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      puVar12 = (undefined8 *)PTR_DAT_04cb3cb0;
    }
  }
  else {
    iStack_24 = iVar4;
    if (0 < iVar1) {
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      iStack_28 = iVar1;
      uVar10 = FUN_02133100(*(undefined8 *)(puVar5 + 0x48),&iStack_28);
      puVar12 = (undefined8 *)PTR_DAT_04cb3cb8;
LAB_023522cc:
      lVar6 = System_String__Format_46d34e8(*puVar12,uVar7,uVar10,0);
      return lVar6;
    }
    uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
    puVar12 = (undefined8 *)PTR_DAT_04cb3cc8;
  }
  lVar6 = System_String__Format_46c8eb8(*puVar12,uVar7,0);
  return lVar6;
}

