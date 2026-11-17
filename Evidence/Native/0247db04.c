/* IL2CPP: Dino.BusSand.ModelEntry$$Slot
int32_t Dino_BusSand_ModelEntry__Slot (Dino_BusSand_ModelEntry_o* __this, System_String_o* slotName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.ModelEntry$$Slot
   int32_t Dino_BusSand_ModelEntry__Slot (Dino_BusSand_ModelEntry_o* __this, System_String_o*
   slotName, const MethodInfo* method); */

ulong Dino_BusSand_ModelEntry__Slot_237db04(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar3 = 0;
    while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = System_String__op_Equality_46d1108
                        (*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),param_2,0);
      if ((uVar1 & 1) != 0) goto LAB_0247db60;
      lVar2 = *(long *)(param_1 + 0x20);
      uVar3 = uVar3 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_0247db60:
  return uVar3 & 0xffffffff;
}

