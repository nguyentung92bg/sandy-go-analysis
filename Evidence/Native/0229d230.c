/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Punch
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleUi__Punch (UnityEngine_Transform_o* t, float s, float half, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Punch
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleUi__Punch
   (UnityEngine_Transform_o* t, float s, float half, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleUi__Punch_219d230
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae608;
  if ((bRam0000000004f9ba03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae608);
    bRam0000000004f9ba03 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  *(undefined4 *)(lVar2 + 0x2c) = param_1;
  return lVar2;
}

