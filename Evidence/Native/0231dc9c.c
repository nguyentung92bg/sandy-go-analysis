/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$.cctor
void Dino_BusSand_App_Meta_JourneyTracking___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$.cctor
   void Dino_BusSand_App_Meta_JourneyTracking___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking___cctor_221dc9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04cb28c0;
  puVar3 = PTR_DAT_04cb28b8;
  puVar2 = PTR_DAT_04caec70;
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bdad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb28b8);
    FUN_02132f7c(PTR_DAT_04cb28c0);
    bRam0000000004f9bdad = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  Dino_BusSand_App_Meta_Journey_LevelJourney___ctor_229a3e4(uVar5,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_App_Meta_Journey_UiJourney___ctor_229ac78(uVar5,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  uVar5 = FUN_02133068(*(undefined8 *)puVar2,0x20);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar7 + 0x24) = _UNK_00e6a140;
  *(undefined4 *)(lVar7 + 0x2c) = 0xffffffff;
  *(undefined4 *)(lVar7 + 0x34) = 0xffffffff;
  return;
}

