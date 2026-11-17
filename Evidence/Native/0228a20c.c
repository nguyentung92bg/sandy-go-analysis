/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnClose
void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnClose (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnClose
   void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnClose
   (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnClose_218a20c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04cadc00;
  puVar2 = PTR_DAT_04cac7e0;
  puVar1 = PTR_DAT_04cabaf8;
                    /* catch() { ... } // from try @ 0228a1a8 with catch @ 0228a214 */
                    /* catch() { ... } // from try @ 0228a188 with catch @ 0228a218 */
                    /* catch() { ... } // from try @ 0228a1c4 with catch @ 0228a21c */
                    /* catch() { ... } // from try @ 0228a1d0 with catch @ 0228a220 */
  if ((bRam0000000004f9b973 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cadc00);
    bRam0000000004f9b973 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar5,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0,0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0e3 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cac7e0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  do {
    lVar7 = System_Delegate__Remove_4872510(lVar6,uVar5,0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_0216e7a0(lVar7,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar7,uVar9);
      }
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = FUN_0216aff4(*(long *)(lVar7 + 0xb8) + 0x18,lVar8,lVar6);
    bVar4 = lVar7 != lVar6;
    lVar6 = lVar7;
  } while (bVar4);
  return;
}

