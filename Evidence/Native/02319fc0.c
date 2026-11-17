/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerId
System_String_o* Dino_BusSand_App_Meta_GameTracking__get_TowerId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerId
   System_String_o* Dino_BusSand_App_Meta_GameTracking__get_TowerId (const MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__get_TowerId_2219fc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb27a0);
    bRam0000000004f9bd74 = 1;
  }
  puVar2 = PTR_DAT_04cb27a0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_GameTracking__get_TowerCycle_2219f64();
  lVar5 = Dino_BusSand_App_Meta_WinStreak__CycleEnd_2293330(uVar4,0);
  iVar3 = Dino_BusSand_App_Meta_WinStreak__get_CycleDays_22929c4(0);
  lVar6 = Dino_BusSand_App_Meta_GameTracking__Day_2219c04(lVar5 + (long)iVar3 * -0x15180);
  lVar5 = *(long *)puVar2;
  if ((lVar5 == 0) || (iVar3 = *(int *)(lVar5 + 0x10), iVar3 == 0)) {
    if ((lVar6 == 0) || (lVar5 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
      lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
    lVar7 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar3,lVar6,0);
    System_String__FillStringChecked_46d2a48(lVar7,0,lVar5);
    System_String__FillStringChecked_46d2a48(lVar7,iVar3,lVar6);
    lVar5 = lVar7;
  }
  return lVar5;
}

