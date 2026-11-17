/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$RunWand
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MechanicGuide__RunWand (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t guideRow, Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* alive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$RunWand
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MechanicGuide__RunWand
   (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t guideRow,
   Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* alive, const MethodInfo* method); */

long Dino_BusSand_App_UI_MechanicGuide__RunWand_21f98a0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1888;
  if ((bRam0000000004f9bc5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1888);
    bRam0000000004f9bc5d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_1);
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_2);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined4 *)(lVar2 + 0x40) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_5);
  return lVar2;
}

