/* IL2CPP: Dino.BusSand.View.GameView$$remove_TapMissed
void Dino_BusSand_View_GameView__remove_TapMissed (System_Action_Vector2__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$remove_TapMissed
   void Dino_BusSand_View_GameView__remove_TapMissed (System_Action_Vector2__o* value, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__remove_TapMissed_23a0d30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
                    /* try { // try from 024a0d30 to 025a0d37 has its CatchHandler @ 024a141c */
  puVar2 = PTR_DAT_04cb2870;
                    /* try { // try from 024a0d44 to 025a0d4b has its CatchHandler @ 024a13c0 */
  if ((bRam0000000004f9c91a & 1) == 0) {
                    /* try { // try from 024a0d60 to 025a0d67 has its CatchHandler @ 024a13bc */
    FUN_02132f7c(PTR_DAT_04cb2860);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c91a = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 024a0d84 to 025a0d8b has its CatchHandler @ 024a1418 */
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cb2860;
                    /* try { // try from 024a0d98 to 025a0da3 has its CatchHandler @ 024a1414 */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  do {
                    /* try { // try from 024a0da4 to 025a1393 has its CatchHandler @ 024a084c */
    lVar5 = System_Delegate__Remove_4872510(lVar4,param_1,0);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar6 = thunk_FUN_0216e7a0(lVar5,uVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar5,uVar7);
      }
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = FUN_0216aff4(*(long *)(lVar5 + 0xb8) + 0x18,lVar6,lVar4);
    bVar3 = lVar5 != lVar4;
    lVar4 = lVar5;
  } while (bVar3);
  return;
}

