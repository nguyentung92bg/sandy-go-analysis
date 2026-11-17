/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Flow
void Dino_BusSand_App_Meta_Journey_LevelJourney__Flow (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t kind, int64_t a, int64_t b, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Flow
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Flow
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t kind,
   int64_t a, int64_t b, float seconds, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
               ulong param_6,ulong param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (1 < param_5 - 2U) {
    if (param_5 == 4) {
      if (*(long *)(param_2 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                  (*(long *)(param_2 + 0x10),param_6 & ((long)param_6 >> 0x3f ^ 0xffffffffffffffffU)
                  );
        if (*(long *)(param_2 + 0x10) != 0) {
          Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                    (*(long *)(param_2 + 0x10),
                     param_7 & ((long)param_7 >> 0x3f ^ 0xffffffffffffffffU));
          if (*(long *)(param_2 + 0x10) != 0) {
            Dino_BusSand_App_Meta_Journey_JourneyBytes__U32_2295778
                      (*(long *)(param_2 + 0x10),param_1);
            goto Dino_BusSand_App_Meta_Journey_LevelJourney__Done_2299f4c;
          }
        }
      }
      goto LAB_0239a1c4;
    }
    if (param_5 != 6) goto Dino_BusSand_App_Meta_Journey_LevelJourney__Done_2299f4c;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_2 + 0x10),param_6 & ((long)param_6 >> 0x3f ^ 0xffffffffffffffffU));
Dino_BusSand_App_Meta_Journey_LevelJourney__Done_2299f4c:
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x24) == '\0') {
        *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
        return;
      }
      Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424
                (lVar2,*(undefined4 *)(param_2 + 0x34));
      lVar2 = *(long *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x49) = 1;
      uVar1 = *(uint *)(param_2 + 0x30) | 1;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x30) = uVar1;
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
LAB_0239a1c4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

