/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Init
void Dino_BusSand_App_UI_BattleRoyaleHallButton__Init (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Init
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__Init
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleHallButton__Init_218aca4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
                    /* try { // try from 0228acac to 0238ada3 has its CatchHandler @ 0228acac
                       catch() { ... } // from try @ 0228acac with catch @ 0228acac
                       catch() { ... } // from try @ 0228adb0 with catch @ 0228acac */
  if ((bRam0000000004f9b97c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadc70);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadc78);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cadc88);
    FUN_02132f7c(PTR_DAT_04cadc90);
    FUN_02132f7c(PTR_DAT_04cadc98);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b97c = 1;
  }
  lVar4 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 == 0) {
LAB_0228af9c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cadc80,0);
  plVar10 = (long *)(param_1 + 0x28);
  *plVar10 = lVar4;
  thunk_FUN_02134474(plVar10,lVar4);
  lVar4 = *plVar10;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
                    /* try { // try from 0228ada4 to 0238adaf has its CatchHandler @ 0228adf0 */
  uVar8 = 0;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 0228adb0 to 0238ae0b has its CatchHandler @ 0228acac */
    if (*plVar10 == 0) goto LAB_0228af9c;
    uVar8 = UnityEngine_Transform__Find_43d4bec(*plVar10,*(undefined8 *)PTR_DAT_04cadc88,0);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30));
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 0228ada4 with catch @ 0228adf0 */
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  uVar8 = 0;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 0228ae0c to 0238affb has its CatchHandler @ 0228ae0c
                       catch() { ... } // from try @ 0228ae0c with catch @ 0228ae0c
                       catch() { ... } // from try @ 0228b048 with catch @ 0228ae0c */
    if (*plVar10 == 0) goto LAB_0228af9c;
    uVar8 = UnityEngine_Transform__Find_43d4bec(*plVar10,*(undefined8 *)PTR_DAT_04cadc98,0);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38));
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  uVar8 = 0;
  if ((uVar5 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_0228af9c;
    uVar8 = UnityEngine_Transform__Find_43d4bec(*plVar10,*(undefined8 *)PTR_DAT_04cadc90,0);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40));
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  lVar4 = 0;
  if ((uVar5 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_0228af9c;
    lVar4 = UnityEngine_Transform__Find_43d4bec(*plVar10,*(undefined8 *)PTR_DAT_04cadc78,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  uVar8 = 0;
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) goto LAB_0228af9c;
    uVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar4,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar3 = PTR_DAT_04cadc70;
  puVar2 = PTR_DAT_04cad948;
  puVar1 = PTR_DAT_04caa458;
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  thunk_FUN_02134474();
  lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar3,0);
  puVar1 = PTR_DAT_04cb1660;
  uVar9 = *(undefined8 *)puVar2;
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
    plVar10 = (long *)(lVar6 + 0x18);
    *plVar10 = lVar4;
    thunk_FUN_02134474(plVar10,lVar4);
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar8);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar10 != 0) {
      lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar10,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar4 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar10 == 0) goto LAB_022f5018;
        uVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (*plVar10,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          if ((*plVar10 == 0) ||
             (plVar7 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar10,*(undefined8 *)PTR_DAT_04cacf98),
             plVar7 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar7 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
        }
        if ((*plVar10 == 0) ||
           (lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar10,*(undefined8 *)PTR_DAT_04cb1668), lVar4 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(lVar4,0,0);
      }
      puVar3 = PTR_DAT_04cb1688;
      puVar2 = PTR_DAT_04caa8b8;
      if (*(long *)(lVar4 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(lVar4 + 0x100),0);
        uVar8 = *(undefined8 *)puVar2;
        lVar11 = *(long *)(lVar4 + 0x100);
        *(undefined4 *)(lVar6 + 0x10) = 0xbf800000;
        uVar8 = thunk_FUN_0216e89c(uVar8);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar8,lVar6,*(undefined8 *)puVar3,0);
        if (lVar11 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar11,uVar8,0);
          uVar8 = *(undefined8 *)(lVar4 + 0xe0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar5 & 1) == 0) {
            if (*plVar10 == 0) goto LAB_022f5018;
            plVar7 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar10,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar7 = *(long **)(lVar4 + 0xe0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (plVar7 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar7 + 0x2c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x2d0));
          }
          if (*plVar10 != 0) {
            lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (*plVar10,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if (*plVar10 == 0) goto LAB_022f5018;
              lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (*plVar10,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x20) = uVar9;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar9);
              return lVar4;
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

