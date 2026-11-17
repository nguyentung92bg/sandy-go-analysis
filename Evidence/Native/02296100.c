/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$GuideStep
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o offset, System_String_o* text, bool above, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$GuideStep
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* target,
   UnityEngine_Vector3_o offset, System_String_o* text, bool above, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_2196100
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae2e8;
  if ((bRam0000000004f9b9c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae2e8);
    bRam0000000004f9b9c7 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_4);
  *(undefined8 *)(lVar2 + 0x20) = param_5;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_5);
  *(undefined4 *)(lVar2 + 0x30) = param_1;
  *(undefined4 *)(lVar2 + 0x34) = param_2;
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  *(undefined8 *)(lVar2 + 0x40) = param_6;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40),param_6);
  *(byte *)(lVar2 + 0x48) = param_7 & 1;
                    /* try { // try from 022961c0 to 0239620f has its CatchHandler @ 022961c0
                       catch() { ... } // from try @ 022961c0 with catch @ 022961c0
                       catch() { ... } // from try @ 02296344 with catch @ 022961c0 */
  return lVar2;
}

