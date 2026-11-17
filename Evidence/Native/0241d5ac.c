/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$Leave
void Dino_BusSand_App_UI_PausePanel__Leave (Dino_BusSand_App_UI_PausePanel_o* __this, bool reset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$Leave
   void Dino_BusSand_App_UI_PausePanel__Leave (Dino_BusSand_App_UI_PausePanel_o* __this, bool reset,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PausePanel__Leave_231d5ac(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte abStack_24 [4];
  
  puVar1 = PTR_DAT_04caba50;
                    /* try { // try from 0241d5b0 to 0251d5c7 has its CatchHandler @ 0241d61c */
                    /* try { // try from 0241d5c8 to 0251d60b has its CatchHandler @ 0241d4e8 */
  if ((bRam0000000004f9c593 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9c593 = 1;
  }
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0241d60c to 0251d61b has its CatchHandler @ 0241d61c */
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* catch() { ... } // from try @ 0241d5b0 with catch @ 0241d61c
                       catch() { ... } // from try @ 0241d60c with catch @ 0241d61c */
                    /* try { // try from 0241d620 to 0251d623 has its CatchHandler @ 0241d62c */
    cRam0000000004f9b88f = '\x01';
  }
                    /* try { // try from 0241d624 to 0251d62f has its CatchHandler @ 0241d4e8 */
  lVar5 = *(long *)puVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0241d620 with catch @ 0241d62c
                        */
  if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 0241d630 to 0251d693 has its CatchHandler @ 0241d630
                       catch() { ... } // from try @ 0241d630 with catch @ 0241d630
                       catch() { ... } // from try @ 0241d75c with catch @ 0241d630
                       catch() { ... } // from try @ 0241d7ac with catch @ 0241d630
                       catch() { ... } // from try @ 0241d808 with catch @ 0241d630 */
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b872 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,param_2 & 1,0);
    FUN_02132f7c(PTR_DAT_04cac808);
    FUN_02132f7c(PTR_DAT_04cac810);
    FUN_02132f7c(PTR_DAT_04cac818);
    bRam0000000004f9b872 = 1;
  }
  if (*(long *)(lVar5 + 0x28) != 0) {
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(lVar5 + 0x28),*(undefined8 *)PTR_DAT_04cac808);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(lVar5 + 0x20);
      if (lVar3 == 0) goto LAB_02268f3c;
      if (*(int *)(lVar3 + 0x20) == 2) {
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(lVar3,1,0);
        lVar3 = *(long *)(lVar5 + 0x28);
        abStack_24[0] = param_2 & 1;
        uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),abStack_24);
        if (lVar3 == 0) goto LAB_02268f3c;
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar3,*(undefined8 *)PTR_DAT_04cac818,2,uVar4,
                           *(undefined8 *)PTR_DAT_04cac810);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) goto LAB_02268f3c;
          Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                    (*(long *)(lVar5 + 0x20),0,0);
        }
      }
    }
    return;
  }
LAB_02268f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

