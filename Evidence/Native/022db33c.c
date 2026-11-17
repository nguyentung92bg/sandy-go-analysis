/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenContinue
bool Dino_BusSand_App_UI_PassportUi__OpenContinue (System_Action_int__o* revive, System_Action_o* decline, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenContinue
   bool Dino_BusSand_App_UI_PassportUi__OpenContinue (System_Action_int__o* revive, System_Action_o*
   decline, const MethodInfo* method); */

uint Dino_BusSand_App_UI_PassportUi__OpenContinue_21db33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9bb82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb02d0);
    FUN_02132f7c(PTR_DAT_04cb0a00);
    FUN_02132f7c(PTR_DAT_04cb0a08);
    FUN_02132f7c(PTR_DAT_04cb0a10);
    bRam0000000004f9bb82 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  Dino_BusSand_App_UI_PassportUi__Install_21dad80();
  if (cRam0000000004f9b94d == '\0') {
                    /* try { // try from 022db3b8 to 023db3d7 has its CatchHandler @ 022db468 */
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
                    /* try { // try from 022db3d8 to 023db423 has its CatchHandler @ 022db258 */
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 022db424 to 023db437 has its CatchHandler @ 022db450 */
    return 0;
  }
  if (lVar6 != 0) {
    uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar6,*(undefined8 *)PTR_DAT_04cb0a00);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
                    /* try { // try from 022db438 to 023db47b has its CatchHandler @ 022db258 */
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb02d0);
    System_Object___ctor_4870e5c(lVar4,0);
                    /* catch() { ... } // from try @ 022db424 with catch @ 022db450 */
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = param_1;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),param_1);
                    /* catch() { ... } // from try @ 022db3b8 with catch @ 022db468 */
      *(undefined8 *)(lVar4 + 0x18) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),param_2);
                    /* try { // try from 022db48c to 023db5eb has its CatchHandler @ 022db48c
                       catch() { ... } // from try @ 022db48c with catch @ 022db48c
                       catch() { ... } // from try @ 022db60c with catch @ 022db48c
                       catch() { ... } // from try @ 022db66c with catch @ 022db48c */
      uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cb0a10,2,lVar4,
                         *(undefined8 *)PTR_DAT_04cb0a08);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar5,0);
      return (uVar2 ^ 0xffffffff) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

