/* IL2CPP: Dino.BusSand.View.VehicleBatch$$ShadowHullOf
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleBatch__ShadowHullOf (Dino_BusSand_View_VehicleBatch_o* __this, int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$ShadowHullOf
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleBatch__ShadowHullOf
   (Dino_BusSand_View_VehicleBatch_o* __this, int32_t k, const MethodInfo* method); */

undefined8 Dino_BusSand_View_VehicleBatch__ShadowHullOf_23f3108(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = *(long *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x30);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

