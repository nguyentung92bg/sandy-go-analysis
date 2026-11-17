/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Build
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitNav__Build (UnityEngine_Transform_o* parent, int32_t selected, System_Action_o* onShop, System_Action_o* onHome, bool switches, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Build
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitNav__Build (UnityEngine_Transform_o* parent,
   int32_t selected, System_Action_o* onShop, System_Action_o* onHome, bool switches, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_KitNav__Build_2286008
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
                    /* try { // try from 02386028 to 02486037 has its CatchHandler @ 02386038 */
                    /* catch() { ... } // from try @ 02385fbc with catch @ 02386038
                       catch() { ... } // from try @ 02386028 with catch @ 02386038 */
                    /* try { // try from 0238603c to 0248603f has its CatchHandler @ 02386048 */
                    /* try { // try from 02386040 to 0248604b has its CatchHandler @ 02385b54 */
  if ((bRam0000000004f9c15e & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0238603c with catch @ 02386048
                        */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb4f20);
    FUN_02132f7c(PTR_DAT_04cb4f28);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4f30);
    FUN_02132f7c(PTR_DAT_04cb4f38);
    FUN_02132f7c(PTR_DAT_04cb4f40);
    FUN_02132f7c(PTR_DAT_04cb4f48);
    FUN_02132f7c(PTR_DAT_04cb4f50);
    FUN_02132f7c(PTR_DAT_04caf590);
    FUN_02132f7c(PTR_DAT_04cb4f58);
    FUN_02132f7c(PTR_DAT_04cb4f60);
    FUN_02132f7c(PTR_DAT_04cb4f68);
    FUN_02132f7c(PTR_DAT_04cb4f70);
    FUN_02132f7c(PTR_DAT_04cb4f78);
    FUN_02132f7c(PTR_DAT_04cb4f80);
    FUN_02132f7c(PTR_DAT_04cacf10);
    bRam0000000004f9c15e = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar4 = PTR_DAT_04cb4f50;
  puVar2 = PTR_DAT_04cacfc0;
  uVar16 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar17 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (uVar16,uVar17,0,0,param_1,*(undefined8 *)puVar4,0,0);
  puVar4 = PTR_DAT_04cb4f70;
  puVar1 = PTR_DAT_04cb4f40;
  if (lVar8 != 0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0,lVar8,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0,lVar8,0);
    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,lVar8,0);
    UnityEngine_RectTransform__set_offsetMin_43cfe84(0,0xc2f00000,lVar8,0);
    UnityEngine_RectTransform__set_offsetMax_43d0018(0,_UNK_00e20774,lVar8,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (**(undefined4 **)(*(long *)puVar2 + 0xb8),
                                (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0,_UNK_00e1fea8,
                                lVar8,*(undefined8 *)puVar1,*(undefined8 *)puVar4,1);
    puVar1 = PTR_DAT_04ca9d18;
    if (plVar9 != (long *)0x0) {
      UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
      Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0);
      (**(code **)(*plVar9 + 0x2c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
      lVar15 = *(long *)puVar1;
      lVar11 = *(long *)(lVar15 + 0x38);
      if (lVar11 == 0) {
        FUN_0216b4cc(lVar15);
        lVar11 = *(long *)(lVar15 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar7 = PTR_DAT_04cb4f80;
      puVar5 = PTR_DAT_04cb4f68;
      puVar4 = PTR_DAT_04cb4f48;
      puVar2 = PTR_DAT_04cacf10;
      lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      uVar10 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar5,*(undefined8 *)puVar2,
                          **(undefined8 **)(lVar11 + 0xb8));
      Dino_BusSand_App_UI_KitNav__Tab_2286504
                (_UNK_00e1fdd0,lVar8,*(undefined8 *)puVar7,0,param_2 == 0,*(undefined8 *)puVar4,
                 uVar10,param_3,param_5 & 1);
      lVar15 = *(long *)puVar1;
      lVar11 = *(long *)(lVar15 + 0x38);
      if (lVar11 == 0) {
        FUN_0216b4cc(lVar15);
        lVar11 = *(long *)(lVar15 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar7 = PTR_DAT_04cb4f78;
      puVar5 = PTR_DAT_04cb4f58;
      puVar4 = PTR_DAT_04cb4f38;
      puVar2 = PTR_DAT_04cb4f30;
      puVar1 = PTR_DAT_04cb4f28;
      lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      puVar6 = PTR_DAT_04cb4f60;
      puVar3 = PTR_DAT_04caf590;
      uVar10 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar5,*(undefined8 *)puVar4,
                          **(undefined8 **)(lVar11 + 0xb8));
      Dino_BusSand_App_UI_KitNav__Tab_2286504
                (_UNK_00e1ffcc,lVar8,*(undefined8 *)puVar2,1,param_2 == 1,*(undefined8 *)puVar7,
                 uVar10,param_4,param_5 & 1);
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar1;
      }
      puVar12 = *(undefined8 **)(lVar11 + 0xb8);
      uVar10 = *(undefined8 *)puVar3;
      uVar13 = *(undefined8 *)puVar6;
      lVar15 = puVar12[1];
      if (lVar15 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar14 = *puVar12;
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar15,uVar14,*(undefined8 *)PTR_DAT_04cb4f20,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar9 = lVar15;
        thunk_FUN_02134474(plVar9,lVar15);
      }
      Dino_BusSand_App_UI_KitNav__Tab_2286504(0x3f800000,lVar8,uVar13,2,0,uVar10,0,lVar15,0);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

