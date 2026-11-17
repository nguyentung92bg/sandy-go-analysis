/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseClosed
void Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManagerEvents$$RaiseClosed
   void Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 022fee68 to 023fee6b has its CatchHandler @ 022ff0c4 */
  puVar1 = PTR_DAT_04cb1b68;
                    /* try { // try from 022fee74 to 023fee7b has its CatchHandler @ 022ff0bc */
                    /* try { // try from 022fee80 to 023fef03 has its CatchHandler @ 022ff104 */
  if ((bRam0000000004f9bc8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc8f = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022feec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

