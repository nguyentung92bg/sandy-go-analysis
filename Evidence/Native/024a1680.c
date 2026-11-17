/* IL2CPP: Dino.BusSand.View.GameView$$add_Tapped
void Dino_BusSand_View_GameView__add_Tapped (Dino_BusSand_View_GameView_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$add_Tapped
   void Dino_BusSand_View_GameView__add_Tapped (Dino_BusSand_View_GameView_o* __this,
   System_Action_int__o* value, const MethodInfo* method); */

void Dino_BusSand_View_GameView__add_Tapped_23a1680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 024a1674 with catch @ 024a1690 */
                    /* try { // try from 024a1694 to 025a169b has its CatchHandler @ 024a16a4 */
                    /* try { // try from 024a169c to 025a16a7 has its CatchHandler @ 024a14cc */
  if ((bRam0000000004f9c91b & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a1694 with catch @ 024a16a4
                        */
                    /* try { // try from 024a16a8 to 025a178b has its CatchHandler @ 024a16a8
                       catch() { ... } // from try @ 024a16a8 with catch @ 024a16a8
                       catch() { ... } // from try @ 024a1874 with catch @ 024a16a8
                       catch() { ... } // from try @ 024a18d0 with catch @ 024a16a8
                       catch() { ... } // from try @ 024a18f4 with catch @ 024a16a8 */
    FUN_02132f7c(PTR_DAT_04cac7e0);
    bRam0000000004f9c91b = 1;
  }
  puVar1 = PTR_DAT_04cac7e0;
  lVar5 = *(long *)(param_1 + 0x1a8);
  do {
    lVar3 = System_Delegate__Combine_4872324(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0216e7a0(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar3,uVar6);
      }
    }
    lVar3 = FUN_0216aff4(param_1 + 0x1a8,lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

