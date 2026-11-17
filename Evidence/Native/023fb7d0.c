/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$AnimLoop
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MainHudPanel__AnimLoop (UnityEngine_Animation_o* anim, System_String_o* clip, float initialDelay, float interval, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$AnimLoop
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MainHudPanel__AnimLoop
   (UnityEngine_Animation_o* anim, System_String_o* clip, float initialDelay, float interval, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_MainHudPanel__AnimLoop_22fb7d0
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb7a78;
                    /* try { // try from 023fb7f0 to 024fb7f3 has its CatchHandler @ 023fbc58 */
                    /* try { // try from 023fb7f4 to 024fb7ff has its CatchHandler @ 023fbcfc */
  if ((bRam0000000004f9c4bc & 1) == 0) {
                    /* try { // try from 023fb80c to 024fb813 has its CatchHandler @ 023fbd9c */
    FUN_02132f7c(PTR_DAT_04cb7a78);
    bRam0000000004f9c4bc = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 023fb82c to 024fb837 has its CatchHandler @ 023fbd48 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_4);
  *(undefined4 *)(lVar2 + 0x30) = param_1;
  *(undefined4 *)(lVar2 + 0x34) = param_2;
                    /* try { // try from 023fb85c to 024fb85f has its CatchHandler @ 023fbc48 */
                    /* try { // try from 023fb860 to 024fb86f has its CatchHandler @ 023fbcf0 */
  return lVar2;
}

