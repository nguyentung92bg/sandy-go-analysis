/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenBuy
bool Dino_BusSand_App_UI_PassportUi__OpenBuy (int32_t storeItemId, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenBuy
   bool Dino_BusSand_App_UI_PassportUi__OpenBuy (int32_t storeItemId, System_String_o* source, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_PassportUi__OpenBuy_21d75ac(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9bb81 & 1) == 0) {
                    /* catch() { ... } // from try @ 022d713c with catch @ 022d75d0 */
                    /* catch() { ... } // from try @ 022d73dc with catch @ 022d75d4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 022d7264 with catch @ 022d75d8 */
                    /* catch() { ... } // from try @ 022d71c0 with catch @ 022d75dc
                       catch() { ... } // from try @ 022d7304 with catch @ 022d75dc */
    FUN_02132f7c(PTR_DAT_04cb01a8);
    FUN_02132f7c(PTR_DAT_04cb0810);
    FUN_02132f7c(PTR_DAT_04cb0818);
    FUN_02132f7c(PTR_DAT_04cb0820);
    bRam0000000004f9bb81 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d7620 to 023d7677 has its CatchHandler @ 022d7620
                       catch() { ... } // from try @ 022d7620 with catch @ 022d7620
                       catch() { ... } // from try @ 022d7aa8 with catch @ 022d7620 */
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((param_1 < 1) || ((uVar3 & 1) != 0)) {
    return 0;
  }
                    /* try { // try from 022d7678 to 023d768b has its CatchHandler @ 022d7b0c */
  if (lVar6 != 0) {
    uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar6,*(undefined8 *)PTR_DAT_04cb0810);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb01a8);
    System_Object___ctor_4870e5c(lVar4,0);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x10) = param_1;
      *(undefined8 *)(lVar4 + 0x18) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),param_2);
                    /* try { // try from 022d76fc to 023d7743 has its CatchHandler @ 022d7b18 */
      uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cb0820,2,lVar4,
                         *(undefined8 *)PTR_DAT_04cb0818);
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

