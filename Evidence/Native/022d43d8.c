/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Guide
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__Guide (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Guide
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__Guide
   (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportPanel__Guide_21d43d8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0650;
                    /* catch() { ... } // from try @ 022d43a0 with catch @ 022d43e0 */
  if ((bRam0000000004f9bb6c & 1) == 0) {
                    /* try { // try from 022d43f8 to 023d449b has its CatchHandler @ 022d43f8
                       catch() { ... } // from try @ 022d43f8 with catch @ 022d43f8
                       catch() { ... } // from try @ 022d44b4 with catch @ 022d43f8
                       catch() { ... } // from try @ 022d452c with catch @ 022d43f8
                       catch() { ... } // from try @ 022d462c with catch @ 022d43f8 */
    FUN_02132f7c(PTR_DAT_04cb0650);
    bRam0000000004f9bb6c = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

