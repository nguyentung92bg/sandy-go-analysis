/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_TowerShown
bool Dino_BusSand_App_UI_LiveOpsHome__get_TowerShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_TowerShown
   bool Dino_BusSand_App_UI_LiveOpsHome__get_TowerShown (const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__get_TowerShown_2322800(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9c5c1 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_LiveOpsHome__get_Tower_2321878();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(8,0);
  bVar2 = false;
  if (((uVar5 & 1) != 0) && (lVar4 != 0)) {
    uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(lVar4,0),
       (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      iVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__State_222a414(lVar4,0);
      bVar2 = iVar3 - 1U < 2;
    }
  }
  return bVar2;
}

