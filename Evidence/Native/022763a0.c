/* IL2CPP: Dino.BusSand.App.Ads$$CanShowInterstitial
bool Dino_BusSand_App_Ads__CanShowInterstitial (System_String_o* slot, System_String_o** reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$CanShowInterstitial
   bool Dino_BusSand_App_Ads__CanShowInterstitial (System_String_o* slot, System_String_o** reason,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_Ads__CanShowInterstitial_21763a0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04cabaf8;
                    /* catch() { ... } // from try @ 02276374 with catch @ 022763a4 */
                    /* catch() { ... } // from try @ 02276354 with catch @ 022763ac */
                    /* catch() { ... } // from try @ 0227630c with catch @ 022763c0 */
  if ((bRam0000000004f9b8df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cacfe8);
    FUN_02132f7c(PTR_DAT_04cacff0);
    FUN_02132f7c(PTR_DAT_04cacff8);
                    /* catch() { ... } // from try @ 02276490 with catch @ 0227643c */
    FUN_02132f7c(PTR_DAT_04cad000);
    FUN_02132f7c(PTR_DAT_04cad008);
    FUN_02132f7c(PTR_DAT_04cad010);
    FUN_02132f7c(PTR_DAT_04cad018);
    FUN_02132f7c(PTR_DAT_04cacb88);
    FUN_02132f7c(PTR_DAT_04cad020);
    FUN_02132f7c(PTR_DAT_04cad028);
                    /* try { // try from 02276488 to 0237648f has its CatchHandler @ 022764dc */
                    /* try { // try from 02276490 to 023764ef has its CatchHandler @ 0227643c */
    FUN_02132f7c(PTR_DAT_04cad030);
    FUN_02132f7c(PTR_DAT_04cad038);
    FUN_02132f7c(PTR_DAT_04cad040);
    FUN_02132f7c(PTR_DAT_04cad048);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad050);
    FUN_02132f7c(PTR_DAT_04caca98);
                    /* catch() { ... } // from try @ 02276488 with catch @ 022764dc */
    bRam0000000004f9b8df = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022764fc to 023764ff has its CatchHandler @ 02276508 */
  if (cRam0000000004f9b894 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022764fc with catch @ 02276508
                        */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 0227650c to 0237653b has its CatchHandler @ 0227650c
                       catch() { ... } // from try @ 0227650c with catch @ 0227650c
                       catch() { ... } // from try @ 02276548 with catch @ 0227650c */
    cRam0000000004f9b894 = '\x01';
  }
  puVar2 = PTR_DAT_04cacfd8;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04ca9c30;
                    /* try { // try from 0227653c to 02376547 has its CatchHandler @ 02276568 */
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
                    /* try { // try from 02276548 to 02376583 has its CatchHandler @ 0227650c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar6 = Dino_BusSand_App_Meta_MonetizationSettings__get_Interstitial_2267474(0);
                    /* catch() { ... } // from try @ 0227653c with catch @ 02276568 */
  *param_2 = *(undefined8 *)puVar1;
  thunk_FUN_02134474(param_2);
  if (lVar5 == 0) {
LAB_0227693c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02276584 to 023765fb has its CatchHandler @ 02276584
                       catch() { ... } // from try @ 02276584 with catch @ 02276584
                       catch() { ... } // from try @ 02276610 with catch @ 02276584 */
  if (((*(char *)(lVar5 + 0xdc) != '\0') &&
      (uVar7 = Dino_BusSand_App_QaPilot__get_IgnoresNoAds_21566bc(0),
      puVar11 = (undefined8 *)PTR_DAT_04cad008, (uVar7 & 1) == 0)) ||
     (puVar1 = PTR_DAT_04cabaa8, puVar11 = (undefined8 *)PTR_DAT_04cad048,
     *(char *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 2) != '\0')) goto LAB_022765b4;
  lVar9 = *(long *)PTR_DAT_04cabaa8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 022765fc to 0237660f has its CatchHandler @ 02276624 */
    lVar9 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04caca98;
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 8) == '\0') {
    if (lVar6 == 0) goto LAB_0227693c;
    puVar11 = (undefined8 *)PTR_DAT_04cad038;
    if (*(char *)(lVar6 + 0x10) != '\0') {
                    /* catch() { ... } // from try @ 022765fc with catch @ 02276624 */
      uVar7 = System_String__op_Inequality_46d110c(param_1,*(undefined8 *)PTR_DAT_04caca98,0);
      uVar10 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cacb88,0);
        if ((uVar10 & 1) == 0) {
          pcVar12 = (char *)(lVar6 + 0x43);
        }
        else {
          pcVar12 = (char *)(lVar6 + 0x42);
        }
      }
      else {
        pcVar12 = (char *)(lVar6 + 0x41);
      }
      puVar11 = (undefined8 *)PTR_DAT_04cacff0;
      if ((*pcVar12 != '\0') &&
         (puVar11 = (undefined8 *)PTR_DAT_04cad000, *(int *)(lVar6 + 0x28) < *(int *)(lVar5 + 0x138)
         )) {
        if (*(char *)(lVar6 + 0x2c) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_04cacfe0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar3 = FUN_02284668(0);
          puVar11 = (undefined8 *)PTR_DAT_04cad010;
          if (iVar3 == 2) goto LAB_022765b4;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar3 = Dino_BusSand_App_Ads__get_InstallDay_2176334();
        iVar4 = Dino_BusSand_App_Meta_Monetization__get_InterProtectDays_22675e4(0);
        if (iVar4 < iVar3) {
LAB_02276720:
          iVar3 = *(int *)(lVar5 + 0x14);
          iVar4 = Dino_BusSand_App_Meta_Monetization__get_InterTriggerLevel_2267418(0);
          puVar11 = (undefined8 *)PTR_DAT_04cad050;
          if ((iVar4 <= iVar3 + -1) &&
             (iVar3 = *(int *)(lVar5 + 0xd8),
             iVar4 = Dino_BusSand_App_Meta_Monetization__get_InterMinResults_226752c(0),
             puVar11 = (undefined8 *)PTR_DAT_04cacfe8, iVar4 <= iVar3)) {
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar1;
            }
            if (0.0 <= *(float *)(*(long *)(lVar5 + 0xb8) + 0x1c)) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar14 = (float)Dino_BusSand_App_Ads__get_SessionNow_2175fd8();
                    /* catch() { ... } // from try @ 02276860 with catch @ 0227681c */
              fVar15 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c);
              iVar3 = Dino_BusSand_App_Meta_Monetization__get_InterAfterRewardedSec_2267588(0);
              puVar11 = (undefined8 *)PTR_DAT_04cad030;
              if (fVar14 - fVar15 < (float)iVar3) goto LAB_022765b4;
              lVar5 = *(long *)puVar1;
            }
                    /* try { // try from 02276854 to 0237685f has its CatchHandler @ 02276904 */
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar1;
            }
                    /* try { // try from 02276860 to 02376923 has its CatchHandler @ 0227681c */
            lVar9 = *(long *)(lVar5 + 0xb8);
            if (0.0 <= *(float *)(lVar9 + 0x18)) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar1;
                lVar9 = *(long *)(lVar5 + 0xb8);
              }
              pfVar13 = (float *)(lVar9 + 0x18);
