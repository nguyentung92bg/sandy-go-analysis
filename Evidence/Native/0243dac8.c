/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$PrePropStep
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$PrePropStep
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep
   (Dino_BusSand_App_GameApp_o* app, Dino_BusSand_App_UI_HudPanel_o* hud,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_233dac8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb94e8;
  if ((bRam0000000004f9c66b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb94e8);
    bRam0000000004f9c66b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_LevelEnterFlow__PrePropStep_d__15___ctor_21846b8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
    *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* try { // try from 0243db40 to 0253dc6b has its CatchHandler @ 0243db40
                       catch() { ... } // from try @ 0243db40 with catch @ 0243db40
                       catch() { ... } // from try @ 0243dc9c with catch @ 0243db40
                       catch() { ... } // from try @ 0243dd14 with catch @ 0243db40
                       catch() { ... } // from try @ 0243dd40 with catch @ 0243db40
                       catch() { ... } // from try @ 0243dd6c with catch @ 0243db40 */
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
    *(undefined4 *)(lVar2 + 0x38) = param_4;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

