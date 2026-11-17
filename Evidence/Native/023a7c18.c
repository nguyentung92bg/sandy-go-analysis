/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Setup
void Dino_BusSand_App_UI_CommerceCoinBar__Setup (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int32_t itemId, bool clickable, System_Action_o* onClick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Setup
   void Dino_BusSand_App_UI_CommerceCoinBar__Setup (Dino_BusSand_App_UI_CommerceCoinBar_o* __this,
   int32_t itemId, bool clickable, System_Action_o* onClick, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceCoinBar__Setup_22a7c18
               (long param_1,int param_2,byte param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04cada10;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c290 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb5da0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cb5da8);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cada10);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb4ec8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c290 = 1;
  }
  *(int *)(param_1 + 0x20) = param_2;
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar5 = 0;
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_023a80e4;
    uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar6,*(undefined8 *)PTR_DAT_04cad790);
  }
  puVar4 = PTR_DAT_04cae5d0;
  puVar3 = PTR_DAT_04cadc80;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_02134474();
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)puVar4,0);
  plVar8 = (long *)(param_1 + 0x30);
  *plVar8 = lVar6;
  thunk_FUN_02134474(plVar8,lVar6);
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar5 = 0;
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_023a80e4;
    uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar6,*(undefined8 *)PTR_DAT_04cada30);
  }
  puVar3 = PTR_DAT_04cb4ec8;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474();
  bVar1 = 0;
  if (param_4 != 0) {
    bVar1 = param_2 != 0x3eb & param_3;
  }
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0)
       ) goto LAB_023a80e4;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,bVar1,0);
  }
  puVar3 = PTR_DAT_04cb5da8;
  lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                    (param_1,*(undefined8 *)PTR_DAT_04cb5da8);
  if (bVar1 == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) goto LAB_023a80e4;
      uVar5 = 0;
      goto LAB_023a7f64;
    }
  }
  else {
    uVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,param_4,1,*(undefined8 *)PTR_DAT_04cad948,0);
    lVar6 = UnityEngine_Component__GetComponent_object__26f97e8(param_1,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) goto LAB_023a80e4;
      uVar5 = 1;
LAB_023a7f64:
      UnityEngine_Behaviour__set_enabled_43bc50c(lVar6,uVar5,0);
    }
  }
  if (param_2 != 0x3e9) {
    lVar6 = *plVar8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*plVar8 == 0) {
LAB_023a80e4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*plVar8,*(undefined8 *)PTR_DAT_04cad788);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      uVar5 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(param_2,1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar6 == 0) goto LAB_023a80e4;
          UnityEngine_UI_Image__set_sprite_44a7258(lVar6,uVar5,0);
        }
      }
    }
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
  Dino_BusSand_App_UI_CommerceCoinBar__SetImmediate_22a8240(param_1,uVar5);
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar5,param_1,*(undefined8 *)PTR_DAT_04cb5da0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__add_ItemChanged_226f620(uVar5,0);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}

