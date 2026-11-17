/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Shot
System_Collections_IEnumerator_o* Dino_BusSand_App_QaPilot_Runner__Shot (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* id, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Shot
   System_Collections_IEnumerator_o* Dino_BusSand_App_QaPilot_Runner__Shot
   (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* id, System_String_o* name, const
   MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__Shot_215be74
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabdc8;
  if ((bRam0000000004f9b7f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdc8);
    bRam0000000004f9b7f2 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_1);
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_2);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  return lVar2;
}

