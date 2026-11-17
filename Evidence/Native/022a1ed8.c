/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$RefreshSprite
void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshSprite (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$RefreshSprite
   void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshSprite
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshSprite_21a1ed8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iStack_38;
  int iStack_34;
  
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
  iStack_38 = 0;
  iStack_34 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0
                      (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__TreasureBoxIndex_22293ac
                        (*(long *)(param_1 + 0x28),uVar3,0);
      iStack_34 = iVar4;
      if (*(long *)(param_1 + 0x28) != 0) {
        iVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__PlatformIndex_22293f8
                          (*(long *)(param_1 + 0x28),uVar3,0);
        iStack_38 = iVar5;
        if (*(int *)(param_1 + 0x3c) == 2) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_022a2248;
          uVar6 = Dino_BusSand_App_UI_ClimbTowerPanel__IsOpenedClaim_21a2314
                            (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
          uVar6 = uVar6 & 0xffffffff;
        }
        else {
          uVar6 = 1;
        }
        puVar2 = PTR_DAT_04ca9ae8;
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        plVar9 = (long *)0x0;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_022a2248;
          plVar9 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                     (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cad788);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
        if (((uVar7 & 1) != 0) && (0 < iVar4)) {
          uVar8 = System_Int32__ToString_482d750(&iStack_34,0);
          puVar1 = (undefined8 *)PTR_DAT_04cae878;
          if ((uVar6 & 1) == 0) {
            puVar1 = (undefined8 *)PTR_DAT_04cae868;
          }
          uVar8 = System_String__Concat_46d2b84(*(undefined8 *)PTR_DAT_04cae870,uVar8,*puVar1,0);
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
          }
          uVar8 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar6 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_022a2248;
            UnityEngine_UI_Image__set_sprite_44a7258(plVar9,uVar8,0);
            (**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
          }
        }
        uVar8 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        plVar9 = (long *)0x0;
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_022a2248;
          plVar9 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                     (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cad788);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
        if (((uVar6 & 1) != 0) && (0 < iVar5)) {
          uVar8 = System_Int32__ToString_482d750(&iStack_38,0);
          uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cae860,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
          }
          uVar8 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar6 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_022a2248;
            UnityEngine_UI_Image__set_sprite_44a7258(plVar9,uVar8,0);
            (**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
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

