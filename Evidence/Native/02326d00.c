/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$BindQuitItem
void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindQuitItem (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, UnityEngine_GameObject_o* row, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$BindQuitItem
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindQuitItem
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, UnityEngine_GameObject_o* row, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindQuitItem_2226d00
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bde5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bde5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = UnityEngine_GameObject__get_transform_43c1048(param_2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b99a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18,0);
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf00);
    FUN_02132f7c(PTR_DAT_04cadf08);
    FUN_02132f7c(PTR_DAT_04cadf10);
    FUN_02132f7c(PTR_DAT_04cadf18);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cadf20);
    bRam0000000004f9b99a = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar2 = PTR_DAT_04ca9d18;
  if ((uVar7 & 1) == 0) {
    uVar4 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar8,*(undefined8 *)PTR_DAT_04cadf08,0);
    lVar10 = *(long *)puVar2;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cadf00;
    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)puVar2,**(undefined8 **)(lVar9 + 0xb8),0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
    lVar9 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    if (lVar9 != 0) {
      if (lVar8 != 0) {
        uVar4 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadf20,0);
        lVar10 = *(long *)puVar1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar10);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar7 & 1) != 0) {
          uVar4 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                            (lVar8,*(undefined8 *)PTR_DAT_04cadf18,0);
        }
        uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar9,0);
        uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
        uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar9,0);
        uVar6 = System_Int32__ToString_482d750(&uStack_24,0);
        uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
        uVar4 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadf10,0);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef8);
        Dino_BusSand_App_Meta_BattleRoyalePerson___ctor_22245a8(lVar8,0);
        puVar1 = PTR_DAT_04cadef0;
        if (*(int *)(*(long *)PTR_DAT_04cadef0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x10) = **(undefined4 **)(*(long *)puVar1 + 0xb8);
          uVar3 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
          *(undefined4 *)(lVar8 + 0x14) = uVar3;
          Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar4,lVar8,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

