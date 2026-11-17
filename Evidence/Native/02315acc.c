/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$RewardedAdUsed
void Dino_BusSand_App_Meta_GameTracking__RewardedAdUsed (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$RewardedAdUsed
   void Dino_BusSand_App_Meta_GameTracking__RewardedAdUsed (System_String_o* slot, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__RewardedAdUsed_2215acc(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cac740;
  if ((bRam0000000004f9bd57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cac790);
    FUN_02132f7c(PTR_DAT_04cac650);
    FUN_02132f7c(PTR_DAT_04cac740);
    FUN_02132f7c(PTR_DAT_04cb24c8);
    bRam0000000004f9bd57 = 1;
  }
  uVar9 = System_String__op_Inequality_46d110c(param_1,*(undefined8 *)puVar3,0);
  puVar4 = PTR_DAT_04cb24c8;
  puVar6 = PTR_DAT_04cb2130;
  puVar5 = PTR_DAT_04cac790;
  puVar3 = PTR_DAT_04cac650;
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar7 = PTR_DAT_04cb2240;
  uVar10 = *(undefined8 *)puVar6;
  uVar12 = *(undefined8 *)puVar5;
  uVar13 = *(undefined8 *)puVar3;
  uVar14 = *(undefined8 *)puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((bRam0000000004f9bd5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb24d0);
    FUN_02132f7c(PTR_DAT_04cb24d8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cad0e0);
    FUN_02132f7c(PTR_DAT_04cb24e0);
    FUN_02132f7c(PTR_DAT_04cb24e8);
    FUN_02132f7c(PTR_DAT_04cb24f0);
    FUN_02132f7c(PTR_DAT_04cacc18);
    FUN_02132f7c(PTR_DAT_04cb24f8);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cb2480);
    FUN_02132f7c(PTR_DAT_04caa870);
    FUN_02132f7c(PTR_DAT_04cb2488);
    FUN_02132f7c(PTR_DAT_04cb2500);
    bRam0000000004f9bd5b = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if ((lVar11 != 0) &&
     (lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                         (lVar11,*(undefined8 *)PTR_DAT_04cb24f8,uVar10,0), lVar11 != 0)) {
    lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                       (lVar11,*(undefined8 *)PTR_DAT_04cb2500,uVar12,0);
    puVar3 = PTR_DAT_04ca9ac8;
    uStack_58 = 1;
    uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_58);
    if ((lVar11 != 0) &&
       ((lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar11,*(undefined8 *)PTR_DAT_04cb24e0,uVar10,0), lVar11 != 0 &&
        (lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar11,*(undefined8 *)PTR_DAT_04caa870,uVar13,0),
        puVar6 = PTR_DAT_04cb24f0, puVar5 = PTR_DAT_04cb24e8, lVar11 != 0)))) {
      lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                         (lVar11,*(undefined8 *)PTR_DAT_04cad0e0,uVar14,0);
      puVar4 = PTR_DAT_04caa200;
      uVar12 = *(undefined8 *)puVar5;
      uVar10 = *(undefined8 *)puVar6;
      if ((char)uStack_50 == '\0') {
        uVar13 = 0;
        puVar1 = (undefined8 *)PTR_DAT_04cabc80;
        plVar2 = (long *)PTR_DAT_04cac498;
      }
      else {
        uVar13 = System_Nullable_long___get_Value_2bcc32c
                           (&uStack_50,*(undefined8 *)PTR_DAT_04cb24d8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uStack_58 = System_Math__Max_4830fd4(0,uVar13,0);
        uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_58);
        puVar1 = (undefined8 *)PTR_DAT_04cabc80;
        plVar2 = (long *)PTR_DAT_04cac498;
      }
      PTR_DAT_04cabc80 = (undefined *)puVar1;
      PTR_DAT_04cac498 = (undefined *)plVar2;
      if (lVar11 != 0) {
        lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar12,uVar13,0);
        lVar15 = *plVar2;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar15);
          lVar15 = *plVar2;
        }
        uVar12 = *puVar1;
        if (**(char **)(lVar15 + 0xb8) == '\0') {
          uVar13 = 0;
          puVar1 = (undefined8 *)PTR_DAT_04cb2480;
        }
        else {
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar15);
          }
          uStack_58 = Dino_BusSand_App_Meta_GameTracking__ProgressPct_2213720();
          uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x80),&uStack_58);
          puVar1 = (undefined8 *)PTR_DAT_04cb2480;
        }
        PTR_DAT_04cb2480 = (undefined *)puVar1;
        if (lVar11 != 0) {
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar12,uVar13,0);
          lVar15 = *plVar2;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar15);
            lVar15 = *plVar2;
          }
          pcVar16 = *(char **)(lVar15 + 0xb8);
          uVar12 = *puVar1;
          if (*pcVar16 == '\0') {
            uVar13 = 0;
            puVar1 = (undefined8 *)PTR_DAT_04cb2488;
          }
          else {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar15);
              pcVar16 = *(char **)(*plVar2 + 0xb8);
            }
            uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(pcVar16 + 0x10));
            uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
            puVar1 = (undefined8 *)PTR_DAT_04cb2488;
          }
          PTR_DAT_04cb2488 = (undefined *)puVar1;
          if (lVar11 != 0) {
            lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar12,uVar13,0);
            lVar15 = *plVar2;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar15);
              lVar15 = *plVar2;
            }
            uVar12 = *puVar1;
            if (**(char **)(lVar15 + 0xb8) == '\0') {
              uVar13 = 0;
              puVar1 = (undefined8 *)PTR_DAT_04cacc18;
            }
            else {
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar15);
              }
              uVar8 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
              uStack_58 = CONCAT44(uStack_58._4_4_,uVar8);
              uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
              puVar1 = (undefined8 *)PTR_DAT_04cacc18;
            }
            PTR_DAT_04cacc18 = (undefined *)puVar1;
            if (lVar11 != 0) {
              lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                 (lVar11,uVar12,uVar13,0);
              lVar15 = *plVar2;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar15);
                lVar15 = *plVar2;
              }
              pcVar16 = *(char **)(lVar15 + 0xb8);
              uVar12 = *puVar1;
              if (*pcVar16 == '\0') {
                uVar13 = 0;
              }
              else {
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar15);
                  pcVar16 = *(char **)(*plVar2 + 0xb8);
                }
                uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(pcVar16 + 8));
                uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
              }
              if (lVar11 != 0) {
                uVar12 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                   (lVar11,uVar12,uVar13,0);
                lVar11 = *(long *)puVar7;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar11);
                }
                Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar10,uVar12,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

