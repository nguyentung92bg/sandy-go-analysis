/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$<OnFreeAdClick>b__9_0
void Dino_BusSand_App_UI_PurchaseItemPanel___OnFreeAdClick_b__9_0 (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$<OnFreeAdClick>b__9_0
   void Dino_BusSand_App_UI_PurchaseItemPanel___OnFreeAdClick_b__9_0
   (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, bool ok, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel___OnFreeAdClick_b__9_0_22b2bcc
               (long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined4 uStack_70;
  undefined8 ******ppppppuStack_68;
  undefined8 ******ppppppuStack_60;
  undefined8 ******ppppppuStack_58;
  
  if ((bRam0000000004f9c2d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caece0);
                    /* try { // try from 023b2c24 to 024b2c2b has its CatchHandler @ 023b2d8c */
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
                    /* try { // try from 023b2c3c to 024b2c47 has its CatchHandler @ 023b2d88 */
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
                    /* try { // try from 023b2c58 to 024b2c5b has its CatchHandler @ 023b2d7c */
                    /* try { // try from 023b2c5c to 024b2c6b has its CatchHandler @ 023b2d80 */
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 023b2c7c to 024b2c8f has its CatchHandler @ 023b2d78 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1d38);
                    /* try { // try from 023b2c90 to 024b2c9b has its CatchHandler @ 023b2d74 */
    FUN_02132f7c(PTR_DAT_04caceb0);
                    /* try { // try from 023b2ca0 to 024b2cab has its CatchHandler @ 023b2d70 */
    FUN_02132f7c(PTR_DAT_04cb6130);
    bRam0000000004f9c2d8 = 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  ppppppuStack_58 = (undefined8 *******)0x0;
  ppppppuStack_60 = (undefined8 *******)0x0;
  if ((param_2 & 1) != 0) {
                    /* try { // try from 023b2cc8 to 024b2cdf has its CatchHandler @ 023b2d6c */
    uVar17 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023b2ce0 to 024b2d63 has its CatchHandler @ 023b2960 */
    lVar5 = Dino_BusSand_App_UI_CommerceUi__ShopAdGet_22ab908(uVar17);
    if (lVar5 != 0) {
      System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                (&ppppppuStack_80,lVar5,*(undefined8 *)PTR_DAT_04caed00);
      puVar4 = PTR_DAT_04caece8;
      puVar3 = PTR_DAT_04caceb0;
      puVar2 = PTR_DAT_04cabaf8;
      ppppppuStack_58 = ppppppuStack_78;
      ppppppuStack_60 = ppppppuStack_80;
      ppppppuStack_80 = (undefined8 *******)0x0;
      ppppppuStack_78 = &ppppppuStack_60;
      while (uVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                               (&ppppppuStack_60,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578
                  (uStack_70,ppppppuStack_68,*(undefined8 *)puVar3,0);
                    /* try { // try from 023b2d64 to 024b2d67 has its CatchHandler @ 023b2d84 */
      }
                    /* try { // try from 023b2da8 to 024b2dab has its CatchHandler @ 023b2dcc */
                    /* try { // try from 023b2dac to 024b2dcf has its CatchHandler @ 023b2960 */
      System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                (&ppppppuStack_60,*(undefined8 *)PTR_DAT_04caece0);
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
      puVar2 = PTR_DAT_04cb1d38;
      if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 023b2da8 with catch @ 023b2dcc */
                    /* try { // try from 023b2dd0 to 024b2dd7 has its CatchHandler @ 023b2de0 */
                    /* try { // try from 023b2dd8 to 024b2de3 has its CatchHandler @ 023b2960 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023b2dd0 with catch @ 023b2de0
                        */
        if ((*(long *)PTR_DAT_04cb1d38 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1d38,*(undefined8 *)(*plVar7 + 0x40)),
           lVar5 == 0)) {
LAB_023b2ee8:
          uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          ppppppuStack_80 =
               (undefined8 ******)CONCAT44(ppppppuStack_80._4_4_,*(undefined4 *)(param_1 + 0x40));
          lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&ppppppuStack_80);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_023b2ee8;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
            plVar7[5] = lVar5;
            thunk_FUN_02134474(plVar7 + 5,lVar5);
            if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb6130,plVar7,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
            if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
              Dino_BusSand_App_UI_PurchaseItemPanel__Finish_22b24dc(param_1,1);
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 023b2d68 to 024b2da7 has its CatchHandler @ 023b2960 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b2cc8 with catch @ 023b2d6c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b2ca0 with catch @ 023b2d70
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b2c90 with catch @ 023b2d74
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b2c7c with catch @ 023b2d78
                        */
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b2c58 with catch @ 023b2d7c
                        */
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac888);
    FUN_02132f7c(PTR_DAT_04cac890);
    bRam0000000004f9b8e7 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b892 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    cRam0000000004f9b892 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (lVar5 == 0) {
LAB_0226adb4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = System_String__StartsWith_46d11d4(lVar5,*(undefined8 *)PTR_DAT_04cac890,4,0);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar14 = *(long *)PTR_DAT_04ca9d18;
  lVar8 = **(long **)(lVar5 + 0xb8);
  lVar5 = *(long *)(lVar14 + 0x38);
  if (lVar5 == 0) {
    FUN_0216b4cc(lVar14);
    lVar5 = *(long *)(lVar14 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  lVar5 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cac888,uVar9,0);
  puVar2 = PTR_DAT_04cabb08;
  if (lVar8 == 0) goto LAB_0226adb4;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar5,0);
    bRam0000000004f9b87c = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar17 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar5,0);
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
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04cabb08;
  lVar14 = *(long *)PTR_DAT_04ca9c30;
  if (lVar5 != 0) {
    lVar14 = lVar5;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar3;
  }
  **(long **)(lVar10 + 0xb8) = lVar14;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar14);
  uVar15 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar15;
  if (lVar8 == 0) goto LAB_023bd530;
  uVar9 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
  plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar13 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar7 == (long *)0x0) goto LAB_023bd530;
  if ((lVar8 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar7[4] = lVar8;
  thunk_FUN_02134474(plVar7 + 4,lVar8);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
  if ((lVar8 == 0) || (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar14 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar9,0,0);
  plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
  if (plVar7 == (long *)0x0) goto LAB_023bd530;
  if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar7);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar17,plVar7,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar17,plVar7,0);
  puVar4 = PTR_DAT_04cad330;
  lVar14 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar4;
  }
  puVar12 = *(undefined4 **)(lVar14 + 0xb8);
  ppppppuStack_68 = (undefined8 *******)0x0;
  ppppppuStack_60 = (undefined8 *******)0x0;
  ppppppuStack_58 = (undefined8 ******)((ulong)ppppppuStack_58 & 0xffffffff00000000);
  System_Nullable_Color____ctor_2bc9090
            (*puVar12,puVar12[1],puVar12[2],puVar12[3],&ppppppuStack_68,
             *(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = ppppppuStack_58._0_4_;
  ppppppuStack_78 = ppppppuStack_60;
  ppppppuStack_80 = ppppppuStack_68;
  lVar14 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar5,*(undefined8 *)PTR_DAT_04cad4a8,
                      &ppppppuStack_80,0x202,0);
  if (lVar14 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar14,1,0);
  fVar18 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar14,lVar5,0);
  fVar16 = 150.0;
  if (150.0 <= fVar18 + 70.0) {
    fVar16 = fVar18 + 70.0;
  }
  lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar14,0);
  if (lVar5 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar16 + -50.0,lVar5,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar16,plVar7,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar18 = 1.0;
  if (fVar16 / 241.0 <= 1.0) {
    fVar18 = fVar16 / 241.0;
  }
  lVar5 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x44660000,fVar16,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar18,plVar7,
                     *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar5 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar5,0);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    fVar16 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar16 - *(float *)(*(long *)(lVar5 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar4 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar4;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar5 + 0xb8),0);
    }
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10));
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  plVar11 = (long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  *plVar11 = lVar8;
  thunk_FUN_02134474(plVar11,lVar8);
  uVar17 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar17;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
  if (lVar5 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar5,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar8);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

