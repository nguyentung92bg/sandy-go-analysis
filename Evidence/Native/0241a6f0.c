/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnCloseBtn
void Dino_BusSand_App_UI_LevelEnterPanel__OnCloseBtn (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnCloseBtn
   void Dino_BusSand_App_UI_LevelEnterPanel__OnCloseBtn (Dino_BusSand_App_UI_LevelEnterPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel__OnCloseBtn_231a6f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000004f9c581 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cb8670);
    FUN_02132f7c(PTR_DAT_04cb8678);
    bRam0000000004f9c581 = 1;
  }
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  puVar1 = PTR_DAT_04caba50;
  if (*(int *)(param_1 + 0x38) != 1) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(**(long **)(lVar3 + 0xb8) + 0x38) == '\0') {
      return;
    }
  }
  puVar1 = PTR_DAT_04cb8678;
  lVar3 = *(long *)PTR_DAT_04cb8678;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cabb00;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cb8670,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  Dino_BusSand_App_UI_ScreenFade__Run_2289914(lVar6,&uStack_48,0);
  return;
}

