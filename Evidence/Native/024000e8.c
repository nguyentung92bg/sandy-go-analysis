/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide.<>c__DisplayClass13_0$$<RunGuide>b__0
void Dino_BusSand_App_UI_PlayerSettingGuide___c__DisplayClass13_0___RunGuide_b__0 (Dino_BusSand_App_UI_PlayerSettingGuide___c__DisplayClass13_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide.<>c__DisplayClass13_0$$<RunGuide>b__0
   void Dino_BusSand_App_UI_PlayerSettingGuide___c__DisplayClass13_0___RunGuide_b__0
   (Dino_BusSand_App_UI_PlayerSettingGuide___c__DisplayClass13_0_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_PlayerSettingGuide___c__DisplayClass13_0___RunGuide_b__0_23000e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9c4d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7b78);
    FUN_02132f7c(PTR_DAT_04cb7b70);
    FUN_02132f7c(PTR_DAT_04cb7bb8);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c4d3 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cb7b70), lVar3 != 0)) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 0x11) = 0;
    puVar2 = PTR_DAT_04cb7bb8;
    puVar1 = PTR_DAT_04cabaf8;
    if (lVar4 != 0) {
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar4,*(undefined8 *)PTR_DAT_04cb7b78)
      ;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Save_226c548(0);
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar3,0);
      puVar1 = PTR_DAT_04cb7ab8;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 1;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((bRam0000000004f9c4d4 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cb7bc0);
          FUN_02132f7c(PTR_DAT_04cb7bc8);
          FUN_02132f7c(PTR_DAT_04cb7bd0);
          bRam0000000004f9c4d4 = 1;
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        puVar2 = PTR_DAT_04cad1b0;
        uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar3 == 0) {
            return 0;
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          uVar6 = 0;
joined_r0x024003c0:
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
            ;
          }
          return uVar6;
        }
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar4 != 0) {
          uVar6 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                            (lVar4,*(undefined8 *)PTR_DAT_04cb7bc0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            return uVar6;
          }
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar4 != 0) {
            uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                              (lVar4,*(undefined8 *)PTR_DAT_04cb7bd0,2,lVar3,
                               *(undefined8 *)PTR_DAT_04cb7bc8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
            if (lVar3 == 0) {
              return uVar6;
            }
            if ((uVar5 & 1) == 0) {
              return uVar6;
            }
            lVar3 = *(long *)(lVar3 + 0x10);
            goto joined_r0x024003c0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

