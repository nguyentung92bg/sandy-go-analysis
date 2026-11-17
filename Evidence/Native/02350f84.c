/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_StakeProgressText
System_String_o* Dino_BusSand_App_Meta_StreakRateFeature__get_StakeProgressText (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_StakeProgressText
   System_String_o* Dino_BusSand_App_Meta_StreakRateFeature__get_StakeProgressText
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__get_StakeProgressText_2250f84(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cabb10;
  if ((bRam0000000004f9bfc7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb10);
    bRam0000000004f9bfc7 = 1;
  }
  uStack_24 = 0;
  uStack_24 = Dino_BusSand_App_Meta_StreakRateFeature__CurRateNumber_224c938(param_1);
  uVar2 = System_Int32__ToString_482d750(&uStack_24,0);
  System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar2,0);
  return;
}

