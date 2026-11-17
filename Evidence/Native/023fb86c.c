/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$WinRewardCountUp
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp (Dino_BusSand_App_UI_MainHudPanel_o* __this, int32_t reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$WinRewardCountUp
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp
   (Dino_BusSand_App_UI_MainHudPanel_o* __this, int32_t reward, const MethodInfo* method); */

long Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_22fb86c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb7a80;
                    /* try { // try from 023fb880 to 024fb88b has its CatchHandler @ 023fbc94 */
  if ((bRam0000000004f9c4a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7a80);
                    /* try { // try from 023fb8a4 to 024fb8a7 has its CatchHandler @ 023fbc44 */
    bRam0000000004f9c4a9 = 1;
  }
                    /* try { // try from 023fb8a8 to 024fb8b7 has its CatchHandler @ 023fbcec */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 023fb8c0 to 024fb8cb has its CatchHandler @ 023fbce8 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 023fb8d0 to 024fb8d7 has its CatchHandler @ 023fbc8c */
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  return lVar2;
}

