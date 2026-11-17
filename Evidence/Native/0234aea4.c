/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c__DisplayClass169_0$$<RunHallUIOpen>b__2
void Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass169_0___RunHallUIOpen_b__2 (Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass169_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c__DisplayClass169_0$$<RunHallUIOpen>b__2
   void Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass169_0___RunHallUIOpen_b__2
   (Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass169_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass169_0___RunHallUIOpen_b__2_224aea4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000004f9bf99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 0234aed0 to 0244aed3 has its CatchHandler @ 0234b1cc */
    FUN_02132f7c(PTR_DAT_04cb3a80);
    bRam0000000004f9bf99 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* try { // try from 0234aef0 to 0244aef3 has its CatchHandler @ 0234b1c4 */
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 0234aef8 to 0244af03 has its CatchHandler @ 0234b1c8 */
    System_Action___ctor_47b5ed0(lVar2,param_1,*(undefined8 *)PTR_DAT_04cb3a80,0);
                    /* try { // try from 0234af18 to 0244afe3 has its CatchHandler @ 0234b1d0 */
    *(long *)(param_1 + 0x20) = lVar2;
    thunk_FUN_02134474((long *)(param_1 + 0x20),lVar2);
  }
  uVar1 = Dino_BusSand_App_UI_PassportUi__OpenMain_21daf00(lVar2,0,0);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}

