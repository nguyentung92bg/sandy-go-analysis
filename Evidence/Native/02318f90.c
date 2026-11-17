/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$InterOpportunity
void Dino_BusSand_App_Meta_GameTracking__InterOpportunity (System_String_o* slot, System_String_o* result, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$InterOpportunity
   void Dino_BusSand_App_Meta_GameTracking__InterOpportunity (System_String_o* slot,
   System_String_o* result, System_String_o* reason, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__InterOpportunity_2218f90
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iStack_44;
  
  puVar2 = PTR_DAT_04caca98;
  if ((bRam0000000004f9bd70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cad0e0);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb2718);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04caca98);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9bd70 = 1;
  }
  uVar5 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar5 & 1) == 0) {
LAB_0231919c:
    puVar2 = PTR_DAT_04cabaf8;
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_023193cc;
      piVar8 = (int *)(lVar6 + 0x14);
      goto LAB_02319240;
    }
    iVar12 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar5 & 1) == 0) goto LAB_0231919c;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_023193cc;
    if (*(int *)(**(long **)(lVar6 + 0xb8) + 0x44) < 1) goto LAB_0231919c;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_023193cc;
    piVar8 = (int *)(**(long **)(lVar6 + 0xb8) + 0x44);
LAB_02319240:
    iVar12 = *piVar8;
  }
  puVar1 = PTR_DAT_04cb2240;
  puVar2 = PTR_DAT_04cac498;
  if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  uVar10 = Dino_BusSand_App_Meta_GameTracking__AdPlacement_22155d8(param_1);
  if ((lVar6 != 0) &&
     (lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar6,*(undefined8 *)PTR_DAT_04caa870,uVar10,0), puVar4 = PTR_DAT_04cb2718,
     puVar3 = PTR_DAT_04cad0e0, lVar6 != 0)) {
    lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar6,*(undefined8 *)PTR_DAT_04cac690,param_2,0);
    uVar5 = System_String__IsNullOrEmpty_46d2084(param_3,0);
    uVar11 = *(undefined8 *)puVar3;
    uVar10 = *(undefined8 *)puVar4;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Meta_GameTracking__SnakeCase_2215894(param_3);
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_04ca9b60;
    }
    puVar2 = PTR_DAT_04cabc00;
    if (lVar6 != 0) {
      lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4(lVar6,uVar11,uVar7,0);
      uVar11 = *(undefined8 *)puVar2;
      if (iVar12 < 1) {
        uVar7 = 0;
      }
      else {
        iStack_44 = iVar12;
        uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
      }
      if (lVar6 != 0) {
        uVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar6,uVar11,uVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar10,uVar11,0);
        return;
      }
    }
  }
LAB_023193cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

