/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Boost
void Dino_BusSand_App_Meta_Journey_LevelJourney__Boost (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t booster, int32_t action, int64_t arg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Boost
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Boost
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t
   booster, int32_t action, int64_t arg, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Boost_229a074
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               ulong param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_5 == 0) {
    if (param_4 - 1U < 2) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_0239a100:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                (*(long *)(param_1 + 0x10),param_6 & ((long)param_6 >> 0x3f ^ 0xffffffffffffffffU));
    }
    else if (param_4 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a100;
      Dino_BusSand_App_Meta_Journey_JourneyBytes__U32_2295778
                (*(long *)(param_1 + 0x10),param_6 & 0xffffffff);
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x24) == '\0') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return;
    }
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424
              (lVar2,*(undefined4 *)(param_1 + 0x34));
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x49) = 1;
    uVar1 = *(uint *)(param_1 + 0x30) | 1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) = uVar1;
    if (lVar2 != 0) {
      if (1 < *(int *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(char *)(lVar2 + 0x21) = (char)uVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

