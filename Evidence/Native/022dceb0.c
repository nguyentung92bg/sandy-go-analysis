/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass20_0$$<BindHall>b__1
void Dino_BusSand_App_UI_PassportUi___c__DisplayClass20_0___BindHall_b__1 (Dino_BusSand_App_UI_PassportUi___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022dc6a8) */
/* WARNING: Removing unreachable block (ram,0x022dc6c0) */
/* WARNING: Removing unreachable block (ram,0x022dc6c8) */
/* WARNING: Removing unreachable block (ram,0x022dc6d8) */
/* WARNING: Removing unreachable block (ram,0x022dc700) */
/* WARNING: Removing unreachable block (ram,0x022dc704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass20_0$$<BindHall>b__1
   void Dino_BusSand_App_UI_PassportUi___c__DisplayClass20_0___BindHall_b__1
   (Dino_BusSand_App_UI_PassportUi___c__DisplayClass20_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi___c__DisplayClass20_0___BindHall_b__1_21dceb0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  int iStack_64;
  
  lVar12 = *(long *)(param_4 + 0x10);
  if ((bRam0000000004f9bb89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0350);
    FUN_02132f7c(PTR_DAT_04cadc78);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb0a70);
    FUN_02132f7c(PTR_DAT_04cb0a78);
    FUN_02132f7c(PTR_DAT_04cadd10);
    FUN_02132f7c(PTR_DAT_04cadc98);
    FUN_02132f7c(PTR_DAT_04cb0a80);
    bRam0000000004f9bb89 = 1;
  }
  iStack_64 = 0;
  lVar7 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportsBtn_224663c(lVar7,0);
  }
  if ((lVar12 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar8 == 0)
     ) {
LAB_022dc77c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
  if ((uVar3 & 1) != (uVar4 & 1)) {
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
    if (lVar8 == 0) goto LAB_022dc77c;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,uVar3 & 1,0);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  fVar15 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar12,0);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar1 = PTR_DAT_04caa208;
  pfVar13 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  if ((param_3 - pfVar13[2]) * (param_3 - pfVar13[2]) +
      (fVar15 - *pfVar13) * (fVar15 - *pfVar13) + (param_2 - pfVar13[1]) * (param_2 - pfVar13[1]) <
      _UNK_00e1fea0) {
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
      pfVar13 = *(float **)(*(long *)puVar1 + 0xb8);
    }
    UnityEngine_Transform__set_localScale_43d1be0(pfVar13[3],pfVar13[4],pfVar13[5],lVar12,0);
  }
  lVar12 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadc80,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  puVar2 = PTR_DAT_04cadc78;
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (lVar12 == 0) goto LAB_022dc77c;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadc78,0);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  lVar8 = 0;
  if ((uVar9 & 1) != 0) {
    lVar8 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar2,0);
    if (lVar8 == 0) goto LAB_022dc77c;
    lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar8,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if (((uVar9 & 1) == 0) || (*(char *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 0x10) != '\0'))
  {
    iVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(lVar7);
    iStack_64 = iVar5;
    if (lVar7 == 0) goto LAB_022dc77c;
  }
  else {
    if (lVar7 == 0) goto LAB_022dc77c;
    uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8(lVar7,0);
    Dino_BusSand_App_UI_PassportUi__Fill_21dc780(lVar7,uVar6);
    if (lVar8 == 0) goto LAB_022dc77c;
    UnityEngine_UI_Image__set_fillAmount_44afc70(lVar8,0);
    iVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(lVar7);
  }
  iStack_64 = iVar5;
  lVar8 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(lVar7,0);
  bVar14 = 0 < lVar8;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadd10,0);
  puVar1 = PTR_DAT_04caec68;
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0 < iVar5,0);
  if (0 < iVar5) {
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cb0a80,0);
    uVar11 = System_Int32__ToString_482d750(&iStack_64,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar11,0);
    if ((0 < iStack_64) &&
       (uVar9 = Dino_BusSand_App_Meta_PassportFeature__get_ForceCloseOpen_2249190(lVar7,0),
       (uVar9 & 1) == 0)) goto LAB_022dc544;
  }
  bVar14 = false;
LAB_022dc544:
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadcd0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar14,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadc98,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar14 ^ 1,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cb0a70,0);
  if (lVar8 < 1) {
    lVar7 = *(long *)PTR_DAT_04ca9d18;
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar7);
      lVar12 = *(long *)(lVar7 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    uVar11 = **(undefined8 **)(lVar12 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcc8,uVar11,0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_UI_GiftPackUi__ActivityCountdown_21ad88c(lVar8,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar11,0);
  return;
}

