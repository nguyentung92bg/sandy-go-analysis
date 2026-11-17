/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyalePanel__OnOpen (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f4f88) */
/* WARNING: Removing unreachable block (ram,0x022f4f90) */
/* WARNING: Removing unreachable block (ram,0x022f4fb0) */
/* WARNING: Removing unreachable block (ram,0x022f4fb8) */
/* WARNING: Removing unreachable block (ram,0x022f4fcc) */
/* WARNING: Removing unreachable block (ram,0x022f4fd4) */
/* WARNING: Removing unreachable block (ram,0x022f4fe8) */
/* WARNING: Removing unreachable block (ram,0x022f4fec) */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyalePanel__OnOpen (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_BattleRoyalePanel__OnOpen_218cb28(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  
  puVar2 = PTR_DAT_04cadd48;
  if ((bRam0000000004f9b989 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadd50);
    FUN_02132f7c(PTR_DAT_04cadd58);
    FUN_02132f7c(PTR_DAT_04cadd60);
    FUN_02132f7c(PTR_DAT_04cadd68);
    FUN_02132f7c(PTR_DAT_04cadd70);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadd48);
    FUN_02132f7c(PTR_DAT_04cadd78);
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04cadd88);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b989 = 1;
  }
  puVar3 = PTR_DAT_04caa458;
  if (param_2 == (long *)0x0) {
LAB_0228cc38:
    plVar12 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(plVar12,0);
    if (plVar12 == (long *)0x0) goto LAB_0228ceec;
    if (param_2 == (long *)0x0) {
      param_2 = (long *)0x0;
      plVar12[3] = 0;
    }
    else {
      lVar18 = *(long *)puVar3;
      plVar17 = param_2;
      if (*param_2 != lVar18) {
        plVar17 = (long *)0x0;
      }
      plVar12[3] = (long)plVar17;
      if (*param_2 != lVar18) {
        param_2 = (long *)0x0;
      }
    }
    thunk_FUN_02134474(plVar12 + 3,param_2);
    param_2 = plVar12;
    plVar12 = (long *)PTR_DAT_04cadd70;
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (plVar12 = (long *)PTR_DAT_04cadd70,
       *(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_0228cc38;
  }
  PTR_DAT_04cadd70 = (undefined *)plVar12;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x38) = (long)param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
    uVar13 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    thunk_FUN_02134474();
    uVar19 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(undefined4 *)(param_1 + 0x48) = uVar19;
    uVar13 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    lVar18 = *plVar12;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar18);
      lVar18 = *plVar12;
    }
    Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(uVar13,**(undefined8 **)(lVar18 + 0xb8),0)
    ;
    Dino_BusSand_App_UI_BattleRoyalePanel__Refresh_218cef8(param_1);
    puVar11 = PTR_DAT_04cadd88;
    puVar10 = PTR_DAT_04cadd80;
    puVar9 = PTR_DAT_04cadd78;
    puVar8 = PTR_DAT_04cadd68;
    puVar7 = PTR_DAT_04cadd58;
    puVar6 = PTR_DAT_04cadd50;
    puVar5 = PTR_DAT_04cad948;
    puVar4 = PTR_DAT_04cad460;
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) != 0) {
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadd80,0,0);
      }
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar8,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar10,uVar13,1,*(undefined8 *)puVar5,0);
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar6,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar4,uVar13,1,*(undefined8 *)puVar5,0);
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar7,0);
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)puVar11,uVar13,0,*(undefined8 *)puVar5,0);
      lVar18 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar9,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
      if ((uVar14 & 1) == 0) {
        return uVar14;
      }
      if (lVar18 != 0) {
        lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
        uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)PTR_DAT_04cadd60,0);
        puVar2 = PTR_DAT_04cb1660;
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
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Object___ctor_4870e5c(lVar15,0);
        if (lVar15 != 0) {
          plVar12 = (long *)(lVar15 + 0x18);
          *plVar12 = lVar18;
          thunk_FUN_02134474(plVar12,lVar18);
          *(undefined8 *)(lVar15 + 0x20) = uVar13;
          thunk_FUN_02134474((undefined8 *)(lVar15 + 0x20),uVar13);
          puVar2 = PTR_DAT_04ca9ae8;
          if (*plVar12 != 0) {
            uVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar12,*(undefined8 *)PTR_DAT_04cb0eb8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar16 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
            if ((uVar16 & 1) == 0) {
              if (uVar14 == 0) goto LAB_022f5018;
            }
            else {
              if (*plVar12 == 0) goto LAB_022f5018;
              uVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                 (*plVar12,*(undefined8 *)PTR_DAT_04cb1678);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar14 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
              if ((uVar14 & 1) != 0) {
                if ((*plVar12 == 0) ||
                   (plVar17 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                (*plVar12,*(undefined8 *)PTR_DAT_04cacf98),
                   plVar17 == (long *)0x0)) goto LAB_022f5018;
                (**(code **)(*plVar17 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0,plVar17,
                           *(undefined8 *)(*plVar17 + 0x2b0));
              }
              if ((*plVar12 == 0) ||
                 (uVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                                     (*plVar12,*(undefined8 *)PTR_DAT_04cb1668), uVar14 == 0))
              goto LAB_022f5018;
              UnityEngine_UI_Selectable__set_transition_4693ba8(uVar14,0,0);
            }
            puVar4 = PTR_DAT_04cb1688;
            puVar3 = PTR_DAT_04caa8b8;
            if (*(long *)(uVar14 + 0x100) != 0) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                        (*(long *)(uVar14 + 0x100),0);
              uVar13 = *(undefined8 *)puVar3;
              lVar18 = *(long *)(uVar14 + 0x100);
              *(undefined4 *)(lVar15 + 0x10) = 0xbf800000;
              uVar13 = thunk_FUN_0216e89c(uVar13);
              UnityEngine_Events_UnityAction___ctor_43d86d4(uVar13,lVar15,*(undefined8 *)puVar4,0);
              if (lVar18 != 0) {
                UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar18,uVar13,0);
                uVar13 = *(undefined8 *)(uVar14 + 0xe0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar12 == 0) goto LAB_022f5018;
                  plVar12 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                              (*plVar12,*(undefined8 *)PTR_DAT_04cb1678);
                }
                else {
                  plVar12 = *(long **)(uVar14 + 0xe0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar16 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
                if ((uVar16 & 1) != 0) {
                  if (plVar12 == (long *)0x0) goto LAB_022f5018;
                  (**(code **)(*plVar12 + 0x2c8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x2d0));
                }
                return uVar14;
              }
            }
          }
        }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_0228ceec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

