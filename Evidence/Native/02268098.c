/* IL2CPP: Dino.BusSand.App.GameApp$$OpenStore
void Dino_BusSand_App_GameApp__OpenStore (Dino_BusSand_App_GameApp_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$OpenStore
   void Dino_BusSand_App_GameApp__OpenStore (Dino_BusSand_App_GameApp_o* __this, bool force, const
   MethodInfo* method); */

long * Dino_BusSand_App_GameApp__OpenStore_2168098(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  undefined4 *puVar15;
  char cVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  long lStack_c8;
  long *plStack_c0;
  uint *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  uint uStack_70;
  char acStack_6c [4];
  long lStack_68;
  
  puVar1 = PTR_DAT_04cac458;
                    /* try { // try from 022680b8 to 023680c3 has its CatchHandler @ 02268100 */
  if ((bRam0000000004f9b87a & 1) == 0) {
                    /* try { // try from 022680c8 to 023680d3 has its CatchHandler @ 022680fc */
    FUN_02132f7c(PTR_DAT_04cac458);
                    /* try { // try from 022680d4 to 0236811b has its CatchHandler @ 02267f38 */
    FUN_02132f7c(PTR_DAT_04cac748);
    FUN_02132f7c(PTR_DAT_04cac750);
    FUN_02132f7c(PTR_DAT_04cac758);
                    /* catch() { ... } // from try @ 02268068 with catch @ 022680f8 */
    FUN_02132f7c(PTR_DAT_04cac760);
                    /* catch() { ... } // from try @ 022680c8 with catch @ 022680fc */
                    /* catch() { ... } // from try @ 02267fcc with catch @ 02268100
                       catch() { ... } // from try @ 022680b8 with catch @ 02268100 */
    bRam0000000004f9b87a = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabb08;
                    /* catch() { ... } // from try @ 02268190 with catch @ 02268124 */
  if ((*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') && ((param_2 & 1) == 0)) {
    lVar6 = *(long *)PTR_DAT_04cac758;
    if ((bRam0000000004f9b87c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabb08);
      bRam0000000004f9b87c = 1;
    }
    lVar18 = *(long *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar23 = _UNK_00e20094;
    if ((bRam0000000004f9c314 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad568,lVar6,0);
      FUN_02132f7c(PTR_DAT_04caa070);
      FUN_02132f7c(PTR_DAT_04cac878);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cad730);
      FUN_02132f7c(PTR_DAT_04cabdb0);
      FUN_02132f7c(PTR_DAT_04cabb08);
      FUN_02132f7c(PTR_DAT_04cad748);
      FUN_02132f7c(PTR_DAT_04cad330);
      FUN_02132f7c(PTR_DAT_04cad4c0);
      FUN_02132f7c(PTR_DAT_04cb4e20);
      FUN_02132f7c(PTR_DAT_04cafbb8);
      FUN_02132f7c(PTR_DAT_04cb6578);
      FUN_02132f7c(PTR_DAT_04ca9c30);
      FUN_02132f7c(PTR_DAT_04cb64b8);
      FUN_02132f7c(PTR_DAT_04cad4a8);
      bRam0000000004f9c314 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar7 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
    puVar2 = PTR_DAT_04cabb08;
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
    lVar8 = *(long *)PTR_DAT_04cabb08;
    lVar10 = *(long *)PTR_DAT_04ca9c30;
    if (lVar6 != 0) {
      lVar10 = lVar6;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    **(long **)(lVar8 + 0xb8) = lVar10;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar10);
    uVar21 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar21;
    if (lVar18 == 0) goto LAB_023bd530;
    uVar9 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar18,4,0);
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar17 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar18 = System_Type__GetTypeFromHandle_483f0b4(uVar17,0);
    if (plVar7 == (long *)0x0) goto LAB_023bd530;
    if ((lVar18 != 0) &&
       (lVar10 = thunk_FUN_0216e7a0(lVar18,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar7[4] = lVar18;
    thunk_FUN_02134474(plVar7 + 4,lVar18);
    lVar18 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar18,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
    if ((lVar18 == 0) ||
       (lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar18,0), lVar10 == 0))
    goto LAB_023bd530;
    UnityEngine_Transform__SetParent_43d1e34(lVar10,uVar9,0,0);
    plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar18,0);
    if (plVar7 == (long *)0x0) goto LAB_023bd530;
    if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar7);
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar23,plVar7,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar23,plVar7,0);
    puVar3 = PTR_DAT_04cad330;
    lVar10 = *(long *)PTR_DAT_04cad330;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    puVar15 = *(undefined4 **)(lVar10 + 0xb8);
    lStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*puVar15,puVar15[1],puVar15[2],puVar15[3],&lStack_68,*(undefined8 *)PTR_DAT_04cac878)
    ;
    uStack_70 = 0;
    alStack_80[1] = 0;
    alStack_80[0] = lStack_68;
    lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                        *(undefined8 *)PTR_DAT_04cb4e20,lVar6,*(undefined8 *)PTR_DAT_04cad4a8,
                        alStack_80,0x202,0);
    if (lVar10 == 0) goto LAB_023bd530;
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar10,1,0);
    fVar24 = 0.0;
    TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar10,lVar6,0);
    fVar22 = 150.0;
    if (150.0 <= fVar24 + 70.0) {
      fVar22 = fVar24 + 70.0;
    }
    lVar6 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar10,0);
    if (lVar6 == 0) goto LAB_023bd530;
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar22 + -50.0,lVar6,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar22,plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = (long *)((ulong)uStack_88._4_4_ << 0x20);
    fVar24 = 1.0;
    if (fVar22 / 241.0 <= 1.0) {
      fVar24 = fVar22 / 241.0;
    }
    lVar6 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                      (0x44660000,fVar22,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar24,plVar7,
                       *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0)
    ;
    if (lVar6 == 0) goto LAB_023bd530;
    UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar6,0);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar11 & 1) == 0) {
      fVar22 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      if (_UNK_00e200f8 < fVar22 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x18)) goto LAB_023bd36c;
    }
    else {
LAB_023bd36c:
      puVar3 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar6 + 0xb8),0);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar11 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10));
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    plVar12 = (long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    *plVar12 = lVar18;
    thunk_FUN_02134474(plVar12,lVar18);
    uVar23 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    iVar20 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar23;
    if (iVar20 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar18,0);
    if (lVar6 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar6,0,0);
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
      Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
      plVar7 = (long *)Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                                 (_UNK_00e208d0,_UNK_00e1fdec,lVar18);
      return plVar7;
    }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_022681ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar7 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                             (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac748);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
                    /* try { // try from 02268174 to 0236818f has its CatchHandler @ 0226819c */
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) goto LAB_022681ac;
                    /* try { // try from 02268190 to 023681b7 has its CatchHandler @ 02268124 */
                    /* catch() { ... } // from try @ 02268174 with catch @ 0226819c */
  lVar18 = *(long *)PTR_DAT_04cac760;
  lVar10 = *(long *)PTR_DAT_04cac750;
  if (*(long *)(lVar10 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_0216b4cc(lVar10);
    }
  }
  puVar1 = PTR_DAT_04ca9ac8;
  lStack_68 = 0;
  acStack_6c[0] = '\0';
  uStack_70 = uStack_70 & 0xffffff00;
  lStack_90 = 0;
  uStack_88 = (long *)0x0;
  alStack_80[0] = 0;
  uVar9 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
  uVar9 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar10 + 0x38),0);
  if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
  uVar5 = (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x2c0));
  puVar2 = PTR_DAT_04ca9ae8;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar18,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar11 & 1) != 0) {
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar18,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar9,0);
      return (long *)0x0;
    }
    uVar17 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar6,2,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar8 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar9,uVar17,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar8 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar9 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar6,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar8 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar18,uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar11 & 1) == 0) goto LAB_02a45794;
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar9 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar8 != 0) &&
       (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar7[4] = lVar8;
    thunk_FUN_02134474(plVar7 + 4,lVar8);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar8,lVar18,plVar7,0);
    lVar13 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar6,2,0);
    if (((lVar13 == 0) ||
        (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar13 == 0)) ||
       (uVar23 = UnityEngine_GameObject__get_layer_43c1118(lVar13,0), lVar8 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar8,uVar23,0);
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    uVar9 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar6,2,0);
    if (lVar13 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar13,uVar9,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar8,lVar18,0);
  plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
  if ((uVar11 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar1 = PTR_DAT_04cacfc0;
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
               *(undefined4 *)(lVar13 + 0x14),plVar7,0);
  }
  lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar8,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  if ((uVar11 & 1) != 0) {
    lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar8,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar13 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar13,0x19,0);
    if (*(long *)(lVar6 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar6 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar1 = PTR_DAT_04cabac0;
      iVar20 = 0;
      uStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      alStack_80[0] = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar1), lVar4 = alStack_80[0],
            (uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar11 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar4 + 0x2c) == '\0') && (*(int *)(lVar4 + 0x28) == 2)) {
            iVar20 = iVar20 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar13,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar13,iVar20 * 0x14 + 0x7e4,0);
      uVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (lVar8,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      if ((uVar11 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar8,*(undefined8 *)PTR_DAT_04cacf90);
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar8,0);
      plVar7 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar8,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
      lVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar8,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar3 = PTR_DAT_04cae1a8;
      puVar1 = PTR_DAT_04cae1a0;
      if (lVar10 != 0) {
        uVar14 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar14) {
          uVar19 = 0;
          do {
            if (uVar14 <= uVar19) goto LAB_02a45eb4;
            lVar13 = *(long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_02a45eb0;
            uVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,lVar8,0);
            if ((uVar11 & 1) != 0) {
              uVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar13,*(undefined8 *)puVar1);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
              if ((uVar11 & 1) != 0) {
                lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
                if (lVar13 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar13,*(undefined8 *)puVar3);
              }
            }
            uVar14 = *(uint *)(lVar10 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)uVar14);
        }
        if (plVar7 != (long *)0x0) {
          plVar7[4] = lVar18;
          thunk_FUN_02134474(plVar7 + 4,lVar18);
          *(undefined4 *)(plVar7 + 5) = 2;
          lVar6 = *(long *)(lVar6 + 0x38);
          if (lVar6 != 0) {
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar13 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar14 = *(uint *)(lVar6 + 0x18);
              if (uVar14 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar14 + 1;
                plVar12 = (long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
                *plVar12 = (long)plVar7;
                thunk_FUN_02134474(plVar12,plVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_04cb4ce0;
              puVar1 = PTR_DAT_04cad7b8;
              if ((uVar5 & 1) == 0) {
                lVar6 = *(long *)PTR_DAT_04cb4ce0;
                cVar16 = '\0';
                lStack_68 = 0;
              }
              else {
                uVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                lVar6 = *(long *)puVar1;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar6);
                }
                lStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar9,lVar18,0);
                lVar6 = *(long *)puVar2;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar6);
                  lVar6 = *(long *)puVar2;
                }
                cVar16 = **(char **)(lVar6 + 0xb8);
              }
              acStack_6c[0] = cVar16 != '\0';
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar6);
                lVar6 = *(long *)puVar2;
              }
              lVar18 = *(long *)(lVar6 + 0xb8);
              uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)(lVar18 + 1));
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar6);
                  lVar18 = *(long *)(*(long *)puVar2 + 0xb8);
                }
                *(undefined1 *)(lVar18 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = &uStack_70;
              lStack_c8 = 0;
              plStack_b0 = &lStack_68;
              (**(code **)(*plVar7 + 0x178))(plVar7,0,*(undefined8 *)(*plVar7 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar6 = *(long *)puVar2;
                uVar5 = *puStack_b8;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar6 = *(long *)puVar2;
                }
                *(char *)(*(long *)(lVar6 + 0xb8) + 1) = (char)uVar5;
              }
              lVar6 = *plStack_b0;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(lVar6,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar6 = *(long *)puVar2;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar2;
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                  if (lVar6 != 0) {
                    (**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),plVar7,*(undefined8 *)(lVar6 + 0x28));
                  }
                }
                uVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar9,0);
                uVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar9,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar7,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar7,0);
                return plVar7;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

