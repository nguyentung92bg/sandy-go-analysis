/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnClose
void Dino_BusSand_App_UI_PlayerSettingPanel__OnClose (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnClose
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnClose (Dino_BusSand_App_UI_PlayerSettingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnClose_23026cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04cb7be8;
  puVar2 = PTR_DAT_04cb4720;
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c4d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4720);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7be8);
    bRam0000000004f9c4d7 = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_Int32Enum____ctor_35ef240(uVar8,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02402754 to 0250294f has its CatchHandler @ 02402754
                       catch() { ... } // from try @ 02402754 with catch @ 02402754
                       catch() { ... } // from try @ 02402958 with catch @ 02402754
                       catch() { ... } // from try @ 024029a0 with catch @ 02402754
                       catch() { ... } // from try @ 024029c8 with catch @ 02402754
                       catch() { ... } // from try @ 024029f4 with catch @ 02402754 */
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4720,0);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0ba = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cb4720;
  lVar5 = **(long **)(lVar5 + 0xb8);
  do {
    lVar6 = System_Delegate__Remove_4872510(lVar5,uVar8,0);
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar2;
      lVar7 = thunk_FUN_0216e7a0(lVar6,uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,uVar9);
      }
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = FUN_0216aff4(*(undefined8 *)(lVar6 + 0xb8),lVar7,lVar5);
    bVar4 = lVar6 != lVar5;
    lVar5 = lVar6;
  } while (bVar4);
  return;
}

