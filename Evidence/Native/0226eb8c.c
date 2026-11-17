/* IL2CPP: Dino.BusSand.App.GameApp.<DeclineNextFrame>d__107$$MoveNext
bool Dino_BusSand_App_GameApp__DeclineNextFrame_d__107__MoveNext (Dino_BusSand_App_GameApp__DeclineNextFrame_d__107_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<DeclineNextFrame>d__107$$MoveNext
   bool Dino_BusSand_App_GameApp__DeclineNextFrame_d__107__MoveNext
   (Dino_BusSand_App_GameApp__DeclineNextFrame_d__107_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_GameApp__DeclineNextFrame_d__107__MoveNext_216eb8c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 0226eb8c to 0236eb97 has its CatchHandler @ 0226eda8 */
  if ((bRam0000000004f9b8a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0226ebb0 to 0236ebbf has its CatchHandler @ 0226ed78 */
    bRam0000000004f9b8a7 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* try { // try from 0226ec30 to 0236ec3f has its CatchHandler @ 0226ed7c */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 0226ec44 to 0236ec4b has its CatchHandler @ 0226ed70 */
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
                    /* try { // try from 0226ebc8 to 0236ebcf has its CatchHandler @ 0226ed74 */
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_0226ec5c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0226ebe0 to 0236ebeb has its CatchHandler @ 0226ed98 */
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) goto LAB_0226ec5c;
      if (*(int *)(lVar4 + 0x20) == 3) {
        Dino_BusSand_App_Gameplay_GameplayController__DeclineRevive_229f9c4(lVar4,0);
      }
    }
  }
                    /* try { // try from 0226ec4c to 0236ec57 has its CatchHandler @ 0226ed60 */
  return iVar1 == 0;
}

