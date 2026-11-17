/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelStream$$.ctor
void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream___ctor (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelStream$$.ctor
   void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream___ctor
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* __this, const MethodInfo* method);
    */

undefined1  [16]
Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream___ctor_2296b4c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb5568;
  puVar1 = PTR_DAT_04cb5560;
  if ((bRam0000000004f9c209 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5568);
    FUN_02132f7c(PTR_DAT_04cb5560);
    bRam0000000004f9c209 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

