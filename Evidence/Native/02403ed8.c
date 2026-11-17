/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnNamePlateSelected
void Dino_BusSand_App_UI_PlayerSettingPanel__OnNamePlateSelected (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024040c0) */
/* WARNING: Removing unreachable block (ram,0x024040d4) */
/* WARNING: Removing unreachable block (ram,0x024040d8) */
/* WARNING: Removing unreachable block (ram,0x024040f0) */
/* WARNING: Removing unreachable block (ram,0x024040f4) */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnNamePlateSelected
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnNamePlateSelected
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o*
   it, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnNamePlateSelected_2303ed8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plStack_60;
  long lStack_58;
  
  if ((bRam0000000004f9c4e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7dc8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02403eb8 with catch @ 02403f0c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02403eac with catch @ 02403f10
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02403e98 with catch @ 02403f14
                        */
    FUN_02132f7c(PTR_DAT_04cb7dd0);
    FUN_02132f7c(PTR_DAT_04cb7dd8);
    FUN_02132f7c(PTR_DAT_04cb7de0);
                    /* try { // try from 02403f30 to 02503f33 has its CatchHandler @ 02403f54 */
                    /* try { // try from 02403f34 to 02503f57 has its CatchHandler @ 02403d48 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
                    /* catch() { ... } // from try @ 02403f30 with catch @ 02403f54 */
                    /* try { // try from 02403f58 to 02503f5f has its CatchHandler @ 02403f68 */
    FUN_02132f7c(PTR_DAT_04cabdb0);
                    /* try { // try from 02403f60 to 02503f6b has its CatchHandler @ 02403d48 */
    bRam0000000004f9c4e2 = 1;
  }
  puVar2 = PTR_DAT_04cb7ab8;
  puVar1 = PTR_DAT_04cae570;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02403f58 with catch @ 02403f68
                        */
  lStack_58 = 0;
  if (param_2 == 0) {
LAB_0240415c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(param_2 + 0x48) == '\0') {
    Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(param_1);
    uVar12 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__SetNamePlate_226d3e0(uVar12,0);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(0);
      if (lVar7 == 0) goto LAB_0240415c;
      Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate_22d00b0(lVar7,uVar12,0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_58,*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cb7de0);
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
  plVar10 = *(long **)(param_2 + 0x20);
  uVar12 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_PlayerIdentity__DecorateLockTips_226dbc8(uVar12,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar12 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x50);
  uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x54);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
                    /* try { // try from 02403fd8 to 0250428f has its CatchHandler @ 02403fd8
                       catch() { ... } // from try @ 02403fd8 with catch @ 02403fd8
                       catch() { ... } // from try @ 024042dc with catch @ 02403fd8
                       catch() { ... } // from try @ 024043b4 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404478 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404534 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404720 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404748 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404788 with catch @ 02403fd8
                       catch() { ... } // from try @ 024047b4 with catch @ 02403fd8
                       catch() { ... } // from try @ 024047e0 with catch @ 02403fd8
                       catch() { ... } // from try @ 02404808 with catch @ 02403fd8
                       catch() { ... } // from try @ 0240482c with catch @ 02403fd8
                       catch() { ... } // from try @ 02404858 with catch @ 02403fd8 */
    if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
      plVar10 = (long *)0x0;
    }
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
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  plStack_60 = (long *)0x0;
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x98),0), lVar7 == 0
     )) goto LAB_02403cf4;
  UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
  puVar2 = PTR_DAT_04cb7df8;
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_02403cf4;
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_1 + 0xc0),uVar6,&lStack_58,*(undefined8 *)PTR_DAT_04cb7df8);
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
      uVar8 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = UnityEngine_Object__Instantiate_object__2805310
                          (lVar7,uVar8,0,*(undefined8 *)PTR_DAT_04cad390);
        lStack_58 = lVar4;
        if (((lVar7 == 0) || (uVar8 = UnityEngine_Object__get_name_43c71a4(lVar7,0), lVar4 == 0)) ||
           (UnityEngine_Object__set_name_43c72ec(lVar4,uVar8,0), lStack_58 == 0)) goto LAB_02403cf4;
        plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar11 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
          plVar5 = (long *)0x0;
        }
        Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                  (uVar11,uVar13,uVar11,uVar13,plVar5,0);
        if (lStack_58 == 0) goto LAB_02403cf4;
        uVar8 = UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (*(int *)(*(long *)PTR_DAT_04cb7ab8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb7ab8);
        }
        Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts_2304344(uVar8);
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_02403cf4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*(long *)(param_1 + 0xc0),uVar6,lStack_58,*(undefined8 *)PTR_DAT_04cb7e00);
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
  puVar9 = (undefined8 *)(param_1 + 200);
  uVar3 = System_String__IsNullOrEmpty_46d2084(*puVar9,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__op_Inequality_46d110c(*puVar9,uVar6,0), (uVar3 & 1) != 0)) {
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_02403cf4;
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0xc0),*puVar9,&plStack_60,*(undefined8 *)puVar2);
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
  *(undefined8 *)(param_1 + 200) = uVar6;
  thunk_FUN_02134474(puVar9,uVar6);
  Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips_2304628(uVar12,uVar14,param_1,plVar10);
  if (*(long *)(param_1 + 0x98) == 0) {
LAB_02403cf4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                    (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_04cada30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  puVar1 = PTR_DAT_04cb1220;
  if ((uVar3 & 1) != 0) {
    if (lVar7 == 0) goto LAB_02403cf4;
    uVar6 = UnityEngine_Animation__get_Item_4334ee8(lVar7,*(undefined8 *)PTR_DAT_04cb1220,0);
    uVar3 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      UnityEngine_Animation__Stop_4334660(lVar7,0);
      UnityEngine_Animation__Play_4335164(lVar7,*(undefined8 *)puVar1,0);
    }
  }
  return;
}

