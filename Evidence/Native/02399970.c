/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay.<>c__DisplayClass3_0$$<Run>b__0
int32_t Dino_BusSand_App_Meta_Journey_JourneyReplay___c__DisplayClass3_0___Run_b__0 (Dino_BusSand_App_Meta_Journey_JourneyReplay___c__DisplayClass3_0_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay.<>c__DisplayClass3_0$$<Run>b__0
   int32_t Dino_BusSand_App_Meta_Journey_JourneyReplay___c__DisplayClass3_0___Run_b__0
   (Dino_BusSand_App_Meta_Journey_JourneyReplay___c__DisplayClass3_0_o* __this, int32_t id, const
   MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_Journey_JourneyReplay___c__DisplayClass3_0___Run_b__0_2299970(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar2 < (int)uVar1) {
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      if (uVar2 < uVar1) {
        return *(undefined4 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
  return 0;
}

