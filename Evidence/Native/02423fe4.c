/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_2
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_2 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_2
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_2
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_2_2323fe4(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Dino_BusSand_App_UI_LiveOpsHome__get_Tower_2321878();
  bVar1 = false;
  if (lVar3 != 0) {
    lVar3 = Dino_BusSand_App_UI_LiveOpsHome__get_Tower_2321878();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount_222a188(lVar3,0,0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

