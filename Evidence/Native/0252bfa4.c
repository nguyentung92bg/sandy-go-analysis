/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Make
Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__Make (double cx, double cz, int32_t a, int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Make
   Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_BusGeometry__Make (double cx, double cz, int32_t a,
   int32_t k, const MethodInfo* method); */

void Dino_BusSand_Core_BusGeometry__Make_242bfa4
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbca = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = Dino_BusSand_Core_BusFootprint__MeshLengthUnits_240d620(param_5,0);
  dVar4 = (double)iVar2 / _UNK_00e69e08;
  uVar3 = Dino_BusSand_Core_BusGeometry__WidthCells_242be4c(param_5);
  Dino_BusSand_Core_BusGeometry__Make_2422124(&uStack_80,param_2,param_3,dVar4,uVar3,param_4);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}

