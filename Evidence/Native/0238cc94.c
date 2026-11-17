/* IL2CPP: Dino.BusSand.App.UI.UiKit$$get_CurrentTier
int32_t Dino_BusSand_App_UI_UiKit__get_CurrentTier (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$get_CurrentTier
   int32_t Dino_BusSand_App_UI_UiKit__get_CurrentTier (const MethodInfo* method); */

uint Dino_BusSand_App_UI_UiKit__get_CurrentTier_228cc94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c195 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c195 = 1;
  }
  puVar2 = PTR_DAT_04cacb18;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cad330;
  uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar3,0);
  uVar4 = Dino_BusSand_App_Levels_LevelDatabase__TypeOf_229adf4(uVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if (uVar4 != 2) {
    uVar4 = (uint)(uVar4 == 1);
  }
  return uVar4;
}

