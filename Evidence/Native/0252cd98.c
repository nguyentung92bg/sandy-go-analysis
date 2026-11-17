/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CrossesGate
bool Dino_BusSand_Core_TruckGrid__CrossesGate (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CrossesGate
   bool Dino_BusSand_Core_TruckGrid__CrossesGate (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

uint Dino_BusSand_Core_TruckGrid__CrossesGate_242cd98(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  double dVar8;
  double dStack_130;
  undefined8 *puStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9cbe0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbeed0);
    FUN_02132f7c(PTR_DAT_04cbeed8);
    FUN_02132f7c(PTR_DAT_04cbeee0);
    FUN_02132f7c(PTR_DAT_04cbeee8);
    FUN_02132f7c(PTR_DAT_04cbec50);
    bRam0000000004f9cbe0 = 1;
  }
  uStack_80 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  dStack_58 = 0.0;
  dStack_60 = 0.0;
  uStack_48 = 0;
  dStack_50 = 0.0;
  dStack_68 = 0.0;
  dStack_70 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_0252cf6c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) != 0) {
      Dino_BusSand_Core_Truck__get_Obb_242cab0(&dStack_130,param_2);
      puVar4 = PTR_DAT_04cbc080;
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar8 = (dStack_110 + dStack_110 + (double)iVar2 + (double)iVar1) * 0.5;
      dStack_50 = dStack_110 + dVar8;
      dStack_70 = dStack_130 + dStack_120 * dVar8;
      dStack_68 = (double)puStack_128 + dStack_118 * dVar8;
      uStack_48 = uStack_108;
      dStack_58 = dStack_118;
      dStack_60 = dStack_120;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0252cf6c;
      System_Collections_Generic_List_ValueTuple_BusObb__byte____GetEnumerator_399a4b4
                (&uStack_c0,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbeee8);
      puVar5 = PTR_DAT_04cbeed8;
      uVar3 = _UNK_00e6a330;
      dStack_130 = 0.0;
      puStack_128 = &uStack_c0;
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__byte____MoveNext_35ba51c
                          (&uStack_c0,*(undefined8 *)puVar5);
        if ((uVar6 & 1) == 0) break;
        uStack_f8 = uStack_a8;
        uStack_100 = uStack_b0;
        uStack_e8 = uStack_98;
        uStack_f0 = uStack_a0;
        uStack_d8 = uStack_88;
        uStack_e0 = uStack_90;
        uStack_d0 = uStack_80;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_Core_BusGeometry__Overlaps_242c220(uVar3,&dStack_70,&uStack_100);
      } while ((uVar7 & 1) == 0);
      System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__byte____Dispose_35ba518
                (&uStack_c0,*(undefined8 *)PTR_DAT_04cbeed0);
      goto LAB_0252cf50;
    }
  }
  uVar6 = 0;
LAB_0252cf50:
  return uVar6 & 1;
}

