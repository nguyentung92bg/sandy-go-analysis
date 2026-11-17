/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$BuildList
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__BuildList (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$BuildList
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__BuildList
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__BuildList_21afb70(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  int iStack_64;
  
  puVar4 = PTR_DAT_04cae138;
  if ((bRam0000000004f9ba82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caf050);
    FUN_02132f7c(PTR_DAT_04caf058);
    FUN_02132f7c(PTR_DAT_04caf060);
    FUN_02132f7c(PTR_DAT_04cae138);
    FUN_02132f7c(PTR_DAT_04caf068);
    FUN_02132f7c(PTR_DAT_04caf070);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9ba82 = 1;
  }
  puVar3 = PTR_DAT_04cabdb0;
  puVar2 = PTR_DAT_04ca9ae8;
  iStack_64 = 0;
  plVar8 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != *(long *)puVar3) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (plVar8 != (long *)0x0) {
    plVar10 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar8,0);
    puVar7 = PTR_DAT_04caf070;
    puVar6 = PTR_DAT_04caf068;
    puVar5 = PTR_DAT_04caf060;
    puVar4 = PTR_DAT_04caf058;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != *(long *)puVar3) {
      plVar10 = (long *)0x0;
    }
    lVar15 = *(long *)(param_1 + 0x48);
    iStack_64 = 0;
    while (lVar15 != 0) {
      if (*(int *)(lVar15 + 0x18) <= iStack_64) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        if (plVar10 != (long *)0x0) {
          uVar11 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar10,0);
          if (*(long *)(param_1 + 0x48) != 0) {
            UnityEngine_RectTransform__set_sizeDelta_43cfa70
                      (uVar11,(float)*(int *)(*(long *)(param_1 + 0x48) + 0x18) * 200.0,plVar10,0);
            return;
          }
        }
        break;
      }
      lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      Dino_BusSand_App_UI_GoldenCoinGiftPackPanel___c__DisplayClass17_0___ctor_21b23e4(lVar15,0);
      if (lVar15 == 0) break;
      *(long *)(lVar15 + 0x18) = param_1;
      thunk_FUN_02134474((long *)(lVar15 + 0x18),param_1);
      plVar13 = plVar8;
      if (iStack_64 != 0) {
        uVar11 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        lVar12 = UnityEngine_Object__Instantiate_object__2805310
                           (uVar11,plVar10,0,*(undefined8 *)PTR_DAT_04cad390);
        if (lVar12 == 0) break;
        plVar13 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else if (*plVar13 != *(long *)PTR_DAT_04cabdb0) {
          plVar13 = (long *)0x0;
        }
      }
      uVar11 = System_Int32__ToString_482d750(&iStack_64,0);
      uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar11,0);
      if (plVar13 == (long *)0x0) break;
      UnityEngine_Object__set_name_43c72ec(plVar13,uVar11,0);
      lVar12 = UnityEngine_Component__get_gameObject_43bcde8(plVar13,0);
      if (lVar12 == 0) break;
      UnityEngine_GameObject__SetActive_43c1408(lVar12,1,0);
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar13,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar13,0);
      UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f000000,plVar13,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (0,(float)iStack_64 * -200.0 + -100.0,plVar13,0);
      uVar11 = *(undefined8 *)puVar5;
      *(int *)(lVar15 + 0x10) = iStack_64;
      lVar12 = UnityEngine_Transform__Find_43d4bec(plVar13,uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar12 == 0) break;
        uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
        uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar14,lVar15,*(undefined8 *)PTR_DAT_04caf050,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar14,1,*(undefined8 *)PTR_DAT_04cad948,0)
        ;
      }
      uVar11 = UnityEngine_Transform__Find_43d4bec(plVar13,*(undefined8 *)puVar6,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0);
      lVar15 = *(long *)(param_1 + 0x50);
      if (lVar15 == 0) break;
      lVar12 = *(long *)(lVar15 + 0x10);
      lVar17 = *(long *)PTR_DAT_04cad6c0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar12 == 0) break;
      uVar1 = *(uint *)(lVar15 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
        puVar16 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar16 = plVar13;
        thunk_FUN_02134474(puVar16,plVar13);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar15,plVar13,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                  );
      }
      iStack_64 = iStack_64 + 1;
      lVar15 = *(long *)(param_1 + 0x48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

