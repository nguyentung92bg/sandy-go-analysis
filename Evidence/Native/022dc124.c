/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RefreshButton
void Dino_BusSand_App_UI_PassportUi__RefreshButton (UnityEngine_Transform_o* btn, bool first, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RefreshButton
   void Dino_BusSand_App_UI_PassportUi__RefreshButton (UnityEngine_Transform_o* btn, bool first,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__RefreshButton_21dc124
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

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
  float *pfVar12;
  long lVar13;
  bool bVar14;
  float fVar15;
  int iStack_64;
  
  if ((bRam0000000004f9bb89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caec68);
                    /* try { // try from 022dc180 to 023dc197 has its CatchHandler @ 022dc288 */
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb0558);
                    /* try { // try from 022dc198 to 023dc22f has its CatchHandler @ 022dc068 */
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
                    /* try { // try from 022dc230 to 023dc233 has its CatchHandler @ 022dc288 */
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportsBtn_224663c(lVar7,0);
                    /* try { // try from 022dc244 to 023dc257 has its CatchHandler @ 022dc270 */
  }
                    /* try { // try from 022dc258 to 023dc29b has its CatchHandler @ 022dc068 */
  if ((param_4 == 0) ||
     (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0), lVar8 == 0))
  goto LAB_022dc77c;
  uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
                    /* catch() { ... } // from try @ 022dc244 with catch @ 022dc270 */
  if ((uVar3 & 1) != (uVar4 & 1)) {
                    /* catch() { ... } // from try @ 022dc180 with catch @ 022dc288
                       catch() { ... } // from try @ 022dc230 with catch @ 022dc288 */
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
    if (lVar8 == 0) goto LAB_022dc77c;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,uVar3 & 1,0);
  }
                    /* try { // try from 022dc29c to 023dc3eb has its CatchHandler @ 022dc29c
                       catch() { ... } // from try @ 022dc29c with catch @ 022dc29c
                       catch() { ... } // from try @ 022dc3f8 with catch @ 022dc29c */
  if ((uVar3 & 1) == 0) {
    return;
  }
  fVar15 = (float)UnityEngine_Transform__get_localScale_43d1b0c(param_4,0);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar1 = PTR_DAT_04caa208;
  pfVar12 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  if ((param_3 - pfVar12[2]) * (param_3 - pfVar12[2]) +
      (fVar15 - *pfVar12) * (fVar15 - *pfVar12) + (param_2 - pfVar12[1]) * (param_2 - pfVar12[1]) <
      _UNK_00e1fea0) {
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
      pfVar12 = *(float **)(*(long *)puVar1 + 0xb8);
    }
    UnityEngine_Transform__set_localScale_43d1be0(pfVar12[3],pfVar12[4],pfVar12[5],param_4,0);
  }
  lVar8 = UnityEngine_Transform__Find_43d4bec(param_4,*(undefined8 *)PTR_DAT_04cadc80,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar2 = PTR_DAT_04cadc78;
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (lVar8 == 0) goto LAB_022dc77c;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadc78,0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  lVar13 = 0;
                    /* try { // try from 022dc3ec to 023dc3f7 has its CatchHandler @ 022dc480 */
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 022dc3f8 to 023dc49b has its CatchHandler @ 022dc29c */
    lVar13 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar2,0);
    if (lVar13 == 0) goto LAB_022dc77c;
    lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar13,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
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
    if (lVar13 == 0) goto LAB_022dc77c;
    UnityEngine_UI_Image__set_fillAmount_44afc70(lVar13,0);
                    /* try { // try from 022dc76c to 023dc773 has its CatchHandler @ 022dc874 */
    iVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(lVar7);
  }
  iStack_64 = iVar5;
  lVar13 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(lVar7,0);
                    /* catch() { ... } // from try @ 022dc3ec with catch @ 022dc480 */
  bVar14 = 0 < lVar13;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadd10,0);
  puVar1 = PTR_DAT_04caec68;
                    /* try { // try from 022dc49c to 023dc5f7 has its CatchHandler @ 022dc49c
                       catch() { ... } // from try @ 022dc49c with catch @ 022dc49c
                       catch() { ... } // from try @ 022dc808 with catch @ 022dc49c */
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0 < iVar5,0);
  if (iVar5 < 1) {
LAB_022dc540:
    bVar14 = false;
  }
  else {
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0a80,0);
    uVar11 = System_Int32__ToString_482d750(&iStack_64,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar11,0);
    if ((iStack_64 < 1) ||
       (uVar9 = Dino_BusSand_App_Meta_PassportFeature__get_ForceCloseOpen_2249190(lVar7,0),
       (uVar9 & 1) != 0)) goto LAB_022dc540;
  }
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadcd0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar14,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadc98,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar14 ^ 1,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0a70,0);
  if (lVar13 < 1) {
    lVar13 = *(long *)PTR_DAT_04ca9d18;
                    /* try { // try from 022dc5f8 to 023dc673 has its CatchHandler @ 022dc870 */
    lVar8 = *(long *)(lVar13 + 0x38);
    if (lVar8 == 0) {
      FUN_0216b4cc(lVar13);
      lVar8 = *(long *)(lVar13 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470();
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcc8,uVar11,0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_UI_GiftPackUi__ActivityCountdown_21ad88c(lVar13,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar11,0);
  puVar2 = PTR_DAT_04cb01b0;
  if ((param_5 & 1) != 0) {
    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (lVar7,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar8 == 0) {
LAB_022dc77c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar8 + 0x88) == '\0') {
                    /* try { // try from 022dc6cc to 023dc6d3 has its CatchHandler @ 022dc86c */
      lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (lVar7,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_04cb0558;
      if (lVar8 == 0) goto LAB_022dc77c;
      *(undefined1 *)(lVar8 + 0x88) = 1;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar7,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(param_4,*(undefined8 *)PTR_DAT_04cb0a78,0);
    }
  }
  return;
}

