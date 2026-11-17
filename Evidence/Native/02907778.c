/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Open<object>
bool Dino_BusSand_App_UI_PassportUi__Open_object_ (System_String_o* prefab, System_Action_o* onClose, const MethodInfo_2807778* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Open<object>
   bool Dino_BusSand_App_UI_PassportUi__Open_object_ (System_String_o* prefab, System_Action_o*
   onClose, const MethodInfo_2807778* method); */

uint Dino_BusSand_App_UI_PassportUi__Open_object__2807778
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0216b4cc(param_3);
    }
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar5,**(undefined8 **)(param_3 + 0x38));
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(param_1,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar5,param_1,2,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
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
        uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
        return (uVar2 ^ 0xffffffff) & 1;
      }
    }
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
  }
  return 0;
}

