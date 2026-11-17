/* IL2CPP: Dino.BusSand.Core.StageEngine$$CanTapTruck
bool Dino_BusSand_Core_StageEngine__CanTapTruck (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CanTapTruck
   bool Dino_BusSand_Core_StageEngine__CanTapTruck (Dino_BusSand_Core_StageEngine_o* __this, int32_t
   id, const MethodInfo* method); */

bool Dino_BusSand_Core_StageEngine__CanTapTruck_2423bec(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lStack_28;
  
  if ((bRam0000000004f9cb99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1880);
    bRam0000000004f9cb99 = 1;
  }
  lStack_28 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    return false;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                      (*(long *)(param_1 + 0x28),param_2,&lStack_28);
    if ((uVar2 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_28);
      if ((uVar2 & 1) == 0) {
        return false;
      }
      if (lStack_28 != 0) {
        if (*(char *)(lStack_28 + 0x44) != '\0') {
          return true;
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (iVar1 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0),
           lStack_28 != 0)) {
          if (*(int *)(lStack_28 + 0x40) < 1) {
            iVar4 = 1;
          }
          else {
            if ((*(long *)(param_1 + 0x28) == 0) ||
               (lVar3 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(), lVar3 == 0))
            goto LAB_02523ce4;
            iVar4 = *(int *)(lVar3 + 0x18);
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            return iVar4 + iVar1 <= *(int *)(*(long *)(param_1 + 0x20) + 0x38);
          }
        }
      }
    }
  }
LAB_02523ce4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

