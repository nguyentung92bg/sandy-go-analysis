/* IL2CPP: Dino.BusSand.View.GameView$$HurryOutro
void Dino_BusSand_View_GameView__HurryOutro (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$HurryOutro
   void Dino_BusSand_View_GameView__HurryOutro (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__HurryOutro_23a4240(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  
                    /* try { // try from 024a4244 to 025a424b has its CatchHandler @ 024a43e4 */
  if ((bRam0000000004f9c94f & 1) == 0) {
                    /* try { // try from 024a4258 to 025a4263 has its CatchHandler @ 024a43f4 */
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c94f = 1;
  }
                    /* try { // try from 024a4270 to 025a4277 has its CatchHandler @ 024a43e0 */
  if (((*(char *)(param_1 + 0x14d) != '\0') && (*(char *)(param_1 + 0x274) == '\0')) &&
     (fVar3 = (float)UnityEngine_Time__get_timeScale_43cd6b0(0), puVar1 = PTR_DAT_04cb2870,
     _UNK_00e209a8 <= fVar3)) {
    *(undefined1 *)(param_1 + 0x274) = 1;
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 024a42bc to 025a42df has its CatchHandler @ 024a43ec */
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x90);
    if (pcRam0000000004fa89b0 == (code *)0x0) {
      pcRam0000000004fa89b0 = (code *)FUN_02132f40(&UNK_00e34d1a);
    }
                    /* WARNING: Could not recover jumptable at 0x044cd70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa89b0)(uVar4);
    return;
  }
  return;
}

