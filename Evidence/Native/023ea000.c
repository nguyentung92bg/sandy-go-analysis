/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildWinStreak
void Dino_BusSand_App_UI_HomePanel__BuildWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildWinStreak
   void Dino_BusSand_App_UI_HomePanel__BuildWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__BuildWinStreak_22ea000(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar6 = PTR_DAT_04cb7520;
  puVar5 = PTR_DAT_04cb7518;
  puVar4 = PTR_DAT_04cb7510;
  puVar3 = PTR_DAT_04cb7508;
  puVar2 = PTR_DAT_04cb4f88;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c443 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7528);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb50b8);
    FUN_02132f7c(PTR_DAT_04cb4f88);
    FUN_02132f7c(PTR_DAT_04cb7508);
    FUN_02132f7c(PTR_DAT_04cb7518);
    FUN_02132f7c(PTR_DAT_04cb7510);
    FUN_02132f7c(PTR_DAT_04cb7530);
    FUN_02132f7c(PTR_DAT_04cafbb8);
    FUN_02132f7c(PTR_DAT_04cb7520);
    FUN_02132f7c(PTR_DAT_04cb7538);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caf478);
    FUN_02132f7c(PTR_DAT_04caccf0);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c443 = 1;
  }
  uVar7 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar8 = Dino_BusSand_App_UI_HomeSideArt__Build_22e7c00
                    (0xc40d0000,0x3f800000,0xbf000000,0x41c80000,0x3f000000,uVar7,
                     *(undefined8 *)puVar3,0,*(undefined8 *)puVar4,*(undefined8 *)puVar5,
                     *(undefined8 *)puVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04cad330;
  if (lVar8 != 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar8 + 0x10);
    thunk_FUN_02134474();
    uVar7 = *(undefined8 *)(lVar8 + 0x18);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cb7538;
    puVar2 = PTR_DAT_04cb7530;
    uVar14 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar15 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (uVar14,uVar15,0xbf000000,0xc2120000,0x3f800000,uVar7,
                                *(undefined8 *)puVar3,*(undefined8 *)puVar2,0,0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
      lVar10 = UnityEngine_Component__get_transform_43bcd18(plVar9,0);
      if (((*(long *)(lVar8 + 0x28) != 0) &&
          (lVar11 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar8 + 0x28),0),
          lVar11 != 0)) &&
         (uVar14 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar11,0),
         puVar3 = PTR_DAT_04cb50b8, puVar2 = PTR_DAT_04cafbb8, puVar1 = PTR_DAT_04caf478,
         lVar10 != 0)) {
        UnityEngine_Transform__SetSiblingIndex_43d4730(lVar10,uVar14,0);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar8 + 0x38);
        thunk_FUN_02134474();
        uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                          (0x42640000,0x42640000,0x428e0000,0x429c0000,*(undefined8 *)(lVar8 + 0x18)
                           ,*(undefined8 *)puVar1,0,0,0);
        puVar13 = (undefined8 *)(param_1 + 0x98);
        *puVar13 = uVar7;
        thunk_FUN_02134474(puVar13,uVar7);
        plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (0,0,0,0,0x3f800000,*puVar13,*(undefined8 *)puVar2,
                                    *(undefined8 *)puVar3,0,0);
        puVar4 = PTR_DAT_04cb4e20;
        puVar3 = PTR_DAT_04cad4a8;
        puVar2 = PTR_DAT_04caccf0;
        puVar1 = PTR_DAT_04cac878;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
          uVar7 = *(undefined8 *)(param_1 + 0x98);
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar1);
          uStack_80 = uStack_68;
          uStack_88 = uStack_70;
          uStack_90 = uStack_78;
          uVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                            (0x42180000,0x42580000,0x42400000,0,0x40000000,uVar7,
                             *(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar3,
                             &uStack_90,0x202,0);
          *(undefined8 *)(param_1 + 0xa8) = uVar7;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0xa8),uVar7);
          puVar3 = PTR_DAT_04cb7528;
          puVar2 = PTR_DAT_04cad948;
          puVar1 = PTR_DAT_04caa458;
          if (*(long *)(param_1 + 0x88) != 0) {
            uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0);
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)puVar3,0);
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar12,1,*(undefined8 *)puVar2,0);
            Dino_BusSand_App_UI_HomePanel__RefreshWinStreak_22ebfac(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

