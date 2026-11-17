/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$get_NeedHallGuide
bool Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$get_NeedHallGuide
   bool Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide (const MethodInfo* method); */

uint Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c57d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad8b0);
    bRam0000000004f9c57d = 1;
  }
  puVar2 = PTR_DAT_04cac440;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  iVar4 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(0x3eb,0);
  puVar2 = PTR_DAT_04cad8b0;
  if (iVar3 == iVar4) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(*(undefined8 *)puVar2,0);
    uVar5 = uVar5 ^ 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}

