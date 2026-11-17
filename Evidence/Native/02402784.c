/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnCloseClick
void Dino_BusSand_App_UI_PlayerSettingPanel__OnCloseClick (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnCloseClick
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnCloseClick
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnCloseClick_2302784(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c4d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c4d8 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0xd0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lVar4 + 0x260) != '\0') {
        Dino_BusSand_App_UI_PlayerSettingPanel__CommitName_2302880
                  (uVar2,*(undefined8 *)(lVar4 + 0x210));
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    plVar3 = (long *)(param_1 + 0x38);
    lVar4 = *plVar3;
    *plVar3 = 0;
    thunk_FUN_02134474(plVar3,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02402878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
  return;
}

