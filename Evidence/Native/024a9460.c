/* IL2CPP: Dino.BusSand.View.GameView$$HitStop
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__HitStop (Dino_BusSand_View_GameView_o* __this, float scale, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$HitStop
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__HitStop
   (Dino_BusSand_View_GameView_o* __this, float scale, float seconds, const MethodInfo* method); */

long Dino_BusSand_View_GameView__HitStop_23a9460
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc658;
  if ((bRam0000000004f9c94e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc658);
    bRam0000000004f9c94e = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_GameView__HitStop_d__251___ctor_23ad198(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
    *(undefined4 *)(lVar2 + 0x28) = param_1;
    *(undefined4 *)(lVar2 + 0x2c) = param_2;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

