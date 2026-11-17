/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$<CollectHallCommands>b__98_0
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_ClimbTowerFeature___CollectHallCommands_b__98_0 (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$<CollectHallCommands>b__98_0
   System_Collections_IEnumerator_o*
   Dino_BusSand_App_Meta_ClimbTowerFeature___CollectHallCommands_b__98_0
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_ClimbTowerFeature___CollectHallCommands_b__98_0_222d758
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9be4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    bRam0000000004f9be4b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cae748;
  if ((bRam0000000004f9ba19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae748,0);
    bRam0000000004f9ba19 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

