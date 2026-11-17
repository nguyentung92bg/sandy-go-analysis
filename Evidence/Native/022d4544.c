/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Countdown
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__Countdown (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Countdown
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__Countdown
   (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportPanel__Countdown_21d4544(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0660;
                    /* try { // try from 022d455c to 023d456b has its CatchHandler @ 022d4668 */
  if ((bRam0000000004f9bb5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0660);
                    /* try { // try from 022d4574 to 023d457f has its CatchHandler @ 022d464c */
    bRam0000000004f9bb5d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 022d4584 to 023d45a3 has its CatchHandler @ 022d462c */
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

