/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$RunProcessFly
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$RunProcessFly
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_225b788(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb4158;
  if ((bRam0000000004f9c013 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4158);
                    /* try { // try from 0235b7b8 to 0245b7bb has its CatchHandler @ 0235b844 */
    bRam0000000004f9c013 = 1;
  }
                    /* try { // try from 0235b7c0 to 0245b7c3 has its CatchHandler @ 0235b840 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0235b7c8 to 0245b7cb has its CatchHandler @ 0235b81c */
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 0235b7d0 to 0245b7d3 has its CatchHandler @ 0235b814 */
                    /* try { // try from 0235b7d8 to 0245b7db has its CatchHandler @ 0235b810 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
                    /* try { // try from 0235b7e0 to 0245b7e3 has its CatchHandler @ 0235b80c */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 0235b7e8 to 0245b7eb has its CatchHandler @ 0235b800 */
                    /* try { // try from 0235b7f0 to 0245b7f3 has its CatchHandler @ 0235b7f8 */
  return lVar2;
}

