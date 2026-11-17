/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c__DisplayClass48_0$$<SetupNameItem>b__0
void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass48_0___SetupNameItem_b__0 (Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass48_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024040c0) */
/* WARNING: Removing unreachable block (ram,0x024040d4) */
/* WARNING: Removing unreachable block (ram,0x024040d8) */
/* WARNING: Removing unreachable block (ram,0x024040f0) */
/* WARNING: Removing unreachable block (ram,0x024040f4) */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c__DisplayClass48_0$$<SetupNameItem>b__0
   void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass48_0___SetupNameItem_b__0
   (Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass48_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass48_0___SetupNameItem_b__0_2304fb0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *plStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if ((bRam0000000004f9c4e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7dc8);
    FUN_02132f7c(PTR_DAT_04cb7dd0);
    FUN_02132f7c(PTR_DAT_04cb7dd8);
    FUN_02132f7c(PTR_DAT_04cb7de0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c4e2 = 1;
  }
  puVar2 = PTR_DAT_04cb7ab8;
  puVar1 = PTR_DAT_04cae570;
  lStack_58 = 0;
  if (lVar7 == 0) {
LAB_0240415c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar7 + 0x48) == '\0') {
    Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(lVar8);
    uVar13 = *(undefined4 *)(lVar7 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__SetNamePlate_226d3e0(uVar13,0);
    uVar6 = *(undefined8 *)(lVar8 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(lVar8 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(0);
      if (lVar7 == 0) goto LAB_0240415c;
      Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate_22d00b0(lVar7,uVar13,0);
    }
    if (*(long *)(lVar8 + 0x70) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_58,*(long *)(lVar8 + 0x70),*(undefined8 *)PTR_DAT_04cb7de0);
      plStack_60 = &lStack_58;
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&lStack_58,*(undefined8 *)PTR_DAT_04cb7dd0);
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_58,*(undefined8 *)PTR_DAT_04cb7dc8);
      return;
    }
    goto LAB_0240415c;
  }
  plVar11 = *(long **)(lVar7 + 0x20);
  uVar13 = *(undefined4 *)(lVar7 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_PlayerIdentity__DecorateLockTips_226dbc8(uVar13,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar13 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x50);
  uVar15 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x54);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
    plVar11 = (long *)0x0;
  }
  if ((bRam0000000004f9c4e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cb7df8);
    FUN_02132f7c(PTR_DAT_04cb7e00);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1220);
    bRam0000000004f9c4e5 = 1;
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x98);
  plStack_60 = (long *)0x0;
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((*(long *)(lVar8 + 0x98) == 0) ||
     (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x98),0), lVar7 == 0))
  goto LAB_02403cf4;
  UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
  puVar2 = PTR_DAT_04cb7df8;
  if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_02403cf4;
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(lVar8 + 0xc0),uVar6,&lStack_58,*(undefined8 *)PTR_DAT_04cb7df8);
  lVar7 = lStack_58;
  if ((uVar3 & 1) == 0) {
LAB_024039c4:
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar3 & 1) != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = UnityEngine_Object__Instantiate_object__2805310
                          (lVar7,uVar9,0,*(undefined8 *)PTR_DAT_04cad390);
        lStack_58 = lVar4;
        if (((lVar7 == 0) || (uVar9 = UnityEngine_Object__get_name_43c71a4(lVar7,0), lVar4 == 0)) ||
           (UnityEngine_Object__set_name_43c72ec(lVar4,uVar9,0), lStack_58 == 0)) goto LAB_02403cf4;
        plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar14 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
          plVar5 = (long *)0x0;
        }
        Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                  (uVar12,uVar14,uVar12,uVar14,plVar5,0);
        if (lStack_58 == 0) goto LAB_02403cf4;
        uVar9 = UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (*(int *)(*(long *)PTR_DAT_04cb7ab8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb7ab8);
        }
        Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts_2304344(uVar9);
        if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_02403cf4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*(long *)(lVar8 + 0xc0),uVar6,lStack_58,*(undefined8 *)PTR_DAT_04cb7e00);
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar3 & 1) != 0) goto LAB_024039c4;
  }
  puVar10 = (undefined8 *)(lVar8 + 200);
  uVar3 = System_String__IsNullOrEmpty_46d2084(*puVar10,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__op_Inequality_46d110c(*puVar10,uVar6,0), (uVar3 & 1) != 0)) {
    if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_02403cf4;
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(lVar8 + 0xc0),*puVar10,&plStack_60,*(undefined8 *)puVar2);
    plVar5 = plStack_60;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (plStack_60 == (long *)0x0) goto LAB_02403cf4;
        UnityEngine_GameObject__SetActive_43c1408(plStack_60,0,0);
      }
    }
  }
  lVar7 = lStack_58;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (lStack_58 == 0) goto LAB_02403cf4;
    UnityEngine_GameObject__SetActive_43c1408(lStack_58,1,0);
  }
  *(undefined8 *)(lVar8 + 200) = uVar6;
  thunk_FUN_02134474(puVar10,uVar6);
  Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips_2304628(uVar13,uVar15,lVar8,plVar11);
  if (*(long *)(lVar8 + 0x98) == 0) {
LAB_02403cf4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                    (*(long *)(lVar8 + 0x98),*(undefined8 *)PTR_DAT_04cada30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  puVar1 = PTR_DAT_04cb1220;
  if ((uVar3 & 1) != 0) {
    if (lVar8 == 0) goto LAB_02403cf4;
    uVar6 = UnityEngine_Animation__get_Item_4334ee8(lVar8,*(undefined8 *)PTR_DAT_04cb1220,0);
    uVar3 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      UnityEngine_Animation__Stop_4334660(lVar8,0);
      UnityEngine_Animation__Play_4335164(lVar8,*(undefined8 *)puVar1,0);
    }
  }
  return;
}

