/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$CountNumber
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber (UnityEngine_Transform_o* textNode, int32_t from, int32_t to, float delay, float duration, bool tick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$CountNumber
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber
   (UnityEngine_Transform_o* textNode, int32_t from, int32_t to, float delay, float duration, bool
   tick, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleUi__CountNumber_219d2d8
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,byte param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae610;
  if ((bRam0000000004f9ba04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae610);
    bRam0000000004f9ba04 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_3);
  *(undefined4 *)(lVar2 + 0x24) = param_4;
  *(undefined4 *)(lVar2 + 0x28) = param_5;
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  *(undefined4 *)(lVar2 + 0x2c) = param_2;
  *(byte *)(lVar2 + 0x30) = param_6 & 1;
  return lVar2;
}

