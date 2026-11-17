/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnItem
void Dino_BusSand_App_UI_PassportContinuePanel__OnItem (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnItem
   void Dino_BusSand_App_UI_PassportContinuePanel__OnItem
   (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, int32_t id, const MethodInfo* method); */

long * Dino_BusSand_App_UI_PassportContinuePanel__OnItem_21cf35c(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  plVar3 = param_1;
  if ((bRam0000000004f9bb2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    plVar3 = (long *)FUN_02132f7c(PTR_DAT_04cb0328);
    bRam0000000004f9bb2f = 1;
  }
  puVar1 = PTR_DAT_04cac7b8;
  if (param_2 != 0x3e9) {
    return plVar3;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb0328;
  uVar4 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(uVar4,0);
  puVar1 = PTR_DAT_04ca9ae8;
  uVar7 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bc97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08,uVar7,uVar4,0);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc97 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  plVar3 = (long *)0x0;
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
LAB_02300a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar3 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar5,*(undefined8 *)PTR_DAT_04cad790);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar3,0,0);
    if ((uVar6 & 1) != 0) {
      plVar3 = (long *)UnityEngine_Component__GetComponentInChildren_object__26f9b94
                                 (lVar5,1,*(undefined8 *)PTR_DAT_04cabe08);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
    if ((uVar6 & 1) != 0) {
      if (plVar3 == (long *)0x0) goto LAB_02300a6c;
      (**(code **)(*plVar3 + 0x518))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x520));
    }
  }
  return plVar3;
}

