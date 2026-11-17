/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$GuideStep
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__GuideStep (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$GuideStep
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__GuideStep
   (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_233d96c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb94d8;
                    /* try { // try from 0243d974 to 0253d977 has its CatchHandler @ 0243da48 */
                    /* try { // try from 0243d978 to 0253da3f has its CatchHandler @ 0243d7a8 */
  if ((bRam0000000004f9c669 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb94d8);
    bRam0000000004f9c669 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_1);
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_2);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined4 *)(lVar2 + 0x28) = param_4;
  return lVar2;
}

