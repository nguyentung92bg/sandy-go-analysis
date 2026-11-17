/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$<OnOpen>b__14_26
void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_26 (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$<OnOpen>b__14_26
   void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_26
   (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_26_236c674(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04cb1b88;
  puVar2 = PTR_DAT_04caba50;
                    /* try { // try from 0246c688 to 0256c693 has its CatchHandler @ 0246c818 */
                    /* try { // try from 0246c694 to 0256c69b has its CatchHandler @ 0246c814 */
                    /* try { // try from 0246c69c to 0256c6a7 has its CatchHandler @ 0246c810 */
  if ((bRam0000000004f9c79e & 1) == 0) {
                    /* try { // try from 0246c6a8 to 0256c6bb has its CatchHandler @ 0246c80c */
    FUN_02132f7c(PTR_DAT_04cb1b88);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac570);
                    /* try { // try from 0246c6cc to 0256c6cf has its CatchHandler @ 0246c824 */
    FUN_02132f7c(PTR_DAT_04cac588);
                    /* try { // try from 0246c6d0 to 0256c6d3 has its CatchHandler @ 0246c800 */
                    /* try { // try from 0246c6d4 to 0256c6db has its CatchHandler @ 0246c7fc */
    FUN_02132f7c(PTR_DAT_04cac598);
    bRam0000000004f9c79e = 1;
  }
                    /* try { // try from 0246c6ec to 0256c6ef has its CatchHandler @ 0246c824 */
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
                    /* try { // try from 0246c6f0 to 0256c6f3 has its CatchHandler @ 0246c7e4 */
                    /* try { // try from 0246c6f4 to 0256c6fb has its CatchHandler @ 0246c7e0 */
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined1 *)(*(long *)(*(long *)puVar3 + 0xb8) + 1) = 1;
                    /* try { // try from 0246c708 to 0256c723 has its CatchHandler @ 0246c7f8 */
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0246c72c to 0256c72f has its CatchHandler @ 0246c824 */
    cRam0000000004f9b88f = '\x01';
  }
                    /* try { // try from 0246c730 to 0256c733 has its CatchHandler @ 0246c7f4 */
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 0246c740 to 0256c747 has its CatchHandler @ 0246c7f0 */
    lVar4 = *(long *)puVar2;
  }
                    /* try { // try from 0246c748 to 0256c753 has its CatchHandler @ 0246c7ec */
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
                    /* try { // try from 0246c760 to 0256c763 has its CatchHandler @ 0246c7e8 */
                    /* try { // try from 0246c764 to 0256c77b has its CatchHandler @ 0246c828 */
    uStack_24 = 1;
    uVar5 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac570,&uStack_24);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0246c77c to 0256c787 has its CatchHandler @ 0246c808 */
                    /* try { // try from 0246c798 to 0256c79b has its CatchHandler @ 0246c824 */
    Dino_BusSand_App_UI_UIManager__Open_object__2945314
              (lVar4,*(undefined8 *)PTR_DAT_04cac598,2,uVar5,*(undefined8 *)PTR_DAT_04cac588);
  }
                    /* try { // try from 0246c79c to 0256c7b3 has its CatchHandler @ 0246c81c */
  return;
}

