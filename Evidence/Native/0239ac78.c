/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$.ctor
void Dino_BusSand_App_Meta_Journey_UiJourney___ctor (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$.ctor
   void Dino_BusSand_App_Meta_Journey_UiJourney___ctor (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_Journey_UiJourney___ctor_229ac78(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb5788;
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c21a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5788);
    FUN_02132f7c(PTR_DAT_04caa038);
    bRam0000000004f9c21a = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_Meta_Journey_JourneyBytes___ctor_2295318(uVar3,0x578);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0x60);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02134474();
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0x60);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02134474();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

