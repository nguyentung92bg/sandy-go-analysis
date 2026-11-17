/* IL2CPP: Dino.BusSand.Core.Garage$$ExitCenter
void Dino_BusSand_Core_Garage__ExitCenter (Dino_BusSand_Core_Garage_o* __this, int32_t kind, double* x, double* z, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Garage$$ExitCenter
   void Dino_BusSand_Core_Garage__ExitCenter (Dino_BusSand_Core_Garage_o* __this, int32_t kind,
   double* x, double* z, const MethodInfo* method); */

void Dino_BusSand_Core_Garage__ExitCenter_242b678
               (long param_1,undefined4 param_2,double *param_3,double *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  double dVar4;
  double dStack_48;
  double dStack_38;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbf1 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  dStack_38 = 0.0;
  dStack_48 = 0.0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar1,&dStack_38,&dStack_48);
  iVar3 = Dino_BusSand_Core_BusFootprint__MeshLengthUnits_240d620(param_2,0);
  dVar4 = ((double)iVar3 / _UNK_00e69e08) * 0.5 + _UNK_00e69878 + 0.5;
  *param_3 = *(double *)(param_1 + 0x18) + dStack_38 * dVar4;
  *param_4 = *(double *)(param_1 + 0x20) + dStack_48 * dVar4;
  return;
}

