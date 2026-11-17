/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Resource
void Dino_BusSand_App_Meta_GameTracking__Resource (int32_t id, int64_t delta, System_String_o* reason, bool infinite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Resource
   void Dino_BusSand_App_Meta_GameTracking__Resource (int32_t id, int64_t delta, System_String_o*
   reason, bool infinite, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__Resource_221629c
               (int param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9bd5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb2538);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cad0e0);
    FUN_02132f7c(PTR_DAT_04cb24e0);
    FUN_02132f7c(PTR_DAT_04cb24e8);
    FUN_02132f7c(PTR_DAT_04cb24f8);
    FUN_02132f7c(PTR_DAT_04cad048);
    FUN_02132f7c(PTR_DAT_04cb2540);
    FUN_02132f7c(PTR_DAT_04cb2548);
    FUN_02132f7c(PTR_DAT_04caa870);
    FUN_02132f7c(PTR_DAT_04cb2500);
    bRam0000000004f9bd5a = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
      return;
    }
    uVar5 = System_String__op_Equality_46d1108(param_3,*(undefined8 *)PTR_DAT_04cad048,0);
    puVar2 = PTR_DAT_04caa200;
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cac498;
    lVar4 = -param_2;
    if (-1 < param_2) {
      lVar4 = param_2;
    }
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_GameTracking__ResourceName_2216080(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar7 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1,0);
    if ((param_4 & 1) != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_04cb2548;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = System_Math__Max_4830fd4(1,lVar4 / 0x3c,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_02316768;
      lVar10 = *(long *)(lVar8 + 0x38);
      lVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      uVar7 = System_Math__Max_4830fd4(0,(lVar10 - lVar8) / 0x3c,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_GameTracking__Placement_221676c
              (param_1,param_3,0 < param_2,&uStack_68,&uStack_70);
    if (param_2 < 1) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(param_1);
      lStack_88 = 0;
      uStack_80 = 0;
      System_Nullable_long____ctor_2bcc314(&lStack_88,uVar7,*(undefined8 *)PTR_DAT_04cb2538);
      Dino_BusSand_App_Meta_GameTracking__Spend_2215bc8
                (uVar9,uVar6,lVar4,lStack_88,uStack_80,uStack_68,uStack_70);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar9 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(param_1);
      if ((lVar8 == 0) ||
         (lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar8,*(undefined8 *)PTR_DAT_04cb24f8,uVar9,0), lVar8 == 0)) {
LAB_02316768:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar8,*(undefined8 *)PTR_DAT_04cb2500,uVar6,0);
      puVar1 = PTR_DAT_04ca9ac8;
      lStack_88 = lVar4;
      uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_88);
      if ((lVar8 == 0) ||
         ((lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                             (lVar8,*(undefined8 *)PTR_DAT_04cb24e0,uVar6,0), lVar4 == 0 ||
          (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                             (lVar4,*(undefined8 *)PTR_DAT_04caa870,uStack_68,0), lVar4 == 0))))
      goto LAB_02316768;
      lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cad0e0,uStack_70,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uStack_78 = System_Math__Max_4830fd4(0,uVar7,0);
      uVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_78);
      if (lVar4 == 0) goto LAB_02316768;
      uVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cb24e8,uVar6,0);
      Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)PTR_DAT_04cb2540,uVar6,0);
    }
    if (param_1 - 0x3e9U < 2) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(0);
    }
  }
  return;
}

