/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemTargets
System_Collections_Generic_IEnumerable_Transform__o* Dino_BusSand_App_UI_HudPanel__ItemTargets (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemTargets
   System_Collections_Generic_IEnumerable_Transform__o* Dino_BusSand_App_UI_HudPanel__ItemTargets
   (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_HudPanel__ItemTargets_230f190(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb8200;
  if ((bRam0000000004f9c537 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8200);
    bRam0000000004f9c537 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),param_1);
  return lVar3;
}

