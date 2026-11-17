/* IL2CPP: Dino.BusSand.View.GameView$$JamRipple
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__JamRipple (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$JamRipple
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__JamRipple
   (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_GameView__JamRipple_23a95ac(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc668;
                    /* try { // try from 024a95c0 to 025a95c3 has its CatchHandler @ 024aaa68 */
                    /* try { // try from 024a95c4 to 025a95d3 has its CatchHandler @ 024aab24 */
  if ((bRam0000000004f9c93f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc668);
    bRam0000000004f9c93f = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 024a95f0 to 025a95f3 has its CatchHandler @ 024aab8c */
  Dino_BusSand_View_GameView__JamRipple_d__212___ctor_23ad2f8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 024a9618 to 025a961b has its CatchHandler @ 024aaa6c */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024a961c to 025a962b has its CatchHandler @ 024aab2c */
  FUN_02133224();
}

