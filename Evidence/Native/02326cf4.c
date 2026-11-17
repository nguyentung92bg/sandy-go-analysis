/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$BindContinuePanel
void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindContinuePanel (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$BindContinuePanel
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindContinuePanel
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* panel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__BindContinuePanel_2226cf4
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b99b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18,0);
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf00);
    FUN_02132f7c(PTR_DAT_04cadf08);
    FUN_02132f7c(PTR_DAT_04cadf28);
    FUN_02132f7c(PTR_DAT_04cadf18);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9b99b = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) {
LAB_0228f778:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cadf08,0);
    lVar8 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)PTR_DAT_04cadf00,**(undefined8 **)(lVar7 + 0xb8),0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
    lVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    if (lVar7 != 0) {
      uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cadf18,0);
      uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar7,0);
      uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
      uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar7,0);
      uVar6 = System_Int32__ToString_482d750(&uStack_24,0);
      uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
      uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cadf28,0);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef8);
      Dino_BusSand_App_Meta_BattleRoyalePerson___ctor_22245a8(lVar7,0);
      puVar1 = PTR_DAT_04cadef0;
      if (*(int *)(*(long *)PTR_DAT_04cadef0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar7 == 0) goto LAB_0228f778;
      *(undefined4 *)(lVar7 + 0x10) = **(undefined4 **)(*(long *)puVar1 + 0xb8);
      uVar2 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
      *(undefined4 *)(lVar7 + 0x14) = uVar2;
      Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar4,lVar7,0);
    }
  }
  return;
}

