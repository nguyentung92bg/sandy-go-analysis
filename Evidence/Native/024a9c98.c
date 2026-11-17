/* IL2CPP: Dino.BusSand.View.GameView$$Spotlight
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__Spotlight (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$Spotlight
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__Spotlight
   (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_GameView__Spotlight_23a9c98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc688;
                    /* try { // try from 024a9cb4 to 025a9cbb has its CatchHandler @ 024aa9f8 */
  if ((bRam0000000004f9c948 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc688);
                    /* try { // try from 024a9cc4 to 025a9cc7 has its CatchHandler @ 024aab00 */
    bRam0000000004f9c948 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 024a9cd4 to 025a9cff has its CatchHandler @ 024aaa10 */
  Dino_BusSand_View_GameView__Spotlight_d__241___ctor_23af0a0(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

