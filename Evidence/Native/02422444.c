/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_DailyOn
bool Dino_BusSand_App_UI_LiveOpsHome__get_DailyOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_DailyOn
   bool Dino_BusSand_App_UI_LiveOpsHome__get_DailyOn (const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__get_DailyOn_2322444(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9c5ba = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xd,0);
  if (((uVar4 & 1) != 0) &&
     (lVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_I_222f7d4(0), lVar5 != 0)) {
    lVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_I_222f7d4(0);
    puVar1 = PTR_DAT_04cabaf8;
    if (lVar5 != 0) {
      uVar6 = 0;
      if ((bRam0000000004f9be63 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf808,0);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9be63 = 1;
        uVar6 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar6 = extraout_x1_00;
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8,uVar6);
        cRam0000000004f9b894 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_04caf808;
      if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
        bVar2 = false;
      }
      else {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        bVar2 = 0x1c < iVar3 + -1;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return false;
}

