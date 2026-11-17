/* IL2CPP: Dino.BusSand.App.UI.UIManager$$ApplyScaler
void Dino_BusSand_App_UI_UIManager__ApplyScaler (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$ApplyScaler
   void Dino_BusSand_App_UI_UIManager__ApplyScaler (Dino_BusSand_App_UI_UIManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__ApplyScaler_21fde64(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fda4c with catch @ 022fde94
                        */
    bRam0000000004f9bc76 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x20) = 1;
    UnityEngine_UI_CanvasScaler__set_referenceResolution_4682f88(0x44870000,0x44f00000,lVar5,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x34) = 0;
      iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
      iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
      if (*(long *)(param_1 + 0x40) != 0) {
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        uVar7 = 0;
        if (0.5625 <= (float)iVar2 / (float)iVar3) {
          uVar7 = 0x3f800000;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x38) = uVar7;
        uVar7 = UnityEngine_Screen__get_width_436a6a0(0);
        *(undefined4 *)(param_1 + 0x50) = uVar7;
        uVar7 = UnityEngine_Screen__get_height_436a6c8(0);
        *(undefined4 *)(param_1 + 0x54) = uVar7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

