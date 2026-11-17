/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__OnOpen (Dino_BusSand_App_UI_BattleRoyaleWaitPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__OnOpen
   (Dino_BusSand_App_UI_BattleRoyaleWaitPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__OnOpen_219e2c8(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uStack_64;
  
  if ((bRam0000000004f9ba0b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae678);
    FUN_02132f7c(PTR_DAT_04cae680);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf98);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cae688);
    FUN_02132f7c(PTR_DAT_04cadee0);
    FUN_02132f7c(PTR_DAT_04cae690);
    FUN_02132f7c(PTR_DAT_04cae698);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae6a0);
    FUN_02132f7c(PTR_DAT_04cade10);
    bRam0000000004f9ba0b = 1;
  }
  puVar6 = PTR_DAT_04cae680;
  puVar3 = PTR_DAT_04caa458;
  uStack_64 = 0;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04caa458;
    plVar12 = param_2;
    if (*param_2 != lVar11) {
      plVar12 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar12;
    if (*param_2 != lVar11) {
      param_2 = (long *)0x0;
    }
  }
  puVar4 = PTR_DAT_04cae688;
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  lVar11 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0();
  plVar12 = (long *)(param_1 + 0x40);
  *plVar12 = lVar11;
  thunk_FUN_02134474(plVar12,lVar11);
  uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
    lVar11 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(uVar8,**(undefined8 **)(lVar11 + 0xb8));
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar8);
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar11 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac
                       (*(long *)(param_1 + 0x40),0);
    puVar4 = PTR_DAT_04cadda0;
    if (lVar11 == 0) goto LAB_0229e818;
    if (0 < *(int *)(lVar11 + 0x18)) {
      uVar7 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                        (lVar11,0,*(undefined8 *)PTR_DAT_04cadda0);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      uVar8 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(uVar7,1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        Dino_BusSand_App_UI_UIPanel__Img_2200bc8(param_1,*(undefined8 *)PTR_DAT_04cae6a0,uVar8,0);
      }
      uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cade10,0);
      System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                (lVar11,0,*(undefined8 *)puVar4);
      uVar10 = Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820(extraout_x1);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar8,uVar10);
    }
    puVar4 = PTR_DAT_04cae698;
    if (*plVar12 == 0) goto LAB_0229e818;
    uVar7 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalPersonNum_2220ff4(*plVar12,0);
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum_219e81c(param_1,0);
    lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
    lVar13 = *(long *)(param_1 + 0x40);
    uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74();
    if ((lVar13 == 0) ||
       (lVar13 = Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_22245b8(lVar13,10,1,2,uVar7,0),
       puVar5 = PTR_DAT_04cadf98, puVar4 = PTR_DAT_04cadf88, lVar13 == 0)) goto LAB_0229e818;
    if (0 < *(int *)(lVar13 + 0x18)) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        uVar8 = 0;
        uVar1 = uVar14 + 1;
        if ((uVar9 & 1) != 0) {
          uStack_64 = uVar1;
          uVar8 = System_Int32__ToString_482d750(&uStack_64,0);
          uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar8,0);
          if (lVar11 == 0) goto LAB_0229e818;
          uVar8 = UnityEngine_Transform__Find_43d4bec(lVar11,uVar8,0);
        }
        uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar13,uVar14,*(undefined8 *)puVar4);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar8,uVar10);
      } while ((uVar14 < 9) && (uVar14 = uVar1, (int)uVar1 < *(int *)(lVar13 + 0x18)));
    }
  }
  lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae4e0,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar11 == 0) {
LAB_0229e818:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)PTR_DAT_04cae678,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar10,0,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  puVar4 = PTR_DAT_04cae690;
  puVar3 = PTR_DAT_04cadee0;
  uVar8 = Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Animate_219e988(param_1);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar8,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Sfx_219e9f4
                    (_UNK_00e200f8,*(undefined8 *)puVar4);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar8,0);
  uVar8 = Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Sfx_219e9f4
                    (_UNK_00e20398,*(undefined8 *)puVar3);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar8,0);
  return;
}

