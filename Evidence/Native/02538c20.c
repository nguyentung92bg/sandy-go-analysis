/* IL2CPP: Dino.BusSand.Sdk.SandBusReview$$Run
System_Collections_IEnumerator_o* Dino_BusSand_Sdk_SandBusReview__Run (System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusReview$$Run
   System_Collections_IEnumerator_o* Dino_BusSand_Sdk_SandBusReview__Run (System_Action_bool__o*
   done, const MethodInfo* method); */

long Dino_BusSand_Sdk_SandBusReview__Run_2438c20(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbf378;
  if ((bRam0000000004f9cc5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf378);
    bRam0000000004f9cc5d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

