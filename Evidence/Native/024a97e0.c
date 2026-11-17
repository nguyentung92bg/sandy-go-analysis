/* IL2CPP: Dino.BusSand.View.GameView$$NextPictureGrid
Dino_BusSand_Core_SandGrid_o* Dino_BusSand_View_GameView__NextPictureGrid (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$NextPictureGrid
   Dino_BusSand_Core_SandGrid_o* Dino_BusSand_View_GameView__NextPictureGrid
   (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_GameView__NextPictureGrid_23a97e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 024a97ec to 025a97f7 has its CatchHandler @ 024aaba8 */
  if ((bRam0000000004f9c942 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc670);
    bRam0000000004f9c942 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x238);
                    /* try { // try from 024a9814 to 025a981b has its CatchHandler @ 024aab34 */
  if ((((lVar3 != 0) &&
       (lVar3 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28)),
       puVar1 = PTR_DAT_04cbc670, lVar3 != 0)) && (*(long *)(lVar3 + 0x18) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar2 = *(long *)PTR_DAT_04cbc670;
                    /* try { // try from 024a9848 to 025a9853 has its CatchHandler @ 024aaba4 */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar3 = Dino_BusSand_Core_BoardBuilder__Build_240c530(lVar3,**(undefined8 **)(lVar2 + 0xb8),0);
                    /* try { // try from 024a986c to 025a9877 has its CatchHandler @ 024aaba0 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024a98a4 to 025a98ab has its CatchHandler @ 024aab64 */
      FUN_02133224();
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0x10)) {
      if (*(int *)(lVar3 + 0x14) == *(int *)(lVar2 + 0x14)) {
        return lVar3;
      }
      return 0;
    }
  }
                    /* try { // try from 024a995c to 025a995f has its CatchHandler @ 024aaae8 */
  return 0;
}

