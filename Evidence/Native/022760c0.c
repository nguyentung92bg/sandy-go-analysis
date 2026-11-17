/* IL2CPP: Dino.BusSand.App.Ads$$DaysSinceInstall
int32_t Dino_BusSand_App_Ads__DaysSinceInstall (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$DaysSinceInstall
   int32_t Dino_BusSand_App_Ads__DaysSinceInstall (const MethodInfo* method); */

void Dino_BusSand_App_Ads__DaysSinceInstall_21760c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b8dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa538);
    bRam0000000004f9b8dc = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_28 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
                    /* catch() { ... } // from try @ 022761ac with catch @ 02276164 */
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_04cacfd0;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0xa0);
    if (lVar8 < 1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 022761a0 to 023761ab has its CatchHandler @ 022761cc */
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                    /* try { // try from 022761ac to 023761f7 has its CatchHandler @ 02276164 */
    }
    puVar3 = PTR_DAT_04caa468;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 022761a0 with catch @ 022761cc */
    auStack_40 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(lVar8,0);
    uStack_28 = System_DateTimeOffset__get_LocalDateTime_48147bc(auStack_40,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    puVar4 = PTR_DAT_04caa538;
    uVar6 = System_DateTime__get_Date_4810dd0(&uStack_28,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_04caa200;
    uVar7 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
    auVar10 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(uVar7,0);
    auStack_40 = auVar10;
    uStack_28 = System_DateTimeOffset__get_LocalDateTime_48147bc(auStack_40,0);
    uVar7 = System_DateTime__get_Date_4810dd0(&uStack_28,0);
    uStack_48 = System_DateTime__op_Subtraction_4812f34(uVar7,uVar6,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02276380 with catch @ 0227627c */
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    dVar9 = (double)System_TimeSpan__get_TotalDays_4846afc(&uStack_48,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar1 = -0x80000000;
    if (dVar9 != INFINITY) {
      iVar1 = (int)dVar9;
    }
    System_Math__Max_4830fc8(0,iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

