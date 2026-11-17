/* IL2CPP: Dino.BusSand.App.UI.GuideRequest$$FromConfig
Dino_BusSand_App_UI_GuideRequest_o* Dino_BusSand_App_UI_GuideRequest__FromConfig (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuideRequest$$FromConfig
   Dino_BusSand_App_UI_GuideRequest_o* Dino_BusSand_App_UI_GuideRequest__FromConfig (int32_t id,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  
  puVar2 = PTR_DAT_04cb18b0;
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c397 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18b0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb6b68);
    FUN_02132f7c(PTR_DAT_04cb6b70);
    FUN_02132f7c(PTR_DAT_04cb6b78);
    FUN_02132f7c(PTR_DAT_04cb6b80);
    FUN_02132f7c(PTR_DAT_04cb6b88);
    FUN_02132f7c(PTR_DAT_04cb6b90);
    FUN_02132f7c(PTR_DAT_04cb6b98);
    FUN_02132f7c(PTR_DAT_04cb6ba0);
    FUN_02132f7c(PTR_DAT_04cb6ba8);
    FUN_02132f7c(PTR_DAT_04cb6bb0);
    FUN_02132f7c(PTR_DAT_04cb6bb8);
    FUN_02132f7c(PTR_DAT_04cb6bc0);
    FUN_02132f7c(PTR_DAT_04cb6bc8);
    FUN_02132f7c(PTR_DAT_04cb6bd0);
    FUN_02132f7c(PTR_DAT_04cb6bd8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb6be0);
    FUN_02132f7c(PTR_DAT_04cb6be8);
    bRam0000000004f9c397 = 1;
  }
  puVar3 = PTR_DAT_04cb6b88;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  uVar13 = _UNK_00e6a440;
  *(undefined4 *)(lVar11 + 0x4c) = 0x3f19999a;
  *(undefined4 *)(lVar11 + 0x58) = 0x3f19999a;
  *(undefined4 *)(lVar11 + 100) = 0x44480000;
  *(undefined8 *)(lVar11 + 0x50) = uVar13;
  *(undefined4 *)(lVar11 + 0x70) = 0xffffffff;
  System_Object___ctor_4870e5c(lVar11,0);
  lVar12 = *(long *)puVar1;
  *(undefined4 *)(lVar11 + 0x10) = param_1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,param_1,0);
  puVar9 = PTR_DAT_04cb6be0;
  puVar8 = PTR_DAT_04cb6bd8;
  puVar7 = PTR_DAT_04cb6bc8;
  puVar6 = PTR_DAT_04cb6ba8;
  puVar5 = PTR_DAT_04cb6b90;
  puVar4 = PTR_DAT_04cb6b80;
  puVar3 = PTR_DAT_04cb6b70;
  puVar2 = PTR_DAT_04cb6b68;
  puVar1 = PTR_DAT_04ca9c30;
  if (lVar12 == 0) {
    Dino_BusSand_App_UI_GuideRequest__ApplyDecoded_22cee94(lVar11,param_1);
  }
  else {
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)PTR_DAT_04cb6be8,0);
    uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar13,*(undefined8 *)puVar1,0);
    puVar15 = (undefined8 *)(lVar11 + 0x38);
    *puVar15 = uVar13;
    thunk_FUN_02134474(puVar15,uVar13);
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar6,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    uVar13 = *(undefined8 *)puVar4;
    *(bool *)(lVar11 + 0x40) = iVar10 != 0;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    uVar13 = *(undefined8 *)puVar7;
    *(bool *)(lVar11 + 0x48) = iVar10 != 0;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    uVar13 = *(undefined8 *)puVar8;
    *(bool *)(lVar11 + 0x49) = iVar10 != 0;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    uVar13 = *(undefined8 *)puVar3;
    *(bool *)(lVar11 + 0x41) = iVar10 == 0;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    uVar16 = Dino_BusSand_App_MiniJson__Float_21563fc(0,uVar13,0);
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar9,0);
    uVar17 = Dino_BusSand_App_MiniJson__Float_21563fc(0,uVar13,0);
    uVar13 = *(undefined8 *)puVar5;
    *(undefined4 *)(lVar11 + 0x5c) = uVar16;
    *(undefined4 *)(lVar11 + 0x60) = uVar17;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    uVar16 = Dino_BusSand_App_MiniJson__Float_21563fc(0,uVar13,0);
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar2,0);
    uVar17 = Dino_BusSand_App_MiniJson__Float_21563fc(0,uVar13,0);
    puVar1 = PTR_DAT_04cb6bb0;
    *(undefined4 *)(lVar11 + 0x68) = uVar16;
    *(undefined4 *)(lVar11 + 0x6c) = uVar17;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar1,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    fVar18 = (float)iVar10;
    if (iVar10 < 1) {
      fVar18 = 800.0;
    }
    uVar13 = *(undefined8 *)PTR_DAT_04cb6bb8;
    *(float *)(lVar11 + 100) = fVar18;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    uVar16 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    puVar1 = PTR_DAT_04cb6bd0;
    *(undefined4 *)(lVar11 + 0x54) = uVar16;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar1,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    uVar13 = *(undefined8 *)PTR_DAT_04cb6b98;
    fVar18 = (float)iVar10 * _UNK_00e20754;
    if (iVar10 < 1) {
      fVar18 = _UNK_00e20094;
    }
    *(float *)(lVar11 + 0x4c) = fVar18;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar13,0);
    uVar16 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    puVar1 = PTR_DAT_04cb6bc0;
    *(undefined4 *)(lVar11 + 0x50) = uVar16;
    uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar1,0);
    iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
    if (iVar10 == 1) {
      uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)PTR_DAT_04cb6b78,0);
      iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
      *(int *)(lVar11 + 0x44) = iVar10;
    }
    else {
      iVar10 = *(int *)(lVar11 + 0x44);
    }
    if ((iVar10 != 0) &&
       (uVar14 = System_String__IsNullOrEmpty_46d2084(*puVar15,0), (uVar14 & 1) != 0)) {
      uVar13 = System_Int32__ToString_482d750(lVar11 + 0x44,0);
      uVar13 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6ba0,uVar13,0);
      *puVar15 = uVar13;
      thunk_FUN_02134474(puVar15,uVar13);
    }
    if (*(int *)(lVar11 + 0x44) != 0) {
      fVar18 = *(float *)(lVar11 + 0x60);
      if (fVar18 <= 440.0) {
        fVar18 = 440.0;
      }
      *(float *)(lVar11 + 0x60) = fVar18;
    }
  }
  return lVar11;
}

