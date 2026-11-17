/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$get_StakeProgressText
System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__get_StakeProgressText (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$get_StakeProgressText
   System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__get_StakeProgressText
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__get_StakeProgressText_225c6a0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_14;
  
  if ((bRam0000000004f9c01b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9c01b = 1;
  }
  uStack_14 = 0;
  lVar2 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (lVar2 != 0) {
    uStack_14 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar2,0);
    uVar3 = System_Int32__ToString_482d750(&uStack_14,0);
    lVar2 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
    puVar1 = PTR_DAT_04cabd10;
    if (lVar2 != 0) {
      uStack_14 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar2,0xffffffff,0);
      uVar4 = System_Int32__ToString_482d750(&uStack_14,0);
      System_String__Concat_46d2b84(uVar3,*(undefined8 *)puVar1,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

