/* IL2CPP: Dino.BusSand.Core.TruckGrid$$Remove
bool Dino_BusSand_Core_TruckGrid__Remove (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$Remove
   bool Dino_BusSand_Core_TruckGrid__Remove (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

uint Dino_BusSand_Core_TruckGrid__Remove_2428d44(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9cbdc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbee18);
    FUN_02132f7c(PTR_DAT_04cbee20);
    bRam0000000004f9cbdc = 1;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = System_Collections_Generic_Dictionary_int__object___Remove_34387d4
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cbee18);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar2 = Dino_BusSand_Core_TruckGrid__IndexOf_242ccb0(param_1,*(undefined4 *)(param_2 + 0x10));
      if (lVar3 == 0) goto LAB_02528df8;
      System_Collections_Generic_List_object___RemoveAt_3a833a0
                (lVar3,uVar2,*(undefined8 *)PTR_DAT_04cbee20);
    }
    return uVar1 & 1;
  }
LAB_02528df8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

