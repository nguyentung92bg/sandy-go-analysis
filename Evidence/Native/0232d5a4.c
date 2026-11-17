/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_StakeProgressText
System_String_o* Dino_BusSand_App_Meta_ClimbTowerFeature__get_StakeProgressText (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_StakeProgressText
   System_String_o* Dino_BusSand_App_Meta_ClimbTowerFeature__get_StakeProgressText
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__get_StakeProgressText_222d5a4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9be47 = 1;
  }
  uStack_24 = 0;
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar1 = PTR_DAT_04cabd10;
  if (lVar2 != 0) {
    uVar3 = System_Int32__ToString_482d750(lVar2 + 0x10,0);
    uStack_24 = Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint_2229e34(param_1,0xffffffff);
    uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
    System_String__Concat_46d2b84(uVar3,*(undefined8 *)puVar1,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

