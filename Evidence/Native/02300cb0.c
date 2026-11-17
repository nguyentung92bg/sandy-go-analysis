/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Btn
UnityEngine_UI_Button_o* Dino_BusSand_App_UI_UIPanel__Btn (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, System_Action_o* onClick, bool scaleFeel, System_String_o* sfx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Btn
   UnityEngine_UI_Button_o* Dino_BusSand_App_UI_UIPanel__Btn (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_String_o* name, System_Action_o* onClick, bool scaleFeel, System_String_o* sfx, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1bc8);
    FUN_02132f7c(PTR_DAT_04cb1bd0);
    bRam0000000004f9bc9a = 1;
  }
  lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar1 = PTR_DAT_04ca9af8;
  if ((uVar7 & 1) != 0) {
                    /* try { // try from 02300d68 to 02400d6b has its CatchHandler @ 02300d78 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02300d68 with catch @ 02300d78
                        */
    uVar8 = System_String__Concat_46d30e8
                      (*(undefined8 *)PTR_DAT_04cb1bd0,*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)PTR_DAT_04cb1bc8,param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar8,0);
    return 0;
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
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
    *plVar9 = lVar6;
    thunk_FUN_02134474(plVar9,lVar6);
    *(undefined8 *)(lVar4 + 0x20) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),param_3);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar9 != 0) {
      lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar9,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (lVar6 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar9 == 0) goto LAB_022f5018;
        uVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (*plVar9,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if ((*plVar9 == 0) ||
             (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar9,*(undefined8 *)PTR_DAT_04cacf98),
             plVar5 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar5 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        }
        if ((*plVar9 == 0) ||
           (lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar9,*(undefined8 *)PTR_DAT_04cb1668), lVar6 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(lVar6,0,0);
      }
      puVar3 = PTR_DAT_04cb1688;
      puVar2 = PTR_DAT_04caa8b8;
      if (*(long *)(lVar6 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(lVar6 + 0x100),0);
        uVar8 = *(undefined8 *)puVar2;
        lVar10 = *(long *)(lVar6 + 0x100);
        *(undefined4 *)(lVar4 + 0x10) = 0xbf800000;
        uVar8 = thunk_FUN_0216e89c(uVar8);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar8,lVar4,*(undefined8 *)puVar3,0);
        if (lVar10 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar10,uVar8,0);
          uVar8 = *(undefined8 *)(lVar6 + 0xe0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar7 & 1) == 0) {
            if (*plVar9 == 0) goto LAB_022f5018;
            plVar5 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar9,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar5 = *(long **)(lVar6 + 0xe0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar5 + 0x2c8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x2d0));
          }
          if ((param_4 & 1) == 0) {
            return lVar6;
          }
          if (*plVar9 != 0) {
            lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (*plVar9,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
            if ((uVar7 & 1) != 0) {
              if (*plVar9 == 0) goto LAB_022f5018;
              lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (*plVar9,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x20) = param_5;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),param_5);
              return lVar6;
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

