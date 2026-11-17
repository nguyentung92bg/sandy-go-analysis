/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnClose
void Dino_BusSand_App_UI_ActivityContinuePanel__OnClose (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnClose
   void Dino_BusSand_App_UI_ActivityContinuePanel__OnClose
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinuePanel__OnClose_2186d10(undefined8 param_1)

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
  
  puVar3 = PTR_DAT_04cad918;
  puVar2 = PTR_DAT_04cac7e0;
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 02286d38 to 02386d43 has its CatchHandler @ 02286d74 */
  if ((bRam0000000004f9b956 & 1) == 0) {
                    /* try { // try from 02286d44 to 02386d8f has its CatchHandler @ 02286c3c */
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cad918);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b956 = 1;
  }
                    /* catch() { ... } // from try @ 02286d38 with catch @ 02286d74 */
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar5,param_1,*(undefined8 *)puVar3,0);
                    /* try { // try from 02286d90 to 02386e07 has its CatchHandler @ 02286d90
                       catch() { ... } // from try @ 02286d90 with catch @ 02286d90
                       catch() { ... } // from try @ 02286e1c with catch @ 02286d90 */
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

