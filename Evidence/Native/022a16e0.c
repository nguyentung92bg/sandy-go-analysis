/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$SetData
void Dino_BusSand_App_UI_ClimbTowerItemView__SetData (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, int32_t index, int32_t winPoint, int32_t rewardId, Dino_BusSand_App_UI_ClimbTowerPanel_o* panel, Dino_BusSand_App_Meta_ClimbTowerFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$SetData
   void Dino_BusSand_App_UI_ClimbTowerItemView__SetData (Dino_BusSand_App_UI_ClimbTowerItemView_o*
   __this, int32_t index, int32_t winPoint, int32_t rewardId, Dino_BusSand_App_UI_ClimbTowerPanel_o*
   panel, Dino_BusSand_App_Meta_ClimbTowerFeature_o* f, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__SetData_21a16e0
               (long param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba20 = 1;
  }
  Dino_BusSand_App_UI_ClimbTowerItemView__Init_21a1054(param_1);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),param_5);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),param_6);
  lVar6 = *(long *)puVar2;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar6 + 0xe4);
  *(int *)(param_1 + 0x38) = param_4;
  if (iVar4 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x48),0),
       lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar6,param_4 != -1,0);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_022a1854:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78
                    (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_022a1854;
    uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc
                      (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022a1854;
      uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__RisePlayed_2229bd4
                        (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
      if ((uVar7 & 1) != 0) {
        uVar3 = 1;
        goto LAB_022a183c;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
LAB_022a183c:
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  Dino_BusSand_App_UI_ClimbTowerItemView__RefreshAllUI_21a1858(param_1);
  if ((bRam0000000004f9ba22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae860);
    FUN_02132f7c(PTR_DAT_04cae868);
    FUN_02132f7c(PTR_DAT_04cae870);
    FUN_02132f7c(PTR_DAT_04cae878);
    bRam0000000004f9ba22 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0
                      (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__TreasureBoxIndex_22293ac
                        (*(long *)(param_1 + 0x28),uVar3,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        iVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__PlatformIndex_22293f8
                          (*(long *)(param_1 + 0x28),uVar3,0);
        if (*(int *)(param_1 + 0x3c) == 2) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_022a2248;
          uVar7 = Dino_BusSand_App_UI_ClimbTowerPanel__IsOpenedClaim_21a2314
                            (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
          uVar7 = uVar7 & 0xffffffff;
        }
        else {
          uVar7 = 1;
        }
        puVar2 = PTR_DAT_04ca9ae8;
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        plVar10 = (long *)0x0;
        if ((uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_022a2248;
          plVar10 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                      (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cad788);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
        if (((uVar8 & 1) != 0) && (0 < iVar4)) {
          uVar9 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
          puVar1 = (undefined8 *)PTR_DAT_04cae878;
          if ((uVar7 & 1) == 0) {
            puVar1 = (undefined8 *)PTR_DAT_04cae868;
          }
          uVar9 = System_String__Concat_46d2b84(*(undefined8 *)PTR_DAT_04cae870,uVar9,*puVar1,0);
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
          }
          uVar9 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_022a2248;
            UnityEngine_UI_Image__set_sprite_44a7258(plVar10,uVar9,0);
            (**(code **)(*plVar10 + 0x3f8))(plVar10,*(undefined8 *)(*plVar10 + 0x400));
          }
        }
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        plVar10 = (long *)0x0;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_022a2248;
          plVar10 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                      (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cad788);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
        if (((uVar7 & 1) != 0) && (0 < iVar5)) {
          uVar9 = System_Int32__ToString_482d750(&stack0xffffffffffffffc8,0);
          uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cae860,uVar9,0);
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
          }
          uVar9 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_022a2248;
            UnityEngine_UI_Image__set_sprite_44a7258(plVar10,uVar9,0);
            (**(code **)(*plVar10 + 0x3f8))(plVar10,*(undefined8 *)(*plVar10 + 0x400));
          }
        }
        return;
      }
    }
  }
LAB_022a2248:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

