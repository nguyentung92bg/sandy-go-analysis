/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$ProgressAnim
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$ProgressAnim
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_21e9e40(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0fb0;
  if ((bRam0000000004f9bbea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0fb0);
                    /* catch() { ... } // from try @ 022e9e0c with catch @ 022e9e70 */
    bRam0000000004f9bbea = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 022e9ea0 to 023e9f37 has its CatchHandler @ 022e9ea0
                       catch() { ... } // from try @ 022e9ea0 with catch @ 022e9ea0
                       catch() { ... } // from try @ 022e9f40 with catch @ 022e9ea0 */
  return lVar2;
}

