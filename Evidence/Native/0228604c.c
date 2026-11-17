/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$BindCommon
void Dino_BusSand_App_UI_ActivityContinueUi__BindCommon (Dino_BusSand_App_UI_UIPanel_o* p, System_Action_o* onBuy, System_Action_o* onAd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$BindCommon
   void Dino_BusSand_App_UI_ActivityContinueUi__BindCommon (Dino_BusSand_App_UI_UIPanel_o* p,
   System_Action_o* onBuy, System_Action_o* onAd, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinueUi__BindCommon_218604c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04cac440;
                    /* try { // try from 02286080 to 0238608b has its CatchHandler @ 022860ac */
  if ((bRam0000000004f9b95e & 1) == 0) {
                    /* try { // try from 0228608c to 023860d7 has its CatchHandler @ 02286044 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* catch() { ... } // from try @ 02286080 with catch @ 022860ac */
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cad950);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad958);
    FUN_02132f7c(PTR_DAT_04cad960);
    FUN_02132f7c(PTR_DAT_04cad968);
    FUN_02132f7c(PTR_DAT_04cad970);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cad980);
    FUN_02132f7c(PTR_DAT_04cad988);
    FUN_02132f7c(PTR_DAT_04cad990);
    FUN_02132f7c(PTR_DAT_04cad998);
    FUN_02132f7c(PTR_DAT_04cad9a0);
    FUN_02132f7c(PTR_DAT_04cad9a8);
    FUN_02132f7c(PTR_DAT_04cad9b0);
    FUN_02132f7c(PTR_DAT_04cad9b8);
    FUN_02132f7c(PTR_DAT_04cad9c0);
    FUN_02132f7c(PTR_DAT_04cad9c8);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    FUN_02132f7c(PTR_DAT_04cad9d8);
    FUN_02132f7c(PTR_DAT_04cad9e0);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04cad9f0);
    FUN_02132f7c(PTR_DAT_04cad9f8);
    FUN_02132f7c(PTR_DAT_04cada00);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cada08);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9b95e = 1;
  }
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
  uStack_68 = CONCAT44(uVar8,(int)uStack_68);
  Dino_BusSand_App_UI_ActivityContinueUi__RefreshCoins_2186dc4(param_1);
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 == 0) goto LAB_02286d0c;
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad9d0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_02286d0c;
    uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
    puVar4 = PTR_DAT_04cad960;
    lVar10 = *(long *)PTR_DAT_04cad960;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar10);
      lVar10 = *(long *)puVar4;
    }
    puVar17 = *(undefined8 **)(lVar10 + 0xb8);
    lVar19 = puVar17[1];
    if (lVar19 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
        puVar17 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar20 = *puVar17;
      lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar19,uVar20,*(undefined8 *)PTR_DAT_04cad958,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar13 = lVar19;
      thunk_FUN_02134474(plVar13,lVar19);
    }
                    /* catch() { ... } // from try @ 02286464 with catch @ 02286360 */
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar12,lVar19,1,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  puVar4 = PTR_DAT_04cad9e8;
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad9a8,0);
  uVar12 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar19 = Dino_BusSand_App_UI_ActivityContinueUi__FindDirect_2187820
                     (uVar12,*(undefined8 *)puVar4,lVar10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar10 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar14 == 0))
    goto LAB_02286d0c;
    UnityEngine_GameObject__SetActive_43c1408(lVar14,1,0);
  }
                    /* try { // try from 022863f0 to 023863fb has its CatchHandler @ 022864a4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
  if ((uVar11 & 1) != 0) {
    if (lVar19 == 0) goto LAB_02286d0c;
    lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar19,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02286438 to 02386443 has its CatchHandler @ 02286490 */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    if (lVar14 == 0) goto LAB_02286d0c;
                    /* try { // try from 02286458 to 02386463 has its CatchHandler @ 02286488 */
    UnityEngine_GameObject__SetActive_43c1408(lVar14,uVar9 & 1,0);
  }
                    /* try { // try from 02286464 to 023864b3 has its CatchHandler @ 02286360 */
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad968,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02286458 with catch @ 02286488 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* catch() { ... } // from try @ 02286438 with catch @ 02286490 */
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
  if ((uVar11 & 1) != 0) {
                    /* catch() { ... } // from try @ 022863f0 with catch @ 022864a4 */
    if ((lVar14 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar14 == 0))
    goto LAB_02286d0c;
    UnityEngine_GameObject__SetActive_43c1408(lVar14,0,0);
  }
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad9c8,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar14 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar14 == 0))
    goto LAB_02286d0c;
                    /* catch() { ... } // from try @ 02286574 with catch @ 02286520 */
    UnityEngine_GameObject__SetActive_43c1408(lVar14,1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  lVar14 = lVar19;
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_02286d0c;
    lVar14 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)puVar4,0);
  }
                    /* try { // try from 0228656c to 02386573 has its CatchHandler @ 022865c0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02286574 to 023865d3 has its CatchHandler @ 02286520 */
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  lVar18 = 0;
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_02286d0c;
    lVar18 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cad9a0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 0228656c with catch @ 022865c0 */
  uVar8 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar8);
  uVar12 = System_Int32__ToString_482d750(&uStack_68,0);
                    /* try { // try from 022865e0 to 023865e3 has its CatchHandler @ 022865ec */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022865e0 with catch @ 022865ec
                        */
                    /* catch() { ... } // from try @ 02286634 with catch @ 022865f0 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar4 = PTR_DAT_04cab550;
  puVar2 = PTR_DAT_04ca9d18;
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
  if ((uVar11 & 1) != 0) {
                    /* try { // try from 02286628 to 02386633 has its CatchHandler @ 022866d8 */
    uVar20 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar14,*(undefined8 *)PTR_DAT_04cad9b8,0)
    ;
                    /* try { // try from 02286634 to 023866f7 has its CatchHandler @ 022865f0 */
    Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar20,uVar12);
    uVar20 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar14,*(undefined8 *)PTR_DAT_04cad9e0,0)
    ;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    lVar10 = *(long *)puVar2;
    puVar17 = (undefined8 *)PTR_DAT_04cad9d8;
    if ((uVar11 & 1) == 0) {
      puVar17 = (undefined8 *)PTR_DAT_04cad988;
    }
    lVar15 = *(long *)(lVar10 + 0x38);
    uVar21 = *puVar17;
    if (lVar15 == 0) {
      FUN_0216b4cc(lVar10);
      lVar15 = *(long *)(lVar10 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_0216b470();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 02286628 with catch @ 022866d8 */
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    uVar22 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar21 = Dino_BusSand_App_Lang__Get_215f9c0(uVar21,uVar22,0);
    Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar20,uVar21);
    if (lVar14 == 0) goto LAB_02286d0c;
    uVar20 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar20,param_2,1,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,lVar14,0);
    if ((uVar11 & 1) != 0) {
      uVar20 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                         (lVar19,*(undefined8 *)PTR_DAT_04cad9b8,0);
      Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar20,uVar12);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04caa038;
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cac740;
    uVar9 = Dino_BusSand_App_Ads__RewardedAvailable_2176af8(*(undefined8 *)PTR_DAT_04cac740,0);
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
    }
    Dino_BusSand_App_Meta_GameTracking__AdOffer_22159b0(*(undefined8 *)puVar5,0);
    if (lVar18 == 0) goto LAB_02286d0c;
    lVar10 = UnityEngine_Transform__Find_43d4bec(lVar18,*(undefined8 *)PTR_DAT_04cad980,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 == 0))
      goto LAB_02286d0c;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,uVar9 & 1,0);
    }
    lVar10 = UnityEngine_Transform__Find_43d4bec(lVar18,*(undefined8 *)PTR_DAT_04cad990,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 == 0))
      goto LAB_02286d0c;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,(uVar9 ^ 0xffffffff) & 1,0);
    }
    lVar10 = FUN_02133068(*(undefined8 *)puVar3,2);
    if (lVar10 == 0) goto LAB_02286d0c;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_02286d08;
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_04cad9f0;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20));
    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_02286d08;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04cad998;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x28));
    puVar5 = PTR_DAT_04cad9b0;
    uVar9 = *(uint *)(lVar10 + 0x18);
    uStack_68 = uStack_68 & 0xffffffff00000000;
    if (0 < (int)uVar9) {
      uVar16 = 0;
      do {
        if (uVar9 <= uVar16) goto LAB_02286d08;
        uVar12 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                           (lVar18,*(undefined8 *)(lVar10 + (long)(int)uVar16 * 8 + 0x20),0);
        lVar14 = *(long *)puVar2;
        lVar19 = *(long *)(lVar14 + 0x38);
        if (lVar19 == 0) {
          FUN_0216b4cc(lVar14);
          lVar19 = *(long *)(lVar14 + 0x38);
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_0216b470();
        }
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_0216b470();
        }
        uVar20 = **(undefined8 **)(lVar19 + 0xb8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uVar20 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar5,uVar20,0);
        Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar12,uVar20);
        uVar9 = *(uint *)(lVar10 + 0x18);
        uVar16 = (int)uStack_68 + 1;
        uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
      } while ((int)uVar16 < (int)uVar9);
    }
    uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar12,param_3,1,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  lVar10 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                     (param_1,1,*(undefined8 *)PTR_DAT_04cad950);
  puVar7 = PTR_DAT_04cad9f8;
  puVar6 = PTR_DAT_04cad978;
  puVar5 = PTR_DAT_04cad790;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar9) {
      uVar16 = 0;
      do {
        if (uVar9 <= uVar16) goto LAB_02286d08;
        lVar19 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_02286d0c;
        uVar12 = UnityEngine_Object__get_name_43c71a4(lVar19,0);
        uVar11 = System_String__op_Equality_46d1108(uVar12,*(undefined8 *)puVar7,0);
        if ((uVar11 & 1) != 0) {
          plVar13 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                      (lVar19,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
          if ((uVar11 & 1) != 0) {
            uVar12 = System_Int32__ToString_482d750((long)&uStack_68 + 4,0);
            uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar12,0);
            if (plVar13 == (long *)0x0) goto LAB_02286d0c;
            (**(code **)(*plVar13 + 0x518))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x520));
          }
        }
        uVar9 = *(uint *)(lVar10 + 0x18);
        uVar16 = (int)uStack_68 + 1;
                    /* try { // try from 02286b70 to 02386be3 has its CatchHandler @ 02286b70
                       catch() { ... } // from try @ 02286b70 with catch @ 02286b70
                       catch() { ... } // from try @ 02286bf0 with catch @ 02286b70 */
        uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
      } while ((int)uVar16 < (int)uVar9);
    }
    Dino_BusSand_App_UI_ActivityContinueUi__ApplyLevelStyle_2187a30(param_1);
    lVar10 = FUN_02133068(*(undefined8 *)puVar3,3);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_04cad970;
        thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20));
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04cada00;
          thunk_FUN_02134474((undefined8 *)(lVar10 + 0x28));
                    /* try { // try from 02286be4 to 02386bef has its CatchHandler @ 02286c20 */
          if (2 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 02286bf0 to 02386c3b has its CatchHandler @ 02286b70 */
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_04cad9c0;
            thunk_FUN_02134474((undefined8 *)(lVar10 + 0x30));
            puVar1 = PTR_DAT_04cada08;
            uVar9 = *(uint *)(lVar10 + 0x18);
            uStack_68 = uStack_68 & 0xffffffff00000000;
            if (0 < (int)uVar9) {
                    /* catch() { ... } // from try @ 02286be4 with catch @ 02286c20 */
              uVar16 = 0;
              do {
                if (uVar9 <= uVar16) goto LAB_02286d08;
                    /* try { // try from 02286c3c to 02386d37 has its CatchHandler @ 02286c3c
                       catch() { ... } // from try @ 02286c3c with catch @ 02286c3c
                       catch() { ... } // from try @ 02286d44 with catch @ 02286c3c */
                uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                   (param_1,*(undefined8 *)(lVar10 + (long)(int)uVar16 * 8 + 0x20),0
                                   );
                lVar14 = *(long *)puVar2;
                lVar19 = *(long *)(lVar14 + 0x38);
                if (lVar19 == 0) {
                  FUN_0216b4cc(lVar14);
                  lVar19 = *(long *)(lVar14 + 0x38);
                }
                lVar19 = *(long *)(lVar19 + 0x10);
                if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
                  lVar19 = FUN_0216b470();
                }
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
                  lVar19 = FUN_0216b470();
                }
                uVar20 = **(undefined8 **)(lVar19 + 0xb8);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar4);
                }
                uVar20 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar1,uVar20,0);
                Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar12,uVar20);
                uVar9 = *(uint *)(lVar10 + 0x18);
                uVar16 = (int)uStack_68 + 1;
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
              } while ((int)uVar16 < (int)uVar9);
            }
            return;
          }
        }
      }
LAB_02286d08:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02286d0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

