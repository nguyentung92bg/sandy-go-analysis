/* IL2CPP: Dino.BusSand.Core.StageEngine$$CanEscape
bool Dino_BusSand_Core_StageEngine__CanEscape (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CanEscape
   bool Dino_BusSand_Core_StageEngine__CanEscape (Dino_BusSand_Core_StageEngine_o* __this, int32_t
   id, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__CanEscape_2423b90(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                      (*(long *)(param_1 + 0x28),param_2,&uStack_18);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02523be0;
      uVar1 = Dino_BusSand_Core_TruckGrid__CanEscape_2427af4(*(long *)(param_1 + 0x28),uStack_18,0);
    }
    return uVar1 & 1;
  }
LAB_02523be0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

