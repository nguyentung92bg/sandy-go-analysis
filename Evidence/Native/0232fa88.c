/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_CanPlay
bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_CanPlay
   bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay_222fa88(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04cac458;
  if ((bRam0000000004f9be64 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9be64 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0xd,0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Unlocked_222f980(), (uVar5 & 1) != 0)
     ) {
    lVar6 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838(param_1);
    uVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    puVar3 = PTR_DAT_04caf808;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    if ((bRam0000000004f9be52 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caf808);
      bRam0000000004f9be52 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (iVar2 < 0x1d) {
      bVar4 = false;
    }
    else {
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = SUB168(SEXT816((long)(86399999 - uVar5)) * SEXT816(-0x636ba875fd33dc87),8);
      uVar1 = uVar5 / 86400000;
      if ((uVar5 & 0x8000000000000000) != 0) {
        uVar1 = (lVar7 >> 0x19) - (lVar7 >> 0x3f);
      }
      bVar4 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x10) != uVar1;
    }
    return bVar4;
  }
  return false;
}

