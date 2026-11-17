/* IL2CPP: Dino.BusSand.Core.Road$$LeavingFactor
double Dino_BusSand_Core_Road__LeavingFactor (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$LeavingFactor
   double Dino_BusSand_Core_Road__LeavingFactor (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Road__LeavingFactor_2414f38(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_2 + 0x58) + 1;
  *(int *)(param_2 + 0x58) = iVar1;
  if ((bRam0000000004f9cb63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb63 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x48);
    dVar4 = 1.0;
    if (0 < iVar2) {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar4 = (double)System_Math__Min_48310e8(0x3ff0000000000000,(double)iVar1 / (double)iVar2,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_02516510;
    }
    auVar5._0_8_ = (3.0 - (dVar4 + dVar4)) * dVar4 * dVar4 * (*(double *)(lVar3 + 0x40) + -1.0) +
                   1.0;
    auVar5._8_8_ = 0;
    return auVar5;
  }
LAB_02516510:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

