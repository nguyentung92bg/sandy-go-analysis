/* IL2CPP: Dino.BusSand.Core.Road$$SpeedGrainsPerTickAt
double Dino_BusSand_Core_Road__SpeedGrainsPerTickAt (Dino_BusSand_Core_Road_o* __this, double pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$SpeedGrainsPerTickAt
   double Dino_BusSand_Core_Road__SpeedGrainsPerTickAt (Dino_BusSand_Core_Road_o* __this, double
   pos, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(long param_1)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920();
  lVar2 = *(long *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
    if (lVar2 == 0) goto LAB_025129cc;
    dVar3 = *(double *)(lVar2 + 0x18);
  }
  else {
    if (lVar2 == 0) {
LAB_025129cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    dVar3 = *(double *)(lVar2 + 0x18) * *(double *)(lVar2 + 0x38);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}

