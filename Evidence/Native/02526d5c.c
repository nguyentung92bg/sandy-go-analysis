/* IL2CPP: Dino.BusSand.Core.StageEngine$$ResetJamClock
void Dino_BusSand_Core_StageEngine__ResetJamClock (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$ResetJamClock
   void Dino_BusSand_Core_StageEngine__ResetJamClock (Dino_BusSand_Core_StageEngine_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__ResetJamClock_2426d5c(long param_1)

{
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

