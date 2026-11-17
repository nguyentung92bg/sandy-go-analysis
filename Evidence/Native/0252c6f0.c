/* IL2CPP: Dino.BusSand.Core.BusGeometry$$TryFirstContact
bool Dino_BusSand_Core_BusGeometry__TryFirstContact (Dino_BusSand_Core_BusObb_o* a, Dino_BusSand_Core_BusObb_o* b, double dx, double dz, double* te, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.BusGeometry$$TryFirstContact
   bool Dino_BusSand_Core_BusGeometry__TryFirstContact (Dino_BusSand_Core_BusObb_o* a,
   Dino_BusSand_Core_BusObb_o* b, double dx, double dz, double* te, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_BusGeometry__TryFirstContact_242c6f0
          (double param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if ((bRam0000000004f9cbd2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cbd2 = 1;
  }
  puVar3 = PTR_DAT_04cbc080;
  puVar2 = PTR_DAT_04caa200;
  dVar1 = _UNK_00e69d80;
  dVar10 = -INFINITY;
  dVar7 = INFINITY;
  iVar6 = 0;
  *param_5 = 0.0;
  do {
    if (iVar6 == 2) {
      dVar15 = param_4[3];
      pdVar5 = param_4 + 2;
    }
    else {
      if (iVar6 == 1) {
        dVar15 = param_3[2];
        pdVar5 = param_3 + 3;
      }
      else {
        if (iVar6 == 0) {
          dVar15 = param_3[3];
          pdVar5 = param_3 + 2;
          goto LAB_0252c7e8;
        }
        dVar15 = param_4[2];
        pdVar5 = param_4 + 3;
      }
      dVar15 = -dVar15;
    }
LAB_0252c7e8:
    dVar12 = *param_4;
    dVar11 = param_4[1];
    dVar13 = *param_3;
    dVar14 = param_3[1];
    dVar16 = *pdVar5;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar8 = (double)Dino_BusSand_Core_BusGeometry__R_242c074(dVar16,dVar15,param_3);
    dVar9 = (double)Dino_BusSand_Core_BusGeometry__R_242c074(dVar16,dVar15,param_4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar8 = dVar8 + dVar9;
    dVar9 = dVar15 * param_2 + dVar16 * param_1;
    dVar15 = dVar16 * (dVar12 - dVar13) + dVar15 * (dVar11 - dVar14);
    if (dVar1 <= ABS(dVar9)) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar11 = (dVar15 - dVar8) / dVar9;
      dVar9 = (dVar15 + dVar8) / dVar9;
      uVar4 = System_Math__Min_48310e8(dVar11,dVar9,0);
      dVar10 = (double)System_Math__Max_4830f98(dVar10,uVar4,0);
      uVar4 = System_Math__Max_4830f98(dVar11,dVar9,0);
      dVar7 = (double)System_Math__Min_48310e8(dVar7,uVar4,0);
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (dVar8 < ABS(dVar15)) {
        return 0;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 4) {
      uVar4 = 0;
      if ((0.0 <= dVar7) && (dVar10 <= dVar7)) {
        uVar4 = 1;
        *param_5 = dVar10;
      }
      return uVar4;
    }
  } while( true );
}

