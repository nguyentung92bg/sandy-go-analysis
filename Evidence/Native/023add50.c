/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshDesc
void Dino_BusSand_App_UI_CommonGetPanel__RefreshDesc (Dino_BusSand_App_UI_CommonGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshDesc
   void Dino_BusSand_App_UI_CommonGetPanel__RefreshDesc (Dino_BusSand_App_UI_CommonGetPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonGetPanel__RefreshDesc_22add50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c2b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cb5f78);
    bRam0000000004f9c2b8 = 1;
  }
  puVar1 = PTR_DAT_04cb5f78;
  puVar2 = PTR_DAT_04cac7b8;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084
                      (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),0);
    uVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar1,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
    }
    Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar6,(uVar3 ^ 1) & 1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cac7b8;
      if ((bRam0000000004f9c2aa & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac7b8);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c2aa = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar4 = (long *)Dino_BusSand_App_UI_CommerceUi__Tmp_22abf88(uVar6);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023ac12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x518))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x520));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

