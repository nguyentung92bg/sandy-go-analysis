/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly$$Run
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_CommerceRewardFly__Run (Dino_BusSand_App_UI_UIManager_o* ui, System_Collections_Generic_List_KeyValuePair_int__long___o* rewards, UnityEngine_Vector3_o from, System_Action_o* done, bool holdOnTarget, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceRewardFly$$Run
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_CommerceRewardFly__Run
   (Dino_BusSand_App_UI_UIManager_o* ui, System_Collections_Generic_List_KeyValuePair_int__long___o*
   rewards, UnityEngine_Vector3_o from, System_Action_o* done, bool holdOnTarget, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb5dd8;
  if ((bRam0000000004f9c29a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5dd8);
    bRam0000000004f9c29a = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_4);
  *(undefined8 *)(lVar2 + 0x30) = param_5;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_5);
  *(undefined4 *)(lVar2 + 0x3c) = param_1;
  *(undefined4 *)(lVar2 + 0x40) = param_2;
  *(undefined4 *)(lVar2 + 0x44) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_6;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_6);
  *(byte *)(lVar2 + 0x38) = param_7 & 1;
  return lVar2;
}

