/* IL2CPP: Dino.BusSand.Core.Road$$LeavingFactorAt
double Dino_BusSand_Core_Road__LeavingFactorAt (Dino_BusSand_Core_Road_o* __this, int32_t ticks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$LeavingFactorAt
   double Dino_BusSand_Core_Road__LeavingFactorAt (Dino_BusSand_Core_Road_o* __this, int32_t ticks,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Road__LeavingFactorAt_2416450(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000004f9cb63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb63 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x48);
    dVar3 = 1.0;
    if (0 < iVar1) {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar3 = (double)System_Math__Min_48310e8(0x3ff0000000000000,(double)param_2 / (double)iVar1,0)
      ;
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) goto LAB_02516510;
    }
    auVar4._0_8_ = (3.0 - (dVar3 + dVar3)) * dVar3 * dVar3 * (*(double *)(lVar2 + 0x40) + -1.0) +
                   1.0;
    auVar4._8_8_ = 0;
    return auVar4;
  }
LAB_02516510:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

