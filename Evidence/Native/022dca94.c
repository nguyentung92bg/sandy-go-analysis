/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$KeysGain
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportUi__KeysGain (UnityEngine_Transform_o* btn, Dino_BusSand_App_Meta_PassportFeature_o* f, int32_t produce, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$KeysGain
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportUi__KeysGain
   (UnityEngine_Transform_o* btn, Dino_BusSand_App_Meta_PassportFeature_o* f, int32_t produce,
   System_Action_o* done, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportUi__KeysGain_21dca94
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0a88;
  if ((bRam0000000004f9bb8b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0a88);
    bRam0000000004f9bb8b = 1;
  }
                    /* try { // try from 022dcadc to 023dcae7 has its CatchHandler @ 022dce80 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_4);
  return lVar2;
}

