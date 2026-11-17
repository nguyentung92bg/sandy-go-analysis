/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Encode
System_String_o* Dino_BusSand_App_Meta_Journey_UiJourney__Encode (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int32_t endBy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Encode
   System_String_o* Dino_BusSand_App_Meta_Journey_UiJourney__Encode
   (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int32_t endBy, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Journey_UiJourney__Encode_229abcc(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8_2295954
              (*(long *)(param_1 + 0x10),1,*(uint *)(param_1 + 0x2c) & 0xfffffffc | param_2 & 3);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = Dino_BusSand_App_Meta_Journey_Base64Url__Encode_2295a1c
                        (*(undefined8 *)(lVar2 + 0x10),0,*(undefined4 *)(lVar2 + 0x18));
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8_2295954
                  (*(long *)(param_1 + 0x10),1,*(undefined4 *)(param_1 + 0x2c));
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

