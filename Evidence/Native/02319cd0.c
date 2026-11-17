/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LiveOpsTrack
void Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack (System_String_o* action, System_String_o* ev, System_String_o* eventId, int32_t attempt, System_String_o* screen, System_String_o* viewFrom, System_Nullable_int__o qualified, System_Nullable_int__o placementId, System_String_o* track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LiveOpsTrack
   void Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack (System_String_o* action, System_String_o*
   ev, System_String_o* eventId, int32_t attempt, System_String_o* screen, System_String_o*
   viewFrom, System_Nullable_int__o qualified, System_Nullable_int__o placementId, System_String_o*
   track, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__LiveOpsTrack_2219cd0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9bd73 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2750);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2758);
    FUN_02132f7c(PTR_DAT_04cb2760);
    FUN_02132f7c(PTR_DAT_04cb2768);
    FUN_02132f7c(PTR_DAT_04cb2770);
    FUN_02132f7c(PTR_DAT_04cb26e0);
    FUN_02132f7c(PTR_DAT_04cb2778);
    FUN_02132f7c(PTR_DAT_04cb2780);
    FUN_02132f7c(PTR_DAT_04cb2788);
    FUN_02132f7c(PTR_DAT_04cb2790);
    FUN_02132f7c(PTR_DAT_04cb2798);
    bRam0000000004f9bd73 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if (((lVar2 != 0) &&
      (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                         (lVar2,*(undefined8 *)PTR_DAT_04cb26e0,param_1,0), lVar2 != 0)) &&
     (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar2,*(undefined8 *)PTR_DAT_04cb2760,param_2,0), lVar2 != 0)) {
    lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar2,*(undefined8 *)PTR_DAT_04cb2780,param_3,0);
    uStack_54 = param_4;
    uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
    if (((lVar2 != 0) &&
        (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                           (lVar2,*(undefined8 *)PTR_DAT_04cb2768,uVar3,0), lVar2 != 0)) &&
       (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                          (lVar2,*(undefined8 *)PTR_DAT_04cb2790,param_5,0),
       puVar1 = PTR_DAT_04cb2750, lVar2 != 0)) {
      lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                        (lVar2,*(undefined8 *)PTR_DAT_04cb2788,param_6,0);
      uStack_68 = param_7;
      uVar3 = FUN_02133100(*(undefined8 *)puVar1,&uStack_68);
      if (lVar2 != 0) {
        lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                          (lVar2,*(undefined8 *)PTR_DAT_04cb2770,uVar3,0);
        uStack_70 = param_8;
        uVar3 = FUN_02133100(*(undefined8 *)puVar1,&uStack_70);
        if ((lVar2 != 0) &&
           (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                              (lVar2,*(undefined8 *)PTR_DAT_04cb2798,uVar3,0),
           puVar1 = PTR_DAT_04cb2778, lVar2 != 0)) {
          uVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                            (lVar2,*(undefined8 *)PTR_DAT_04cb2758,param_9,0);
          Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar1,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

