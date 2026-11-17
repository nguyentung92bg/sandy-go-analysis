/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$OnOpen
void Dino_BusSand_App_UI_LoadingPanel__OnOpen (Dino_BusSand_App_UI_LoadingPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$OnOpen
   void Dino_BusSand_App_UI_LoadingPanel__OnOpen (Dino_BusSand_App_UI_LoadingPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_LoadingPanel__OnOpen_22bbd88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c30e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cb64f8);
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6500);
    FUN_02132f7c(PTR_DAT_04cb0c20);
    FUN_02132f7c(PTR_DAT_04caf390);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb6508);
    FUN_02132f7c(PTR_DAT_04cb6510);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cb3640);
    FUN_02132f7c(PTR_DAT_04cb6518);
    FUN_02132f7c(PTR_DAT_04cb6520);
    FUN_02132f7c(PTR_DAT_04cb6528);
    FUN_02132f7c(PTR_DAT_04cb6530);
    bRam0000000004f9c30e = 1;
  }
  puVar2 = PTR_DAT_04cb6508;
  uVar9 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar10 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar9,*(undefined8 *)puVar2,0);
  if ((lVar10 != 0) &&
     (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), puVar2 = PTR_DAT_04cb6520,
     puVar1 = PTR_DAT_04cb0c20, lVar11 != 0)) {
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar11,*(undefined8 *)PTR_DAT_04cb1b08);
    lVar10 = Dino_BusSand_App_UI_UiKit__Img_228203c
                       (_UNK_00e2026c,_UNK_00e2085c,0,0,0x3f800000,lVar10,*(undefined8 *)puVar1,
                        *(undefined8 *)puVar2,0,0);
    if (lVar10 != 0) {
      UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar10,0,0);
      lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      if ((lVar10 != 0) &&
         (lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar10,*(undefined8 *)PTR_DAT_04cb64f8), puVar2 = PTR_DAT_04cb3640,
         puVar1 = PTR_DAT_04ca9d18, lVar10 != 0)) {
        *(undefined8 *)(lVar10 + 0x20) = _UNK_00e6a700;
        *(undefined4 *)(lVar10 + 0x28) = 0xb6c40c41;
        uVar9 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        uVar9 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                          (0x44870000,_UNK_00e20028,0,0,uVar9,*(undefined8 *)puVar2,0,0,0);
        lVar11 = *(long *)puVar1;
        lVar10 = *(long *)(lVar11 + 0x38);
        if (lVar10 == 0) {
          FUN_0216b4cc(lVar11);
          lVar10 = *(long *)(lVar11 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0216b470();
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar8 = PTR_DAT_04cb6530;
        puVar7 = PTR_DAT_04cb6528;
        puVar6 = PTR_DAT_04cb6518;
        puVar5 = PTR_DAT_04cb6500;
        puVar4 = PTR_DAT_04caf418;
        puVar3 = PTR_DAT_04caf410;
        puVar2 = PTR_DAT_04caf3c8;
        puVar1 = PTR_DAT_04caf390;
        lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0216b470();
        }
        uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)puVar8,*(undefined8 *)puVar7,
                            **(undefined8 **)(lVar10 + 0xb8),0);
        puVar13 = (undefined8 *)(param_1 + 0x48);
        *puVar13 = uVar12;
        thunk_FUN_02134474(puVar13,uVar12);
        uStack_78 = 0;
        uStack_70 = 0;
        uVar12 = *puVar13;
        uStack_68 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,
                   *(undefined8 *)PTR_DAT_04cac878);
        uStack_80 = uStack_68;
        uStack_88 = uStack_70;
        uStack_90 = uStack_78;
        uVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                           (0x42900000,0x442f0000,0x42c80000,0,0,uVar9,
                            *(undefined8 *)PTR_DAT_04cb6510,uVar12,*(undefined8 *)PTR_DAT_04caf460,
                            &uStack_90,0x202,0);
        puVar13 = (undefined8 *)(param_1 + 0x40);
        *puVar13 = uVar12;
        thunk_FUN_02134474(puVar13,uVar12);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (_UNK_00e2046c,0,*puVar13,*(undefined8 *)puVar4);
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar9 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                          (0x44470000,0x431a0000,0,0,0x3f800000,uVar9,*(undefined8 *)puVar1,
                           *(undefined8 *)puVar6,&uStack_a8,0);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (0x44f40000,0,uVar9,*(undefined8 *)puVar3);
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        lVar10 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                           (0x42f40000,0x42f40000,0,0,0x3f800000,uVar9,*(undefined8 *)puVar2,
                            *(undefined8 *)puVar5,&uStack_c0,0);
        if (lVar10 != 0) {
          UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar10,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar10,0);
          UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f000000,lVar10,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x41800000,0x40800000,lVar10,0);
          *(long *)(param_1 + 0x38) = lVar10;
          thunk_FUN_02134474((long *)(param_1 + 0x38),lVar10);
          Dino_BusSand_App_UI_LoadingPanel__SetProgress_22bc290
                    (*(undefined4 *)(param_1 + 0x50),param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

