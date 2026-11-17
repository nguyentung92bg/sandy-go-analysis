/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Setup
void Dino_BusSand_App_UI_CommonNamePlateView__Setup (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Setup
   void Dino_BusSand_App_UI_CommonNamePlateView__Setup (Dino_BusSand_App_UI_CommonNamePlateView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c3a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6c10);
    FUN_02132f7c(PTR_DAT_04cb6c38);
    FUN_02132f7c(PTR_DAT_04cb6c40);
    bRam0000000004f9c3a3 = 1;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    lVar3 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar2,*(undefined8 *)PTR_DAT_04cb6c10,0);
    plVar6 = (long *)(param_1 + 0x20);
    *plVar6 = lVar3;
    thunk_FUN_02134474(plVar6,lVar3);
    puVar1 = PTR_DAT_04ca9ae8;
    lVar3 = *plVar6;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      lVar3 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar2,*(undefined8 *)PTR_DAT_04cb6c38,0)
      ;
    }
    else {
      if (*plVar6 == 0) goto LAB_023cffac;
      lVar3 = UnityEngine_Transform__Find_43d4bec(*plVar6,*(undefined8 *)PTR_DAT_04cb6c38,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    uVar2 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_023cffac;
      uVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    }
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    lVar5 = 0;
    if ((uVar4 & 1) != 0) {
      lVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar3,*(undefined8 *)PTR_DAT_04cb6c40,0)
      ;
    }
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = lVar5;
    thunk_FUN_02134474(plVar6);
    lVar3 = *plVar6;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    lVar3 = 0;
    if ((uVar4 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_023cffac;
      lVar3 = UnityEngine_Component__GetComponentInChildren_object__26f9b94
                        (*plVar6,1,*(undefined8 *)PTR_DAT_04cabe08);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) {
LAB_023cffac:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = 0x20c;
      if (*(char *)(lVar3 + 0x260) != '\0') {
        lVar5 = 0x27c;
      }
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar3 + lVar5);
    }
  }
  return;
}

