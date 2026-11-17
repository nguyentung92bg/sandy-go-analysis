/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$.ctor
void Dino_BusSand_App_UI_RoyaleView___ctor (Dino_BusSand_App_UI_RoyaleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$.ctor
   void Dino_BusSand_App_UI_RoyaleView___ctor (Dino_BusSand_App_UI_RoyaleView_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_RoyaleView___ctor_21bade0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_04cac668;
                    /* try { // try from 022badfc to 023bae03 has its CatchHandler @ 022bae04 */
  if ((bRam0000000004f9babd & 1) == 0) {
                    /* catch() { ... } // from try @ 022badfc with catch @ 022bae04
                       try { // try from 022bae04 to 023bae23 has its CatchHandler @ 022bacb4 */
                    /* catch() { ... } // from try @ 022badbc with catch @ 022bae08 */
    FUN_02132f7c(PTR_DAT_04caf7b8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9babd = 1;
  }
  puVar2 = PTR_DAT_04caf7b8;
                    /* try { // try from 022bae24 to 023baf0b has its CatchHandler @ 022bae24
                       catch() { ... } // from try @ 022bae24 with catch @ 022bae24
                       catch() { ... } // from try @ 022baf4c with catch @ 022bae24 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(lVar3,0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_02134474();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

