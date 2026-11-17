/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$WaitItemEffect
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t item, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$WaitItemEffect
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect
   (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t item, int32_t run, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_233da40
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 0243da40 to 0253da43 has its CatchHandler @ 0243da4c */
  puVar1 = PTR_DAT_04cb94e0;
                    /* try { // try from 0243da44 to 0253da6b has its CatchHandler @ 0243d7a8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243d974 with catch @ 0243da48
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243da40 with catch @ 0243da4c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243d904 with catch @ 0243da50
                        */
  if ((bRam0000000004f9c66a & 1) == 0) {
                    /* try { // try from 0243da6c to 0253da6f has its CatchHandler @ 0243da88 */
                    /* try { // try from 0243da70 to 0253da8b has its CatchHandler @ 0243d7a8 */
    FUN_02132f7c(PTR_DAT_04cb94e0);
    bRam0000000004f9c66a = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0243da6c with catch @ 0243da88 */
                    /* try { // try from 0243da8c to 0253da93 has its CatchHandler @ 0243da9c */
                    /* try { // try from 0243da94 to 0253da9f has its CatchHandler @ 0243d7a8 */
  Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14___ctor_21857d8(lVar2,0,0);
  if (lVar2 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243da8c with catch @ 0243da9c
                        */
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    *(undefined4 *)(lVar2 + 0x2c) = param_3;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

