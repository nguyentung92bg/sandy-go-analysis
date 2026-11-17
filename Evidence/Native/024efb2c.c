/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Unregister
void Dino_BusSand_View_VehicleBatch__Unregister (Dino_BusSand_View_VehicleBatch_o* __this, Dino_BusSand_View_VehicleView_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Unregister
   void Dino_BusSand_View_VehicleBatch__Unregister (Dino_BusSand_View_VehicleBatch_o* __this,
   Dino_BusSand_View_VehicleView_o* v, const MethodInfo* method); */

uint Dino_BusSand_View_VehicleBatch__Unregister_23efb2c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000004f9cab7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdda0);
    bRam0000000004f9cab7 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = System_Array__IndexOf_object__297e5c0
                      (*(undefined8 *)(lVar2 + 0x10),param_2,0,*(undefined4 *)(lVar2 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cbdda0
                                                                          + 0x20) + 0xc0) + 0xd0) +
                                            0x20) + 0xc0) + 0x150));
    if (-1 < (int)uVar1) {
      System_Collections_Generic_List_object___RemoveAt_3a833a0(lVar2,uVar1);
    }
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

