/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnItemChanged
void Dino_BusSand_App_UI_PowerBuyPanel__OnItemChanged (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnItemChanged
   void Dino_BusSand_App_UI_PowerBuyPanel__OnItemChanged (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__OnItemChanged_22b133c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  if (param_2 - 0x3e9U < 2) {
    Dino_BusSand_App_UI_PowerBuyPanel__RefreshPanel_22b0490(param_1);
  }
  if ((bRam0000000004f9c2ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caf1a8);
    FUN_02132f7c(PTR_DAT_04cac748);
    bRam0000000004f9c2ce = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if ((*(char *)(param_1 + 0x2c) == '\0') && (*(char *)(param_1 + 0x44) == '\0')) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay_2272cc8(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(param_1 + 0x40) == -1) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar3 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
        iVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
        if (iVar3 < iVar4) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
          if ((uVar6 & 1) == 0) {
            return;
          }
        }
      }
      puVar1 = PTR_DAT_04caba50;
      if (*(char *)(param_1 + 0x45) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_04ca9ae8;
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar7 == 0) goto LAB_023b15f4;
          if (*(char *)(lVar7 + 0x39) == '\0') {
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            puVar2 = PTR_DAT_04cad1b0;
            uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
            if ((uVar6 & 1) != 0) {
              if (cRam0000000004f9b94d == '\0') {
                FUN_02132f7c(PTR_DAT_04cad1b0);
                cRam0000000004f9b94d = '\x01';
              }
              lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
              if (lVar7 == 0) {
LAB_023b15f4:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar6 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                (lVar7,*(undefined8 *)PTR_DAT_04cac748);
              if ((uVar6 & 1) != 0) {
                if (cRam0000000004f9b94d == '\0') {
                  FUN_02132f7c(PTR_DAT_04cad1b0);
                  cRam0000000004f9b94d = '\x01';
                }
                lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
                if (lVar7 == 0) goto LAB_023b15f4;
                Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                          (lVar7,*(undefined8 *)PTR_DAT_04caf1a8);
              }
            }
          }
        }
        plVar5 = (long *)(param_1 + 0x38);
        lVar7 = *plVar5;
        *plVar5 = 0;
        thunk_FUN_02134474(plVar5,0);
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        if (lVar7 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x023b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),1,*(undefined8 *)(lVar7 + 0x28));
        return;
      }
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
  }
  return;
}

