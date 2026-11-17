/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$PlayBC
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportGetPanel__PlayBC (Dino_BusSand_App_UI_PassportGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$PlayBC
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportGetPanel__PlayBC
   (Dino_BusSand_App_UI_PassportGetPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportGetPanel__PlayBC_21d1e48(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb04d8;
  if ((bRam0000000004f9bb42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb04d8);
    bRam0000000004f9bb42 = 1;
  }
                    /* try { // try from 022d1e80 to 023d1edb has its CatchHandler @ 022d1884 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* catch() { ... } // from try @ 022d1910 with catch @ 022d1e94 */
                    /* catch() { ... } // from try @ 022d1c94 with catch @ 022d1e98 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
                    /* catch() { ... } // from try @ 022d1a2c with catch @ 022d1e9c */
  *(undefined8 *)(lVar2 + 0x20) = param_1;
                    /* catch() { ... } // from try @ 022d1980 with catch @ 022d1ea0
                       catch() { ... } // from try @ 022d1ac8 with catch @ 022d1ea0 */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

