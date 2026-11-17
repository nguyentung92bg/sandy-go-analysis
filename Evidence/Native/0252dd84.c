/* IL2CPP: Dino.BusSand.Core.TruckGrid$$OverlapsAnyTruck
bool Dino_BusSand_Core_TruckGrid__OverlapsAnyTruck (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_BusObb_o* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$OverlapsAnyTruck
   bool Dino_BusSand_Core_TruckGrid__OverlapsAnyTruck (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_BusObb_o* o, const MethodInfo* method); */

uint Dino_BusSand_Core_TruckGrid__OverlapsAnyTruck_242dd84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9cbea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    bRam0000000004f9cbea = 1;
  }
  puVar4 = PTR_DAT_04cbc080;
  puVar3 = PTR_DAT_04cab9e8;
  puVar2 = PTR_DAT_04cab9e0;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_58,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
  uVar1 = _UNK_00e6a330;
  uStack_a0 = 0;
  puStack_98 = &uStack_58;
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_58,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) break;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Core_Truck__get_Obb_242cab0(&uStack_d0);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_Core_BusGeometry__Overlaps_242c220(uVar1,param_2,&uStack_90);
  } while ((uVar6 & 1) == 0);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_58,*(undefined8 *)puVar2);
  return uVar5 & 1;
}

