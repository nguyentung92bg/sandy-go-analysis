/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_Config
Dino_BusSand_App_Meta_YachtRacingConfig_o* Dino_BusSand_App_Meta_YachtRacingCore__get_Config (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_Config
   Dino_BusSand_App_Meta_YachtRacingConfig_o* Dino_BusSand_App_Meta_YachtRacingCore__get_Config
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x78);
  if (*plVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
LAB_023547a4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar3 + 0x58),0);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x68) != 0)) && (*(long *)(lVar3 + 0x70) != 0)) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_023547a4;
      lVar3 = Dino_BusSand_App_Meta_YachtRacingConfig__ForActivity_22547e4
                        (*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60));
      *plVar2 = lVar3;
      thunk_FUN_02134474(plVar2,lVar3);
    }
  }
  return *plVar2;
}

