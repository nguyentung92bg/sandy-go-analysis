/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$TryParseRange
bool Dino_BusSand_App_Meta_RacingRobotParser__TryParseRange (System_String_o* s, float* min, float* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$TryParseRange
   bool Dino_BusSand_App_Meta_RacingRobotParser__TryParseRange (System_String_o* s, float* min,
   float* max, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_RacingRobotParser__TryParseRange_225e1a8
          (long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  
  if ((bRam0000000004f9c02b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9c02b = 1;
  }
  *param_3 = 0;
  *param_2 = 0;
  if ((param_1 == 0) || (lVar4 = System_String__Trim_46d6ee0(param_1,0), lVar4 == 0)) {
LAB_0235e360:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(int *)(lVar4 + 0x10) < 3) ||
     ((sVar2 = System_String__get_Chars_46ccb24(lVar4,0,0), sVar2 != 0x5b ||
      (sVar2 = System_String__get_Chars_46ccb24(lVar4,*(int *)(lVar4 + 0x10) + -1,0), sVar2 != 0x5d)
      ))) {
    return 0;
  }
  lVar4 = System_String__Substring_46d4848(lVar4,1,*(int *)(lVar4 + 0x10) + -2,0);
  if (lVar4 == 0) goto LAB_0235e360;
  iVar3 = System_String__IndexOf_46d72c4(lVar4,0x2c,0);
  if (iVar3 < 0) {
    return 0;
  }
  lVar5 = System_String__Substring_46d4848(lVar4,0,iVar3,0);
  if (lVar5 == 0) goto LAB_0235e360;
  uVar6 = System_String__Trim_46d6ee0(lVar5,0);
  puVar1 = PTR_DAT_04caa370;
  if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa370);
  }
  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  uVar8 = System_Single__TryParse_4842d84(uVar6,0xa7,uVar7,param_2,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  lVar4 = System_String__Substring_46d6a94(lVar4,iVar3 + 1,0);
  if (lVar4 == 0) goto LAB_0235e360;
  lVar4 = System_String__Trim_46d6ee0(lVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  System_Globalization_NumberFormatInfo__ValidateParseStyleFloatingPoint_47a4fc4
            (0xa7,0,uVar6,param_3,0);
  if (lVar4 == 0) {
    *param_3 = 0;
    return 0;
  }
  if (cRam0000000004f9ffc2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc73d8);
    cRam0000000004f9ffc2 = '\x01';
  }
  uVar7 = System_String__GetRawStringData_46cfab8(lVar4,0);
  uVar10 = *(undefined4 *)(lVar4 + 0x10);
  lVar4 = System_Globalization_NumberFormatInfo__GetInstance_47a48c4(uVar6,0);
  puVar1 = PTR_DAT_04d10670;
  if ((bRam0000000004fad79f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d10670,uVar10,0xa7);
    bRam0000000004fad79f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = System_Number__TryParseSingle_483db20
                    (uVar7,uVar10,0xa7,lVar4,param_3,0,in_x6,in_x7,unaff_x30);
  if ((uVar8 & 1) != 0) {
    return 1;
  }
  auVar11 = System_MemoryExtensions__Trim_4828d9c(uVar7,uVar10,0);
  uVar7 = auVar11._8_8_;
  uVar6 = auVar11._0_8_;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(ulong *)(lVar4 + 0x70);
  if (cRam0000000004f9ffc2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc73d8);
    cRam0000000004f9ffc2 = '\x01';
    if (uVar8 == 0) goto LAB_04942ba8;
LAB_04942b78:
    uVar9 = System_String__GetRawStringData_46cfab8(uVar8,0);
    uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
  }
  else {
    if (uVar8 != 0) goto LAB_04942b78;
LAB_04942ba8:
    uVar9 = 0;
  }
  if (cRam0000000004fad1e9 == '\0') {
    FUN_02132f7c(PTR_DAT_04d0b528);
    FUN_02132f7c(PTR_DAT_04cd5630);
    cRam0000000004fad1e9 = '\x01';
  }
  iVar3 = auVar11._8_4_;
  if ((iVar3 == (int)uVar8) &&
     ((iVar3 == 0 ||
      (uVar8 = FUN_047d8d88(uVar6,uVar7,uVar9,uVar8,*(undefined8 *)PTR_DAT_04d0b528),
      (uVar8 & 1) != 0)))) {
    uVar10 = 0x7f800000;
    goto LAB_04942d54;
  }
  uVar8 = *(ulong *)(lVar4 + 0x78);
  if (cRam0000000004f9ffc2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc73d8);
    cRam0000000004f9ffc2 = '\x01';
    if (uVar8 == 0) goto LAB_04942c50;
LAB_04942c20:
    uVar9 = System_String__GetRawStringData_46cfab8(uVar8,0);
    uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
  }
  else {
    if (uVar8 != 0) goto LAB_04942c20;
LAB_04942c50:
    uVar9 = 0;
  }
  if (cRam0000000004fad1e9 == '\0') {
    FUN_02132f7c(PTR_DAT_04d0b528);
    FUN_02132f7c(PTR_DAT_04cd5630);
    cRam0000000004fad1e9 = '\x01';
  }
  if ((iVar3 == (int)uVar8) &&
     ((iVar3 == 0 ||
      (uVar8 = FUN_047d8d88(uVar6,uVar7,uVar9,uVar8,*(undefined8 *)PTR_DAT_04d0b528),
      (uVar8 & 1) != 0)))) {
    uVar10 = 0xff800000;
    goto LAB_04942d54;
  }
  uVar8 = *(ulong *)(lVar4 + 0x68);
  if (cRam0000000004f9ffc2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc73d8);
    cRam0000000004f9ffc2 = '\x01';
    if (uVar8 == 0) goto LAB_04942cf4;
LAB_04942cc4:
    uVar9 = System_String__GetRawStringData_46cfab8(uVar8,0);
    uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
  }
  else {
    if (uVar8 != 0) goto LAB_04942cc4;
LAB_04942cf4:
    uVar9 = 0;
  }
  if (cRam0000000004fad1e9 == '\0') {
    FUN_02132f7c(PTR_DAT_04d0b528);
    FUN_02132f7c(PTR_DAT_04cd5630);
    cRam0000000004fad1e9 = '\x01';
  }
  if ((iVar3 != (int)uVar8) ||
     ((iVar3 != 0 &&
      (uVar8 = FUN_047d8d88(uVar6,uVar7,uVar9,uVar8,*(undefined8 *)PTR_DAT_04d0b528),
      (uVar8 & 1) == 0)))) {
    return 0;
  }
  uVar10 = 0x7fc00000;
LAB_04942d54:
  *param_3 = uVar10;
  return 1;
}

