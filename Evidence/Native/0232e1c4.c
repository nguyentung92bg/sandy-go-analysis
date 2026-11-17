/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$CanPlay
bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$CanPlay
   bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay_222e1c4(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04caf808;
  iVar2 = *(int *)(param_1 + 0x18);
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
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
    uVar1 = param_2 / 86400000;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar1 = (lVar5 >> 0x19) - (lVar5 >> 0x3f);
    }
    bVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x10) != uVar1;
  }
  return bVar4;
}

