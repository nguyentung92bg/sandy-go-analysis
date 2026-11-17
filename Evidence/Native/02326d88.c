/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$get_StakeProgressText
System_String_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__get_StakeProgressText (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$get_StakeProgressText
   System_String_o* Dino_BusSand_App_Meta_BattleRoyaleFeature__get_StakeProgressText
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__get_StakeProgressText_2226d88(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b99c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9b99c = 1;
  }
  uStack_24 = 0;
  lVar2 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
  puVar1 = PTR_DAT_04cabd10;
  if (lVar2 != 0) {
    uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar2,0);
    uVar3 = System_Int32__ToString_482d750(&uStack_24,0);
    uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar2,0);
    uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
    System_String__Concat_46d2b84(uVar3,*(undefined8 *)puVar1,uVar4,0);
  }
  return;
}

