/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$FallRoutine
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* t, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$FallRoutine
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* t, float delay,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_21966e8
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae310;
  if ((bRam0000000004f9b9cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae310);
    bRam0000000004f9b9cf = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

