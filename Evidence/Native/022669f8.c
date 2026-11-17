/* IL2CPP: Dino.BusSand.App.GameApp$$DeclineNextFrame
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__DeclineNextFrame (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$DeclineNextFrame
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__DeclineNextFrame
   (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__DeclineNextFrame_21669f8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac660;
  if ((bRam0000000004f9b86d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac660);
    bRam0000000004f9b86d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__DeclineNextFrame_d__107___ctor_216eb60(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

