/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Wait
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_UiMotion__Wait (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Wait
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_UiMotion__Wait (float seconds, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Wait_22909bc(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb5348;
  if ((bRam0000000004f9c1b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5348);
    bRam0000000004f9c1b9 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_UiMotion__Wait_d__11___ctor_22a1cdc(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

