/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$TimeStringEx
System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__TimeStringEx (int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$TimeStringEx
   System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__TimeStringEx (int32_t t, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_StreakTowerUtil__TimeStringEx_2252160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000004f9bfd2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3cb0);
    FUN_02132f7c(PTR_DAT_04cb3cb8);
    FUN_02132f7c(PTR_DAT_04caef20);
    FUN_02132f7c(PTR_DAT_04cb3cc0);
    FUN_02132f7c(PTR_DAT_04cb3cc8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bfd2 = 1;
  }
  iVar1 = -0x80000000;
  if ((float)param_1 / 3600.0 != INFINITY) {
    iVar1 = (int)((float)param_1 / 3600.0);
  }
  dVar8 = (double)fmod((double)param_1,_UNK_00e6a580);
  iVar2 = -0x80000000;
  if (dVar8 / 60.0 != INFINITY) {
    iVar2 = (int)(dVar8 / 60.0);
  }
  dVar8 = (double)fmod((double)param_1);
  puVar4 = PTR_DAT_04ca9ac8;
  iVar3 = -0x80000000;
  if (dVar8 != INFINITY) {
    iVar3 = (int)dVar8;
  }
  if (iVar1 < 1) {
    if (iVar2 < 1) {
      if (iVar3 < 1) {
        return *(undefined8 *)PTR_DAT_04ca9c30;
      }
      iStack_24 = iVar3;
      uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      puVar7 = (undefined8 *)PTR_DAT_04cb3cc0;
    }
    else {
      iStack_24 = iVar2;
      if (0 < iVar3) {
        uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
        iStack_28 = iVar3;
        uVar6 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&iStack_28);
        puVar7 = (undefined8 *)PTR_DAT_04caef20;
        goto LAB_023522cc;
      }
      uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      puVar7 = (undefined8 *)PTR_DAT_04cb3cb0;
    }
  }
  else {
    iStack_24 = iVar1;
    if (0 < iVar2) {
      uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
      iStack_28 = iVar2;
      uVar6 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&iStack_28);
      puVar7 = (undefined8 *)PTR_DAT_04cb3cb8;
LAB_023522cc:
      uVar5 = System_String__Format_46d34e8(*puVar7,uVar5,uVar6,0);
      return uVar5;
    }
    uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
    puVar7 = (undefined8 *)PTR_DAT_04cb3cc8;
  }
  uVar5 = System_String__Format_46c8eb8(*puVar7,uVar5,0);
  return uVar5;
}

