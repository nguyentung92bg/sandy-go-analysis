/* IL2CPP: Dino.BusSand.App.GameApp$$EnterLevelRoutine
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__EnterLevelRoutine (Dino_BusSand_App_GameApp_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$EnterLevelRoutine
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__EnterLevelRoutine
   (Dino_BusSand_App_GameApp_o* __this, int32_t source, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac5b8;
  if ((bRam0000000004f9b862 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5b8);
    bRam0000000004f9b862 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__EnterLevelRoutine_d__94___ctor_216eca8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

