/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Jump
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* t, float delay, UnityEngine_Vector3_o target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Jump
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* t, float delay,
   UnityEngine_Vector3_o target, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_21965e0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae308;
  if ((bRam0000000004f9b9ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae308);
    bRam0000000004f9b9ce = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_6;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_6);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  *(undefined4 *)(lVar2 + 0x30) = param_2;
  *(undefined4 *)(lVar2 + 0x34) = param_3;
  *(undefined4 *)(lVar2 + 0x38) = param_4;
  return lVar2;
}

