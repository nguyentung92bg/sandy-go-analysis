/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$WriteEnd
void Dino_BusSand_App_Meta_Journey_LevelJourney__WriteEnd (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t result, int32_t failReason, int32_t yardLeft, int32_t grainsLeft, int32_t roadCapacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$WriteEnd
   void Dino_BusSand_App_Meta_Journey_LevelJourney__WriteEnd
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t
   result, int32_t failReason, int32_t yardLeft, int32_t grainsLeft, int32_t roadCapacity, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__WriteEnd_229a218(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint in_w4;
  uint in_w5;
  uint in_w6;
  uint in_w7;
  
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a2fc;
  bVar1 = *(byte *)(param_1 + 0x49);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20) = 0x898;
  *(undefined1 *)(param_1 + 0x49) = 0;
  uVar3 = Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68();
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a2fc;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_1 + 0x10),in_w4 & ((int)in_w4 >> 0x1f ^ 0xffffffffU));
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a2fc;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_1 + 0x10),in_w5 & ((int)in_w5 >> 0x1f ^ 0xffffffffU));
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a2fc;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_1 + 0x10),in_w6 & ((int)in_w6 >> 0x1f ^ 0xffffffffU));
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a2fc;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_1 + 0x10),in_w7 & ((int)in_w7 >> 0x1f ^ 0xffffffffU));
    Dino_BusSand_App_Meta_Journey_LevelJourney__Done_2299f4c(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x49) | bVar1;
  *(byte *)(param_1 + 0x49) = bVar1;
  if (bVar1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x30) | 1;
  *(uint *)(param_1 + 0x30) = uVar2;
  if (lVar4 != 0) {
    if (1 < *(int *)(lVar4 + 0x18)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(char *)(lVar4 + 0x21) = (char)uVar2;
    }
    return;
  }
LAB_0239a2fc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

