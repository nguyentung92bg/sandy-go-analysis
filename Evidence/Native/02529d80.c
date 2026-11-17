/* IL2CPP: Dino.BusSand.Core.StageEngine$$StationOn
bool Dino_BusSand_Core_StageEngine__StationOn (Dino_BusSand_Core_StageEngine_o* __this, int32_t truck, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$StationOn
   bool Dino_BusSand_Core_StageEngine__StationOn (Dino_BusSand_Core_StageEngine_o* __this, int32_t
   truck, const MethodInfo* method); */

bool Dino_BusSand_Core_StageEngine__StationOn_2429d80(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lStack_8;
  
  lStack_8 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(*(long *)(param_1 + 0x28),param_2,&lStack_8)
    ;
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (lStack_8 == 0) goto LAB_02529dbc;
      bVar1 = 0 < *(int *)(lStack_8 + 0x30);
    }
    return bVar1;
  }
LAB_02529dbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

