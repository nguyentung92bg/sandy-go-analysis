/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$NeedScores
System_Int32_array* Dino_BusSand_App_Meta_StreakRateFeature__NeedScores (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0216dff4) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$NeedScores
   System_Int32_array* Dino_BusSand_App_Meta_StreakRateFeature__NeedScores
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

long * Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000004f9bfa2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9bfa2 = 1;
  }
  if (param_2 == 0) {
    lVar2 = *(long *)PTR_DAT_04caec70;
    FUN_02193814();
    il2cpp_array_element_size(lVar2);
    if ((*(ushort *)(lVar2 + 0x135) >> 5 & 1) == 0) {
      plVar1 = (long *)FUN_021a5ef0(0x20);
      *plVar1 = lVar2;
      plVar1[1] = 0;
      FUN_02220bc0(1,PTR_DAT_04d16040);
      plVar1[2] = 0;
      func_0x049b52e0(plVar1 + 2,0,0x10);
    }
    else if ((*(int *)(*(long *)(lVar2 + 0x40) + 0x28) < 0) &&
            ((*(ulong *)(*(long *)(lVar2 + 0x40) + 8) & 3) == 1)) {
      plVar1 = (long *)FUN_021ac1cc(0x20,lVar2);
    }
    else {
      if (*(long *)(lVar2 + 8) == 0) {
        plVar1 = (long *)FUN_021a5cdc(0x20);
        *plVar1 = lVar2;
      }
      else {
        plVar1 = (long *)FUN_021a0d6c(0x20,lVar2);
      }
      FUN_02220bc0(1,PTR_DAT_04d16040);
    }
    plVar1[3] = 0;
    if (DAT_04faeb60 < '\0') {
      FUN_0217d5b8(plVar1,lVar2);
    }
    return plVar1;
  }
  Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(param_1,*(undefined4 *)(param_2 + 0x10));
  return *(long **)(param_1 + 0x20);
}

