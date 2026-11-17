/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseBack
void Dino_BusSand_App_UI_UIManagerEvents__RaiseBack (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseBack
   void Dino_BusSand_App_UI_UIManagerEvents__RaiseBack (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__RaiseBack_21ff2c8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1b68;
                    /* try { // try from 022ff2dc to 023ff2eb has its CatchHandler @ 022ff53c */
  if ((bRam0000000004f9bc90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc90 = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ff324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

