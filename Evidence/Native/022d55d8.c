/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Rebind
void Dino_BusSand_App_UI_PassportPanel__Rebind (UnityEngine_Transform_o* t, System_Action_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Rebind
   void Dino_BusSand_App_UI_PassportPanel__Rebind (UnityEngine_Transform_o* t, System_Action_o* a,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_PassportPanel__Rebind_21d55d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb55 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  puVar1 = PTR_DAT_04cb1660;
  uVar10 = *(undefined8 *)PTR_DAT_04cad948;
  if ((bRam0000000004f9bc9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1668);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1670);
    FUN_02132f7c(PTR_DAT_04cb0eb8);
    FUN_02132f7c(PTR_DAT_04cb1678);
    FUN_02132f7c(PTR_DAT_04cb1680);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1688);
    FUN_02132f7c(PTR_DAT_04cb1660);
    FUN_02132f7c(PTR_DAT_04caa8b8);
    bRam0000000004f9bc9d = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x18);
    *plVar11 = lVar5;
    thunk_FUN_02134474(plVar11,lVar5);
    *(undefined8 *)(lVar6 + 0x20) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_2);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar11 != 0) {
      uVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar11,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
      if ((uVar7 & 1) == 0) {
        if (uVar4 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar11 == 0) goto LAB_022f5018;
        uVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if ((*plVar11 == 0) ||
             (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar11,*(undefined8 *)PTR_DAT_04cacf98),
             plVar9 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar9 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
        }
        if ((*plVar11 == 0) ||
           (uVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar11,*(undefined8 *)PTR_DAT_04cb1668), uVar4 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(uVar4,0,0);
      }
      puVar3 = PTR_DAT_04cb1688;
      puVar2 = PTR_DAT_04caa8b8;
      if (*(long *)(uVar4 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(uVar4 + 0x100),0);
        uVar8 = *(undefined8 *)puVar2;
        lVar5 = *(long *)(uVar4 + 0x100);
        *(undefined4 *)(lVar6 + 0x10) = 0xbf800000;
        uVar8 = thunk_FUN_0216e89c(uVar8);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar8,lVar6,*(undefined8 *)puVar3,0);
        if (lVar5 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar5,uVar8,0);
          uVar8 = *(undefined8 *)(uVar4 + 0xe0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar7 & 1) == 0) {
            if (*plVar11 == 0) goto LAB_022f5018;
            plVar9 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar9 = *(long **)(uVar4 + 0xe0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar9 + 0x2c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
          }
          if (*plVar11 != 0) {
            lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (*plVar11,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
            if ((uVar7 & 1) != 0) {
              if (*plVar11 == 0) goto LAB_022f5018;
              lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (*plVar11,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x20) = uVar10;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar10);
              return uVar4;
            }
          }
        }
      }
    }
  }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

