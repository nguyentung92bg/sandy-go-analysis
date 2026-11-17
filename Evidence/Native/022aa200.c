/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$SetCell
void Dino_BusSand_App_UI_GiftPackPanel__SetCell (Dino_BusSand_App_UI_GiftPackPanel_o* __this, UnityEngine_Transform_o* cell, int32_t id, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$SetCell
   void Dino_BusSand_App_UI_GiftPackPanel__SetCell (Dino_BusSand_App_UI_GiftPackPanel_o* __this,
   UnityEngine_Transform_o* cell, int32_t id, int64_t n, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackPanel__SetCell_21aa200
               (undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_48;
  
  uStack_48 = param_4;
  if ((bRam0000000004f9ba57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04caed30);
    FUN_02132f7c(PTR_DAT_04caed38);
    bRam0000000004f9ba57 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 == 0) {
LAB_022aa544:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar5 = (long *)UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04cae428,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
  plVar10 = (long *)0x0;
  if ((uVar6 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_022aa544;
    plVar10 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                (plVar5,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar2 = PTR_DAT_04caec68;
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_GiftPackUi__RewardIcon_21aa938(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
  if ((uVar6 & 1) == 0) {
LAB_022aa408:
    if (param_3 == 0x3e9) {
LAB_022aa410:
      uVar4 = 1;
      goto LAB_022aa440;
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar6 & 1) == 0) goto LAB_022aa408;
    if (plVar10 == (long *)0x0) goto LAB_022aa544;
    UnityEngine_UI_Image__set_sprite_44a7258(plVar10,uVar7,0);
    (**(code **)(*plVar10 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar10,*(undefined8 *)(*plVar10 + 0x2b0)
              );
    if (param_3 == 0x3e9) goto LAB_022aa410;
    uVar6 = Dino_BusSand_App_UI_GiftPackPanel__get_IsGp4_21aa1a0(param_1);
    if ((uVar6 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_022aa544;
      if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x42fc0000,0x42fc0000,plVar5,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_UI_CommerceUi__IsCurrency_22ab3f0(param_3,0);
LAB_022aa440:
  puVar3 = PTR_DAT_04caed38;
  puVar1 = PTR_DAT_04caed30;
  uVar7 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04caed30,0);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar7,(uVar4 ^ 0xffffffff) & 1);
  uVar7 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)puVar3,0);
  Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar7,uVar4 & 1);
  if ((~uVar4 & 1) == 0) {
    uVar7 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)puVar3,0);
    uVar8 = System_Int64__ToString_482e7e4(&uStack_48,0);
  }
  else {
    uVar7 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)puVar1,0);
    uVar8 = System_Int64__ToString_482e7e4(&uStack_48,0);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar8,0);
  }
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar7,uVar8);
  return;
}

