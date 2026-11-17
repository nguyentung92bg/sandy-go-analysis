/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$BindHall
void Dino_BusSand_App_Meta_YachtRacingFeature__BindHall (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022e90e8) */
/* WARNING: Removing unreachable block (ram,0x022e90f8) */
/* WARNING: Removing unreachable block (ram,0x022e9118) */
/* WARNING: Removing unreachable block (ram,0x022e912c) */
/* WARNING: Removing unreachable block (ram,0x022e916c) */
/* WARNING: Removing unreachable block (ram,0x022e9170) */
/* WARNING: Removing unreachable block (ram,0x022e9174) */
/* WARNING: Removing unreachable block (ram,0x022e9190) */
/* WARNING: Removing unreachable block (ram,0x022e91a4) */
/* WARNING: Removing unreachable block (ram,0x022e91a8) */
/* WARNING: Removing unreachable block (ram,0x044d1c04) */
/* WARNING: Removing unreachable block (ram,0x044d1c18) */
/* WARNING: Removing unreachable block (ram,0x044d1c1c) */
/* WARNING: Removing unreachable block (ram,0x044d1c24) */
/* WARNING: Removing unreachable block (ram,0x044d1c30) */
/* WARNING: Removing unreachable block (ram,0x044d1c44) */
/* WARNING: Removing unreachable block (ram,0x044d1c64) */
/* WARNING: Removing unreachable block (ram,0x044d1c60) */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$BindHall
   void Dino_BusSand_App_Meta_YachtRacingFeature__BindHall
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__BindHall_225c5f8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bbdd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0f18,param_1,0);
    FUN_02132f7c(PTR_DAT_04cb0f20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0f28);
    bRam0000000004f9bbdd = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((param_1 == 0) || ((uVar8 & 1) != 0)) {
    return;
  }
  if (param_2 == 0) {
LAB_022e8214:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cb0f28,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (lVar9 == 0) goto LAB_022e8214;
  lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                     (lVar9,*(undefined8 *)PTR_DAT_04cb0f18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar8 & 1) != 0) {
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
    if (lVar9 == 0) goto LAB_022e8214;
    lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar9,*(undefined8 *)PTR_DAT_04cb0f20);
  }
  puVar4 = PTR_DAT_04cb0f30;
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar10 == 0) goto LAB_022e8214;
  if ((bRam0000000004f9bbdf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0f38);
    FUN_02132f7c(PTR_DAT_04cb0f40);
    FUN_02132f7c(PTR_DAT_04cb0f48);
    FUN_02132f7c(PTR_DAT_04cb0f30);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cad4e8);
    FUN_02132f7c(PTR_DAT_04cb0f50);
    FUN_02132f7c(PTR_DAT_04cb0f58);
    FUN_02132f7c(PTR_DAT_04cb0f60);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bbdf = 1;
  }
  Dino_BusSand_App_UI_YachtRacingHallButton__Detach_21e8a04(lVar10);
  uVar15 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar8 & 1) != 0) {
    uVar15 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,lVar10,0);
    if ((uVar8 & 1) != 0) {
      if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_022e8980;
      Dino_BusSand_App_UI_YachtRacingHallButton__Detach_21e8a04();
    }
  }
  **(long **)(*(long *)puVar4 + 0xb8) = lVar10;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),lVar10);
  *(long *)(lVar10 + 0x20) = param_2;
  thunk_FUN_02134474((long *)(lVar10 + 0x20),param_2);
  puVar5 = PTR_DAT_04cb0f40;
  puVar3 = PTR_DAT_04cad948;
  puVar4 = PTR_DAT_04caa458;
  if (param_1 == 0) {
LAB_022e8980:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1,0);
  plVar14 = (long *)(lVar10 + 0x28);
  *plVar14 = lVar9;
  thunk_FUN_02134474(plVar14,lVar9);
  *(undefined2 *)(lVar10 + 0x8c) = 0;
  Dino_BusSand_App_UI_YachtRacingHallButton__InitComponent_21e8b7c(lVar10);
  uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar11,lVar10,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar15,uVar11,1,*(undefined8 *)puVar3,0);
  uVar15 = *(undefined8 *)(lVar10 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  uVar15 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0x38) == 0) goto LAB_022e8980;
    uVar15 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(lVar10 + 0x38),*(undefined8 *)PTR_DAT_04cb0f60,0);
  }
  puVar3 = PTR_DAT_04ca9d18;
  lVar17 = *(long *)PTR_DAT_04ca9d18;
  lVar9 = *(long *)(lVar17 + 0x38);
  if (lVar9 == 0) {
    FUN_0216b4cc(lVar17);
    lVar9 = *(long *)(lVar17 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cad4e8;
  lVar9 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  uVar11 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar9 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar15,uVar11,0);
  uVar15 = *(undefined8 *)(lVar10 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  uVar15 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0x50) == 0) goto LAB_022e8980;
    uVar15 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(lVar10 + 0x50),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  lVar17 = *(long *)puVar3;
  lVar9 = *(long *)(lVar17 + 0x38);
  if (lVar9 == 0) {
    FUN_0216b4cc(lVar17);
    lVar9 = *(long *)(lVar17 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cadcc8;
  lVar9 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  uVar11 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar9 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar15,uVar11,0);
  uVar15 = *(undefined8 *)(lVar10 + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  uVar15 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0x58) == 0) goto LAB_022e8980;
    uVar15 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(lVar10 + 0x58),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  lVar17 = *(long *)puVar3;
  lVar9 = *(long *)(lVar17 + 0x38);
  if (lVar9 == 0) {
    FUN_0216b4cc(lVar17);
    lVar9 = *(long *)(lVar17 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb0f50;
  lVar9 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  uVar11 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar9 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar15,uVar11,0);
  uVar15 = *(undefined8 *)(lVar10 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  lVar9 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) goto LAB_022e8980;
    lVar9 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(lVar10 + 0x30),*(undefined8 *)PTR_DAT_04cb0f58,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  lVar17 = 0;
  if ((uVar8 & 1) != 0) {
    if (lVar9 == 0) goto LAB_022e8980;
    lVar17 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar9,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
  if ((uVar8 & 1) != 0) {
    if (lVar17 == 0) goto LAB_022e8980;
    UnityEngine_Behaviour__set_enabled_43bc50c(lVar17,1,0);
  }
  puVar3 = PTR_DAT_04cb0f48;
  if (*plVar14 == 0) goto LAB_022e8980;
  plVar16 = (long *)(*plVar14 + 0x30);
  lVar9 = *plVar16;
  uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar15,lVar10,*(undefined8 *)puVar3,0);
  plVar12 = (long *)System_Delegate__Combine_4872324(lVar9,uVar15,0);
  if (plVar12 == (long *)0x0) {
    *plVar16 = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    if ((*plVar12 != lVar9) || (*plVar16 = (long)plVar12, *plVar12 != lVar9)) goto LAB_022e8854;
  }
  thunk_FUN_02134474(plVar16,plVar12);
  puVar3 = PTR_DAT_04cb0f38;
  if (*plVar14 == 0) goto LAB_022e8980;
  plVar16 = (long *)(*plVar14 + 0x38);
  lVar9 = *plVar16;
  uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar15,lVar10,*(undefined8 *)puVar3,0);
  plVar12 = (long *)System_Delegate__Combine_4872324(lVar9,uVar15,0);
  if (plVar12 == (long *)0x0) {
    *plVar16 = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    if ((*plVar12 != lVar9) || (*plVar16 = (long)plVar12, *plVar12 != lVar9)) {
LAB_022e8854:
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar12);
    }
  }
  thunk_FUN_02134474(plVar16,plVar12);
  lVar9 = *(long *)puVar2;
  uVar15 = *(undefined8 *)(lVar10 + 0x40);
  *(undefined1 *)(lVar10 + 0x8f) = 1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  uVar15 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0x40) == 0) goto LAB_022e8980;
    uVar15 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(lVar10 + 0x40),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  if (*plVar14 == 0) goto LAB_022e8980;
  uVar11 = Dino_BusSand_App_Meta_YachtRacingCore__get_EndTime_22554f4(*plVar14,0);
  uVar11 = Dino_BusSand_App_UI_YachtRacingUi__RemainText_21f88d0(uVar11,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar15,uVar11,0);
  *(undefined1 *)(lVar10 + 0x8e) = 1;
  *(int *)(lVar10 + 0x90) = *(int *)(lVar10 + 0x90) + 1;
  uVar15 = Dino_BusSand_App_UI_YachtRacingHallButton__Tick_21e9010(lVar10);
  if (param_2 == 0) goto LAB_022e8980;
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_2,uVar15,0);
  if (*plVar14 == 0) goto LAB_022e8980;
  uVar8 = Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide_225556c(*plVar14,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar14 == 0) goto LAB_022e8980;
    uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*plVar14,0);
    *(undefined4 *)(lVar10 + 0x88) = uVar6;
    goto code_r0x022e908c;
  }
  if ((bRam0000000004f9bbe5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    bRam0000000004f9bbe5 = 1;
  }
  uVar8 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar10);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(char *)(lVar10 + 0x8c) != '\0') {
    *(undefined1 *)(lVar10 + 0x8d) = 1;
    return;
  }
  if (*(long *)(lVar10 + 0x28) == 0) goto LAB_022e9644;
  uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(lVar10 + 0x28),0);
  *(undefined4 *)(lVar10 + 0x88) = uVar6;
  uVar8 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(lVar10 + 0x28) == 0) goto LAB_022e9644;
    uVar8 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8(*(long *)(lVar10 + 0x28),0);
    if ((uVar8 & 1) != 0) goto code_r0x022e908c;
  }
  Dino_BusSand_App_UI_YachtRacingHallButton__HideAll_21e98f4(lVar10);
  iVar1 = *(int *)(lVar10 + 0x88);
  if (iVar1 < 5) {
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_022e9330;
code_r0x022e908c:
        lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
        if (lVar9 == 0) {
LAB_022e91e8:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
        if ((uVar7 & 1) != 0) {
          lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
          if (lVar9 == 0) goto LAB_022e91e8;
          UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
        }
        return;
      }
      uVar15 = *(undefined8 *)(lVar10 + 0x38);
      goto LAB_022e9468;
    }
    uVar8 = Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked_21e9970();
    if ((uVar8 & 1) == 0) goto code_r0x022e908c;
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(lVar10 + 0x48),1,0);
    uVar15 = *(undefined8 *)(lVar10 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    uVar15 = 0;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar10 + 0x48) == 0) goto LAB_022e9644;
      uVar15 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(lVar10 + 0x48),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5,0);
    uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (lVar9 == 0) goto LAB_022e9644;
    FUN_01e7704c(lVar9,uVar11);
    FUN_01e76ff0(lVar9,0,uVar11);
    uVar11 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cadcf8,lVar9,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar15,uVar11,0);
  }
  else {
    if (iVar1 == 5) {
LAB_022e9358:
      uVar15 = *(undefined8 *)(lVar10 + 0x50);
    }
    else if (iVar1 == 6) {
LAB_022e9330:
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_022e9644;
      uVar8 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc
                        (*(long *)(lVar10 + 0x28),0);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(lVar10 + 0x28) == 0) goto LAB_022e9644;
        uVar8 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8
                          (*(long *)(lVar10 + 0x28),0);
        if ((uVar8 & 1) != 0) goto LAB_022e9358;
      }
      uVar15 = *(undefined8 *)(lVar10 + 0x40);
    }
    else {
      if (iVar1 != 7) goto code_r0x022e908c;
      uVar15 = *(undefined8 *)(lVar10 + 0x58);
    }