LAB_022768c8:
              fVar14 = *pfVar13;
              if (0.0 <= fVar14) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar15 = (float)Dino_BusSand_App_Ads__get_SessionNow_2175fd8();
                iVar3 = Dino_BusSand_App_Meta_Monetization__get_InterCooldownSec_22674d0(0);
                puVar11 = (undefined8 *)PTR_DAT_04cad018;
                if (fVar15 - fVar14 < (float)iVar3) goto LAB_022765b4;
              }
            }
            else if (*(char *)(lVar6 + 0x1c) != '\0') {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar1;
                lVar9 = *(long *)(lVar5 + 0xb8);
              }
              if (*(char *)(lVar9 + 0x10) != '\0') {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar5 = *(long *)puVar1;
                  lVar9 = *(long *)(lVar5 + 0xb8);
                }
                pfVar13 = (float *)(lVar9 + 0xc);
                goto LAB_022768c8;
              }
            }
            Dino_BusSand_App_DeviceMemory__Read_214fafc(&uStack_70,0);
                    /* try { // try from 02276924 to 02376947 has its CatchHandler @ 02276924
                       catch() { ... } // from try @ 02276924 with catch @ 02276924
                       catch() { ... } // from try @ 02276950 with catch @ 02276924 */
            uStack_88 = uStack_68;
            uStack_90 = uStack_70;
            uStack_78 = uStack_58;
            uStack_80 = uStack_60;
            uVar7 = Dino_BusSand_App_DeviceMemory__TooLowForInterstitial_214fa78(&uStack_90,0);
            puVar11 = (undefined8 *)PTR_DAT_04cad028;
            if ((uVar7 & 1) == 0) goto LAB_0227660c;
          }
        }
        else if (((uVar7 & 1) == 0) ||
                (puVar11 = (undefined8 *)PTR_DAT_04cad040, *(char *)(lVar6 + 0x40) == '\0')) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar4 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
          iVar3 = Dino_BusSand_App_Meta_Monetization__InterProtectSeconds_2267640(iVar3,0);
          puVar11 = (undefined8 *)PTR_DAT_04cacff8;
          if (iVar3 <= iVar4) {
            lVar9 = *(long *)puVar1;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar1;
            }
            puVar11 = (undefined8 *)PTR_DAT_04cad020;
            if (1 < *(int *)(*(long *)(lVar9 + 0xb8) + 0x14)) goto LAB_02276720;
          }
        }
      }
    }
LAB_022765b4:
    *param_2 = *puVar11;
    thunk_FUN_02134474(param_2);
    uVar8 = 0;
  }
  else {
LAB_0227660c:
    uVar8 = 1;
                    /* try { // try from 02276610 to 0237663b has its CatchHandler @ 02276584 */
  }
  return uVar8;
}

