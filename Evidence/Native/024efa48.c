/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Register
void Dino_BusSand_View_VehicleBatch__Register (Dino_BusSand_View_VehicleBatch_o* __this, Dino_BusSand_View_VehicleView_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Register
   void Dino_BusSand_View_VehicleBatch__Register (Dino_BusSand_View_VehicleBatch_o* __this,
   Dino_BusSand_View_VehicleView_o* v, const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch__Register_23efa48(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9cab6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f8);
    FUN_02132f7c(PTR_DAT_04cbdd98);
    bRam0000000004f9cab6 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = System_Collections_Generic_List_object___Contains_3a81f90
                      (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)PTR_DAT_04cbdd98);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)PTR_DAT_04cb68f8;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar3 = param_2;
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar4,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar5 = *(long *)(lVar4 + 0x10);
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar3 = param_2;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                       ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

