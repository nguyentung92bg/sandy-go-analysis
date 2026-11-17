/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$ShowLockTips
void Dino_BusSand_App_UI_PlayerSettingPanel__ShowLockTips (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, UnityEngine_RectTransform_o* target, System_String_o* path, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$ShowLockTips
   void Dino_BusSand_App_UI_PlayerSettingPanel__ShowLockTips
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, UnityEngine_RectTransform_o* target,
   System_String_o* path, UnityEngine_Vector2_o offset, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__ShowLockTips_2303868
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR_DAT_04ca9ae8;
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
  uVar7 = *(undefined8 *)(param_3 + 0x98);
  lStack_60 = 0;
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_5,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_3 + 0x98) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x98),0), lVar4 == 0
     )) goto LAB_02403cf4;
  UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
  puVar2 = PTR_DAT_04cb7df8;
  if (*(long *)(param_3 + 0xc0) == 0) goto LAB_02403cf4;
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_3 + 0xc0),param_5,&lStack_58,*(undefined8 *)PTR_DAT_04cb7df8);
  lVar4 = lStack_58;
  if ((uVar3 & 1) == 0) {
LAB_024039c4:
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_UiAssets__Prefab_21513b8(param_5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_3 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar5 = UnityEngine_Object__Instantiate_object__2805310
                          (lVar4,uVar7,0,*(undefined8 *)PTR_DAT_04cad390);
        lStack_58 = lVar5;
        if (((lVar4 == 0) || (uVar7 = UnityEngine_Object__get_name_43c71a4(lVar4,0), lVar5 == 0)) ||
           (UnityEngine_Object__set_name_43c72ec(lVar5,uVar7,0), lStack_58 == 0)) goto LAB_02403cf4;
        plVar6 = (long *)UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar9 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar10 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)0x0;
        }
        else if (*plVar6 != *(long *)PTR_DAT_04cabdb0) {
          plVar6 = (long *)0x0;
        }
        Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c(uVar9,uVar10,uVar9,uVar10,plVar6,0)
        ;
        if (lStack_58 == 0) goto LAB_02403cf4;
        uVar7 = UnityEngine_GameObject__get_transform_43c1048(lStack_58,0);
        if (*(int *)(*(long *)PTR_DAT_04cb7ab8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb7ab8);
        }
        Dino_BusSand_App_UI_PlayerSettingPanel__LockTipTexts_2304344(uVar7);
        if (*(long *)(param_3 + 0xc0) == 0) goto LAB_02403cf4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*(long *)(param_3 + 0xc0),param_5,lStack_58,*(undefined8 *)PTR_DAT_04cb7e00);
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar3 & 1) != 0) goto LAB_024039c4;
  }
  puVar8 = (undefined8 *)(param_3 + 200);
  uVar3 = System_String__IsNullOrEmpty_46d2084(*puVar8,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__op_Inequality_46d110c(*puVar8,param_5,0), (uVar3 & 1) != 0)) {
    if (*(long *)(param_3 + 0xc0) == 0) goto LAB_02403cf4;
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_3 + 0xc0),*puVar8,&lStack_60,*(undefined8 *)puVar2);
    lVar4 = lStack_60;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (lStack_60 == 0) goto LAB_02403cf4;
        UnityEngine_GameObject__SetActive_43c1408(lStack_60,0,0);
      }
    }
  }
  lVar4 = lStack_58;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (lStack_58 == 0) goto LAB_02403cf4;
    UnityEngine_GameObject__SetActive_43c1408(lStack_58,1,0);
  }
  *(undefined8 *)(param_3 + 200) = param_5;
  thunk_FUN_02134474(puVar8,param_5);
  Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips_2304628(param_1,param_2,param_3,param_4);
  if (*(long *)(param_3 + 0x98) != 0) {
    lVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*(long *)(param_3 + 0x98),*(undefined8 *)PTR_DAT_04cada30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    puVar1 = PTR_DAT_04cb1220;
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_02403cf4;
      uVar7 = UnityEngine_Animation__get_Item_4334ee8(lVar4,*(undefined8 *)PTR_DAT_04cb1220,0);
      uVar3 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        UnityEngine_Animation__Stop_4334660(lVar4,0);
        UnityEngine_Animation__Play_4335164(lVar4,*(undefined8 *)puVar1,0);
      }
    }
    return;
  }
LAB_02403cf4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

