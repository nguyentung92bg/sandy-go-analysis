/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowTips
void Dino_BusSand_App_UI_GuidePanel__ShowTips (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowTips
   void Dino_BusSand_App_UI_GuidePanel__ShowTips (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__ShowTips_22cabf8
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c378 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb69c0);
    FUN_02132f7c(PTR_DAT_04cacfb8);
    bRam0000000004f9c378 = 1;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x60);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_023cb304;
  uVar4 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38),0);
  uVar9 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_023cb304;
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38);
    lVar10 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar10 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar10);
      lVar7 = *(long *)(lVar10 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    uVar9 = Dino_BusSand_App_Lang__Get_215f9c0(uVar9,uVar11,0);
  }
  uVar4 = System_String__IsNullOrEmpty_46d2084(uVar9,0);
  lVar7 = *(long *)(param_3 + 0x60);
  if ((uVar4 & 1) != 0) {
    if ((lVar7 != 0) && (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 != 0)
       ) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar10,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_023cb304;
  }
  if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar7 == 0))
  goto LAB_023cb304;
  UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
  puVar3 = PTR_DAT_04cabdc0;
  lVar7 = *(long *)PTR_DAT_04cabdc0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 == 0) goto LAB_023cb304;
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar4 = 0;
    uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar10 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                         (*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(lVar7 + 0x20 + uVar4 * 8),
                          0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
      if ((uVar8 & 1) != 0) {
        if ((lVar10 == 0) ||
           (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 == 0))
        goto LAB_023cb304;
        UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
      }
      uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x68);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  lVar7 = 0x68;
  if ((uVar4 & 1) == 0) {
    lVar7 = 0x60;
  }
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_023cb304;
  fVar13 = *(float *)(*(long *)(param_3 + 0x38) + 100);
  lVar7 = *(long *)(param_3 + lVar7);
  if (fVar13 <= 0.0) {
    fVar13 = 800.0;
  }
  fVar1 = 960.0;
  if (fVar13 <= 960.0) {
    fVar1 = fVar13;
  }
  fVar18 = 480.0;
  if (480.0 <= fVar13) {
    fVar18 = fVar1;
  }
  if (lVar7 == 0) goto LAB_023cb304;
  plVar5 = (long *)UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cacfb8,0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
    plVar5 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_023cb304;
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar5,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar18,plVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_GuidePanel__KitBubble_22cb30c(plVar5);
  }
  lVar10 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar7,*(undefined8 *)PTR_DAT_04cb69c0,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  plVar12 = (long *)0x0;
  if ((uVar4 & 1) != 0) {
    if (lVar10 == 0) goto LAB_023cb304;
    plVar12 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar10,*(undefined8 *)PTR_DAT_04cad790);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar4 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_023cb304;
    }
    else {
      uVar11 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
      if (plVar12 == (long *)0x0) goto LAB_023cb304;
      TMPro_TMP_Text__set_font_42cb6ac(plVar12,uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiKit__Style_2287e10(plVar12,*(undefined8 *)PTR_DAT_04cad4c8,0);
    }
    (**(code **)(*plVar12 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0)
              );
    (**(code **)(*plVar12 + 0x518))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x520));
    lVar10 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar12,0);
    lVar6 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar12,0);
    if ((lVar6 == 0) || (UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar6,0), lVar10 == 0))
    goto LAB_023cb304;
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar18 + -100.0,lVar10,0);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__BalanceLines_228b744(_UNK_00e2094c,plVar12,0);
  }
  uVar9 = *(undefined8 *)(param_3 + 0xc0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  lVar10 = *(long *)(param_3 + 0x38);
  if ((uVar4 & 1) == 0) {
LAB_023cb234:
    if (lVar10 == 0) goto LAB_023cb304;
LAB_023cb238:
    uVar9 = *(undefined8 *)(lVar10 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_GuideDimHoles__VehiclesScreenRect_22c7654(uVar9,&uStack_80);
    if ((uVar4 & 1) == 0) {
      lVar10 = *(long *)(param_3 + 0x38);
      if (lVar10 == 0) {
LAB_023cb304:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_GuidePanel__PlaceAt_22cb940
                (param_1,param_2,*(undefined4 *)(lVar10 + 0x5c),*(undefined4 *)(lVar10 + 0x60),
                 param_3,*(undefined8 *)(param_3 + 0x60));
      Dino_BusSand_App_UI_GuidePanel__ClampHorizontal_22cba78
                (fVar18 * 0.5 + 32.0,param_3,*(undefined8 *)(param_3 + 0x60));
      uVar9 = Dino_BusSand_App_UI_GuidePanel__ClampVertical_22cbb48
                        (param_3,*(undefined8 *)(param_3 + 0x60),plVar5);
      goto LAB_023cb2cc;
    }
    uVar9 = 1;
    uVar14 = (undefined4)uStack_80;
    uVar16 = (undefined4)uStack_78;
    uVar17 = uStack_78._4_4_;
    uVar15 = uStack_80._4_4_;
  }
  else {
    if (lVar10 == 0) goto LAB_023cb304;
    if (*(char *)(lVar10 + 0x14) == '\0') goto LAB_023cb238;
    if (*(long *)(param_3 + 0xc0) == 0) goto LAB_023cb304;
    uVar4 = Dino_BusSand_App_UI_GuideDimHoles__TargetsScreenRect_22c7110
                      (*(long *)(param_3 + 0xc0),&uStack_70);
    if ((uVar4 & 1) == 0) {
      lVar10 = *(long *)(param_3 + 0x38);
      goto LAB_023cb234;
    }
    uVar9 = 0;
    uVar14 = (undefined4)uStack_70;
    uVar16 = (undefined4)uStack_68;
    uVar17 = uStack_68._4_4_;
    uVar15 = uStack_70._4_4_;
  }
  uVar9 = Dino_BusSand_App_UI_GuidePanel__PlaceClear_22cb53c
                    (uVar14,uVar15,uVar16,uVar17,param_3,lVar7,uVar9);
LAB_023cb2cc:
  lVar7 = Dino_BusSand_App_UI_GuidePanel__TipAppear_22cbd50(uVar9,lVar7);
  if (lVar7 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar11 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar11,uVar9,0);
  }
  else {
    uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar4 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_3 != 0) {
        lVar10 = *(long *)(param_3 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_3,0);
        }
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar10,lVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar11 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar11,uVar9,0);
  }
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar11,uVar9);
}

