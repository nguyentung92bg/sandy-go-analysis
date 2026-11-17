/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_15
bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_15 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterHiddenEntries>b__39_15
   bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_15
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome___c___RegisterHiddenEntries_b__39_15_232464c(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9c5b7 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xc,0);
  if ((((uVar6 & 1) != 0) && (lVar5 != 0)) &&
     (iVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar5,0), 0 < iVar3))
  {
    uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar5,0);
    Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(lVar5,uVar4,0);
    lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(lVar5,uVar4);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x30) == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = *(char *)(lVar5 + 0x6d) == '\0';
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return false;
}

