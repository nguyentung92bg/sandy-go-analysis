/* IL2CPP: Dino.BusSand.View.VehicleBatch$$HasCargo
bool Dino_BusSand_View_VehicleBatch__HasCargo (Dino_BusSand_View_VehicleBatch_o* __this, int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$HasCargo
   bool Dino_BusSand_View_VehicleBatch__HasCargo (Dino_BusSand_View_VehicleBatch_o* __this, int32_t
   k, const MethodInfo* method); */

uint Dino_BusSand_View_VehicleBatch__HasCargo_23f1e10(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9cab9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cab9 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  lVar3 = *(long *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004fa8638 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
      bRam0000000004fa8638 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
  return 0;
}

