/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Bind
UnityEngine_UI_Button_o* Dino_BusSand_App_UI_UIPanel__Bind (UnityEngine_GameObject_o* go, System_Action_o* onClick, bool scaleFeel, System_String_o* sfx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Bind
   UnityEngine_UI_Button_o* Dino_BusSand_App_UI_UIPanel__Bind (UnityEngine_GameObject_o* go,
   System_Action_o* onClick, bool scaleFeel, System_String_o* sfx, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_04cb1660;
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
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar9 = (long *)(lVar4 + 0x18);
    *plVar9 = param_1;
    thunk_FUN_02134474(plVar9,param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),param_2);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar9 != 0) {
      lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar9,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar5 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar9 == 0) goto LAB_022f5018;
        uVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (*plVar9,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if ((*plVar9 == 0) ||
             (plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar9,*(undefined8 *)PTR_DAT_04cacf98),
             plVar8 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar8 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        }
        if ((*plVar9 == 0) ||
           (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar9,*(undefined8 *)PTR_DAT_04cb1668), lVar5 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(lVar5,0,0);
      }
      puVar3 = PTR_DAT_04cb1688;
      puVar2 = PTR_DAT_04caa8b8;
      if (*(long *)(lVar5 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(lVar5 + 0x100),0);
        uVar7 = *(undefined8 *)puVar2;
        lVar10 = *(long *)(lVar5 + 0x100);
        *(undefined4 *)(lVar4 + 0x10) = 0xbf800000;
        uVar7 = thunk_FUN_0216e89c(uVar7);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar7,lVar4,*(undefined8 *)puVar3,0);
        if (lVar10 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar10,uVar7,0);
          uVar7 = *(undefined8 *)(lVar5 + 0xe0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar6 & 1) == 0) {
            if (*plVar9 == 0) goto LAB_022f5018;
            plVar8 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar9,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar8 = *(long **)(lVar5 + 0xe0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
          if ((uVar6 & 1) != 0) {
            if (plVar8 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
          }
          if ((param_3 & 1) == 0) {
            return lVar5;
          }
          if (*plVar9 != 0) {
            lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (*plVar9,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
            if ((uVar6 & 1) != 0) {
              if (*plVar9 == 0) goto LAB_022f5018;
              lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (*plVar9,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x20) = param_4;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),param_4);
              return lVar5;
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

