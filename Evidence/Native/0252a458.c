/* IL2CPP: Dino.BusSand.Core.StageEngine$$Spawn
Dino_BusSand_Core_Truck_o* Dino_BusSand_Core_StageEngine__Spawn (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, double x, double z, int32_t angle, int32_t kind, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$Spawn
   Dino_BusSand_Core_Truck_o* Dino_BusSand_Core_StageEngine__Spawn (Dino_BusSand_Core_StageEngine_o*
   __this, int32_t id, double x, double z, int32_t angle, int32_t kind, const MethodInfo* method);
    */

long Dino_BusSand_Core_StageEngine__Spawn_242a458
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cbe570;
  if ((bRam0000000004f9cbba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbe570);
    bRam0000000004f9cbba = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  *(undefined4 *)(lVar3 + 0x48) = 0xffffffff;
  System_Object___ctor_4870e5c(lVar3,0);
  lVar4 = *(long *)(param_3 + 0x50);
  *(undefined4 *)(lVar3 + 0x10) = param_4;
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  *(undefined4 *)(lVar3 + 0x28) = param_5;
  *(undefined4 *)(lVar3 + 0x2c) = param_6;
  if (lVar4 != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                      (lVar4,param_4,*(undefined8 *)PTR_DAT_04cbc448);
    lVar4 = *(long *)(param_3 + 0x28);
    *(undefined1 *)(lVar3 + 0x4c) = uVar2;
    if (lVar4 != 0) {
      Dino_BusSand_Core_TruckGrid__Add_2421f70(lVar4,lVar3);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

