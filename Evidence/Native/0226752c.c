/* IL2CPP: Dino.BusSand.App.GameApp$$ChallengeWin
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__ChallengeWin (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$ChallengeWin
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__ChallengeWin
   (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__ChallengeWin_216752c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac6b0;
                    /* try { // try from 02267540 to 0236754b has its CatchHandler @ 02267600 */
  if ((bRam0000000004f9b866 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6b0);
    bRam0000000004f9b866 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__ChallengeWin_d__98___ctor_216dccc(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

