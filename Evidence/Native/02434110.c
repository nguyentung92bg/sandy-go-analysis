/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Contents
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_RewardStagePanel__Contents (Dino_BusSand_App_UI_RewardStagePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Contents
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_RewardStagePanel__Contents (Dino_BusSand_App_UI_RewardStagePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

long * Dino_BusSand_App_UI_RewardStagePanel__Contents_2334110(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar3 = PTR_DAT_04caca60;
  if ((bRam0000000004f9c632 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9c632 = 1;
  }
  puVar2 = PTR_DAT_04caca50;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
      return param_2;
    }
  }
  plVar4 = (long *)thunk_FUN_0216e89c();
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (plVar4,*(undefined8 *)puVar2);
  return plVar4;
}

