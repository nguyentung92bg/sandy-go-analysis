/* IL2CPP: Dino.BusSand.App.GameApp$$OnFailed
void Dino_BusSand_App_GameApp__OnFailed (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnFailed
   void Dino_BusSand_App_GameApp__OnFailed (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__OnFailed_2166ae0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9b86a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cac670);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac680);
    FUN_02132f7c(PTR_DAT_04cac5f8);
    FUN_02132f7c(PTR_DAT_04cac600);
    FUN_02132f7c(PTR_DAT_04cac610);
    FUN_02132f7c(PTR_DAT_04cac688);
    FUN_02132f7c(PTR_DAT_04cabb50);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cac698);
    FUN_02132f7c(PTR_DAT_04cac618);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cac6a0);
    FUN_02132f7c(PTR_DAT_04cabaa0);
    FUN_02132f7c(PTR_DAT_04cac6a8);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cac648);
    FUN_02132f7c(PTR_DAT_04cac650);
    FUN_02132f7c(PTR_DAT_04ca9ce8);
    bRam0000000004f9b86a = 1;
  }
  puVar2 = PTR_DAT_04cabaa8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabaf8;
  Dino_BusSand_App_Meta_Economy__OnTryAgainReached_2204e58(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Ads__OnLevelResult_216e2bc(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  cVar3 = cRam0000000004f9b894;
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0xc4) = *(int *)(lVar9 + 0xc4) + 1;
    if (cVar3 == '\0') {
      FUN_02132f7c(puVar1);
      lVar6 = *(long *)puVar1;
      cRam0000000004f9b894 = '\x01';
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    cVar3 = cRam0000000004f9b894;
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar9 != 0) {
      *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
      if (cVar3 == '\0') {
        FUN_02132f7c(puVar1);
        lVar6 = *(long *)puVar1;
        cRam0000000004f9b894 = '\x01';
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x74) = 0;
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        if (*(char *)(param_1 + 0x79) != '\0') {
          *(undefined1 *)(param_1 + 0x79) = 0;
          return;
        }
        if (*(int *)(param_1 + 0x60) < 1) {
          if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_LiveOps__FinalFail_2241c0c(0);
          Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(0);
        }
        plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x16);
        puVar1 = PTR_DAT_04ca9ce8;
        if (plVar7 != (long *)0x0) {
                    /* try { // try from 02266de0 to 02366e0f has its CatchHandler @ 02266de0
                       catch() { ... } // from try @ 02266de0 with catch @ 02266de0
                       catch() { ... } // from try @ 02266e48 with catch @ 02266de0
                       catch() { ... } // from try @ 02266fac with catch @ 02266de0
                       catch() { ... } // from try @ 02267018 with catch @ 02266de0 */
          if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) {
LAB_02267520:
            uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar8,0);
          }
          if ((int)plVar7[3] == 0) {
LAB_02267518:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar7[4] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04cac6a8;
                    /* try { // try from 02266e10 to 02366e17 has its CatchHandler @ 022670bc */
          if ((*(long *)PTR_DAT_04cac6a8 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac6a8,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_02267518;
                    /* try { // try from 02266e34 to 02366e47 has its CatchHandler @ 022670b4 */
          plVar7[5] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04cac690;
                    /* try { // try from 02266e48 to 02366eab has its CatchHandler @ 02266de0 */
          if ((*(long *)PTR_DAT_04cac690 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac690,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_02267518;
          plVar7[6] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04cabaa0;
          if ((*(long *)PTR_DAT_04cabaa0 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabaa0,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_02267518;
                    /* try { // try from 02266eac to 02366eb3 has its CatchHandler @ 022670ac */
          plVar7[7] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04cac618;
                    /* try { // try from 02266ecc to 02366edb has its CatchHandler @ 022670a4 */
          if ((*(long *)PTR_DAT_04cac618 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac618,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 5) goto LAB_02267518;
          plVar7[8] = *(long *)puVar1;
          thunk_FUN_02134474();
                    /* try { // try from 02266ef8 to 02366f07 has its CatchHandler @ 022670c4 */
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
          lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                            (*(long *)(param_1 + 0x20),0);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
                    /* try { // try from 02266f24 to 02366f2b has its CatchHandler @ 0226708c */
          if (*(uint *)(plVar7 + 3) < 6) goto LAB_02267518;
          plVar7[9] = lVar6;
          thunk_FUN_02134474(plVar7 + 9,lVar6);
          puVar1 = PTR_DAT_04cac648;
          if ((*(long *)PTR_DAT_04cac648 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac648,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 7) goto LAB_02267518;
          plVar7[10] = *(long *)puVar1;
          thunk_FUN_02134474();
          fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
          puVar1 = PTR_DAT_04ca9ac8;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
                    /* try { // try from 02266f98 to 02366fab has its CatchHandler @ 02267088 */
          fVar10 = fVar10 - *(float *)(*(long *)(param_1 + 0x20) + 0x5c);
                    /* try { // try from 02266fac to 0236700f has its CatchHandler @ 02266de0 */
          iStack_24 = -0x80000000;
          if (fVar10 != INFINITY) {
            iStack_24 = (int)fVar10;
          }
          lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_02267518;
          plVar7[0xb] = lVar6;
          thunk_FUN_02134474(plVar7 + 0xb,lVar6);
          puVar2 = PTR_DAT_04cac650;
                    /* try { // try from 02267010 to 02367017 has its CatchHandler @ 02267074 */
          if ((*(long *)PTR_DAT_04cac650 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac650,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
                    /* try { // try from 02267018 to 0236711f has its CatchHandler @ 02266de0 */
          if (*(uint *)(plVar7 + 3) < 9) goto LAB_02267518;
          plVar7[0xc] = *(long *)puVar2;
          thunk_FUN_02134474();
          uStack_28 = *(undefined4 *)(param_1 + 0x58);
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_28);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 10) goto LAB_02267518;
                    /* catch() { ... } // from try @ 02267010 with catch @ 02267074 */
          plVar7[0xd] = lVar6;
          thunk_FUN_02134474(plVar7 + 0xd,lVar6);
          puVar2 = PTR_DAT_04cabb50;
                    /* catch() { ... } // from try @ 02266f98 with catch @ 02267088 */
                    /* catch() { ... } // from try @ 02266f24 with catch @ 0226708c */
          if ((*(long *)PTR_DAT_04cabb50 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb50,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
                    /* catch() { ... } // from try @ 02266ecc with catch @ 022670a4 */
          if (*(uint *)(plVar7 + 3) < 0xb) goto LAB_02267518;
                    /* catch() { ... } // from try @ 02266eac with catch @ 022670ac */
                    /* catch() { ... } // from try @ 02266e34 with catch @ 022670b4 */
          plVar7[0xe] = *(long *)puVar2;
          thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 02266e10 with catch @ 022670bc */
          uStack_34 = *(undefined4 *)(param_1 + 0x54);
                    /* catch() { ... } // from try @ 02266ef8 with catch @ 022670c4 */
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_34);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0xc) goto LAB_02267518;
          plVar7[0xf] = lVar6;
          thunk_FUN_02134474(plVar7 + 0xf,lVar6);
          puVar2 = PTR_DAT_04cac610;
                    /* catch() { ... } // from try @ 0226718c with catch @ 02267120 */
          if ((*(long *)PTR_DAT_04cac610 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac610,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0xd) goto LAB_02267518;
                    /* try { // try from 0226713c to 0236718b has its CatchHandler @ 02267198 */
          plVar7[0x10] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
          uStack_38 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0xe) goto LAB_02267518;
                    /* try { // try from 0226718c to 023671b3 has its CatchHandler @ 02267120 */
          plVar7[0x11] = lVar6;
          thunk_FUN_02134474(plVar7 + 0x11,lVar6);
          puVar2 = PTR_DAT_04cac620;
                    /* catch() { ... } // from try @ 0226713c with catch @ 02267198 */
          if ((*(long *)PTR_DAT_04cac620 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac620,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0xf) goto LAB_02267518;
          plVar7[0x12] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
          uStack_3c = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40);
                    /* try { // try from 022671e8 to 0236722b has its CatchHandler @ 022671e8
                       catch() { ... } // from try @ 022671e8 with catch @ 022671e8
                       catch() { ... } // from try @ 0226723c with catch @ 022671e8 */
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_3c);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if ((*(uint *)(plVar7 + 3) & 0xfffffff0) == 0) goto LAB_02267518;
          plVar7[0x13] = lVar6;
          thunk_FUN_02134474(plVar7 + 0x13,lVar6);
          puVar2 = PTR_DAT_04cabc80;
                    /* try { // try from 0226722c to 0236723b has its CatchHandler @ 02267248 */
                    /* try { // try from 0226723c to 02367263 has its CatchHandler @ 022671e8 */
          if ((*(long *)PTR_DAT_04cabc80 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc80,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
                    /* catch() { ... } // from try @ 0226722c with catch @ 02267248 */
          if (*(uint *)(plVar7 + 3) < 0x11) goto LAB_02267518;
          plVar7[0x14] = *(long *)puVar2;
          thunk_FUN_02134474();
          uStack_48 = Dino_BusSand_App_GameApp__Progress3_2165f30(param_1);
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),&uStack_48);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0x12) goto LAB_02267518;
          plVar7[0x15] = lVar6;
          thunk_FUN_02134474(plVar7 + 0x15,lVar6);
          puVar2 = PTR_DAT_04cac5f8;
          if ((*(long *)PTR_DAT_04cac5f8 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac5f8,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0x13) goto LAB_02267518;
          plVar7[0x16] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
          uStack_4c = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x44);
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_4c);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0x14) goto LAB_02267518;
          plVar7[0x17] = lVar6;
          thunk_FUN_02134474(plVar7 + 0x17,lVar6);
          puVar2 = PTR_DAT_04cac600;
          if ((*(long *)PTR_DAT_04cac600 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac600,*(undefined8 *)(*plVar7 + 0x40)),
             lVar6 == 0)) goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0x15) goto LAB_02267518;
          plVar7[0x18] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
          uStack_50 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x48);
          lVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_50);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02267520;
          if (*(uint *)(plVar7 + 3) < 0x16) goto LAB_02267518;
          plVar7[0x19] = lVar6;
          thunk_FUN_02134474(plVar7 + 0x19,lVar6);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_Analytics__L_216fff0(plVar7,0);
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cac698,uVar8,0);
          if (*(int *)(param_1 + 0x60) < 1) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
            uVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                              (*(long *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
            uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft_229b210
                              (*(long *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
            uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad_229b2c8
                              (*(long *)(param_1 + 0x20),0);
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
            }
                    /* try { // try from 02267498 to 0236753f has its CatchHandler @ 02267498
                       catch() { ... } // from try @ 02267498 with catch @ 02267498
                       catch() { ... } // from try @ 022675bc with catch @ 02267498 */
            Dino_BusSand_App_Meta_GameTracking__LevelEnd_2212938
                      (*(undefined8 *)PTR_DAT_04cac6a0,uVar8,uVar4,uVar5,0);
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
            lVar6 = *(long *)(param_1 + 0x28);
            uStack_48 = CONCAT44(uStack_48._4_4_,1);
            uVar8 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&uStack_48);
            if (lVar6 != 0) {
              Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cac688,2,uVar8,
                         *(undefined8 *)PTR_DAT_04cac680);
              return;
            }
          }
        }
      }
    }
  }
LAB_0226751c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

