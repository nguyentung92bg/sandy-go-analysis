/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$EndSuction
void Dino_BusSand_App_Meta_GameTracking__EndSuction (int32_t sandLeftPermille, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$EndSuction
   void Dino_BusSand_App_Meta_GameTracking__EndSuction (int32_t sandLeftPermille, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__EndSuction_22139bc(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2490);
    FUN_02132f7c(PTR_DAT_04cb2470);
    bRam0000000004f9bd46 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  pcVar7 = *(char **)(lVar5 + 0xb8);
  if (*pcVar7 != '\0') {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
      pcVar7 = *(char **)(lVar5 + 0xb8);
    }
    if (*(int *)(pcVar7 + 0x40) < 1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Meta_GameTracking__PlayMs_22133b8();
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
      }
      uVar4 = System_Math__Max_4830fc8(1,uVar4,0);
      lVar5 = *(long *)PTR_DAT_04cb2240;
      iVar1 = *(int *)(lVar5 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = uVar4;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      lVar5 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
      puVar2 = PTR_DAT_04ca9ac8;
      uStack_24 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
      uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
      if (lVar5 != 0) {
        lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabc00,uVar6,0);
        uStack_38 = Dino_BusSand_App_Meta_GameTracking__Tenths_2213950(param_1);
        uVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),&uStack_38);
        if (lVar5 != 0) {
          lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar5,*(undefined8 *)PTR_DAT_04cac620,uVar6,0);
          uStack_28 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
          uVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_28);
          if (lVar5 != 0) {
            Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar5,*(undefined8 *)PTR_DAT_04cb2470,uVar6,0);
            uVar6 = Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4();
            Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc
                      (*(undefined8 *)PTR_DAT_04cb2490,uVar6,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

