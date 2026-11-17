/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$SetupPlayButton
void Dino_BusSand_App_UI_MainHudPanel__SetupPlayButton (Dino_BusSand_App_UI_MainHudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$SetupPlayButton
   void Dino_BusSand_App_UI_MainHudPanel__SetupPlayButton (Dino_BusSand_App_UI_MainHudPanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_MainHudPanel__SetupPlayButton_22f9fb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  
  puVar5 = PTR_DAT_04cb79c8;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cb79d0);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb0e28);
    FUN_02132f7c(PTR_DAT_04cb79c8);
    FUN_02132f7c(PTR_DAT_04cb79d8);
    FUN_02132f7c(PTR_DAT_04cafe50);
    FUN_02132f7c(PTR_DAT_04cb79e0);
    FUN_02132f7c(PTR_DAT_04cb0e68);
    FUN_02132f7c(PTR_DAT_04cb79e8);
    FUN_02132f7c(PTR_DAT_04cb79f0);
    FUN_02132f7c(PTR_DAT_04cb79f8);
    FUN_02132f7c(PTR_DAT_04cb7a00);
    FUN_02132f7c(PTR_DAT_04cb7598);
    FUN_02132f7c(PTR_DAT_04cb7a08);
    FUN_02132f7c(PTR_DAT_04cb7a10);
    FUN_02132f7c(PTR_DAT_04cb7a18);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c4b0 = 1;
  }
  lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  uVar19 = 0;
  if ((uVar14 & 1) != 0) {
    if (lVar13 == 0) goto LAB_023fa778;
    uVar19 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar13,*(undefined8 *)PTR_DAT_04cada30);
  }
  puVar8 = PTR_DAT_04cb7a10;
  puVar7 = PTR_DAT_04cb79f8;
  puVar6 = PTR_DAT_04cb79e8;
  puVar4 = PTR_DAT_04cb79d8;
  puVar5 = PTR_DAT_04cae520;
  if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_MainHudPanel__SampleLast_22fcfdc(uVar19,*(undefined8 *)puVar7);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar6,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar8,0,0);
  lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar14 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  if ((uVar14 & 1) != 0) {
    return uVar14;
  }
  if ((lVar13 == 0) ||
     (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar15 == 0))
  goto LAB_023fa778;
                    /* try { // try from 023fa26c to 024fa3bf has its CatchHandler @ 023fa26c
                       catch() { ... } // from try @ 023fa26c with catch @ 023fa26c
                       catch() { ... } // from try @ 023fa6f4 with catch @ 023fa26c
                       catch() { ... } // from try @ 023fab04 with catch @ 023fa26c
                       catch() { ... } // from try @ 023fac24 with catch @ 023fa26c */
  UnityEngine_GameObject__SetActive_43c1408(lVar15,1,0);
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  puVar4 = PTR_DAT_04caa208;
  lVar15 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
  UnityEngine_Transform__set_localScale_43d1be0
            (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
             *(undefined4 *)(lVar15 + 0x14),lVar13,0);
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cacb18);
  }
  uVar19 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar9,0);
  iVar10 = Dino_BusSand_App_Levels_LevelDatabase__TypeOf_229adf4(uVar19,0);
  puVar2 = (undefined8 *)PTR_DAT_04cb79f0;
  if (iVar10 != 2) {
    puVar2 = (undefined8 *)PTR_DAT_04cb7598;
  }
  puVar1 = (undefined8 *)PTR_DAT_04cb7a18;
  if (iVar10 != 1) {
    puVar1 = puVar2;
  }
  uVar19 = *puVar1;
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar16 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar19,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar14 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023fa408 to 024fa40f has its CatchHandler @ 023fabdc */
    lVar13 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar16,lVar13,0,*(undefined8 *)PTR_DAT_04cad390);
                    /* try { // try from 023fa420 to 024fa427 has its CatchHandler @ 023fabe4 */
    plVar18 = (long *)(param_1 + 0x40);
    *plVar18 = lVar13;
    thunk_FUN_02134474(plVar18,lVar13);
    if (*plVar18 == 0) {
LAB_023fa778:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec(*plVar18,uVar19,0);
    if (*plVar18 == 0) goto LAB_023fa778;
                    /* try { // try from 023fa450 to 024fa453 has its CatchHandler @ 023fabe8 */
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(*plVar18,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    if (lVar13 == 0) goto LAB_023fa778;
                    /* try { // try from 023fa47c to 024fa4af has its CatchHandler @ 023fabc4 */
    puVar17 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
    UnityEngine_Transform__set_localPosition_43cfda8(*puVar17,puVar17[1],puVar17[2],lVar13,0);
    if (*plVar18 == 0) goto LAB_023fa778;
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(*plVar18,0);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
                    /* try { // try from 023fa4c4 to 024fa4cb has its CatchHandler @ 023fab94 */
      cRam0000000004f9b88b = '\x01';
    }
    if (lVar13 == 0) goto LAB_023fa778;
                    /* try { // try from 023fa4e4 to 024fa4eb has its CatchHandler @ 023fab60 */
    puVar17 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
    UnityEngine_Transform__set_localRotation_43d156c
              (*puVar17,puVar17[1],puVar17[2],puVar17[3],lVar13,0);
    if (*plVar18 == 0) goto LAB_023fa778;
                    /* try { // try from 023fa500 to 024fa513 has its CatchHandler @ 023fab84 */
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(*plVar18,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar13 == 0) goto LAB_023fa778;
                    /* try { // try from 023fa534 to 024fa53b has its CatchHandler @ 023fab80 */
    lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),lVar13,0);
                    /* try { // try from 023fa54c to 024fa557 has its CatchHandler @ 023fab54 */
    if ((*plVar18 == 0) ||
       (lVar13 = UnityEngine_GameObject__get_transform_43c1048(*plVar18,0), lVar13 == 0))
    goto LAB_023fa778;
                    /* try { // try from 023fa568 to 024fa56f has its CatchHandler @ 023fab50 */
    uVar19 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb7a00,0);
    puVar3 = PTR_DAT_04ca9d18;
    lVar21 = *(long *)PTR_DAT_04ca9d18;
                    /* try { // try from 023fa580 to 024fa587 has its CatchHandler @ 023fab34 */
    lVar15 = *(long *)(lVar21 + 0x38);
    if (lVar15 == 0) {
      FUN_0216b4cc(lVar21);
      lVar15 = *(long *)(lVar21 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                    /* try { // try from 023fa5a4 to 024fa5ab has its CatchHandler @ 023fab20 */
      lVar15 = FUN_0216b470();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar15 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_0216b470();
    }
    puVar4 = PTR_DAT_04cab550;
    uVar16 = **(undefined8 **)(lVar15 + 0xb8);
                    /* try { // try from 023fa5e4 to 024fa5eb has its CatchHandler @ 023fab04 */
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                    /* try { // try from 023fa5ec to 024fa60b has its CatchHandler @ 023fab1c */
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cafe50,uVar16,0);
    lVar15 = *(long *)puVar5;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar15);
    }
                    /* try { // try from 023fa628 to 024fa653 has its CatchHandler @ 023fab44 */
    Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar19,uVar16);
    uVar19 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb7a08,0);
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
    if ((uVar14 & 1) != 0) {
      lVar13 = *(long *)puVar3;
      puVar2 = (undefined8 *)PTR_DAT_04cb0e28;
                    /* try { // try from 023fa670 to 024fa677 has its CatchHandler @ 023fab30 */
      if (iVar10 != 2) {
        puVar2 = (undefined8 *)PTR_DAT_04cb0e68;
      }
      lVar15 = *(long *)(lVar13 + 0x38);
      uVar16 = *puVar2;
      if (lVar15 == 0) {
        FUN_0216b4cc(lVar13);
        lVar15 = *(long *)(lVar13 + 0x38);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0216b470();
      }
                    /* try { // try from 023fa6a4 to 024fa6af has its CatchHandler @ 023fab08 */
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                    /* try { // try from 023fa6b8 to 024fa6cb has its CatchHandler @ 023fab2c */
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0216b470();
      }
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
                    /* try { // try from 023fa6e0 to 024fa6f3 has its CatchHandler @ 023fabf4 */
      uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(uVar16,uVar20,0);
      lVar13 = *(long *)puVar5;
                    /* try { // try from 023fa6f4 to 024fa713 has its CatchHandler @ 023fa26c */
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar13);
      }
      Dino_BusSand_App_UI_MainHudPanel__SetTexts_22fbba8(uVar19,uVar16);
    }
                    /* try { // try from 023fa714 to 024fa71b has its CatchHandler @ 023fabbc */
    lVar13 = *(long *)(param_1 + 0x40);
                    /* try { // try from 023fa720 to 024fa73b has its CatchHandler @ 023fabf4 */
    uVar19 = *(undefined8 *)PTR_DAT_04caa458;
  }
  else {
    uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb79e0,uVar19,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
                    /* try { // try from 023fa3c0 to 024fa3eb has its CatchHandler @ 023fabf4 */
    UnityEngine_Debug__LogWarning_4357a30(uVar19,0);
    lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
    uVar19 = *(undefined8 *)PTR_DAT_04caa458;
  }
  uVar19 = thunk_FUN_0216e89c(uVar19);
  System_Action___ctor_47b5ed0(uVar19,param_1,*(undefined8 *)PTR_DAT_04cb79d0,0);
  puVar3 = PTR_DAT_04cb1660;
                    /* try { // try from 023fa758 to 024fa75b has its CatchHandler @ 023fabb8 */
                    /* try { // try from 023fa75c to 024fa773 has its CatchHandler @ 023fabf0 */
  uVar16 = *(undefined8 *)PTR_DAT_04cad948;
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
  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar15,0);
  if (lVar15 != 0) {
    plVar18 = (long *)(lVar15 + 0x18);
    *plVar18 = lVar13;
    thunk_FUN_02134474(plVar18,lVar13);
    *(undefined8 *)(lVar15 + 0x20) = uVar19;
    thunk_FUN_02134474((undefined8 *)(lVar15 + 0x20),uVar19);
    puVar3 = PTR_DAT_04ca9ae8;
    if (*plVar18 != 0) {
      uVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (*plVar18,*(undefined8 *)PTR_DAT_04cb0eb8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
      if ((uVar11 & 1) == 0) {
        if (uVar14 == 0) goto LAB_022f5018;
      }
      else {
        if (*plVar18 == 0) goto LAB_022f5018;
        uVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc
                           (*plVar18,*(undefined8 *)PTR_DAT_04cb1678);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar14 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
        if ((uVar14 & 1) != 0) {
          if ((*plVar18 == 0) ||
             (plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                          (*plVar18,*(undefined8 *)PTR_DAT_04cacf98),
             plVar12 == (long *)0x0)) goto LAB_022f5018;
          (**(code **)(*plVar12 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
        }
        if ((*plVar18 == 0) ||
           (uVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (*plVar18,*(undefined8 *)PTR_DAT_04cb1668), uVar14 == 0))
        goto LAB_022f5018;
        UnityEngine_UI_Selectable__set_transition_4693ba8(uVar14,0,0);
      }
      puVar4 = PTR_DAT_04cb1688;
      puVar5 = PTR_DAT_04caa8b8;
      if (*(long *)(uVar14 + 0x100) != 0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c(*(long *)(uVar14 + 0x100),0);
        uVar19 = *(undefined8 *)puVar5;
        lVar13 = *(long *)(uVar14 + 0x100);
        *(undefined4 *)(lVar15 + 0x10) = 0xbf800000;
        uVar19 = thunk_FUN_0216e89c(uVar19);
        UnityEngine_Events_UnityAction___ctor_43d86d4(uVar19,lVar15,*(undefined8 *)puVar4,0);
        if (lVar13 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar13,uVar19,0);
          uVar19 = *(undefined8 *)(uVar14 + 0xe0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
          if ((uVar11 & 1) == 0) {
            if (*plVar18 == 0) goto LAB_022f5018;
            plVar12 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                        (*plVar18,*(undefined8 *)PTR_DAT_04cb1678);
          }
          else {
            plVar12 = *(long **)(uVar14 + 0xe0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
          if ((uVar11 & 1) != 0) {
            if (plVar12 == (long *)0x0) goto LAB_022f5018;
            (**(code **)(*plVar12 + 0x2c8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x2d0));
          }
          if (*plVar18 != 0) {
            lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar18,*(undefined8 *)PTR_DAT_04cb1680);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
            if ((uVar11 & 1) != 0) {
              if (*plVar18 == 0) goto LAB_022f5018;
              lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                                 (*plVar18,*(undefined8 *)PTR_DAT_04cb1670);
            }
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x20) = uVar16;
              thunk_FUN_02134474((undefined8 *)(lVar13 + 0x20),uVar16);
              return uVar14;
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

