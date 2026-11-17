/* IL2CPP: Dino.BusSand.View.GameView$$FireworkShow
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__FireworkShow (Dino_BusSand_View_GameView_o* __this, System_Collections_Generic_List_byte__o* cols, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$FireworkShow
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__FireworkShow
   (Dino_BusSand_View_GameView_o* __this, System_Collections_Generic_List_byte__o* cols, const
   MethodInfo* method); */

long Dino_BusSand_View_GameView__FireworkShow_23a99a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc680;
                    /* try { // try from 024a99bc to 025a99cb has its CatchHandler @ 024aaafc */
  if ((bRam0000000004f9c944 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc680);
    bRam0000000004f9c944 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 024a99e4 to 025a99fb has its CatchHandler @ 024aaae0 */
  Dino_BusSand_View_GameView__FireworkShow_d__230___ctor_23acb10(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
                    /* try { // try from 024a9a20 to 025a9a33 has its CatchHandler @ 024aaadc */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

