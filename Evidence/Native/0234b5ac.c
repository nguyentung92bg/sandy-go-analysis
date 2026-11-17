/* IL2CPP: Dino.BusSand.App.Meta.StreakRateSlot$$.ctor
void Dino_BusSand_App_Meta_StreakRateSlot___ctor (Dino_BusSand_App_Meta_StreakRateSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateSlot$$.ctor
   void Dino_BusSand_App_Meta_StreakRateSlot___ctor (Dino_BusSand_App_Meta_StreakRateSlot_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_StreakRateSlot___ctor_224b5ac(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_04ca9c30;
                    /* try { // try from 0234b5b0 to 0244b5b3 has its CatchHandler @ 0234b5b4 */
                    /* catch() { ... } // from try @ 0234b49c with catch @ 0234b5b4
                       catch() { ... } // from try @ 0234b5b0 with catch @ 0234b5b4
                       try { // try from 0234b5b4 to 0244b5d3 has its CatchHandler @ 0234b284 */
                    /* catch() { ... } // from try @ 0234b390 with catch @ 0234b5b8 */
  if ((bRam0000000004f9bf9d & 1) == 0) {
                    /* try { // try from 0234b5d4 to 0244b5eb has its CatchHandler @ 0234b658 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf9d = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
                    /* try { // try from 0234b608 to 0244b60b has its CatchHandler @ 0234b648 */
                    /* try { // try from 0234b60c to 0244b61b has its CatchHandler @ 0234b64c */
  return auVar2;
}

