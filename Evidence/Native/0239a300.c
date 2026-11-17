/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Snapshot
System_String_o* Dino_BusSand_App_Meta_Journey_LevelJourney__Snapshot (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t yardLeft, int32_t grainsLeft, int32_t roadCapacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Snapshot
   System_String_o* Dino_BusSand_App_Meta_Journey_LevelJourney__Snapshot
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t
   yardLeft, int32_t grainsLeft, int32_t roadCapacity, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_Journey_LevelJourney__Snapshot_229a300
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    uVar6 = *(undefined1 *)(param_1 + 0x49);
    Dino_BusSand_App_Meta_Journey_LevelJourney__WriteEnd_229a218
              (param_1,param_2,param_3,3,0,param_4,param_5,param_6);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar7 = Dino_BusSand_App_Meta_Journey_Base64Url__Encode_2295a1c
                        (*(undefined8 *)(lVar8 + 0x10),0,*(undefined4 *)(lVar8 + 0x18));
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424(*(long *)(param_1 + 0x10),uVar3);
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x20) = 0x880;
          *(undefined8 *)(param_1 + 0x18) = uVar1;
          *(undefined8 *)(param_1 + 0x20) = uVar2;
          *(undefined4 *)(param_1 + 0x4c) = uVar4;
          *(undefined4 *)(param_1 + 0x30) = uVar5;
          *(undefined1 *)(param_1 + 0x49) = uVar6;
          Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8_2295954(lVar8,1,uVar5);
          return uVar7;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

