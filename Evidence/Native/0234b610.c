/* IL2CPP: Dino.BusSand.App.Meta.StreakRateData$$.ctor
void Dino_BusSand_App_Meta_StreakRateData___ctor (Dino_BusSand_App_Meta_StreakRateData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateData$$.ctor
   void Dino_BusSand_App_Meta_StreakRateData___ctor (Dino_BusSand_App_Meta_StreakRateData_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_StreakRateData___ctor_224b610(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb3ae8;
  puVar1 = PTR_DAT_04cb3ae0;
                    /* try { // try from 0234b61c to 0244b633 has its CatchHandler @ 0234b284 */
                    /* try { // try from 0234b634 to 0244b643 has its CatchHandler @ 0234b658 */
  if ((bRam0000000004f9bf9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3ae8);
                    /* catch() { ... } // from try @ 0234b608 with catch @ 0234b648 */
                    /* catch() { ... } // from try @ 0234b60c with catch @ 0234b64c */
    FUN_02132f7c(PTR_DAT_04cb3ae0);
                    /* catch() { ... } // from try @ 0234b5d4 with catch @ 0234b658
                       catch() { ... } // from try @ 0234b634 with catch @ 0234b658 */
    bRam0000000004f9bf9e = 1;
  }
                    /* try { // try from 0234b660 to 0244b663 has its CatchHandler @ 0234bc6c */
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0234b664 to 0244b67f has its CatchHandler @ 0234b284 */
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 0234b680 to 0244b683 has its CatchHandler @ 0234b68c */
                    /* catch() { ... } // from try @ 0234b680 with catch @ 0234b68c */
                    /* try { // try from 0234b694 to 0244b69b has its CatchHandler @ 0234bc6c */
  return auVar4;
}

