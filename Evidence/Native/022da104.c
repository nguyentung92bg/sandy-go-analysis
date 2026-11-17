/* IL2CPP: Dino.BusSand.App.UI.PassportSystemOpenPanel$$OnOpen
void Dino_BusSand_App_UI_PassportSystemOpenPanel__OnOpen (Dino_BusSand_App_UI_PassportSystemOpenPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f4f88) */
/* WARNING: Removing unreachable block (ram,0x022f4f90) */
/* WARNING: Removing unreachable block (ram,0x022f4fb0) */
/* WARNING: Removing unreachable block (ram,0x022f4fb8) */
/* WARNING: Removing unreachable block (ram,0x022f4fcc) */
/* WARNING: Removing unreachable block (ram,0x022f4fd4) */
/* WARNING: Removing unreachable block (ram,0x022f4fe8) */
/* WARNING: Removing unreachable block (ram,0x022f4fec) */
/* IL2CPP: Dino.BusSand.App.UI.PassportSystemOpenPanel$$OnOpen
   void Dino_BusSand_App_UI_PassportSystemOpenPanel__OnOpen
   (Dino_BusSand_App_UI_PassportSystemOpenPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_PassportSystemOpenPanel__OnOpen_21da104(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar3 = PTR_DAT_04cb0920;
  if ((bRam0000000004f9bb75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 022da148 to 023da14b has its CatchHandler @ 022da33c */
    FUN_02132f7c(PTR_DAT_04cb0928);
                    /* try { // try from 022da154 to 023da15f has its CatchHandler @ 022da35c */
    FUN_02132f7c(PTR_DAT_04cb0930);
                    /* try { // try from 022da160 to 023da17f has its CatchHandler @ 022da34c */
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0920);
                    /* try { // try from 022da180 to 023da18b has its CatchHandler @ 022d9ec0 */
    FUN_02132f7c(PTR_DAT_04cb0938);
                    /* try { // try from 022da18c to 023da19f has its CatchHandler @ 022da348 */
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cae2b8);
    FUN_02132f7c(PTR_DAT_04cb0940);
    FUN_02132f7c(PTR_DAT_04cb0948);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb75 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022da208:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* try { // try from 022da1f8 to 023da20b has its CatchHandler @ 022da324 */
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3))
    goto LAB_022da208;
  }
  puVar4 = PTR_DAT_04cb0940;
  puVar3 = PTR_DAT_04cae2b8;
  if (param_1 == 0) goto LAB_022da66c;
                    /* try { // try from 022da224 to 023da227 has its CatchHandler @ 022da38c */
  plVar14 = (long *)(param_1 + 0x38);
  *plVar14 = (long)param_2;
                    /* try { // try from 022da238 to 023da24b has its CatchHandler @ 022da30c */
  thunk_FUN_02134474(plVar14,param_2);
  uVar16 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  uVar13 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar16;
  uVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar13,0);
  plVar6 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022da274 to 023da287 has its CatchHandler @ 022da2f4 */
  if (*plVar14 == 0) goto LAB_022da66c;
  uVar15 = *(undefined8 *)(*plVar14 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar7 & 1) == 0) {
LAB_022da5bc:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if ((plVar6 == (long *)0x0) ||
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(plVar6,0), lVar8 == 0)) {
LAB_022da66c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
    }
  }
  else {
                    /* try { // try from 022da2b0 to 023da2c3 has its CatchHandler @ 022da2dc */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022da2c4 to 023da38f has its CatchHandler @ 022d9ec0 */
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_022da5bc;
                    /* catch() { ... } // from try @ 022da2b0 with catch @ 022da2dc */
    if ((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x10), lVar8 == 0)) goto LAB_022da66c;
    uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                    /* catch() { ... } // from try @ 022da274 with catch @ 022da2f4 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
                    /* catch() { ... } // from try @ 022da238 with catch @ 022da30c */
    lVar8 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar15,uVar13,1,*(undefined8 *)PTR_DAT_04cad390);
                    /* catch() { ... } // from try @ 022da1f8 with catch @ 022da324 */
    if ((*plVar14 == 0) || (lVar9 = *(long *)(*plVar14 + 0x10), lVar9 == 0)) goto LAB_022da66c;
    uVar13 = UnityEngine_Object__get_name_43c71a4(lVar9,0);
                    /* catch() { ... } // from try @ 022da148 with catch @ 022da33c */
                    /* catch() { ... } // from try @ 022da18c with catch @ 022da348 */
    uVar13 = System_String__Concat_46c82e0(uVar13,*(undefined8 *)PTR_DAT_04cb0948,0);
                    /* catch() { ... } // from try @ 022da160 with catch @ 022da34c */
    if (lVar8 == 0) goto LAB_022da66c;
                    /* catch() { ... } // from try @ 022da154 with catch @ 022da35c */
    UnityEngine_Object__set_name_43c72ec(lVar8,uVar13,0);
    lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    if (((*plVar14 == 0) || (lVar10 = *(long *)(*plVar14 + 0x10), lVar10 == 0)) ||
       (UnityEngine_Transform__get_position_43d0e48(lVar10,0), lVar9 == 0)) goto LAB_022da66c;
                    /* catch() { ... } // from try @ 022da06c with catch @ 022da38c
                       catch() { ... } // from try @ 022da224 with catch @ 022da38c */
    UnityEngine_Transform__set_position_43d0f1c(lVar9,0);
                    /* try { // try from 022da3a0 to 023da547 has its CatchHandler @ 022da3a0
                       catch() { ... } // from try @ 022da3a0 with catch @ 022da3a0
                       catch() { ... } // from try @ 022da65c with catch @ 022da3a0
                       catch() { ... } // from try @ 022da79c with catch @ 022da3a0 */
    lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar9 == 0) goto LAB_022da66c;
    lVar10 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar18 = *(float *)(lVar10 + 0x10);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar10 + 0xc),fVar18,*(undefined4 *)(lVar10 + 0x14),lVar9,0);
    lVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                      (lVar8,1,*(undefined8 *)PTR_DAT_04cb0928);
    if (lVar9 == 0) goto LAB_022da66c;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        if (uVar1 <= (uint)lVar10) goto LAB_022da670;
        lVar11 = *(long *)(lVar9 + 0x20 + lVar10 * 8);
        if (lVar11 == 0) goto LAB_022da66c;
        UnityEngine_Behaviour__set_enabled_43bc50c(lVar11,0,0);
        uVar1 = *(uint *)(lVar9 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar1);
    }
    lVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                      (lVar8,1,*(undefined8 *)PTR_DAT_04cb0930);
    if (lVar8 == 0) goto LAB_022da66c;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
