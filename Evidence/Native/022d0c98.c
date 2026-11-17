/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$CloseRoutine
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$CloseRoutine
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine
   (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_21d0c98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0420;
  if ((bRam0000000004f9bb3a & 1) == 0) {
                    /* try { // try from 022d0cc0 to 023d0d07 has its CatchHandler @ 022d11e0 */
    FUN_02132f7c(PTR_DAT_04cb0420);
    bRam0000000004f9bb3a = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

