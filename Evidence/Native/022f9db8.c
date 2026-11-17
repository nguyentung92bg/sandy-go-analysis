/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$WaitClosed
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MechanicGuide__WaitClosed (Dino_BusSand_App_UI_UIPanel_o* p, Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* alive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$WaitClosed
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_MechanicGuide__WaitClosed
   (Dino_BusSand_App_UI_UIPanel_o* p, Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* alive, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb18c0;
                    /* catch() { ... } // from try @ 022f9e14 with catch @ 022f9dc8 */
  if ((bRam0000000004f9bc60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18c0);
    bRam0000000004f9bc60 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022f9e10 to 023f9e13 has its CatchHandler @ 022f9e40 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
                    /* try { // try from 022f9e14 to 023f9e57 has its CatchHandler @ 022f9dc8 */
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_1);
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  return lVar2;
}