LAB_022da670:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar12 = *(long **)(lVar8 + 0x20 + lVar9 * 8);
        if (plVar12 == (long *)0x0) goto LAB_022da66c;
        (**(code **)(*plVar12 + 0x2c8))(plVar12,0,*(undefined8 *)(*plVar12 + 0x2d0));
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x10), lVar8 == 0)) ||
         (UnityEngine_Transform__get_position_43d0e48(lVar8,0), plVar6 == (long *)0x0))
      goto LAB_022da66c;
      UnityEngine_Transform__set_position_43d0f1c(plVar6,0);
      plVar12 = plVar6;
      if (*plVar6 != *(long *)PTR_DAT_04cabdb0) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar12 == (long *)0x0) goto LAB_022da66c;
                    /* try { // try from 022da548 to 023da583 has its CatchHandler @ 022da864 */
        fVar17 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar12,0);
        if (*plVar14 == 0) goto LAB_022da66c;
        fVar19 = 230.0;
        if (*(char *)(*plVar14 + 0x20) != '\0') {
          fVar19 = -230.0;
        }
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (fVar17 + fVar19,fVar18 + 0.0,plVar6,0);
      }
      if (*plVar14 == 0) goto LAB_022da66c;
      uVar16 = 0x3f800000;
      if (*(char *)(*plVar14 + 0x20) != '\0') {
        uVar16 = 0xbf800000;
      }
      UnityEngine_Transform__set_localScale_43d1be0(uVar16,0x3f800000,0x3f800000,plVar6,0);
    }
  }
  puVar3 = PTR_DAT_04cb0938;
  puVar4 = PTR_DAT_04cae4e0;
                    /* try { // try from 022da624 to 023da627 has its CatchHandler @ 022da814 */
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022da630 to 023da63b has its CatchHandler @ 022da834 */
  System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022da63c to 023da65b has its CatchHandler @ 022da824 */
  uVar15 = *(undefined8 *)puVar4;
                    /* try { // try from 022da65c to 023da667 has its CatchHandler @ 022da3a0 */
                    /* try { // try from 022da668 to 023da67b has its CatchHandler @ 022da820 */
  if ((bRam0000000004f9bc9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1bc8);
    FUN_02132f7c(PTR_DAT_04cb1bd0);
    bRam0000000004f9bc9a = 1;
  }
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar15);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar3 = PTR_DAT_04ca9af8;
  if ((uVar7 & 1) != 0) {
    uVar13 = System_String__Concat_46d30e8
                       (*(undefined8 *)PTR_DAT_04cb1bd0,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)PTR_DAT_04cb1bc8,uVar15,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar13,0);
    return 0;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
  puVar3 = PTR_DAT_04cb1660;
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
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar9,0);
  if (lVar9 != 0) {
    plVar6 = (long *)(lVar9 + 0x18);
    *plVar6 = lVar8;
    thunk_FUN_02134474(plVar6,lVar8);
    *(undefined8 *)(lVar9 + 0x20) = uVar13;
    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),uVar13);
    puVar3 = PTR_DAT_04ca9ae8;
    if (*plVar6 != 0) {
      lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar6,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
      if ((uVar7 & 1) == 0) {
        if (lVar8 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar6 == 0) goto LAB_022f5018;
        uVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                           (*plVar6,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          if ((*plVar6 == 0) ||
             (plVar14 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                          (*plVar6,*(undefined8 *)PTR_DAT_04cacf98),
             plVar14 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar14 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
        }
        if ((*plVar6 == 0) ||
           (lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar6,*(undefined8 *)PTR_DAT_04cb1668), lVar8 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(lVar8,0,0);
      }
      puVar5 = PTR_DAT_04cb1688;
      puVar4 = PTR_DAT_04caa8b8;
      if (*(long *)(lVar8 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(lVar8 + 0x100),0);
        uVar13 = *(undefined8 *)puVar4;
        lVar10 = *(long *)(lVar8 + 0x100);
        *(undefined4 *)(lVar9 + 0x10) = 0xbf800000;
        uVar13 = thunk_FUN_0216e89c(uVar13);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar13,lVar9,*(undefined8 *)puVar5,0);
        if (lVar10 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar10,uVar13,0);
          uVar13 = *(undefined8 *)(lVar8 + 0xe0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
          if ((uVar7 & 1) == 0) {
            if (*plVar6 == 0) goto LAB_022f5018;
            plVar6 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                       (*plVar6,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar6 = *(long **)(lVar8 + 0xe0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
          }
          return lVar8;
        }
      }
    }
  }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

