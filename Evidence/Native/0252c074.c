/* IL2CPP: Dino.BusSand.Core.BusGeometry$$R
double Dino_BusSand_Core_BusGeometry__R (Dino_BusSand_Core_BusObb_o* o, double lx, double lz, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$R
   double Dino_BusSand_Core_BusGeometry__R (Dino_BusSand_Core_BusObb_o* o, double lx, double lz,
   const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Core_BusGeometry__R_242c074(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cbcc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cbcc = 1;
  }
  dVar6 = *(double *)(param_3 + 0x10);
  dVar7 = *(double *)(param_3 + 0x18);
  dVar5 = *(double *)(param_3 + 0x20);
  dVar2 = dVar6;
  dVar4 = dVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    dVar2 = *(double *)(param_3 + 0x10);
    dVar4 = *(double *)(param_3 + 0x18);
  }
  auVar3._0_8_ = dVar5 * ABS(dVar6 * param_1 + dVar7 * param_2) +
                 *(double *)(param_3 + 0x28) * ABS(dVar4 * param_1 - dVar2 * param_2);
  auVar3._8_8_ = 0;
  return auVar3;
}

