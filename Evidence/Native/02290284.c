/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$Born
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, UnityEngine_Transform_o* target, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$Born
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, UnityEngine_Transform_o* target, float
   duration, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleResultPanel__Born_2190284
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cadfc8;
  if ((bRam0000000004f9b9a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadfc8);
    bRam0000000004f9b9a1 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
  *(undefined4 *)(lVar2 + 0x30) = param_1;
  return lVar2;
}

