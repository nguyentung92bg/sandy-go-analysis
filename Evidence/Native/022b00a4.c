/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$RefreshHeader
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$RefreshHeader
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader_21b00a4(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((bRam0000000004f9ba86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04caf078);
    FUN_02132f7c(PTR_DAT_04caf080);
    FUN_02132f7c(PTR_DAT_04caec88);
    FUN_02132f7c(PTR_DAT_04caf088);
    FUN_02132f7c(PTR_DAT_04caf090);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04cabc50);
    FUN_02132f7c(PTR_DAT_04caf098);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04caf0a0);
    bRam0000000004f9ba86 = 1;
  }
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar10 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                         (*(long *)(param_1 + 0x40),0), puVar7 = PTR_DAT_04caf080,
     puVar6 = PTR_DAT_04caecb0, puVar5 = PTR_DAT_04cad200, puVar4 = PTR_DAT_04ca9c30, lVar10 == 0))
  {
LAB_022b0400:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  cVar2 = *(char *)(lVar10 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac018);
  }
  uVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,uVar1,0);
  uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar6,0);
  uVar11 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar11,*(undefined8 *)puVar4,0);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  if (lVar10 == 0) {
    lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04caec88,0);
  }
  puVar4 = PTR_DAT_04caec68;
  if (cVar2 == '\0') {
    uVar9 = System_String__IsNullOrEmpty_46d2084(uVar11,0);
    uVar9 = uVar9 ^ 1;
  }
  else {
    uVar9 = 0;
  }
  puVar5 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,uVar9 & 1);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if (((uVar12 & 1) != 0) &&
     (uVar12 = System_String__IsNullOrEmpty_46d2084(uVar11,0), (uVar12 & 1) == 0)) {
    if (lVar10 == 0) goto LAB_022b0400;
    uVar13 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cabc50,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar11 = Dino_BusSand_App_UI_GiftPackUi__DiscountText_21a96c0(uVar11);
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar13,uVar11);
  }
  puVar7 = PTR_DAT_04caf090;
  puVar6 = PTR_DAT_04caf088;
  puVar5 = PTR_DAT_04caf078;
  uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04caf098,0);
  cVar3 = *(char *)(param_1 + 0x5e);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,cVar3 != '\0');
  uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  bVar8 = cVar2 == '\0';
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,bVar8);
  uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,bVar8);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,!bVar8);
  puVar5 = PTR_DAT_04caf0a0;
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04ca9ae8;
  uVar11 = *(undefined8 *)puVar5;
  if ((bRam0000000004f9ba70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba70 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  lVar14 = 0;
  if ((uVar12 & 1) != 0) {
    if (lVar10 == 0) goto LAB_022add34;
    lVar14 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar10,*(undefined8 *)PTR_DAT_04cada30);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = System_String__IsNullOrEmpty_46d2084(uVar11,0);
    lVar10 = 0;
    if ((uVar12 & 1) == 0) {
      if (lVar14 == 0) goto LAB_022add34;
      lVar10 = UnityEngine_Animation__get_Item_4334ee8(lVar14,uVar11,0);
    }
    uVar12 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar10,0,0);
    if ((uVar12 & 1) != 0) {
      if (lVar14 == 0) goto LAB_022add34;
      uVar11 = UnityEngine_Animation__get_clip_43341a8(lVar14,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar12 & 1) != 0) {
        lVar10 = UnityEngine_Animation__get_clip_43341a8(lVar14,0);
        if (lVar10 == 0) goto LAB_022add34;
        uVar11 = UnityEngine_Object__get_name_43c71a4(lVar10,0);
        lVar10 = UnityEngine_Animation__get_Item_4334ee8(lVar14,uVar11,0);
      }
    }
    uVar12 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar10,0,0);
    if ((uVar12 & 1) == 0) {
      if ((lVar14 != 0) && (UnityEngine_Animation__Stop_4334660(lVar14,0), lVar10 != 0)) {
        UnityEngine_AnimationState__set_enabled_4336edc(lVar10,1,0);
        UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,lVar10,0);
        UnityEngine_AnimationState__get_length_4337218(0,lVar10,0);
        UnityEngine_AnimationState__set_time_43370c0(lVar10,0);
        UnityEngine_Animation__Sample_4334b90(lVar14,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,0,0);
        }
        lVar14 = *(long *)(lVar10 + 0x10);
        if (lVar14 != 0) {
          if (pcRam0000000004fa4d30 == (code *)0x0) {
            pcRam0000000004fa4d30 = (code *)FUN_02132f40(&UNK_00e482f2);
          }
                    /* WARNING: Could not recover jumptable at 0x04436f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa4d30)(lVar14,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
      }
LAB_022add34:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

