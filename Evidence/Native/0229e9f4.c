/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$Sfx
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Sfx (System_String_o* id, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$Sfx
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Sfx
   (System_String_o* id, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleWaitPanel__Sfx_219e9f4(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae6b0;
                    /* try { // try from 0229ea00 to 0239ea0b has its CatchHandler @ 0229ea2c */
                    /* try { // try from 0229ea0c to 0239ea47 has its CatchHandler @ 0229e9d0 */
  if ((bRam0000000004f9ba0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6b0);
                    /* catch() { ... } // from try @ 0229ea00 with catch @ 0229ea2c */
    bRam0000000004f9ba0c = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

