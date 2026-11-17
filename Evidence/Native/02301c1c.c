/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$Check
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_AppUpdate__Check (float timeout, System_Action_AppUpdate_Result__o* done, System_Func_bool__o* stop, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$Check
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_AppUpdate__Check (float timeout,
   System_Action_AppUpdate_Result__o* done, System_Func_bool__o* stop, const MethodInfo* method); */

long Dino_BusSand_App_Meta_AppUpdate__Check_2201c1c
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1c10;
  if ((bRam0000000004f9bcab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c10);
    bRam0000000004f9bcab = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_3);
  return lVar2;
}

