/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow$$Show<object>
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PostWinFlow__Show_object_ (Dino_BusSand_App_UI_UIManager_o* ui, System_String_o* key, Il2CppObject* param, const MethodInfo_283E038* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow$$Show<object>
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PostWinFlow__Show_object_
   (Dino_BusSand_App_UI_UIManager_o* ui, System_String_o* key, Il2CppObject* param, const
   MethodInfo_283E038* method); */

long Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0293e03c to 02a3e09b has its CatchHandler @ 0293e1ec */
  plVar2 = *(long **)(param_4 + 0x38);
  if (plVar2 == (long *)0x0) {
    FUN_0216b4cc(param_4);
    plVar2 = *(long **)(param_4 + 0x38);
  }
  if ((*(ushort *)(*plVar2 + 0x135) & 1) == 0) {
    FUN_0216b470();
  }
  lVar1 = thunk_FUN_0216e89c();
  Dino_BusSand_App_UI_PostWinFlow__Show_d__2_object____ctor_34e7a40
            (lVar1,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar1 + 0x20),param_1);
                    /* try { // try from 0293e0ac to 02a3e0b3 has its CatchHandler @ 0293e1e0 */
    *(undefined8 *)(lVar1 + 0x28) = param_2;
                    /* try { // try from 0293e0b4 to 02a3e187 has its CatchHandler @ 0293decc */
    thunk_FUN_02134474((undefined8 *)(lVar1 + 0x28),param_2);
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar1 + 0x30),param_3);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

