/* IL2CPP: Dino.BusSand.Core.TruckGrid$$Add
void Dino_BusSand_Core_TruckGrid__Add (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$Add
   void Dino_BusSand_Core_TruckGrid__Add (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

void Dino_BusSand_Core_TruckGrid__Add_2421f70(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000004f9cbdb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed08);
    FUN_02132f7c(PTR_DAT_04cbed10);
    bRam0000000004f9cbdb = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    System_Collections_Generic_Dictionary_int__object___Add_343732c
              (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),param_2,
               *(undefined8 *)PTR_DAT_04cbed08);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = Dino_BusSand_Core_TruckGrid__IndexOf_242ccb0(param_1,*(undefined4 *)(param_2 + 0x10));
    if (lVar2 != 0) {
      System_Collections_Generic_List_object___Insert_3a828b4
                (lVar2,~uVar1,param_2,*(undefined8 *)PTR_DAT_04cbed10);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

