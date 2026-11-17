/* IL2CPP: Dino.BusSand.Core.Road$$TryGet
bool Dino_BusSand_Core_Road__TryGet (Dino_BusSand_Core_Road_o* __this, int32_t truckId, Dino_BusSand_Core_RoadBus_o** bus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$TryGet
   bool Dino_BusSand_Core_Road__TryGet (Dino_BusSand_Core_Road_o* __this, int32_t truckId,
   Dino_BusSand_Core_RoadBus_o** bus, const MethodInfo* method); */

uint Dino_BusSand_Core_Road__TryGet_24127e0(long param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000004f9cb5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe5f8);
    bRam0000000004f9cb5a = 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = System_Collections_Generic_Dictionary_int__object___FindEntry_34379f0
                    (lVar2,param_2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)PTR_DAT_04cbe5f8 + 0x20) + 0xc0) + 0x110));
  if ((int)uVar1 < 0) {
    *param_3 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *param_3 = *(undefined8 *)(lVar2 + (ulong)uVar1 * 0x18 + 0x30);
    thunk_FUN_02134474(param_3);
  }
  return ~uVar1 >> 0x1f;
}

