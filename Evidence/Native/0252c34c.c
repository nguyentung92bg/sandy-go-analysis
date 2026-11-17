/* IL2CPP: Dino.BusSand.Core.BusGeometry$$IsInsideYard
bool Dino_BusSand_Core_BusGeometry__IsInsideYard (Dino_BusSand_Core_BusObb_o* o, double w, double h, double eps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$IsInsideYard
   bool Dino_BusSand_Core_BusGeometry__IsInsideYard (Dino_BusSand_Core_BusObb_o* o, double w, double
   h, double eps, const MethodInfo* method); */

void Dino_BusSand_Core_BusGeometry__IsInsideYard_242c34c
               (double param_1,double param_2,double param_3,double *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = 0xffffffff;
  do {
    iVar3 = -3;
    do {
      dVar5 = *param_4 + param_4[2] * param_4[4] * (double)(int)uVar2 +
              param_4[3] * param_4[5] * (double)(iVar3 + 2);
      dVar4 = (param_4[1] + param_4[4] * param_4[3] * (double)(int)uVar2) -
              param_4[2] * param_4[5] * (double)(iVar3 + 2);
      dVar6 = (double)NEON_fminnm(dVar5,dVar4);
      if (dVar6 < -param_3 || (param_2 + param_3 < dVar4 || param_1 + param_3 < dVar5)) {
        return;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0);
    bVar1 = 0x7ffffffd < uVar2;
    uVar2 = uVar2 + 2;
  } while (bVar1);
  return;
}

