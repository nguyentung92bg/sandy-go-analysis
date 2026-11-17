/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Spend
void Dino_BusSand_App_Meta_GameTracking__Spend (System_String_o* type, System_String_o* name, int64_t amount, System_Nullable_long__o balance, System_String_o* placement, System_String_o* why, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Spend
   void Dino_BusSand_App_Meta_GameTracking__Spend (System_String_o* type, System_String_o* name,
   int64_t amount, System_Nullable_long__o balance, System_String_o* placement, System_String_o*
   why, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__Spend_2215bc8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_04cb2240;
  uStack_50 = param_4;
  uStack_48 = param_5;
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
                    /* catch() { ... } // from try @ 02315e6c with catch @ 02315cc4 */
    FUN_02132f7c(PTR_DAT_04cb2500);
    bRam0000000004f9bd5b = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
                    /* try { // try from 02315d04 to 02415d2f has its CatchHandler @ 02315e6c */
  if ((lVar9 != 0) &&
     (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar9,*(undefined8 *)PTR_DAT_04cb24f8,param_1,0), lVar9 != 0)) {
    lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar9,*(undefined8 *)PTR_DAT_04cb2500,param_2,0);
    puVar3 = PTR_DAT_04ca9ac8;
    uStack_58 = param_3;
    uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_58);
    if ((lVar9 != 0) &&
       ((lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                           (lVar9,*(undefined8 *)PTR_DAT_04cb24e0,uVar10,0), lVar9 != 0 &&
        (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                           (lVar9,*(undefined8 *)PTR_DAT_04caa870,param_6,0),
        puVar7 = PTR_DAT_04cb24f0, puVar6 = PTR_DAT_04cb24e8, lVar9 != 0)))) {
      lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar9,*(undefined8 *)PTR_DAT_04cad0e0,param_7,0);
      puVar4 = PTR_DAT_04caa200;
      uVar14 = *(undefined8 *)puVar6;
      uVar10 = *(undefined8 *)puVar7;
      if ((char)uStack_50 == '\0') {
        uVar11 = 0;
        puVar1 = (undefined8 *)PTR_DAT_04cabc80;
        plVar2 = (long *)PTR_DAT_04cac498;
      }
      else {
                    /* try { // try from 02315db8 to 02415de7 has its CatchHandler @ 02315e7c */
        uVar11 = System_Nullable_long___get_Value_2bcc32c
                           (&uStack_50,*(undefined8 *)PTR_DAT_04cb24d8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uStack_58 = System_Math__Max_4830fd4(0,uVar11,0);
        uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_58);
        puVar1 = (undefined8 *)PTR_DAT_04cabc80;
        plVar2 = (long *)PTR_DAT_04cac498;
      }
      PTR_DAT_04cabc80 = (undefined *)puVar1;
      PTR_DAT_04cac498 = (undefined *)plVar2;
      if (lVar9 != 0) {
        lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar9,uVar14,uVar11,0);
        lVar12 = *plVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
          lVar12 = *plVar2;
        }
                    /* try { // try from 02315e64 to 02415e67 has its CatchHandler @ 02315e74 */
        uVar14 = *puVar1;
                    /* try { // try from 02315e68 to 02415e6b has its CatchHandler @ 02315e6c */
                    /* catch() { ... } // from try @ 02315d04 with catch @ 02315e6c
                       catch() { ... } // from try @ 02315e68 with catch @ 02315e6c
                       try { // try from 02315e6c to 02415e83 has its CatchHandler @ 02315cc4 */
        if (**(char **)(lVar12 + 0xb8) == '\0') {
          uVar11 = 0;
          puVar1 = (undefined8 *)PTR_DAT_04cb2480;
        }
        else {
                    /* catch() { ... } // from try @ 02315e64 with catch @ 02315e74 */
          if (*(int *)(lVar12 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02315db8 with catch @ 02315e7c */
            thunk_FUN_0218fdac(lVar12);
          }
          uStack_58 = Dino_BusSand_App_Meta_GameTracking__ProgressPct_2213720();
          uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x80),&uStack_58);
          puVar1 = (undefined8 *)PTR_DAT_04cb2480;
        }
        PTR_DAT_04cb2480 = (undefined *)puVar1;
        if (lVar9 != 0) {
          lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar9,uVar14,uVar11,0);
          lVar12 = *plVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar12);
            lVar12 = *plVar2;
          }
          pcVar13 = *(char **)(lVar12 + 0xb8);
          uVar14 = *puVar1;
          if (*pcVar13 == '\0') {
            uVar11 = 0;
            puVar1 = (undefined8 *)PTR_DAT_04cb2488;
          }
          else {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12);
              pcVar13 = *(char **)(*plVar2 + 0xb8);
            }
            uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(pcVar13 + 0x10));
            uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
            puVar1 = (undefined8 *)PTR_DAT_04cb2488;
          }
          PTR_DAT_04cb2488 = (undefined *)puVar1;
          if (lVar9 != 0) {
            lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar9,uVar14,uVar11,0);
            lVar12 = *plVar2;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12);
              lVar12 = *plVar2;
            }
            uVar14 = *puVar1;
            if (**(char **)(lVar12 + 0xb8) == '\0') {
              uVar11 = 0;
              puVar1 = (undefined8 *)PTR_DAT_04cacc18;
            }
            else {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar12);
              }
              uVar8 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
              uStack_58 = CONCAT44(uStack_58._4_4_,uVar8);
              uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
              puVar1 = (undefined8 *)PTR_DAT_04cacc18;
            }
            PTR_DAT_04cacc18 = (undefined *)puVar1;
            if (lVar9 != 0) {
              lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar9,uVar14,uVar11,0);
              lVar12 = *plVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar12);
                lVar12 = *plVar2;
              }
              pcVar13 = *(char **)(lVar12 + 0xb8);
              uVar14 = *puVar1;
              if (*pcVar13 == '\0') {
                uVar11 = 0;
              }
              else {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                  pcVar13 = *(char **)(*plVar2 + 0xb8);
                }
                uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(pcVar13 + 8));
                uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
              }
              if (lVar9 != 0) {
                uVar14 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                   (lVar9,uVar14,uVar11,0);
                lVar9 = *(long *)puVar5;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar9);
                }
                Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar10,uVar14,0);
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

