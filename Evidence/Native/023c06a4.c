/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$InitGolden
void Dino_BusSand_App_UI_ContinueBottomPanel__InitGolden (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, UnityEngine_Transform_o* root, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$InitGolden
   void Dino_BusSand_App_UI_ContinueBottomPanel__InitGolden
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, UnityEngine_Transform_o* root, int32_t
   packId, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__InitGolden_22c06a4
               (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04cb6688;
  if ((bRam0000000004f9c330 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb6690);
    FUN_02132f7c(PTR_DAT_04cb6688);
    FUN_02132f7c(PTR_DAT_04caee88);
    FUN_02132f7c(PTR_DAT_04cb6698);
    FUN_02132f7c(PTR_DAT_04cb66a0);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04caec88);
    FUN_02132f7c(PTR_DAT_04cade18);
    FUN_02132f7c(PTR_DAT_04caee90);
    FUN_02132f7c(PTR_DAT_04cb66a8);
    FUN_02132f7c(PTR_DAT_04cb6670);
    FUN_02132f7c(PTR_DAT_04cb66b0);
    FUN_02132f7c(PTR_DAT_04cb66b8);
    FUN_02132f7c(PTR_DAT_04cb66c0);
    FUN_02132f7c(PTR_DAT_04caef78);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04cad9e0);
    FUN_02132f7c(PTR_DAT_04cb66c8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb66d0);
    bRam0000000004f9c330 = 1;
  }
  uStack_58 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar8,0);
  puVar2 = PTR_DAT_04cac440;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar8 + 0x10),param_1);
    lVar9 = *(long *)puVar2;
    *(undefined4 *)(lVar8 + 0x18) = param_3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
    puVar2 = PTR_DAT_04ca9ae8;
    uStack_58 = CONCAT44(uVar5,(undefined4)uStack_58);
    if (param_2 != 0) {
      lVar9 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04cadc80,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
      if ((uVar10 & 1) != 0) {
        return;
      }
      if (lVar9 != 0) {
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caee88,0);
        puVar4 = PTR_DAT_04caec68;
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,1,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caee90,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cad9e0,0);
        puVar1 = PTR_DAT_04ca9d18;
        lVar14 = *(long *)PTR_DAT_04ca9d18;
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
        lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        puVar3 = PTR_DAT_04cab550;
        uVar15 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
        }
        uVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04caef78,uVar15,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb66c0,0);
        lVar14 = *(long *)puVar1;
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
        lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        uVar15 = Dino_BusSand_App_Lang__Get_215f9c0
                           (*(undefined8 *)PTR_DAT_04cb66b8,**(undefined8 **)(lVar13 + 0xb8),0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb66a0,0);
        lVar14 = *(long *)puVar1;
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
        lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        uVar15 = Dino_BusSand_App_Lang__Get_215f9c0
                           (*(undefined8 *)PTR_DAT_04cb66a8,**(undefined8 **)(lVar13 + 0xb8),0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
        iVar6 = Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins_21ac93c
                          (*(undefined4 *)(lVar8 + 0x18),0);
        uStack_58 = CONCAT44(uStack_58._4_4_,iVar6);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb66b0,0);
        puVar1 = PTR_DAT_04ca9ac8;
        if (iVar6 < 1) {
          uVar15 = **(undefined8 **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
        }
        else {
          uVar15 = System_Int32__ToString_482d750(&uStack_58,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb66c8,0);
        uVar15 = System_Int32__ToString_482d750((long)&uStack_58 + 4,0);
        uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar15,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb6698,0);
        plVar12 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        uStack_5c = uStack_58._4_4_;
        lVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_5c);
        if (plVar12 != (long *)0x0) {
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
            uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar11,0);
          }
          if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar12[4] = lVar13;
          thunk_FUN_02134474(plVar12 + 4,lVar13);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb6670,plVar12,0);
          Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar15,0);
          if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar13 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
          if (((lVar13 == 0) ||
              (lVar13 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8
                                  (lVar13,*(undefined4 *)(lVar8 + 0x18),0), lVar13 == 0)) ||
             (iVar6 = *(int *)(lVar13 + 0x18), iVar6 < 1)) {
            uVar11 = *(undefined8 *)PTR_DAT_04ca9c30;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,iVar6,0);
            uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8
                               (uVar11,*(undefined8 *)PTR_DAT_04caecb0,0);
            uVar11 = Dino_BusSand_App_MiniJson__Str_21564d0
                               (uVar11,*(undefined8 *)PTR_DAT_04ca9c30,0);
          }
          lVar13 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caec88,0);
          uVar7 = System_String__IsNullOrEmpty_46d2084(uVar11,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar13,(uVar7 ^ 0xffffffff) & 1,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar13 == 0) goto LAB_023c0f80;
            iVar6 = UnityEngine_Transform__get_childCount_43d4480(lVar13,0);
            if ((0 < iVar6) &&
               (uVar10 = System_String__IsNullOrEmpty_46d2084(uVar11,0), (uVar10 & 1) == 0)) {
              uVar15 = UnityEngine_Transform__GetChild_43d5294(lVar13,0,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              uVar11 = Dino_BusSand_App_UI_GiftPackUi__DiscountText_21a96c0(uVar11,0);
              Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar11,0);
            }
          }
          uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cade18,0);
          *(undefined8 *)(param_1 + 0x50) = uVar11;
          thunk_FUN_02134474();
          Dino_BusSand_App_UI_ContinueBottomPanel__RefreshGoldenTime_22c1760(param_1);
          lVar9 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb66d0,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar9 == 0) goto LAB_023c0f80;
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
            uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar15,lVar8,*(undefined8 *)PTR_DAT_04cb6690,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                      (uVar11,uVar15,1,*(undefined8 *)PTR_DAT_04cad948,0);
          }
          return;
        }
      }
    }
  }
LAB_023c0f80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

