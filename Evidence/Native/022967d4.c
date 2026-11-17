/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ScaleTo
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo (UnityEngine_Transform_o* t, float sx, float d, float sy, UnityEngine_Vector3_o baseScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ScaleTo
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo
   (UnityEngine_Transform_o* t, float sx, float d, float sy, UnityEngine_Vector3_o baseScale, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_21967d4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae318;
  if ((bRam0000000004f9b9d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae318);
    bRam0000000004f9b9d0 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_7;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_7);
  *(undefined4 *)(lVar2 + 0x38) = param_1;
  *(undefined4 *)(lVar2 + 0x3c) = param_2;
  *(undefined4 *)(lVar2 + 0x28) = param_4;
  *(undefined4 *)(lVar2 + 0x2c) = param_5;
  *(undefined4 *)(lVar2 + 0x30) = param_6;
  *(undefined4 *)(lVar2 + 0x34) = param_3;
  return lVar2;
}

