/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnOpen
void Dino_BusSand_App_UI_ContinueBottomPanel__OnOpen (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnOpen
   void Dino_BusSand_App_UI_ContinueBottomPanel__OnOpen (Dino_BusSand_App_UI_ContinueBottomPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__OnOpen_22bf8b4(long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_04cb65f8;
  puVar6 = PTR_DAT_04cb65f0;
  puVar5 = PTR_DAT_04cae0c8;
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c329 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb6600);
    FUN_02132f7c(PTR_DAT_04cb6608);
    FUN_02132f7c(PTR_DAT_04cb6610);
    FUN_02132f7c(PTR_DAT_04cb6618);
    FUN_02132f7c(PTR_DAT_04cb6620);
    FUN_02132f7c(PTR_DAT_04cb6628);
    FUN_02132f7c(PTR_DAT_04cb6630);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb6638);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cae0c8);
    FUN_02132f7c(PTR_DAT_04cb2658);
    FUN_02132f7c(PTR_DAT_04cb6640);
    FUN_02132f7c(PTR_DAT_04cb6648);
    FUN_02132f7c(PTR_DAT_04cb65f0);
    FUN_02132f7c(PTR_DAT_04caeca0);
    FUN_02132f7c(PTR_DAT_04cb65f8);
    FUN_02132f7c(PTR_DAT_04cb0060);
    FUN_02132f7c(PTR_DAT_04cb6650);
    bRam0000000004f9c329 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar6,0,0);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                     (param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  puVar7 = PTR_DAT_04cb6650;
  puVar6 = PTR_DAT_04cb6648;
  puVar5 = PTR_DAT_04cb6640;
  uVar19 = 0;
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_023c004c;
    uVar19 = *(undefined8 *)(lVar10 + 0x20);
  }
  lVar12 = Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder_22c0074();
  lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  lVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar15 == 0) ||
       (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar15 == 0))
    goto LAB_023c004c;
    UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
  }
  puVar5 = PTR_DAT_04cb6620;
  if (lVar12 == 0) goto LAB_023c004c;
  System_Collections_Generic_List_EndOfLevelRules_ContinueCandidate___GetEnumerator_3b31348
            (&uStack_a0,lVar12,*(undefined8 *)PTR_DAT_04cb6638);
  uStack_80 = uStack_a0;
  bVar3 = false;
  bVar2 = false;
  uStack_a0 = 0;
  puStack_78 = puStack_98;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  puStack_98 = &uStack_80;
  while (uVar11 = System_Collections_Generic_List_Enumerator_EndOfLevelRules_ContinueCandidate___MoveNext_360f068
                            (&uStack_80,*(undefined8 *)puVar5), uVar18 = uStack_68,
        (uVar11 & 1) != 0) {
    uVar11 = uStack_70 & 0xffffffff;
    lVar12 = lVar13;
    if (uVar11 != 0) {
      lVar12 = lVar14;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar16 & 1) == 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_GameObject__SetActive_43c1408(lVar15,1,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
      if ((uVar16 & 1) != 0) {
        UnityEngine_Transform__SetParent_43d1df0(lVar12,uVar19,0);
      }
      if (uVar11 == 0) {
        bVar2 = true;
        Dino_BusSand_App_UI_ContinueBottomPanel__InitPassport_22c0198(param_1,lVar13);
      }
      else {
        bVar3 = true;
        *(int *)(param_1 + 0x58) = (int)((ulong)uVar18 >> 0x20);
        Dino_BusSand_App_UI_ContinueBottomPanel__InitGolden_22c06a4(param_1,lVar14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_EndOfLevelRules_ContinueCandidate___Dispose_360f064
            (&uStack_80,*(undefined8 *)PTR_DAT_04cb6618);
  if (bVar2) {
    iVar8 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
    if ((uVar11 & 1) != 0) {
      if ((lVar13 == 0) ||
         (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar12 == 0))
      goto LAB_023c004c;
      UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
    }
    iVar8 = 0;
  }
  if (bVar3) {
    iVar21 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar11 & 1) != 0) {
      if ((lVar14 == 0) ||
         (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar12 == 0))
      goto LAB_023c004c;
      UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
    }
    iVar21 = 0;
  }
  Dino_BusSand_App_UI_ContinueBottomPanel__RefreshDots_22c0f94(param_1,iVar8 + iVar21,lVar10);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_023c004c;
    lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar10,*(undefined8 *)PTR_DAT_04cb6600);
    plVar17 = (long *)(param_1 + 0x38);
    *plVar17 = lVar12;
    thunk_FUN_02134474(plVar17,lVar12);
    lVar12 = *plVar17;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar11 & 1) != 0) {
      lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      if (lVar10 == 0) goto LAB_023c004c;
      lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar10,*(undefined8 *)PTR_DAT_04cb6630);
      *plVar17 = lVar10;
      thunk_FUN_02134474(plVar17,lVar10);
    }
    lVar10 = *(long *)(param_1 + 0x38);
    uVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar19,param_1,*(undefined8 *)PTR_DAT_04cb6608,0);
    if (lVar10 == 0) goto LAB_023c004c;
    Dino_BusSand_App_UI_ContinueBottomPager__add_PageSelected_22bdcd0(lVar10,uVar19);
    lVar10 = *(long *)(param_1 + 0x38);
    uVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar19,param_1,*(undefined8 *)PTR_DAT_04cb6610,0);
    if ((lVar10 == 0) ||
       (Dino_BusSand_App_UI_ContinueBottomPager__add_DragEnded_22bde30(lVar10,uVar19), *plVar17 == 0
       )) goto LAB_023c004c;
    Dino_BusSand_App_UI_ContinueBottomPager__RebuildAfterItemsChanged_22be8dc();
  }
  uVar19 = Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_22c1290(param_1);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar19,0);
  if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  lVar12 = 0;
  iVar1 = 0;
  if (lVar10 != 0) {
    iVar1 = iVar21;
  }
  if (iVar1 == 1) {
    lVar12 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8
                       (lVar10,*(undefined4 *)(param_1 + 0x58),0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  puVar4 = PTR_DAT_04caec70;
  if (iVar8 == 0) {
    if (iVar21 != 1) {
      return;
    }
    uVar9 = 0;
  }
  else if ((lVar10 == 0) ||
          (iVar8 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(lVar10,0),
          iVar8 < 1)) {
    uVar9 = 0xfa4;
  }
  else {
    uVar9 = Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(lVar10,0);
  }
  lVar10 = FUN_02133068(*(undefined8 *)puVar4,2);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) != 0) {
      *(undefined4 *)(lVar10 + 0x20) = uVar9;
      if (lVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(lVar12 + 0x18);
      }
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
        uVar19 = *(undefined8 *)PTR_DAT_04cb0060;
        uVar18 = *(undefined8 *)PTR_DAT_04caeca0;
        uVar20 = *(undefined8 *)PTR_DAT_04cb2658;
        *(undefined4 *)(lVar10 + 0x24) = uVar9;
        if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_GameTracking__IapShow_221791c(param_1,uVar20,uVar18,uVar19,lVar10,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_023c004c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

