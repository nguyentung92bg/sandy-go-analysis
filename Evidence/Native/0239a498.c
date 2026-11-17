/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Begin
void Dino_BusSand_App_Meta_Journey_UiJourney__Begin (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int64_t unixSeconds, int64_t nowMs, int32_t aseq, bool inLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Begin
   void Dino_BusSand_App_Meta_Journey_UiJourney__Begin (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, int64_t unixSeconds, int64_t nowMs, int32_t aseq, bool inLevel, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_Journey_UiJourney__Begin_229a498
               (long param_1,ulong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x1c);
    uVar2 = 4;
    if ((param_5 & 1) == 0) {
      uVar2 = 0;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c(lVar1,0x21);
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c
                (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c));
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                  (*(long *)(param_1 + 0x10),param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)
                  );
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                    (*(long *)(param_1 + 0x10),param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
          *(undefined8 *)(param_1 + 0x30) = param_3;
          *(undefined1 *)(param_1 + 0x38) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

