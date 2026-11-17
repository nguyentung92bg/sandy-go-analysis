/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$TimeString
System_String_o* Dino_BusSand_App_UI_CommerceUi__TimeString (float left, bool withSpacing, bool showZero, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$TimeString
   System_String_o* Dino_BusSand_App_UI_CommerceUi__TimeString (float left, bool withSpacing, bool
   showZero, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi__TimeString_22aae80(float param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000004f9c29f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3cb0);
    FUN_02132f7c(PTR_DAT_04cb3cb8);
    FUN_02132f7c(PTR_DAT_04cb5e78);
    FUN_02132f7c(PTR_DAT_04caef20);
    FUN_02132f7c(PTR_DAT_04cb3cc8);
    FUN_02132f7c(PTR_DAT_04cb5e80);
    FUN_02132f7c(PTR_DAT_04cb5e88);
    bRam0000000004f9c29f = 1;
  }
  puVar4 = PTR_DAT_04cab3a8;
  puVar3 = PTR_DAT_04cab3a0;
  if (_UNK_00e1fddc <= param_1) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,0);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar5 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar6 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    System_String__Concat_46d30e8(uVar5,*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar4,0);
    return;
  }
  iVar1 = -0x80000000;
  if (param_1 / 3600.0 != INFINITY) {
    iVar1 = (int)(param_1 / 3600.0);
  }
  dVar8 = (double)fmod((double)param_1,_UNK_00e6a580);
  iStack_48 = -0x80000000;
  if (dVar8 / 60.0 != INFINITY) {
    iStack_48 = (int)(dVar8 / 60.0);
  }
  dVar8 = (double)fmod((double)param_1);
  puVar3 = PTR_DAT_04ca9ac8;
  iVar2 = -0x80000000;
  if (dVar8 != INFINITY) {
    iVar2 = (int)dVar8;
  }
  if (iVar1 < 1) {
    if (iStack_48 < 1) {
      iStack_44 = iVar2;
      if ((param_2 & 1) == 0) {
        uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
        puVar7 = (undefined8 *)PTR_DAT_04cb5e78;
      }
      else {
        uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
        puVar7 = (undefined8 *)PTR_DAT_04cb5e88;
      }
    }
    else {
      iStack_44 = iStack_48;
      if ((0 < iVar2) || ((param_3 & 1) != 0)) {
        if ((param_2 & 1) == 0) {
          uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
          iStack_48 = iVar2;
          uVar6 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&iStack_48);
          puVar7 = (undefined8 *)PTR_DAT_04caef20;
        }
        else {
          uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
          iStack_48 = iVar2;
          uVar6 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&iStack_48);
          puVar7 = (undefined8 *)PTR_DAT_04cb5e80;
        }
        goto LAB_023ab05c;
      }
      uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
      puVar7 = (undefined8 *)PTR_DAT_04cb3cb0;
    }
  }
  else {
    iStack_44 = iVar1;
    if ((0 < iStack_48) || ((param_3 & 1) != 0)) {
      uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
      uVar6 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&iStack_48);
      puVar7 = (undefined8 *)PTR_DAT_04cb3cb8;
LAB_023ab05c:
      System_String__Format_46d34e8(*puVar7,uVar5,uVar6,0);
      return;
    }
    uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
    puVar7 = (undefined8 *)PTR_DAT_04cb3cc8;
  }
  System_String__Format_46c8eb8(*puVar7,uVar5,0);
  return;
}

