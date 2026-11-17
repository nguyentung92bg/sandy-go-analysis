/* IL2CPP: Dino.BusSand.App.UI.PassportBuySucPanel$$OnOpen
void Dino_BusSand_App_UI_PassportBuySucPanel__OnOpen (Dino_BusSand_App_UI_PassportBuySucPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportBuySucPanel$$OnOpen
   void Dino_BusSand_App_UI_PassportBuySucPanel__OnOpen (Dino_BusSand_App_UI_PassportBuySucPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportBuySucPanel__OnOpen_21cdb50(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if ((bRam0000000004f9bb29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb0290);
    FUN_02132f7c(PTR_DAT_04caef68);
    FUN_02132f7c(PTR_DAT_04caec98);
    FUN_02132f7c(PTR_DAT_04cb0298);
    FUN_02132f7c(PTR_DAT_04cb02a0);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04caf208);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caecb8);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9bb29 = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9d18;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdcc8 with catch @ 022cdc24
                       catch(type#1 @ 00000000) { ... } // from try @ 022cdd04 with catch @ 022cdc24
                        */
    lVar13 = *(long *)PTR_DAT_04caa458;
    plVar15 = param_2;
    if (*param_2 != lVar13) {
      plVar15 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar15;
    if (*param_2 != lVar13) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  lVar14 = *(long *)puVar2;
  lVar13 = *(long *)(lVar14 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar14);
    lVar13 = *(long *)(lVar14 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
                    /* try { // try from 022cdc8c to 023cdc9b has its CatchHandler @ 022cdd58 */
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb0298;
  puVar3 = PTR_DAT_04caecb8;
  lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                    /* try { // try from 022cdcb8 to 023cdcc7 has its CatchHandler @ 022cdd18 */
    lVar13 = FUN_0216b470();
  }
                    /* try { // try from 022cdcc8 to 023cdcf3 has its CatchHandler @ 022cdc24 */
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,**(undefined8 **)(lVar13 + 0xb8),0)
  ;
  lVar14 = *(long *)puVar2;
  lVar13 = *(long *)(lVar14 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar14);
    lVar13 = *(long *)(lVar14 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
                    /* try { // try from 022cdcf4 to 023cdd03 has its CatchHandler @ 022cdd3c */
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
                    /* try { // try from 022cdd04 to 023cdd5b has its CatchHandler @ 022cdc24 */
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb02a0;
  puVar3 = PTR_DAT_04caef68;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdcb8 with catch @ 022cdd18
                        */
  lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdcf4 with catch @ 022cdd3c
                        */
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,**(undefined8 **)(lVar13 + 0xb8),0)
  ;
  lVar14 = *(long *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cdc8c with catch @ 022cdd58
                        */
  lVar13 = *(long *)(lVar14 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar14);
    lVar13 = *(long *)(lVar14 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar7 = PTR_DAT_04cb0290;
  puVar6 = PTR_DAT_04caf208;
  puVar5 = PTR_DAT_04caec98;
  puVar4 = PTR_DAT_04caec20;
  puVar3 = PTR_DAT_04cad948;
  puVar2 = PTR_DAT_04cad460;
  lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar4,**(undefined8 **)(lVar13 + 0xb8),0)
  ;
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar7,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar6,uVar8,1,*(undefined8 *)puVar3,0);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar7,0);
  puVar1 = PTR_DAT_04ca9ae8;
  uVar11 = *(undefined8 *)puVar2;
  uVar12 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9bc9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1bc8);
    FUN_02132f7c(PTR_DAT_04cb1bd0);
    bRam0000000004f9bc9a = 1;
  }
  lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar11);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  puVar2 = PTR_DAT_04ca9af8;
  if ((uVar10 & 1) != 0) {
    uVar8 = System_String__Concat_46d30e8
                      (*(undefined8 *)PTR_DAT_04cb1bd0,*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)PTR_DAT_04cb1bc8,uVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar8,0);
    return 0;
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
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
  lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar14,0);
  if (lVar14 != 0) {
    plVar15 = (long *)(lVar14 + 0x18);
    *plVar15 = lVar13;
    thunk_FUN_02134474(plVar15,lVar13);
    *(undefined8 *)(lVar14 + 0x20) = uVar8;
    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20),uVar8);
    puVar2 = PTR_DAT_04ca9ae8;
    if (*plVar15 != 0) {
      lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (*plVar15,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
      if ((uVar10 & 1) == 0) {
        if (lVar13 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar15 == 0) goto LAB_022f5018;
        uVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (*plVar15,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar10 & 1) != 0) {
          if ((*plVar15 == 0) ||
             (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar15,*(undefined8 *)PTR_DAT_04cacf98),
             plVar9 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar9 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
        }
        if ((*plVar15 == 0) ||
           (lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (*plVar15,*(undefined8 *)PTR_DAT_04cb1668), lVar13 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(lVar13,0,0);
      }
      puVar3 = PTR_DAT_04cb1688;
      puVar1 = PTR_DAT_04caa8b8;
      if (*(long *)(lVar13 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(lVar13 + 0x100),0);
        uVar8 = *(undefined8 *)puVar1;
        lVar16 = *(long *)(lVar13 + 0x100);
        *(undefined4 *)(lVar14 + 0x10) = 0xbf800000;
        uVar8 = thunk_FUN_0216e89c(uVar8);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar8,lVar14,*(undefined8 *)puVar3,0);
        if (lVar16 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar16,uVar8,0);
          uVar8 = *(undefined8 *)(lVar13 + 0xe0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar10 & 1) == 0) {
            if (*plVar15 == 0) goto LAB_022f5018;
            plVar9 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar15,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar9 = *(long **)(lVar13 + 0xe0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
          if ((uVar10 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar9 + 0x2c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
          }
          if (*plVar15 != 0) {
            lVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar15,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
            if ((uVar10 & 1) != 0) {
              if (*plVar15 == 0) goto LAB_022f5018;
              lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                                 (*plVar15,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar14 != 0) {
              *(undefined8 *)(lVar14 + 0x20) = uVar12;
              thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20),uVar12);
              return lVar13;
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

