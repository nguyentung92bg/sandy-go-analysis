/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AttemptParams
Dino_BusSand_App_Meta_TrackingPlan_Params_o* Dino_BusSand_App_Meta_GameTracking__AttemptParams (Dino_BusSand_App_Meta_TrackingPlan_Params_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AttemptParams
   Dino_BusSand_App_Meta_TrackingPlan_Params_o* Dino_BusSand_App_Meta_GameTracking__AttemptParams
   (Dino_BusSand_App_Meta_TrackingPlan_Params_o* p, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2420);
    FUN_02132f7c(PTR_DAT_04cb2428);
                    /* try { // try from 02312704 to 0241270f has its CatchHandler @ 02312bc0 */
    FUN_02132f7c(PTR_DAT_04cb2430);
                    /* try { // try from 02312710 to 02412767 has its CatchHandler @ 02312494 */
    FUN_02132f7c(PTR_DAT_04cacc18);
    FUN_02132f7c(PTR_DAT_04cb2438);
    FUN_02132f7c(PTR_DAT_04cb2050);
    FUN_02132f7c(PTR_DAT_04cb2440);
    bRam0000000004f9bd42 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ac8;
                    /* try { // try from 02312768 to 0241277b has its CatchHandler @ 02312b78 */
  iStack_34 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x18);
  uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_34);
  if (param_1 != 0) {
    lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (param_1,*(undefined8 *)PTR_DAT_04cb2428,uVar5,0);
    uStack_38 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    uVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
    if (lVar4 != 0) {
                    /* try { // try from 023127cc to 024127d3 has its CatchHandler @ 02312b38 */
      lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cacc18,uVar5,0);
      uStack_3c = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
      uVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_3c);
                    /* try { // try from 02312818 to 0241281f has its CatchHandler @ 02312bd8 */
      if ((lVar4 != 0) &&
         (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar4,*(undefined8 *)PTR_DAT_04cb2440,uVar5,0),
         puVar3 = PTR_DAT_04cb2430, lVar4 != 0)) {
                    /* try { // try from 02312820 to 024128bb has its CatchHandler @ 02312494 */
        lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar4,*(undefined8 *)PTR_DAT_04cb2438,*(undefined8 *)PTR_DAT_04cb2050,0);
        auVar9 = System_String__IsNullOrEmpty_46d2084
                           (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),0);
        uVar8 = *(undefined8 *)puVar3;
        uVar5 = 0;
        if ((auVar9._0_8_ & 1) == 0) {
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar6,auVar9._8_8_,0);
            lVar6 = *(long *)puVar2;
          }
          uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28);
        }
        puVar3 = PTR_DAT_04cb2420;
        if (lVar4 != 0) {
          lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar4,uVar8,uVar5,0);
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar6);
                    /* try { // try from 023128bc to 024128c7 has its CatchHandler @ 02312b54 */
            lVar6 = *(long *)puVar2;
          }
          uVar5 = *(undefined8 *)puVar3;
          iVar7 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x1c);
          if (iVar7 < 1) {
            uVar8 = 0;
          }
          else {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar6);
              iVar7 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c);
            }
            iStack_34 = iVar7;
                    /* try { // try from 023128fc to 02412903 has its CatchHandler @ 02312b34 */
            uVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&iStack_34);
          }
          if (lVar4 != 0) {
            Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar4,uVar5,uVar8,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

