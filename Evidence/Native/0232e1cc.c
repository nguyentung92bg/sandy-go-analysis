/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$CanPlay
bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, int32_t levelPassed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$CanPlay
   bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, int32_t levelPassed, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeModel__CanPlay_222e1cc
               (long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04caf808;
  if ((bRam0000000004f9be52 & 1) == 0) {
                    /* try { // try from 0232e200 to 0242e3df has its CatchHandler @ 0232e200
                       catch() { ... } // from try @ 0232e200 with catch @ 0232e200
                       catch() { ... } // from try @ 0232e4c4 with catch @ 0232e200
                       catch() { ... } // from try @ 0232e524 with catch @ 0232e200
                       catch() { ... } // from try @ 0232e57c with catch @ 0232e200
                       catch() { ... } // from try @ 0232e5a0 with catch @ 0232e200 */
    FUN_02132f7c(PTR_DAT_04caf808);
    bRam0000000004f9be52 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_3 < 0x1d) {
    bVar3 = false;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
    uVar1 = param_2 / 86400000;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar1 = (lVar4 >> 0x19) - (lVar4 >> 0x3f);
    }
    bVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x10) != uVar1;
  }
  return bVar3;
}

