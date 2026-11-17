/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenOpen
bool Dino_BusSand_App_UI_PassportUi__OpenOpen (System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$OpenOpen
   bool Dino_BusSand_App_UI_PassportUi__OpenOpen (System_Action_o* onClose, const MethodInfo*
   method); */

uint Dino_BusSand_App_UI_PassportUi__OpenOpen_21db26c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb09e8;
  puVar1 = PTR_DAT_04cb09e0;
  if ((bRam0000000004f9bb7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb09e8);
    FUN_02132f7c(PTR_DAT_04cb09e0);
    bRam0000000004f9bb7b = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  lVar6 = *(long *)puVar2;
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    if (*(long *)(lVar6 + 0x38) == 0) {
      FUN_0216b4cc(lVar6);
    }
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar7,**(undefined8 **)(lVar6 + 0x38));
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar4,0);
      if ((uVar5 & 1) != 0) {
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar7,uVar4,2,param_1,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004fa8638 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
          bRam0000000004fa8638 = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
        return (uVar3 ^ 0xffffffff) & 1;
      }
    }
  }
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
  return 0;
}

