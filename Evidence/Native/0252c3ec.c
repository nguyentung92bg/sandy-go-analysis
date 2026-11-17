/* IL2CPP: Dino.BusSand.Core.BusGeometry$$SweptToExit
Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__SweptToExit (Dino_BusSand_Core_BusObb_o* t, double w, double h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$SweptToExit
   Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__SweptToExit
   (Dino_BusSand_Core_BusObb_o* t, double w, double h, const MethodInfo* method); */

void Dino_BusSand_Core_BusGeometry__SweptToExit_242c3ec
               (double *param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = param_4[4];
  dVar2 = param_4[5];
  dVar1 = (param_2 + param_3 + dVar3 + dVar3) * 0.5;
  dVar7 = param_4[1];
  dVar6 = *param_4;
  dVar5 = param_4[3];
  dVar4 = param_4[2];
  param_1[3] = dVar5;
  param_1[2] = dVar4;
  param_1[5] = 0.0;
  param_1[4] = 0.0;
  param_1[4] = dVar3 + dVar1;
  param_1[5] = dVar2;
  param_1[1] = dVar7 + dVar5 * dVar1;
  *param_1 = dVar6 + dVar4 * dVar1;
  return;
}

