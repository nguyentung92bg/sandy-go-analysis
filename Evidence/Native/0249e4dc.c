/* IL2CPP: Dino.BusSand.View.GameView$$<BuildPad>g__Grow|104_0
void Dino_BusSand_View_GameView___BuildPad_g__Grow_104_0 (double x, double z, Dino_BusSand_View_GameView___c__DisplayClass104_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$<BuildPad>g__Grow|104_0
   void Dino_BusSand_View_GameView___BuildPad_g__Grow_104_0 (double x, double z,
   Dino_BusSand_View_GameView___c__DisplayClass104_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_GameView___BuildPad_g__Grow_104_0_239e4dc
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c957 & 1) == 0) {
                    /* try { // try from 0249e510 to 0259e517 has its CatchHandler @ 0249e6dc */
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c957 = 1;
  }
  uVar2 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0249e530 to 0259e537 has its CatchHandler @ 0249e6d4 */
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Min_48310e8(uVar2,param_1,0);
                    /* try { // try from 0249e548 to 0259e54b has its CatchHandler @ 0249e6bc */
  *param_3 = uVar2;
                    /* try { // try from 0249e54c to 0259e55b has its CatchHandler @ 0249e6c4 */
  uVar2 = System_Math__Max_4830f98(param_3[1],param_1,0);
  param_3[1] = uVar2;
                    /* try { // try from 0249e564 to 0259e5cb has its CatchHandler @ 0249e6c8 */
  uVar2 = System_Math__Min_48310e8(param_3[2],param_2,0);
  param_3[2] = uVar2;
  uVar2 = System_Math__Max_4830f98(param_3[3],param_2,0);
  param_3[3] = uVar2;
  return;
}

