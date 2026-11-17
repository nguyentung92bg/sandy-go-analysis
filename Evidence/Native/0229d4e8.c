/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<CountNumber>d__30$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_d__30__MoveNext (Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_d__30_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<CountNumber>d__30$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_d__30__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_d__30_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_d__30__MoveNext_219d4e8(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  int iStack_3c;
  double dStack_38;
  
  if ((bRam0000000004f9ba07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae618);
    bRam0000000004f9ba07 = 1;
  }
  iVar10 = *(int *)(param_1 + 0x10);
  iStack_3c = 0;
  if (iVar10 == 2) {
    fVar11 = *(float *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar10 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar10 != 0) {
        return 0;
      }
      fVar11 = *(float *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (0.0 < fVar11) {
        uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar11,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    fVar11 = 0.0;
    *(undefined8 *)(param_1 + 0x40) = _UNK_00e69830;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(float *)(param_1 + 0x2c) <= fVar11) {
LAB_0229d6f0:
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = System_Int32__ToString_482d750(param_1 + 0x28,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar5,uVar3);
    }
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar4 & 1) == 0) goto LAB_0229d6f0;
  fVar12 = *(float *)(param_1 + 0x40);
  fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  cVar2 = cRam0000000004f9b891;
  fVar12 = fVar12 + fVar11;
  iVar10 = *(int *)(param_1 + 0x28);
  fVar8 = fVar12 / *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x40) = fVar12;
  fVar11 = 1.0;
  if (fVar8 <= 1.0) {
    fVar11 = fVar8;
  }
  fVar12 = 1.0;
  if (0.0 <= fVar8) {
    fVar12 = 1.0 - fVar11;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  fVar12 = 1.0 - fVar12 * fVar12 * fVar12;
  fVar11 = 1.0;
  if (fVar12 <= 1.0) {
    fVar11 = fVar12;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar12) {
    fVar8 = fVar11;
  }
  if (cVar2 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  fVar11 = ((float)iVar10 - (float)iVar9) * fVar8 + (float)iVar9;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar13 = (double)fVar11;
  dVar7 = (double)FUN_049b52f0(dVar13,&dStack_38);
  if (0.0 <= fVar11) {
    if (dVar7 != 0.5) {
      dStack_38 = (double)(long)(dVar13 + 0.5);
      goto LAB_0229d780;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dStack_38 = (double)(long)(dVar13 + -0.5);
      goto LAB_0229d780;
    }
    dVar7 = -1.0;
  }
  if (((long)dStack_38 & 1U) != 0) {
    dStack_38 = dStack_38 + dVar7;
  }
LAB_0229d780:
  iVar10 = -0x80000000;
  if (dStack_38 != INFINITY) {
    iVar10 = (int)dStack_38;
  }
  iStack_3c = iVar10;
  if (iVar10 != *(int *)(param_1 + 0x48)) {
    if (((*(char *)(param_1 + 0x30) != '\0') && (iVar10 != *(int *)(param_1 + 0x28))) &&
       (fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
       _UNK_00e20754 < fVar11 - *(float *)(param_1 + 0x44))) {
      uVar6 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      puVar1 = PTR_DAT_04cab1e8;
      *(undefined4 *)(param_1 + 0x44) = uVar6;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae618,0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(param_1 + 0x48) = iVar10;
    uVar3 = System_Int32__ToString_482d750(&iStack_3c,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar5,uVar3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}

