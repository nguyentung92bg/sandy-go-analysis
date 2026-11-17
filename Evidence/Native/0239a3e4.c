/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$.ctor
void Dino_BusSand_App_Meta_Journey_LevelJourney___ctor (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$.ctor
   void Dino_BusSand_App_Meta_Journey_LevelJourney___ctor
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_Journey_LevelJourney___ctor_229a3e4(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04cb5788;
  if ((bRam0000000004f9c216 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5788);
    bRam0000000004f9c216 = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_Meta_Journey_JourneyBytes___ctor_2295318(uVar2,0x898);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar2);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

