/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$AddBtnEvent
void Dino_BusSand_App_UI_YachtRacingTrackRow__AddBtnEvent (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$AddBtnEvent
   void Dino_BusSand_App_UI_YachtRacingTrackRow__AddBtnEvent
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_YachtRacingTrackRow__AddBtnEvent_21f6354(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  uVar7 = param_1;
  if ((bRam0000000004f9bc36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1738);
    FUN_02132f7c(PTR_DAT_04cb1740);
    uVar7 = FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bc36 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x35) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_022f64f8;
      uVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x50),0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cb1738,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar10,uVar8,1,*(undefined8 *)PTR_DAT_04cad948);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
LAB_022f64f8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0);
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)PTR_DAT_04cb1740,0);
      puVar1 = PTR_DAT_04cb1660;
      uVar8 = *(undefined8 *)PTR_DAT_04cad948;
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
        plVar11 = (long *)(lVar4 + 0x18);
        *plVar11 = lVar9;
        thunk_FUN_02134474(plVar11,lVar9);
        *(undefined8 *)(lVar4 + 0x20) = uVar10;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),uVar10);
        puVar1 = PTR_DAT_04ca9ae8;
        if (*plVar11 != 0) {
          uVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                            (*plVar11,*(undefined8 *)PTR_DAT_04cb0eb8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
          if ((uVar5 & 1) == 0) {
            if (uVar7 == 0) goto LAB_022f5018;
          }
          else {
            if (*plVar11 == 0) goto LAB_022f5018;
            uVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
            if ((uVar7 & 1) != 0) {
              if ((*plVar11 == 0) ||
                 (plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                             (*plVar11,*(undefined8 *)PTR_DAT_04cacf98),
                 plVar6 == (long *)0x0)) goto LAB_022f5018;
              (**(code **)(*plVar6 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0))
              ;
            }
            if ((*plVar11 == 0) ||
               (uVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (*plVar11,*(undefined8 *)PTR_DAT_04cb1668), uVar7 == 0))
            goto LAB_022f5018;
            UnityEngine_UI_Selectable__set_transition_4693ba8(uVar7,0,0);
          }
          puVar3 = PTR_DAT_04cb1688;
          puVar2 = PTR_DAT_04caa8b8;
          if (*(long *)(uVar7 + 0x100) != 0) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                      (*(long *)(uVar7 + 0x100),0);
            uVar10 = *(undefined8 *)puVar2;
            lVar9 = *(long *)(uVar7 + 0x100);
            *(undefined4 *)(lVar4 + 0x10) = 0xbf800000;
            uVar10 = thunk_FUN_0216e89c(uVar10);
            UnityEngine_Events_UnityAction___ctor_43d86d4(uVar10,lVar4,*(undefined8 *)puVar3,0);
            if (lVar9 != 0) {
              UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar9,uVar10,0);
              uVar10 = *(undefined8 *)(uVar7 + 0xe0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
              if ((uVar5 & 1) == 0) {
                if (*plVar11 == 0) goto LAB_022f5018;
                plVar6 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                           (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
              }
              else {
                plVar6 = *(long **)(uVar7 + 0xe0);
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
              if ((uVar5 & 1) != 0) {
                if (plVar6 == (long *)0x0) goto LAB_022f5018;
                (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
              }
              if (*plVar11 != 0) {
                lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (*plVar11,*(undefined8 *)PTR_DAT_04cb1680);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar1);
                }
                uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*plVar11 == 0) goto LAB_022f5018;
                  lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                                    (*plVar11,*(undefined8 *)PTR_DAT_04cb1670);
                }
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar8;
                  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),uVar8);
                  return uVar7;
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
  }
  return uVar7;
}

