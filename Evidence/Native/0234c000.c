/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_IsOpen
bool Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_IsOpen
   bool Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bf1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb38e8);
    FUN_02132f7c(PTR_DAT_04cb38f0);
    FUN_02132f7c(PTR_DAT_04cb38f8);
    bRam0000000004f9bf1d = 1;
  }
  puVar2 = PTR_DAT_04cb38e8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,3,0);
  puVar2 = PTR_DAT_04cb38f8;
  puVar1 = PTR_DAT_04cab380;
  if (lVar6 != 0) {
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)PTR_DAT_04cb38f0,0);
    iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)puVar2,0);
    iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 1) != '\0') {
      return 1;
    }
    if (0 < iVar3) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      if (iVar5 < iVar3) {
        return 0;
      }
    }
    puVar1 = PTR_DAT_04cabaf8;
    if (0 < iVar4) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar6 + 0xb0) < iVar4) {
        return 0;
      }
    }
  }
  return 1;
}

