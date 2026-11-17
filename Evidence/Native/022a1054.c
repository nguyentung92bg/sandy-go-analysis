/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$Init
void Dino_BusSand_App_UI_ClimbTowerItemView__Init (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$Init
   void Dino_BusSand_App_UI_ClimbTowerItemView__Init (Dino_BusSand_App_UI_ClimbTowerItemView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__Init_21a1054(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if ((bRam0000000004f9ba1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cae778);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae780);
    FUN_02132f7c(PTR_DAT_04cae788);
    FUN_02132f7c(PTR_DAT_04cae790);
    FUN_02132f7c(PTR_DAT_04cae798);
    FUN_02132f7c(PTR_DAT_04cae7a0);
    FUN_02132f7c(PTR_DAT_04cae7a8);
    FUN_02132f7c(PTR_DAT_04cabc30);
    FUN_02132f7c(PTR_DAT_04cae7b0);
    FUN_02132f7c(PTR_DAT_04cae7b8);
    FUN_02132f7c(PTR_DAT_04cae7c0);
    FUN_02132f7c(PTR_DAT_04cae7c8);
    FUN_02132f7c(PTR_DAT_04cae7d0);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae7d8);
    FUN_02132f7c(PTR_DAT_04cae7e0);
    bRam0000000004f9ba1f = 1;
  }
  puVar2 = PTR_DAT_04cae7a8;
  if (*(char *)(param_1 + 0x42) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  lVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)puVar2);
  plVar10 = (long *)(param_1 + 0x48);
  *plVar10 = lVar3;
  thunk_FUN_02134474(plVar10,lVar3);
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7c8)
  ;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  thunk_FUN_02134474();
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7b8)
  ;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_02134474();
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7c0)
  ;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_02134474();
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7d0)
  ;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_02134474();
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7d8)
  ;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  thunk_FUN_02134474();
  lVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae780)
  ;
  plVar8 = (long *)(param_1 + 0x78);
  *plVar8 = lVar3;
  thunk_FUN_02134474(plVar8,lVar3);
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae788)
  ;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  thunk_FUN_02134474();
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7b0)
  ;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  thunk_FUN_02134474();
  puVar2 = PTR_DAT_04ca9ae8;
  lVar3 = *plVar10;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_022a15ec;
    uVar4 = UnityEngine_Component__get_gameObject_43bcde8(*plVar10,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)PTR_DAT_04cae778,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar4,uVar6,0,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  lVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cabc30)
  ;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar3 == 0) goto LAB_022a15ec;
    uVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)PTR_DAT_04cae778,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar4,uVar6,1,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  lVar3 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar8 == 0) {
LAB_022a15ec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)PTR_DAT_04cae778,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar4,uVar6,0,*(undefined8 *)PTR_DAT_04cad948,0);
  }
  uVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae7e0)
  ;
  puVar2 = PTR_DAT_04ca9d18;
  lVar7 = *(long *)PTR_DAT_04ca9d18;
  lVar3 = *(long *)(lVar7 + 0x38);
  if (lVar3 == 0) {
    FUN_0216b4cc(lVar7);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0216b470();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0216b470();
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  uVar6 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cae790,uVar6,0);
  Dino_BusSand_App_UI_ClimbTowerItemView__SetTexts_21a15f0(uVar4,uVar6);
  lVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)PTR_DAT_04cae798)
  ;
  lVar9 = *(long *)puVar2;
  lVar7 = *(long *)(lVar9 + 0x38);
  if (lVar7 == 0) {
    FUN_0216b4cc(lVar9);
    lVar7 = *(long *)(lVar9 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  uVar4 = Dino_BusSand_App_Lang__Get_215f9c0
                    (*(undefined8 *)PTR_DAT_04cae7a0,**(undefined8 **)(lVar7 + 0xb8),0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba29 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar5 & 1) == 0) {
    if ((lVar3 == 0) ||
       (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar3,1,*(undefined8 *)PTR_DAT_04cada48), lVar3 == 0)) {
LAB_022a16d8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar8 = *(long **)(lVar3 + 0x20 + lVar7 * 8);
        if (plVar8 == (long *)0x0) goto LAB_022a16d8;
        (**(code **)(*plVar8 + 0x518))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 0x520));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

