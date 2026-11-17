/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OnStoreItemSetup
void Dino_BusSand_App_UI_GiftPackUi__OnStoreItemSetup (UnityEngine_Transform_o* item, int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OnStoreItemSetup
   void Dino_BusSand_App_UI_GiftPackUi__OnStoreItemSetup (UnityEngine_Transform_o* item, int32_t
   storeItemId, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi__OnStoreItemSetup_21ac388(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined4 uStack_54;
  
  puVar6 = PTR_DAT_04caee68;
  puVar3 = PTR_DAT_04cac018;
  if ((bRam0000000004f9ba66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caee70);
    FUN_02132f7c(PTR_DAT_04caee78);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04caee80);
    FUN_02132f7c(PTR_DAT_04caee68);
    FUN_02132f7c(PTR_DAT_04caee88);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04caec88);
    FUN_02132f7c(PTR_DAT_04cade18);
    FUN_02132f7c(PTR_DAT_04caee90);
    FUN_02132f7c(PTR_DAT_04caee98);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04caeea0);
    bRam0000000004f9ba66 = 1;
  }
  puVar5 = PTR_DAT_04cad270;
  puVar4 = PTR_DAT_04cad200;
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_54 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Object___ctor_4870e5c(lVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_2,0);
  uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)puVar5,0);
  iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  lVar14 = 0;
  if ((uVar11 & 1) != 0) {
    if (param_1 == 0) goto LAB_022ac930;
    lVar14 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadc80,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  if ((((uVar11 & 1) != 0) || (iVar7 == 4)) || (iVar7 != 7)) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (lVar9 == 0) goto LAB_022ac930;
  plVar15 = (long *)(lVar9 + 0x10);
  *plVar15 = lVar12;
  thunk_FUN_02134474(plVar15,lVar12);
  if (*plVar15 == 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  else {
    iVar7 = Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem_2234d90(*plVar15,param_2,0);
    *(int *)(lVar9 + 0x18) = iVar7;
    if (0 < iVar7) {
      if (lVar14 != 0) {
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04caee88,0);
        puVar6 = PTR_DAT_04caec68;
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,0);
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04caee90,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,1);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_2,0);
        uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)PTR_DAT_04caecb0,0);
        uVar10 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)PTR_DAT_04ca9c30,0);
        lVar12 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04caec88,0);
        uVar8 = System_String__IsNullOrEmpty_46d2084(uVar10,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar12,(uVar8 ^ 0xffffffff) & 1);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
        if ((uVar11 & 1) != 0) {
          if (lVar12 == 0) goto LAB_022ac930;
          iVar7 = UnityEngine_Transform__get_childCount_43d4480(lVar12,0);
          if (0 < iVar7) {
            uVar13 = UnityEngine_Transform__GetChild_43d5294(lVar12,0,0);
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12);
            }
            uVar10 = Dino_BusSand_App_UI_GiftPackUi__DiscountText_21a96c0(uVar10);
            Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar13,uVar10);
          }
        }
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04caee98,0);
        lVar12 = *(long *)puVar6;
        uVar1 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
        }
        uStack_54 = Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins_21ac93c(uVar1);
        uVar13 = System_Int32__ToString_482d750(&uStack_54,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar13);
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04caeea0,0);
        uVar13 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748(param_2,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar10,uVar13);
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04cade18,0);
        *(undefined8 *)(lVar9 + 0x20) = uVar10;
        thunk_FUN_02134474();
        if (param_1 != 0) {
          lVar14 = UnityEngine_Component__GetComponent_object__26f97e8
                             (param_1,*(undefined8 *)PTR_DAT_04caee70);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
          if ((uVar11 & 1) != 0) {
            lVar14 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
            if (lVar14 == 0) goto LAB_022ac930;
            lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar14,*(undefined8 *)PTR_DAT_04caee78);
          }
          lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(lVar12,lVar9,*(undefined8 *)PTR_DAT_04caee80,0);
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + 0x20);
            *plVar15 = lVar12;
            thunk_FUN_02134474(plVar15,lVar12);
            lVar9 = *plVar15;
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
              return;
            }
          }
        }
      }
      goto LAB_022ac930;
    }
  }
  if ((param_1 != 0) &&
     (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0), lVar9 != 0)) {
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *(long *)(lVar9 + 0x10);
    if (lVar14 != 0) {
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar14,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar9,0);
  }
LAB_022ac930:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

