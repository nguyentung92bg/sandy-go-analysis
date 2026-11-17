/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnItem
void Dino_BusSand_App_UI_ActivityContinuePanel__OnItem (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnItem
   void Dino_BusSand_App_UI_ActivityContinuePanel__OnItem
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinuePanel__OnItem_2186db4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 != 0x3e9) {
    return;
  }
  if ((bRam0000000004f9b960 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cada10);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    bRam0000000004f9b960 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    uVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad9d0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    lVar5 = 0;
    if ((uVar3 & 1) != 0) {
      lVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar2,*(undefined8 *)PTR_DAT_04cada10,0)
      ;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    plVar4 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) goto LAB_02286f80;
      plVar4 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar5,*(undefined8 *)PTR_DAT_04cad790);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
    }
    uVar2 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(uVar2,0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02286f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x518))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x520));
      return;
    }
  }
LAB_02286f80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

