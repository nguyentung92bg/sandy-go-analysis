/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$Intro
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LiveOpsHome__Intro (int32_t kind, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$Intro
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LiveOpsHome__Intro (int32_t kind,
   System_Action_o* done, const MethodInfo* method); */

long Dino_BusSand_App_UI_LiveOpsHome__Intro_23217fc(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb8a60;
  if ((bRam0000000004f9c5c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8a60);
    bRam0000000004f9c5c6 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* try { // try from 02421860 to 02521987 has its CatchHandler @ 02421860
                       catch() { ... } // from try @ 02421860 with catch @ 02421860
                       catch() { ... } // from try @ 02421a14 with catch @ 02421860
                       catch() { ... } // from try @ 02421a48 with catch @ 02421860
                       catch() { ... } // from try @ 02421a74 with catch @ 02421860
                       catch() { ... } // from try @ 02421a98 with catch @ 02421860 */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  return lVar2;
}

