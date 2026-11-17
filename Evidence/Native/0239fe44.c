/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_4
void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_4 (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$<Awake>b__96_4
   void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_4
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController___Awake_b__96_4_229fe44(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 auStack_38 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c255 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9c255 = 1;
  }
  lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if ((lVar8 == 0) || (uVar1 = *(uint *)(lVar8 + 0x104), (int)uVar1 < 1)) {
    return;
  }
  iVar2 = *(int *)(lVar8 + 0x100);
  if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
  }
  puVar5 = PTR_DAT_04cac498;
  uVar3 = 0;
  if ((ulong)uVar1 != 0) {
    uVar3 = ((long)iVar2 * 1000) / (long)(ulong)uVar1;
  }
  if ((bRam0000000004f9bd46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498,0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2490);
    FUN_02132f7c(PTR_DAT_04cb2470);
    bRam0000000004f9bd46 = 1;
  }
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar5;
  }
  pcVar9 = *(char **)(lVar8 + 0xb8);
  if (*pcVar9 != '\0') {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar5;
      pcVar9 = *(char **)(lVar8 + 0xb8);
    }
    if (*(int *)(pcVar9 + 0x40) < 1) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Meta_GameTracking__PlayMs_22133b8();
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
      }
      uVar6 = System_Math__Max_4830fc8(1,uVar6,0);
      lVar8 = *(long *)PTR_DAT_04cb2240;
      iVar2 = *(int *)(lVar8 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40) = uVar6;
      if (iVar2 == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      lVar8 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
      puVar4 = PTR_DAT_04ca9ac8;
      uStack_24 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4);
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
      if (lVar8 != 0) {
        lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar8,*(undefined8 *)PTR_DAT_04cabc00,uVar7,0);
        auStack_38[0] = Dino_BusSand_App_Meta_GameTracking__Tenths_2213950(uVar3 & 0xffffffff);
        uVar7 = FUN_02133100(*(undefined8 *)(puVar4 + 0x80),auStack_38);
        if (lVar8 != 0) {
          lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar8,*(undefined8 *)PTR_DAT_04cac620,uVar7,0);
          uStack_28 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
          uVar7 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_28);
          if (lVar8 != 0) {
            Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar8,*(undefined8 *)PTR_DAT_04cb2470,uVar7,0);
            uVar7 = Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4();
            Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc
                      (*(undefined8 *)PTR_DAT_04cb2490,uVar7,0);
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

