/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$OnOpen
void Dino_BusSand_App_UI_SystemOpenPanel__OnOpen (Dino_BusSand_App_UI_SystemOpenPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f4f88) */
/* WARNING: Removing unreachable block (ram,0x022f4f90) */
/* WARNING: Removing unreachable block (ram,0x022f4fb0) */
/* WARNING: Removing unreachable block (ram,0x022f4fb8) */
/* WARNING: Removing unreachable block (ram,0x022f4fcc) */
/* WARNING: Removing unreachable block (ram,0x022f4fd4) */
/* WARNING: Removing unreachable block (ram,0x022f4fe8) */
/* WARNING: Removing unreachable block (ram,0x022f4fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$OnOpen
   void Dino_BusSand_App_UI_SystemOpenPanel__OnOpen (Dino_BusSand_App_UI_SystemOpenPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_SystemOpenPanel__OnOpen_21e6c3c
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar3 = PTR_DAT_04cb0ea0;
  if ((bRam0000000004f9bbd4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb0eb8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0ea0);
    FUN_02132f7c(PTR_DAT_04cb0ec0);
    FUN_02132f7c(PTR_DAT_04cb0ec8);
    FUN_02132f7c(PTR_DAT_04cb0ed0);
    FUN_02132f7c(PTR_DAT_04cb0ed8);
    FUN_02132f7c(PTR_DAT_04cb0ee0);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cae2b8);
    FUN_02132f7c(PTR_DAT_04cada38);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bbd4 = 1;
  }
  if (param_5 == (long *)0x0) {
LAB_022e6d54:
    param_5 = (long *)thunk_FUN_0216e89c();
    *(undefined1 *)((long)param_5 + 0x21) = 1;
    System_Object___ctor_4870e5c(param_5,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*param_5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_022e6d54;
  }
  puVar3 = PTR_DAT_04cae4e0;
  if (param_4 == 0) goto LAB_022e7378;
  plVar13 = (long *)(param_4 + 0x38);
  *plVar13 = (long)param_5;
  thunk_FUN_02134474(plVar13,param_5);
  lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (*plVar13 == 0) goto LAB_022e7378;
  uVar14 = *(undefined8 *)(*plVar13 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar7 & 1) == 0) {
LAB_022e71f8:
    bVar2 = false;
  }
  else {
    lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cb0ee0,0);
    if (lVar8 == 0) {
      lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cada38,0);
    }
    if (*plVar13 == 0) goto LAB_022e7378;
    uVar14 = *(undefined8 *)(*plVar13 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar14,lVar8,0,*(undefined8 *)PTR_DAT_04cad390);
    plVar15 = (long *)(param_4 + 0x40);
    *plVar15 = lVar8;
    thunk_FUN_02134474(plVar15,lVar8);
    if ((*(long *)(param_4 + 0x38) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x18), lVar8 == 0)) goto LAB_022e7378;
    lVar16 = *plVar15;
    uVar14 = UnityEngine_Object__get_name_43c71a4(lVar8,0);
    if (lVar16 == 0) goto LAB_022e7378;
    UnityEngine_Object__set_name_43c72ec(lVar16,uVar14,0);
    if (*plVar15 == 0) goto LAB_022e7378;
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(*plVar15,0);
    if ((((*plVar13 == 0) || (lVar16 = *(long *)(*plVar13 + 0x18), lVar16 == 0)) ||
        (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0), lVar16 == 0)) ||
       (UnityEngine_Transform__get_position_43d0e48(lVar16,0), lVar8 == 0)) goto LAB_022e7378;
    UnityEngine_Transform__set_position_43d0f1c(lVar8,0);
    if (*plVar15 == 0) goto LAB_022e7378;
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(*plVar15,0);
    if (((*plVar13 == 0) || (lVar16 = *(long *)(*plVar13 + 0x18), lVar16 == 0)) ||
       (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0), lVar16 == 0))
    goto LAB_022e7378;
    fVar17 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar16,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar4 = PTR_DAT_04caa208;
    pfVar10 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    if (_UNK_00e1fea0 <=
        (param_3 - pfVar10[2]) * (param_3 - pfVar10[2]) +
        (fVar17 - *pfVar10) * (fVar17 - *pfVar10) + (param_2 - pfVar10[1]) * (param_2 - pfVar10[1]))
    {
      if (((*plVar13 == 0) || (lVar16 = *(long *)(*plVar13 + 0x18), lVar16 == 0)) ||
         (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0), lVar16 == 0))
      goto LAB_022e7378;
      fVar17 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar16,0);
    }
    else {
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
        pfVar10 = *(float **)(*(long *)puVar4 + 0xb8);
      }
      fVar17 = pfVar10[3];
    }
    if (lVar8 == 0) goto LAB_022e7378;
                    /* try { // try from 022e6fe0 to 023e704f has its CatchHandler @ 022e6fe0
                       catch() { ... } // from try @ 022e6fe0 with catch @ 022e6fe0
                       catch() { ... } // from try @ 022e7258 with catch @ 022e6fe0
                       catch() { ... } // from try @ 022e72e4 with catch @ 022e6fe0 */
    UnityEngine_Transform__set_localScale_43d1be0(fVar17,lVar8,0);
    if (*plVar15 == 0) goto LAB_022e7378;
    UnityEngine_GameObject__SetActive_43c1408(*plVar15,1,0);
    if ((*plVar13 == 0) || (lVar8 = *(long *)(*plVar13 + 0x18), lVar8 == 0)) goto LAB_022e7378;
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    if (lVar8 == 0) goto LAB_022e7378;
    puVar11 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
    uVar19 = puVar11[1];
                    /* try { // try from 022e7050 to 023e7067 has its CatchHandler @ 022e7390 */
    UnityEngine_Transform__set_localScale_43d1be0(*puVar11,uVar19,puVar11[2],lVar8,0);
    lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cae2b8,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (((*plVar15 == 0) ||
          (lVar16 = UnityEngine_GameObject__get_transform_43c1048(*plVar15,0), lVar16 == 0)) ||
         (uVar18 = UnityEngine_Transform__get_position_43d0e48(lVar16,0), lVar8 == 0))
      goto LAB_022e7378;
                    /* try { // try from 022e70b8 to 023e70c3 has its CatchHandler @ 022e72f4 */
      UnityEngine_Transform__get_position_43d0e48(lVar8,0);
      UnityEngine_Transform__set_position_43d0f1c(uVar18,uVar19,lVar8,0);
    }
    if (*plVar15 == 0) goto LAB_022e7378;
                    /* try { // try from 022e70ec to 023e711b has its CatchHandler @ 022e7308 */
    uVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                       (*plVar15,*(undefined8 *)PTR_DAT_04cb0eb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    lVar8 = *plVar15;
    if ((uVar7 & 1) == 0) {
      if ((lVar8 == 0) ||
         (lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar8 == 0))
      goto LAB_022e7378;
      lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0ed8,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      if ((uVar7 & 1) == 0) goto LAB_022e71f8;
      if (lVar8 == 0) goto LAB_022e7378;
      lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
      uVar14 = *(undefined8 *)PTR_DAT_04caa458;
    }
    else {
      uVar14 = *(undefined8 *)PTR_DAT_04caa458;
    }
    uVar14 = thunk_FUN_0216e89c(uVar14);
    System_Action___ctor_47b5ed0(uVar14,param_4,*(undefined8 *)PTR_DAT_04cb0ec0,0);
    bVar2 = true;
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(lVar8,uVar14,1,*(undefined8 *)PTR_DAT_04cad948,0);
  }
                    /* try { // try from 022e71fc to 023e7257 has its CatchHandler @ 022e7318 */
  if (*plVar13 == 0) {
LAB_022e7378:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_UI_SystemOpenPanel__ApplyArrowMirror_21e737c
            (param_4,*(undefined1 *)(*plVar13 + 0x20));
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 022e72e0 to 023e72e3 has its CatchHandler @ 022e72e4 */
                    /* catch() { ... } // from try @ 022e72e0 with catch @ 022e72e4
                       try { // try from 022e72e4 to 023e73a3 has its CatchHandler @ 022e6fe0 */
                    /* catch() { ... } // from try @ 022e70b8 with catch @ 022e72f4 */
    return uVar7;
  }
  if (bVar2) {
    if (lVar6 == 0) goto LAB_022e7378;
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
    puVar3 = PTR_DAT_04cb0ed0;
    lVar16 = *(long *)PTR_DAT_04cb0ed0;
                    /* try { // try from 022e7258 to 023e72db has its CatchHandler @ 022e6fe0 */
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar16);
      lVar16 = *(long *)puVar3;
    }
    puVar12 = *(undefined8 **)(lVar16 + 0xb8);
    lVar6 = puVar12[1];
    if (lVar6 == 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar16);
        puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar14 = *puVar12;
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar6,uVar14,*(undefined8 *)PTR_DAT_04cb0ec8,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar13 = lVar6;
      thunk_FUN_02134474(plVar13,lVar6);
    }
  }
  else {
    if (lVar6 == 0) goto LAB_022e7378;
                    /* catch() { ... } // from try @ 022e70ec with catch @ 022e7308 */
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
                    /* catch() { ... } // from try @ 022e71fc with catch @ 022e7318 */
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar6,param_4,*(undefined8 *)PTR_DAT_04cb0ec0,0);
  }
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
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar16,0);
  if (lVar16 != 0) {
    plVar13 = (long *)(lVar16 + 0x18);
    *plVar13 = lVar8;
    thunk_FUN_02134474(plVar13,lVar8);
    *(long *)(lVar16 + 0x20) = lVar6;
    thunk_FUN_02134474((long *)(lVar16 + 0x20),lVar6);
    puVar3 = PTR_DAT_04ca9ae8;
    if (*plVar13 != 0) {
      uVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (*plVar13,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
      if ((uVar9 & 1) == 0) {
        if (uVar7 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar13 == 0) goto LAB_022f5018;
        uVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                           (*plVar13,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if ((*plVar13 == 0) ||
             (plVar15 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                          (*plVar13,*(undefined8 *)PTR_DAT_04cacf98),
             plVar15 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar15 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
        }
        if ((*plVar13 == 0) ||
           (uVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (*plVar13,*(undefined8 *)PTR_DAT_04cb1668), uVar7 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(uVar7,0,0);
      }
      puVar5 = PTR_DAT_04cb1688;
      puVar4 = PTR_DAT_04caa8b8;
      if (*(long *)(uVar7 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(uVar7 + 0x100),0);
        uVar14 = *(undefined8 *)puVar4;
        lVar6 = *(long *)(uVar7 + 0x100);
        *(undefined4 *)(lVar16 + 0x10) = 0xbf800000;
        uVar14 = thunk_FUN_0216e89c(uVar14);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar14,lVar16,*(undefined8 *)puVar5,0);
        if (lVar6 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar6,uVar14,0);
          uVar14 = *(undefined8 *)(uVar7 + 0xe0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
          if ((uVar9 & 1) == 0) {
            if (*plVar13 == 0) goto LAB_022f5018;
            plVar13 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                        (*plVar13,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar13 = *(long **)(uVar7 + 0xe0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (plVar13 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar13 + 0x2c8))(plVar13,1,*(undefined8 *)(*plVar13 + 0x2d0));
          }
          return uVar7;
        }
      }
    }
  }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

