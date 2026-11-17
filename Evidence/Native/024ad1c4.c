/* IL2CPP: Dino.BusSand.View.GameView.<HitStop>d__251$$MoveNext
bool Dino_BusSand_View_GameView__HitStop_d__251__MoveNext (Dino_BusSand_View_GameView__HitStop_d__251_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView.<HitStop>d__251$$MoveNext
   bool Dino_BusSand_View_GameView__HitStop_d__251__MoveNext
   (Dino_BusSand_View_GameView__HitStop_d__251_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__HitStop_d__251__MoveNext_23ad1c4(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* try { // try from 024ad1e4 to 025ad20b has its CatchHandler @ 024ad9e4 */
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar4 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar2 = (float)UnityEngine_Time__get_timeScale_43cd6b0(0);
    if (fVar2 <= 0.0) {
      return 0;
    }
    if (lVar1 == 0) goto LAB_024ad2ac;
                    /* try { // try from 024ad210 to 025ad227 has its CatchHandler @ 024ad9dc */
    if (0.0 < *(float *)(lVar1 + 0x268)) {
      return 0;
    }
    fVar3 = fVar2 * *(float *)(param_1 + 0x28);
                    /* try { // try from 024ad228 to 025ad33b has its CatchHandler @ 024acb6c */
    UnityEngine_Time__set_timeScale_43cd6d8(fVar3,0);
    fVar4 = 0.0;
    *(float *)(lVar1 + 0x268) = fVar3;
    *(float *)(lVar1 + 0x26c) = fVar2;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (fVar4 < *(float *)(param_1 + 0x2c)) {
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(float *)(param_1 + 0x30) = fVar4 + fVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (lVar1 != 0) {
    Dino_BusSand_View_GameView__EndHitStop_23ab248(lVar1,0);
    return 0;
  }
LAB_024ad2ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

