/* IL2CPP: Dino.BusSand.Core.Lane$$OccupantCenter
void Dino_BusSand_Core_Lane__OccupantCenter (Dino_BusSand_Core_Lane_o* __this, int32_t kind, double* x, double* z, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$OccupantCenter
   void Dino_BusSand_Core_Lane__OccupantCenter (Dino_BusSand_Core_Lane_o* __this, int32_t kind,
   double* x, double* z, const MethodInfo* method); */

void Dino_BusSand_Core_Lane__OccupantCenter_242f388
               (undefined1 param_1 [16],double param_2,long param_3,undefined4 param_4,
               double *param_5,double *param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dStack_58;
  double dStack_38;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cc0b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbef60);
    FUN_02132f7c(PTR_DAT_04cbd270);
    bRam0000000004f9cc0b = 1;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  dStack_38 = 0.0;
  dStack_58 = 0.0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar1,&dStack_38,&dStack_58,0);
  lVar3 = *(long *)(param_3 + 0x18);
  if (lVar3 != 0) {
    dVar4 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                              (lVar3,*(int *)(lVar3 + 0x18) + -1,*(undefined8 *)PTR_DAT_04cbd270);
    dVar5 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(param_4,0);
    dVar5 = dVar5 * 0.5 + _UNK_00e69a38;
    *param_5 = dVar4 - dStack_38 * dVar5;
    *param_6 = param_2 - dVar5 * dStack_58;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

