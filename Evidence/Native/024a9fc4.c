/* IL2CPP: Dino.BusSand.View.GameView$$ShowRocket
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__ShowRocket (Dino_BusSand_View_GameView_o* __this, float vx, float vy, UnityEngine_Color32_o a, UnityEngine_Color32_o b, int32_t kind, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$ShowRocket
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__ShowRocket
   (Dino_BusSand_View_GameView_o* __this, float vx, float vy, UnityEngine_Color32_o a,
   UnityEngine_Color32_o b, int32_t kind, const MethodInfo* method); */

long Dino_BusSand_View_GameView__ShowRocket_23a9fc4
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc690;
                    /* try { // try from 024a9fc8 to 025a9fd3 has its CatchHandler @ 024aaa9c */
                    /* try { // try from 024a9fdc to 025a9fe7 has its CatchHandler @ 024aaa20 */
                    /* try { // try from 024a9ffc to 025aa00f has its CatchHandler @ 024aaa98 */
  if ((bRam0000000004f9c949 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc690);
                    /* try { // try from 024aa010 to 025aa023 has its CatchHandler @ 024aaa94 */
    bRam0000000004f9c949 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_GameView__ShowRocket_d__244___ctor_23ae164(lVar2,0,0);
  if (lVar2 != 0) {
                    /* try { // try from 024aa03c to 025aa03f has its CatchHandler @ 024aaa8c */
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
    *(undefined4 *)(lVar2 + 0x28) = param_1;
    *(undefined4 *)(lVar2 + 0x2c) = param_2;
    *(undefined4 *)(lVar2 + 0x34) = param_4;
    *(undefined4 *)(lVar2 + 0x38) = param_5;
                    /* try { // try from 024aa054 to 025aa083 has its CatchHandler @ 024aab70 */
    *(undefined4 *)(lVar2 + 0x30) = param_6;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

