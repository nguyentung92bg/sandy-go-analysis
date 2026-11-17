/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Separated
bool Dino_BusSand_Core_BusGeometry__Separated (Dino_BusSand_Core_BusObb_o* a, Dino_BusSand_Core_BusObb_o* b, double lx, double lz, double eps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Separated
   bool Dino_BusSand_Core_BusGeometry__Separated (Dino_BusSand_Core_BusObb_o* a,
   Dino_BusSand_Core_BusObb_o* b, double lx, double lz, double eps, const MethodInfo* method); */

bool Dino_BusSand_Core_BusGeometry__Separated_242c124
               (double param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbcd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cbcd = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(param_1,param_2);
  }
  dVar3 = (double)Dino_BusSand_Core_BusGeometry__R_242c074(param_1,param_2,param_4);
  dVar4 = (double)Dino_BusSand_Core_BusGeometry__R_242c074(param_1,param_2,param_5);
  dVar6 = param_4[1];
  dVar5 = *param_4;
  dVar8 = param_5[1];
  dVar7 = *param_5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return (dVar3 + dVar4) - ABS((dVar5 - dVar7) * param_1 + (dVar6 - dVar8) * param_2) <= param_3;
}

