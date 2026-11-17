/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$BeginNameEdit
void Dino_BusSand_App_UI_PlayerSettingPanel__BeginNameEdit (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$BeginNameEdit
   void Dino_BusSand_App_UI_PlayerSettingPanel__BeginNameEdit
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__BeginNameEdit_2304a88(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c4eb = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xd0),0), lVar3 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
         lVar3 == 0)) goto LAB_02404bf4;
      UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
    }
    if ((*(long *)(param_1 + 0xd0) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xd0),0),
       lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
      lVar3 = *(long *)(param_1 + 0xd0);
      if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
      if (lVar3 != 0) {
        TMPro_TMP_InputField__set_text_42bf4d0(lVar3,uVar5,0);
        plVar4 = *(long **)(param_1 + 0xd0);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
          puVar1 = PTR_DAT_04ca9ae8;
          plVar4 = *(long **)(param_1 + 0xd0);
          if (plVar4 != (long *)0x0) {
            if ((bRam0000000004fa4370 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9ae8,0);
              bRam0000000004fa4370 = 1;
            }
            lVar3 = plVar4[0x25];
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
            if ((uVar2 & 1) != 0) {
              return;
            }
            if (plVar4[0x25] == 0) goto LAB_043caf24;
            uVar5 = *(undefined8 *)(plVar4[0x25] + 0xf8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
            if ((((uVar2 & 1) == 0) &&
                (uVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0)),
                (uVar2 & 1) != 0)) &&
               (uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0)),
               (uVar2 & 1) != 0)) {
              if ((((char)plVar4[0x4c] != '\0') && (plVar4[0x20] != 0)) &&
                 (uVar2 = UnityEngine_TouchScreenKeyboard__get_active_43ce29c(plVar4[0x20],0),
                 (uVar2 & 1) == 0)) {
                if (plVar4[0x20] == 0) {
LAB_043caf24:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                UnityEngine_TouchScreenKeyboard__set_active_43ce324(plVar4[0x20],1,0);
                if (plVar4[0x20] == 0) goto LAB_043caf24;
                UnityEngine_TouchScreenKeyboard__set_text_43ce094(plVar4[0x20],plVar4[0x42],0);
              }
              *(undefined1 *)((long)plVar4 + 0x261) = 1;
            }
            return;
          }
        }
      }
    }
  }
LAB_02404bf4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

