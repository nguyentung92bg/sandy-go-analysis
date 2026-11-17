/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$StreakId
System_String_o* Dino_BusSand_App_Meta_GameTracking__StreakId (Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$StreakId
   System_String_o* Dino_BusSand_App_Meta_GameTracking__StreakId
   (Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__StreakId_221a5dc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04cb27d8;
  if ((bRam0000000004f9bd7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb27d8);
    bRam0000000004f9bd7a = 1;
  }
  puVar2 = PTR_DAT_04cac498;
  lVar5 = *(long *)puVar3;
  if (param_1 == 0) {
    lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_GameTracking__Day_2219c04(lVar6 / 1000);
  if ((lVar5 == 0) || (iVar1 = *(int *)(lVar5 + 0x10), iVar1 == 0)) {
    if ((lVar6 == 0) || (lVar5 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
      lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
    lVar4 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar1,lVar6,0);
    System_String__FillStringChecked_46d2a48(lVar4,0,lVar5);
    System_String__FillStringChecked_46d2a48(lVar4,iVar1,lVar6);
    lVar5 = lVar4;
  }
  return lVar5;
}