LAB_022e9468:
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar15,1,0);
  }
  if (*(long *)(lVar10 + 0x28) != 0) {
    uVar8 = Dino_BusSand_App_Meta_YachtRacingCore__get_IsSettlementState_22555a4
                      (*(long *)(lVar10 + 0x28),0);
    if (((uVar8 & 1) == 0) && ((*(uint *)(lVar10 + 0x88) | 4) != 7)) {
LAB_022e9624:
      Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible_21e908c(lVar10,1);
      return;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(lVar10 + 0x68),1,0);
    if (*(long *)(lVar10 + 0x28) != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerRanking_22554a8(*(long *)(lVar10 + 0x28),0);
      uVar11 = *(undefined8 *)(lVar10 + 0x68);
      uVar15 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar15,0);
      if (*(long *)(lVar10 + 0x28) != 0) {
        uVar11 = *(undefined8 *)(lVar10 + 0x60);
        Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454(*(long *)(lVar10 + 0x28),0);
        uVar15 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
        uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar15,0);
        lVar17 = *(long *)PTR_DAT_04ca9d18;
        lVar9 = *(long *)(lVar17 + 0x38);
        if (lVar9 == 0) {
          FUN_0216b4cc(lVar17);
          lVar9 = *(long *)(lVar17 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        uVar15 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                           (uVar15,**(undefined8 **)(lVar9 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar15,0);
        lVar9 = *(long *)(lVar10 + 0x28);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 100) < 0) {
            Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar9,0);
          }
          uVar11 = *(undefined8 *)(lVar10 + 0x80);
          uVar15 = System_Int32__ToString_482d750(&stack0xffffffffffffffd8,0);
          if (*(long *)(lVar10 + 0x28) != 0) {
            Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                      (*(long *)(lVar10 + 0x28),0xffffffff,0);
            uVar13 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
            uVar15 = System_String__Concat_46d2b84(uVar15,*(undefined8 *)PTR_DAT_04cabd10,uVar13,0);
            Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar15,0);
            goto LAB_022e9624;
          }
        }
      }
    }
  }
LAB_022e9644:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

