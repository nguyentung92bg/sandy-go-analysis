/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Run
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__Run (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud, Dino_BusSand_App_Levels_LevelData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Run
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__Run
   (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud,
   Dino_BusSand_App_Levels_LevelData_o* data, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__Run_233cf90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243cf80 with catch @ 0243cf90
                        */
  puVar1 = PTR_DAT_04cb94a8;
  if ((bRam0000000004f9c663 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb94a8);
    bRam0000000004f9c663 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7___ctor_2184c04(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

