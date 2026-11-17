/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$BindHall
void Dino_BusSand_App_UI_PassportUi__BindHall (Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$BindHall
   void Dino_BusSand_App_UI_PassportUi__BindHall (Dino_BusSand_App_UI_UIPanel_o* hud, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__BindHall_21dbc04
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  float *pfVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  undefined8 uVar18;
  float fVar19;
  int iStack_64;
  
  puVar2 = PTR_DAT_04cb0a50;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0a58);
    FUN_02132f7c(PTR_DAT_04cb0a60);
    FUN_02132f7c(PTR_DAT_04cb0a50);
    FUN_02132f7c(PTR_DAT_04cb0998);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cae6f8);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cadc88);
    FUN_02132f7c(PTR_DAT_04cae708);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04cb0a48);
    FUN_02132f7c(PTR_DAT_04cadd10);
    FUN_02132f7c(PTR_DAT_04cadc98);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb0a68);
    bRam0000000004f9bb88 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  Dino_BusSand_App_UI_PassportUi__Install_21dad80();
                    /* try { // try from 022dbd48 to 023dbd83 has its CatchHandler @ 022dc064 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if ((param_4 == 0) ||
     (lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cb0a48,0),
     lVar7 == 0)) {
LAB_022dc118:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar15 = (long *)(lVar7 + 0x10);
  *plVar15 = lVar9;
  thunk_FUN_02134474(plVar15,lVar9);
  lVar9 = *plVar15;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*plVar15 == 0) goto LAB_022dc118;
  uVar10 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0);
  puVar2 = PTR_DAT_04cb0998;
  lVar9 = *(long *)PTR_DAT_04cb0998;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
    lVar9 = *(long *)puVar2;
  }
  puVar14 = *(undefined8 **)(lVar9 + 0xb8);
  lVar16 = puVar14[2];
  if (lVar16 == 0) {
                    /* try { // try from 022dbe24 to 023dbe27 has its CatchHandler @ 022dc014 */
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
                    /* try { // try from 022dbe30 to 023dbe3b has its CatchHandler @ 022dc034 */
      puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
                    /* try { // try from 022dbe3c to 023dbe5b has its CatchHandler @ 022dc024 */
    uVar18 = *puVar14;
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022dbe5c to 023dbe67 has its CatchHandler @ 022dbba0 */
    System_Action___ctor_47b5ed0(lVar16,uVar18,*(undefined8 *)PTR_DAT_04cb0a58,0);
                    /* try { // try from 022dbe68 to 023dbe7b has its CatchHandler @ 022dc020 */
    plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar11 = lVar16;
    thunk_FUN_02134474(plVar11,lVar16);
  }
  Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar10,lVar16,1,*(undefined8 *)PTR_DAT_04cad948,0);
  if (*plVar15 == 0) goto LAB_022dc118;
  lVar9 = UnityEngine_Transform__Find_43d4bec(*plVar15,*(undefined8 *)PTR_DAT_04cadc80,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 022dbed0 to 023dbee3 has its CatchHandler @ 022dbffc */
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (lVar9 == 0) goto LAB_022dc118;
                    /* try { // try from 022dbefc to 023dbeff has its CatchHandler @ 022dc064 */
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cadc98,0);
                    /* try { // try from 022dbf10 to 023dbf23 has its CatchHandler @ 022dbfe4 */
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0,0);
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cadcd0,0);
                    /* try { // try from 022dbf4c to 023dbf5f has its CatchHandler @ 022dbfcc */
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0,0);
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cadd10,0);
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0,0);
                    /* try { // try from 022dbf88 to 023dbf9b has its CatchHandler @ 022dbfb4 */
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cadc88,0);
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0,0);
                    /* try { // try from 022dbf9c to 023dc067 has its CatchHandler @ 022dbba0 */
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caecb0,0);
                    /* catch() { ... } // from try @ 022dbf88 with catch @ 022dbfb4 */
    Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0,0);
                    /* catch() { ... } // from try @ 022dbf4c with catch @ 022dbfcc */
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cae6f8,0);
                    /* catch() { ... } // from try @ 022dbf10 with catch @ 022dbfe4 */
    lVar16 = *(long *)PTR_DAT_04ca9d18;
    lVar9 = *(long *)(lVar16 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar16);
      lVar9 = *(long *)(lVar16 + 0x38);
    }
                    /* catch() { ... } // from try @ 022dbed0 with catch @ 022dbffc */
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
                    /* catch() { ... } // from try @ 022dbe24 with catch @ 022dc014 */
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 022dbe68 with catch @ 022dc020 */
    lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 022dbe3c with catch @ 022dc024 */
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
                    /* catch() { ... } // from try @ 022dbe30 with catch @ 022dc034 */
    uVar18 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
                    /* catch() { ... } // from try @ 022dbd48 with catch @ 022dc064
                       catch() { ... } // from try @ 022dbefc with catch @ 022dc064 */
                    /* try { // try from 022dc068 to 023dc17f has its CatchHandler @ 022dc068
                       catch() { ... } // from try @ 022dc068 with catch @ 022dc068
                       catch() { ... } // from try @ 022dc198 with catch @ 022dc068
                       catch() { ... } // from try @ 022dc258 with catch @ 022dc068 */
    uVar18 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cae708,uVar18,0);
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar18,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_UI_GiftPackUi__Ticker_21acea4(param_4,*(undefined8 *)PTR_DAT_04cb0a68,0);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
  System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)PTR_DAT_04cb0a60,0);
  if (lVar9 == 0) goto LAB_022dc118;
  *(undefined8 *)(lVar9 + 0x20) = uVar10;
  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),uVar10);
  lVar7 = *plVar15;
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
  lVar9 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
  if (lVar9 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportsBtn_224663c(lVar9,0);
  }
  if ((lVar7 == 0) || (lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar16 == 0)
     ) goto LAB_022dc77c;
  uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar16,0);
  if ((uVar3 & 1) != (uVar4 & 1)) {
    lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
    if (lVar16 == 0) goto LAB_022dc77c;
    UnityEngine_GameObject__SetActive_43c1408(lVar16,uVar3 & 1,0);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  fVar19 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar7,0);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar1 = PTR_DAT_04caa208;
  pfVar12 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  if ((param_3 - pfVar12[2]) * (param_3 - pfVar12[2]) +
      (fVar19 - *pfVar12) * (fVar19 - *pfVar12) + (param_2 - pfVar12[1]) * (param_2 - pfVar12[1]) <
      _UNK_00e1fea0) {
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
      pfVar12 = *(float **)(*(long *)puVar1 + 0xb8);
    }
    UnityEngine_Transform__set_localScale_43d1be0(pfVar12[3],pfVar12[4],pfVar12[5],lVar7,0);
  }
  lVar16 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cadc80,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
  puVar2 = PTR_DAT_04cadc78;
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (lVar16 == 0) goto LAB_022dc77c;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cadc78,0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  lVar13 = 0;
  if ((uVar8 & 1) != 0) {
    lVar13 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)puVar2,0);
    if (lVar13 == 0) goto LAB_022dc77c;
    lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar13,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  if (((uVar8 & 1) == 0) || (*(char *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 0x10) != '\0'))
  {
    iVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(lVar9);
    iStack_64 = iVar5;
    if (lVar9 == 0) goto LAB_022dc77c;
  }
  else {
    if (lVar9 == 0) goto LAB_022dc77c;
    uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8(lVar9,0);
    Dino_BusSand_App_UI_PassportUi__Fill_21dc780(lVar9,uVar6);
    if (lVar13 == 0) goto LAB_022dc77c;
    UnityEngine_UI_Image__set_fillAmount_44afc70(lVar13,0);
    iVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(lVar9);
  }
  iStack_64 = iVar5;
  lVar13 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(lVar9,0);
  bVar17 = 0 < lVar13;
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cadd10,0);
  puVar1 = PTR_DAT_04caec68;
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0 < iVar5,0);
  if (iVar5 < 1) {
LAB_022dc540:
    bVar17 = false;
  }
  else {
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cb0a80,0);
    uVar18 = System_Int32__ToString_482d750(&iStack_64,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar18,0);
    if ((iStack_64 < 1) ||
       (uVar8 = Dino_BusSand_App_Meta_PassportFeature__get_ForceCloseOpen_2249190(lVar9,0),
       (uVar8 & 1) != 0)) goto LAB_022dc540;
  }
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cadcd0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar17,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cadc98,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar17 ^ 1,0);
  uVar10 = UnityEngine_Transform__Find_43d4bec(lVar16,*(undefined8 *)PTR_DAT_04cb0a70,0);
  if (lVar13 < 1) {
    lVar13 = *(long *)PTR_DAT_04ca9d18;
    lVar16 = *(long *)(lVar13 + 0x38);
    if (lVar16 == 0) {
      FUN_0216b4cc(lVar13);
      lVar16 = *(long *)(lVar13 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_0216b470();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar16 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_0216b470();
    }
    uVar18 = **(undefined8 **)(lVar16 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar18 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcc8,uVar18,0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar18 = Dino_BusSand_App_UI_GiftPackUi__ActivityCountdown_21ad88c(lVar13,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar18,0);
  puVar2 = PTR_DAT_04cb01b0;
  lVar16 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (lVar9,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar16 == 0) {
LAB_022dc77c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar16 + 0x88) == '\0') {
    lVar16 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (lVar9,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_04cb0558;
    if (lVar16 == 0) goto LAB_022dc77c;
    *(undefined1 *)(lVar16 + 0x88) = 1;
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar9,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(lVar7,*(undefined8 *)PTR_DAT_04cb0a78,0);
  }
  return;
}

