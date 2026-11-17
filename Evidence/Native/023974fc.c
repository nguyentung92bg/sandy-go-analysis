/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.UiStream$$.ctor
void Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream___ctor (Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.UiStream$$.ctor
   void Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream___ctor
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream___ctor_22974fc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb55e0;
  puVar1 = PTR_DAT_04cb55d8;
  if ((bRam0000000004f9c20c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb55e0);
    FUN_02132f7c(PTR_DAT_04cb55d8);
    bRam0000000004f9c20c = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

