/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<ItemTargets>d__114$$System.IDisposable.Dispose
void Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__System_IDisposable_Dispose (Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<ItemTargets>d__114$$System.IDisposable.Dispose
   void Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__System_IDisposable_Dispose
   (Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__System_IDisposable_Dispose_230f7ec
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar3 = PTR_DAT_04cb1890;
  puVar2 = PTR_DAT_04cab9e0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    if (iVar1 == -4) {
Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114____m__Finally2_230fddc:
      if ((bRam0000000004f9c543 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab9e0);
        bRam0000000004f9c543 = 1;
      }
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = param_1 + 0x50;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto System_Collections_Generic_List_Enumerator_object___Dispose_35d6594;
    }
    if (iVar1 != -3) {
LAB_0240f808:
      auVar6._8_8_ = param_2;
      auVar6._0_8_ = param_1;
      return auVar6;
    }
  }
  else {
    if (iVar1 == 2) goto Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114____m__Finally2_230fddc;
    if (iVar1 != 1) goto LAB_0240f808;
  }
  if ((bRam0000000004f9c542 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    bRam0000000004f9c542 = 1;
  }
  uVar5 = *(undefined8 *)puVar3;
  lVar4 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
System_Collections_Generic_List_Enumerator_object___Dispose_35d6594:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = lVar4;
  return auVar7;
}

