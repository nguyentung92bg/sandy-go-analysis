/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$InitComponent
void Dino_BusSand_App_UI_YachtRacingTrackRow__InitComponent (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$InitComponent
   void Dino_BusSand_App_UI_YachtRacingTrackRow__InitComponent
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__InitComponent_21f5858(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  
  if ((bRam0000000004f9bc35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb16d0);
    FUN_02132f7c(PTR_DAT_04cb16d8);
    FUN_02132f7c(PTR_DAT_04cb16e0);
    FUN_02132f7c(PTR_DAT_04cb16e8);
    FUN_02132f7c(PTR_DAT_04cb16f0);
    FUN_02132f7c(PTR_DAT_04cb16f8);
    FUN_02132f7c(PTR_DAT_04cb1700);
    FUN_02132f7c(PTR_DAT_04cb1708);
    FUN_02132f7c(PTR_DAT_04cb1710);
    FUN_02132f7c(PTR_DAT_04cb1718);
    FUN_02132f7c(PTR_DAT_04cb1720);
    FUN_02132f7c(PTR_DAT_04cb1728);
    FUN_02132f7c(PTR_DAT_04cb1730);
    bRam0000000004f9bc35 = 1;
  }
  lVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  puVar2 = PTR_DAT_04cb16f0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar6 == 0) {
LAB_022f5e88:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cb1720,0);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  thunk_FUN_02134474();
  lVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar2,0);
  plVar12 = (long *)(param_1 + 0x78);
  *plVar12 = lVar8;
  thunk_FUN_02134474(plVar12,lVar8);
  lVar8 = *plVar12;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*plVar12,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar2 = PTR_DAT_04cb16f8;
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  thunk_FUN_02134474();
  lVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar8,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar5 = PTR_DAT_04cb1728;
  puVar4 = PTR_DAT_04cb16e8;
  puVar3 = PTR_DAT_04cb16e0;
  puVar2 = PTR_DAT_04cabdb0;
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  thunk_FUN_02134474();
  uVar7 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  thunk_FUN_02134474();
  plVar12 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar5,0);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    lVar8 = *(long *)puVar2;
    plVar13 = plVar12;
    if (*plVar12 != lVar8) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x48) = plVar13;
    if (*plVar12 != lVar8) {
      plVar12 = (long *)0x0;
    }
  }
  puVar4 = PTR_DAT_04cb1710;
  thunk_FUN_02134474(param_1 + 0x48,plVar12);
  plVar12 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar3,0);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar8 = *(long *)puVar2;
    plVar13 = plVar12;
    if (*plVar12 != lVar8) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x50) = plVar13;
    if (*plVar12 != lVar8) {
      plVar12 = (long *)0x0;
    }
  }
  puVar3 = PTR_DAT_04cb1708;
  thunk_FUN_02134474(param_1 + 0x50,plVar12);
  plVar12 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar4,0);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar8 = *(long *)puVar2;
    plVar13 = plVar12;
    if (*plVar12 != lVar8) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x58) = plVar13;
    if (*plVar12 != lVar8) {
      plVar12 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x58,plVar12);
  lVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar8,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar3 = PTR_DAT_04cb16d0;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  thunk_FUN_02134474();
  plVar12 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar3,0);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar8 = *(long *)puVar2;
    plVar13 = plVar12;
    if (*plVar12 != lVar8) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x60) = plVar13;
    if (*plVar12 != lVar8) {
      plVar12 = (long *)0x0;
    }
  }
  plVar13 = (long *)(param_1 + 0x60);
  thunk_FUN_02134474(plVar13,plVar12);
  lVar8 = *plVar13;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (*plVar13 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*plVar13,*(undefined8 *)PTR_DAT_04cad788);
  }
  puVar5 = PTR_DAT_04cb1730;
  puVar4 = PTR_DAT_04cb1718;
  puVar3 = PTR_DAT_04cb1700;
  puVar2 = PTR_DAT_04cb16d8;
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  thunk_FUN_02134474();
  uVar7 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  thunk_FUN_02134474();
  lVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar3,0);
  lVar10 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar4,0);
  lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  thunk_FUN_02134474();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar10 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  thunk_FUN_02134474();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar6 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  thunk_FUN_02134474();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar10 == 0) goto LAB_022f5e88;
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar10,*(undefined8 *)PTR_DAT_04cadf40);
  }
  puVar11 = (undefined8 *)(param_1 + 0xc0);
  *puVar11 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar11 >> 0xc & 0x3f),
                 ((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

