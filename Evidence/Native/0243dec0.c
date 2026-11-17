/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$RunThen
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__RunThen (System_Collections_IEnumerator_o* inner, System_Action_o* then, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$RunThen
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__RunThen
   (System_Collections_IEnumerator_o* inner, System_Action_o* then, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__RunThen_233dec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb94f8;
  if ((bRam0000000004f9c66d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb94f8);
    bRam0000000004f9c66d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17___ctor_2185578(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

