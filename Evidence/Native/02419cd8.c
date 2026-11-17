/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnClose
void Dino_BusSand_App_UI_LevelEnterPanel__OnClose (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnClose
   void Dino_BusSand_App_UI_LevelEnterPanel__OnClose (Dino_BusSand_App_UI_LevelEnterPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel__OnClose_2319cd8(undefined8 param_1)

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
  
  puVar3 = PTR_DAT_04cb8538;
  puVar2 = PTR_DAT_04cac7e0;
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c57c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb8538);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c57c = 1;
  }
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar8,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0,0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0e3 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cac7e0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
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
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x18,lVar7,lVar5);
    bVar4 = lVar6 != lVar5;
    lVar5 = lVar6;
  } while (bVar4);
  return;
}

