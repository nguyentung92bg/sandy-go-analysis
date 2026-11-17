/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LevelStart
void Dino_BusSand_App_Meta_GameTracking__LevelStart (int32_t level, int32_t busTotal, System_String_o* playType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LevelStart
   void Dino_BusSand_App_Meta_GameTracking__LevelStart (int32_t level, int32_t busTotal,
   System_String_o* playType, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__LevelStart_2210f10
               (int param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  int iStack_44;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2350);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2358);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bd41 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_04cac498;
  lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x7c) != param_1) {
      *(int *)(lVar14 + 0x7c) = param_1;
      *(undefined4 *)(lVar14 + 0x80) = 0;
    }
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar12);
      lVar12 = *(long *)puVar4;
      lVar9 = *(long *)puVar3;
    }
    puVar13 = *(undefined1 **)(lVar12 + 0xb8);
    iVar1 = *(int *)(lVar9 + 0xe4);
    *puVar13 = 1;
    puVar2 = PTR_DAT_04caa200;
    *(int *)(puVar13 + 4) = param_1;
    *(int *)(puVar13 + 0x14) = param_1;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cacb18;
    uVar6 = Dino_BusSand_App_Meta_Profile__LevelTries_22741fc(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = System_Math__Max_4830fc8(1,uVar6,0);
    uVar6 = *(undefined4 *)(lVar14 + 0x80);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar9 + 8) = uVar7;
    *(undefined4 *)(lVar9 + 0xc) = uVar6;
    uVar6 = System_Math__Max_4830fc8(0,param_2,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar9 + 0x10) = uVar6;
    *(undefined4 *)(lVar9 + 0x30) = 0;
    *(undefined4 *)(lVar9 + 0x40) = 0;
    *(undefined1 *)(lVar9 + 0x44) = 0;
    *(undefined8 *)(lVar9 + 0x50) = 0xffffffffffffffff;
    Dino_BusSand_App_Meta_GameTracking__ResetIapTime_22112ec();
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *puVar10 = param_3;
    thunk_FUN_02134474(puVar10,param_3);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cb1868;
    iVar8 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(param_1,0);
    lVar9 = *(long *)puVar4;
    iVar1 = 0;
    if (iVar8 != param_1) {
      iVar1 = iVar8;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    lVar12 = *(long *)puVar2;
    iVar8 = *(int *)(lVar12 + 0xe4);
    *(int *)(*(long *)(lVar9 + 0xb8) + 0x18) = iVar1;
    if (iVar8 == 0) {
      thunk_FUN_0218fdac(lVar12);
    }
    uVar11 = Dino_BusSand_Core_LevelCatalog__ConfigId_241039c(param_1,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    *puVar10 = uVar11;
    thunk_FUN_02134474(puVar10,uVar11);
    lVar9 = *(long *)(lVar14 + 0x88);
    lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
    iVar1 = *(int *)(lVar14 + 0x90) + 1;
    *(int *)(lVar14 + 0x90) = iVar1;
    *(int *)(lVar12 + 0x1c) = iVar1;
    puVar5 = PTR_DAT_04cb2240;
    puVar2 = PTR_DAT_04caba90;
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)PTR_DAT_04ca9c30;
      thunk_FUN_02134474();
      uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c);
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__LevelBegin_2211444(uVar6,param_1,uVar11);
      Dino_BusSand_App_Meta_JourneyTracking__PersistUi_22119a0();
      Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt_2211ba8(0,0);
      Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(1);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
      iStack_44 = param_1;
      uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
      if (lVar9 != 0) {
        Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                  (lVar9,*(undefined8 *)PTR_DAT_04cabc00,uVar11,0);
        lVar9 = Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4();
        puVar2 = PTR_DAT_04cb2358;
        if (lVar9 != 0) {
          uVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                             (lVar9,*(undefined8 *)PTR_DAT_04cb2350,
                              *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0);
          Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar2,uVar11,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__Save_226c548(0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

