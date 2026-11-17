/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseOpened
void Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseOpened
   void Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1b68;
  if ((bRam0000000004f9bc8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b68);
                    /* try { // try from 023000b8 to 024000bb has its CatchHandler @ 02300124 */
    bRam0000000004f9bc8e = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 != 0) {
                    /* try { // try from 023000e0 to 024000f3 has its CatchHandler @ 0230010c */
                    /* WARNING: Could not recover jumptable at 0x023000e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

