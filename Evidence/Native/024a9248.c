/* IL2CPP: Dino.BusSand.View.GameView$$ShuffleBounce
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__ShuffleBounce (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_View_VehicleView_o* v, uint8_t finalColor, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$ShuffleBounce
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__ShuffleBounce
   (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_View_VehicleView_o* v, uint8_t finalColor,
   float delay, const MethodInfo* method); */

long Dino_BusSand_View_GameView__ShuffleBounce_23a9248
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc650;
  if ((bRam0000000004f9c93b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc650);
    bRam0000000004f9c93b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_GameView__ShuffleBounce_d__197___ctor_23aeaf0(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_2);
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
    *(undefined1 *)(lVar2 + 0x38) = param_4;
    *(undefined4 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

