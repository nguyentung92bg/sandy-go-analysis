/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$IsItemVisible
bool Dino_BusSand_App_UI_StorePanel__IsItemVisible (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$IsItemVisible
   bool Dino_BusSand_App_UI_StorePanel__IsItemVisible (int32_t storeItemId, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_StorePanel__IsItemVisible_22b87b4(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c2ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caedf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2ef = 1;
  }
  puVar2 = PTR_DAT_04cad200;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cad270,0);
  iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
  if (iVar3 < 5) {
    if (iVar3 == 3) {
      return 1;
    }
    if (iVar3 != 4) {
      return 0;
    }
    lVar4 = **(long **)(*(long *)PTR_DAT_04caedf8 + 0xb8);
  }
  else {
    if (iVar3 != 7) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04caedf8 + 0xb8) + 8);
  }
  if (lVar4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x023b88d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28));
  return uVar5;
}

