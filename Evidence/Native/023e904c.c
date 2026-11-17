/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnOpen
void Dino_BusSand_App_UI_HomePanel__OnOpen (Dino_BusSand_App_UI_HomePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnOpen
   void Dino_BusSand_App_UI_HomePanel__OnOpen (Dino_BusSand_App_UI_HomePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__OnOpen_22e904c(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar6 = PTR_DAT_04cb7478;
  puVar3 = PTR_DAT_04cb7470;
  puVar5 = PTR_DAT_04cac6c0;
  puVar4 = PTR_DAT_04caa458;
  if ((bRam0000000004f9c43a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb7480);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cb7138);
    FUN_02132f7c(PTR_DAT_04cb7488);
    FUN_02132f7c(PTR_DAT_04cb7490);
    FUN_02132f7c(PTR_DAT_04cb7498);
    FUN_02132f7c(PTR_DAT_04cb7470);
    FUN_02132f7c(PTR_DAT_04cb7478);
    FUN_02132f7c(PTR_DAT_04cb74a0);
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c43a = 1;
  }
  Dino_BusSand_App_UI_HomePanel__BuildBackground_22e9784(param_1);
  plVar9 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)puVar3,0);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)puVar6,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04caba50;
  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar9);
  }
  lVar12 = Dino_BusSand_App_UI_HomeAtelier__Build_22d490c(plVar9,uVar18,uVar10,uVar11,0);
  plVar9 = (long *)(param_1 + 0x50);
  *plVar9 = lVar12;
  thunk_FUN_02134474(plVar9,lVar12);
  lVar12 = *plVar9;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar5;
  }
  uVar10 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  uVar10 = 0;
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar13 = *(long *)puVar5;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar5;
    }
    if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_023e9770;
    uVar10 = *(undefined8 *)(**(long **)(lVar13 + 0xb8) + 0x90);
  }
  puVar6 = PTR_DAT_04cb74a8;
  puVar5 = PTR_DAT_04cb74a0;
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7480);
  System_Func_Nullable_Vector3_____ctor_379cb9c(uVar11,param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_UI_HomeStage__Build_22e9a20(lVar12,uVar10,uVar11);
  plVar17 = (long *)(param_1 + 0x58);
  *plVar17 = lVar12;
  thunk_FUN_02134474(plVar17,lVar12);
  lVar12 = *plVar17;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  if ((uVar14 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04cb7138 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_HomeBeach__Build_22dea44(uVar10,0);
  }
  else {
    lVar12 = *plVar9;
    if (lVar12 == 0) goto LAB_023e9770;
    *(undefined8 *)(lVar12 + 0x100) = *(undefined8 *)(param_1 + 0x58);
    thunk_FUN_02134474(lVar12 + 0x100);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_023e9770;
    lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                       (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cad788);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar12 == 0) goto LAB_023e9770;
      UnityEngine_Behaviour__set_enabled_43bc50c(lVar12,0,0);
    }
  }
  puVar8 = PTR_DAT_04cb7498;
  puVar7 = PTR_DAT_04cb7490;
  puVar6 = PTR_DAT_04cb7488;
  puVar5 = PTR_DAT_04caf420;
  uVar10 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar11,0,*(undefined8 *)puVar8,0);
  uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar18,param_1,*(undefined8 *)puVar6,0);
  uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar15,param_1,*(undefined8 *)puVar7,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_UI_KitTopBar__Build_2283ff0
                     (0xc30d0000,uVar10,uVar11,uVar18,uVar15,0,1,0,0);
  if (lVar12 != 0) {
    lVar12 = Dino_BusSand_App_UI_KitTopBar__AddShade_2285574(lVar12,0xffffffff,0);
    uVar10 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Action___ctor_47b5ed0(uVar11,0,*(undefined8 *)puVar8,0);
    uVar10 = Dino_BusSand_App_UI_KitNav__Build_2286008(uVar10,1,uVar11,0,0,0);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar10);
    Dino_BusSand_App_UI_HomePanel__BuildRemoveAds_22e9cc4(param_1);
    Dino_BusSand_App_UI_HomePanel__BuildWinStreak_22ea000(param_1);
    Dino_BusSand_App_UI_HomePanel__BuildSideButtons_22ea48c(param_1);
    uVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    Dino_BusSand_App_UI_StreakHomeBar__Build_21b4cb4(uVar11,0);
    Dino_BusSand_App_UI_HomePanel__Refresh_22ea830(param_1);
    puVar4 = PTR_DAT_04cad4c0;
    if (lVar12 != 0) {
      plVar9 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar12,0);
      uVar1 = _UNK_00e203f4;
      puVar2 = (undefined8 *)PTR_DAT_04cb18b8;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
        uVar1 = _UNK_00e203f4;
        puVar2 = (undefined8 *)PTR_DAT_04cb18b8;
      }
      _UNK_00e203f4 = uVar1;
      PTR_DAT_04cb18b8 = (undefined *)puVar2;
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar9);
      }
      Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0x435c0000,_UNK_00e20af8,uVar1,plVar9,1,0);
      Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc
                (0,0xc3be0000,_UNK_00e20174,_UNK_00e205ac,uVar10,0,0);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar12 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uStack_80 = 0;
      uStack_78 = 0;
      System_Nullable_Vector3____ctor_2bd0e4c
                (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                 *(undefined4 *)(lVar12 + 0x14),&uStack_80,*puVar2);
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (_UNK_00e2065c,_UNK_00e20094,uVar1,0x40000000,uVar10,uStack_80,uStack_78,0);
      *(undefined1 *)(param_1 + 0x4c) = 1;
      if (((param_2 == (long *)0x0) || (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x48))) ||
         (piVar16 = (int *)thunk_FUN_0216e9e4(param_2), *piVar16 < 1)) {
        lVar12 = *plVar17;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
        if ((uVar14 & 1) != 0) {
          if (*plVar17 == 0) goto LAB_023e9770;
          Dino_BusSand_App_UI_HomeStage__Enter_22eb058(_UNK_00e20328);
        }
      }
      else {
        Dino_BusSand_App_UI_HomePanel__Homecoming_22eafc0(param_1);
      }
      return;
    }
  }
LAB_023e9770:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

