/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<__Il2CppFullySharedGenericType>$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29___Il2CppFullySharedGenericType___MoveNext (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_T__o __this, const MethodInfo_34F628C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.Sdk.DinoAdProvider.<WatchLostClose>d__29<__Il2CppFullySharedGenericType>$$MoveNext
   void 
   Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29___Il2CppFullySharedGenericType___MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29_T__o __this, const MethodInfo_34F628C*
   method); */

void Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_d__29___Il2CppFullySharedGenericType___MoveNext_34f628c
               (undefined8 param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  code *pcVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  long alStack_d0 [2];
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  char acStack_84 [4];
  long *plStack_80;
  long lStack_78;
  
                    /* try { // try from 035f62a4 to 036f62f7 has its CatchHandler @ 035f93c0 */
  lStack_b0 = tpidr_el0;
  lStack_78 = *(long *)(lStack_b0 + 0x28);
  if ((bRam0000000004f9fa8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
                    /* try { // try from 035f62f8 to 036f6317 has its CatchHandler @ 035f4e9c */
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04caa970);
                    /* try { // try from 035f6318 to 036f633b has its CatchHandler @ 035f93c0 */
    FUN_02132f7c(PTR_DAT_04cc7008);
    FUN_02132f7c(PTR_DAT_04cc7010);
    FUN_02132f7c(PTR_DAT_04cc7018);
    bRam0000000004f9fa8c = 1;
  }
  lVar16 = *(long *)(param_2 + 0x20);
  uVar2 = *(ushort *)(lVar16 + 0x135);
  lVar7 = lVar16;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 035f634c to 036f6367 has its CatchHandler @ 035f9324 */
    lVar16 = FUN_0216b470(lVar16);
    uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar7 = *(long *)(param_2 + 0x20);
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x50) + 0xfc);
  lVar16 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_0216b470(lVar7);
                    /* try { // try from 035f6380 to 036f63bf has its CatchHandler @ 035f92e0 */
    uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar16 = *(long *)(param_2 + 0x20);
  }
  uStack_a8 = (ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar16 = FUN_0216b470(lVar16);
  }
  lVar7 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x50);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f63d8 to 036f6417 has its CatchHandler @ 035f92dc */
  alStack_d0[0] = (long)alStack_d0 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar17 = uVar18 + 0xf & 0x1fffffff0;
  plStack_c0 = (long *)(alStack_d0[0] - uVar17);
  plStack_b8 = (long *)((long)plStack_c0 - uVar17);
  plVar21 = (long *)((long)plStack_b8 - (uStack_a8 + 0xf & 0x1fffffff0));
                    /* try { // try from 035f642c to 036f647f has its CatchHandler @ 035f93c0 */
  lVar16 = (long)plVar21 - uVar17;
  func_0x049b52e0(lVar16,0,uVar18);
  uStack_8c = 0;
  alStack_d0[1] = lVar16 - uVar17;
  uStack_90 = 0;
  func_0x049b52e0(alStack_d0[1],0,uVar18);
  lVar7 = *(long *)(param_2 + 0x20);
  uStack_98 = 0;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 035f6480 to 036f649f has its CatchHandler @ 035f4e9c */
    lVar7 = FUN_0216b470();
  }
  puVar5 = PTR_DAT_04cbeff0;
  puVar4 = PTR_DAT_04caa970;
  puVar3 = PTR_DAT_04caa210;
                    /* try { // try from 035f64a0 to 036f64c3 has its CatchHandler @ 035f93c0 */
  piVar8 = (int *)thunk_FUN_02190304(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80));
  lVar7 = *(long *)(param_2 + 0x20);
  if (*piVar8 == 0) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    puVar12 = (undefined4 *)
              thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x1a0);
    lVar7 = *(long *)(param_2 + 0x20);
    uStack_8c = CONCAT44(*puVar12,(undefined4)uStack_8c);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
                    /* try { // try from 035f6560 to 036f659f has its CatchHandler @ 035f9314 */
    puVar12 = (undefined4 *)
              thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x1a0);
    *puVar12 = 0;
    lVar7 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    FUN_01e833c8(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),0xffffffff);
    goto LAB_035f6820;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f64d4 to 036f64ef has its CatchHandler @ 035f935c */
  plVar9 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x40);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_035f7420;
  }
  lVar10 = *(long *)(param_2 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar11 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_0216b470();
                    /* try { // try from 035f6508 to 036f6547 has its CatchHandler @ 035f9318 */
    lVar10 = *(long *)(param_2 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
  }
  uVar19 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x10);
                    /* try { // try from 035f65b4 to 036f6607 has its CatchHandler @ 035f93c0 */
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
  plStack_80 = plVar21;
  (**(code **)(lVar11 + 0x10))(uVar19,lVar11,lVar7,&plStack_80,plVar21);
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f6608 to 036f6627 has its CatchHandler @ 035f4e9c */
  FUN_02132fa4(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x100,plVar21,uStack_a8);
  uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
  thunk_FUN_02142dc8();
  lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6628 to 036f664b has its CatchHandler @ 035f93c0 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  FUN_01e833c8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x120,uVar22);
  lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f665c to 036f6677 has its CatchHandler @ 035f9368 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  FUN_01e82db8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,0);
  uVar22 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6690 to 036f66cf has its CatchHandler @ 035f932c */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  FUN_01e88edc(uVar22,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x160);
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f66e8 to 036f6727 has its CatchHandler @ 035f9328 */
  FUN_01e88edc(0xbf800000,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x180);
  do {
    while( true ) {
      do {
        lVar11 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
        lVar7 = lVar11;
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_0216b470();
          lVar11 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f673c to 036f678f has its CatchHandler @ 035f93c0 */
          uVar2 = *(ushort *)(lVar11 + 0x135);
        }
        pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_0216b470();
        }
        uVar19 = thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar11 + 0xc0) + 0x80) + 0x100);
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
                    /* try { // try from 035f6790 to 036f67af has its CatchHandler @ 035f4e9c */
        iVar6 = (*pcVar20)(uVar19,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
        if (iVar6 != 0) goto LAB_035f6d28;
        lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f67b0 to 036f67d3 has its CatchHandler @ 035f93c0 */
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
        plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                     0x80);
        if (*plVar21 == 0) {
                    /* try { // try from 035f71b4 to 036f71cf has its CatchHandler @ 035f4e9c */
          if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_035f7420;
        }
        cVar1 = *(char *)(*plVar21 + 0x10);
        thunk_FUN_02142dc8();
        if (cVar1 != '\0') goto LAB_035f6d28;
                    /* try { // try from 035f67e4 to 036f67ff has its CatchHandler @ 035f9370 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar22 = Cysharp_Threading_Tasks_UniTask__Yield_4072eb0(0);
        uStack_8c = CONCAT44(uStack_8c._4_4_,uVar22);
        uVar22 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_4076e24(&uStack_8c,0);
        uStack_8c = CONCAT44(uVar22,(undefined4)uStack_8c);
                    /* try { // try from 035f6818 to 036f6857 has its CatchHandler @ 035f9334 */
        uVar17 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_4076e34
                           ((long)&uStack_8c + 4,0);
        if ((uVar17 & 1) == 0) {
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          FUN_01e833c8(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),0);
          lVar7 = *(long *)(param_2 + 0x20);
          uVar22 = uStack_8c._4_4_;
                    /* try { // try from 035f6bd4 to 036f6c27 has its CatchHandler @ 035f93c0 */
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          FUN_01edde5c(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x1a0,uVar22);
          lVar16 = *(long *)(param_2 + 0x20);
          uVar2 = *(ushort *)(lVar16 + 0x135);
          lVar7 = lVar16;
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_0216b470();
            lVar16 = *(long *)(param_2 + 0x20);
            uVar2 = *(ushort *)(lVar16 + 0x135);
          }
          pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
          if ((uVar2 & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
                    /* try { // try from 035f6c48 to 036f6c6b has its CatchHandler @ 035f93c0 */
          uVar19 = thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar16 + 0xc0) + 0x80) + 0x20);
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
                    /* try { // try from 035f6c7c to 036f6c97 has its CatchHandler @ 035f9388 */
          (*pcVar20)(uVar19,(long)&uStack_8c + 4,param_1,
                     *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
          goto LAB_035f6dc0;
        }
LAB_035f6820:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_4076e3c((long)&uStack_8c + 4,0);
        fVar23 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        iVar6 = *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
        thunk_FUN_02142dc8();
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
                    /* try { // try from 035f6870 to 036f68af has its CatchHandler @ 035f9330 */
        piVar8 = (int *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                   0x120);
        if (iVar6 != *piVar8) {
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          FUN_01e82db8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,1);
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
                    /* try { // try from 035f68c4 to 036f6917 has its CatchHandler @ 035f93c0 */
          FUN_01e88edc(fVar23,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x180);
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          FUN_01e833c8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x120,iVar6);
        }
        lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6918 to 036f6937 has its CatchHandler @ 035f4e9c */
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
                    /* try { // try from 035f6938 to 036f695b has its CatchHandler @ 035f93c0 */
        pfVar13 = (float *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                      0x160);
        if (2.5 < fVar23 - *pfVar13) {
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
                    /* try { // try from 035f696c to 036f6987 has its CatchHandler @ 035f9378 */
          FUN_01e82db8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,1);
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
                    /* try { // try from 035f69a0 to 036f69df has its CatchHandler @ 035f933c */
          FUN_01e88edc(fVar23,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x180);
        }
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
        pcVar14 = (char *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                     0x140);
        if (*pcVar14 == '\0') {
          lVar7 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
                    /* try { // try from 035f69f8 to 036f6a37 has its CatchHandler @ 035f9338 */
          plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                       0x60);
          lVar7 = *plVar21;
          if (lVar7 == 0) {
            if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035f71d0 to 036f71ef has its CatchHandler @ 035f93b4 */
              FUN_02133224();
            }
            goto LAB_035f7420;
          }
          uVar17 = (**(code **)(lVar7 + 0x18))
                             (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          if ((uVar17 & 1) != 0) {
            lVar7 = *(long *)(param_2 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
                    /* try { // try from 035f6a4c to 036f6a9f has its CatchHandler @ 035f93c0 */
            FUN_01e82db8(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,1);
            lVar7 = *(long *)(param_2 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
            FUN_01e88edc(fVar23,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x180);
          }
        }
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
                    /* try { // try from 035f6aa0 to 036f6abf has its CatchHandler @ 035f4e9c */
        FUN_01e88edc(fVar23,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x160);
        lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6ac0 to 036f6ae3 has its CatchHandler @ 035f93c0 */
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
        pcVar14 = (char *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                     0x140);
      } while (*pcVar14 == '\0');
                    /* try { // try from 035f6af4 to 036f6b0f has its CatchHandler @ 035f9380 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = UnityEngine_Application__get_isFocused_4351f14(0);
      lVar7 = *(long *)(param_2 + 0x20);
      if ((uVar17 & 1) != 0) break;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
                    /* try { // try from 035f6b80 to 036f6bbf has its CatchHandler @ 035f9340 */
      FUN_01e88edc(fVar23,param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x180);
    }
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
                    /* try { // try from 035f6b28 to 036f6b67 has its CatchHandler @ 035f9344 */
    pfVar13 = (float *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                  0x180);
  } while (fVar23 - *pfVar13 < 3.0);
  lVar11 = *(long *)(param_2 + 0x20);
  uVar2 = *(ushort *)(lVar11 + 0x135);
  lVar7 = lVar11;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_0216b470();
    lVar11 = *(long *)(param_2 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
  }
  pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
                    /* try { // try from 035f6cb0 to 036f6cef has its CatchHandler @ 035f934c */
  uVar19 = thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar11 + 0xc0) + 0x80) + 0x100);
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  iVar6 = (*pcVar20)(uVar19,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
  if (iVar6 == 0) {
    lVar7 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
                    /* try { // try from 035f6d08 to 036f6d47 has its CatchHandler @ 035f9348 */
    plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x80)
    ;
    if (*plVar21 == 0) {
      if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_035f7420;
    }
    cVar1 = *(char *)(*plVar21 + 0x10);
    thunk_FUN_02142dc8();
    if (cVar1 == '\0') {
      lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6e04 to 036f6e1f has its CatchHandler @ 035f9390 */
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                   0xa0);
      lVar7 = *plVar21;
      if (lVar7 == 0) {
                    /* try { // try from 035f71f0 to 036f720b has its CatchHandler @ 035f4e9c */
        if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_035f7420;
      }
      lVar10 = *(long *)(param_2 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
                    /* try { // try from 035f6e38 to 036f6e77 has its CatchHandler @ 035f9354 */
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_0216b470();
        lVar10 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar19 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x48);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_0216b470();
      }
      lVar11 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
      plStack_80 = plStack_c0;
      (**(code **)(lVar11 + 0x10))(uVar19,lVar11,lVar7,&plStack_80);
                    /* try { // try from 035f6e90 to 036f6ecf has its CatchHandler @ 035f9350 */
      func_0x049b5410(lVar16,plStack_c0,uVar18);
      lVar7 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                   0x40);
      lVar7 = *plVar21;
      func_0x049b5410(plStack_b8,lVar16,uVar18);
      if (lVar7 == 0) {
                    /* try { // try from 035f720c to 036f722b has its CatchHandler @ 035f93b4 */
        if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_035f7420;
      }
                    /* try { // try from 035f6ee4 to 036f6f37 has its CatchHandler @ 035f93c0 */
      lVar10 = *(long *)(param_2 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_0216b470();
        lVar10 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar19 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x58);
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_0216b470();
        lVar10 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_0216b470();
      }
                    /* try { // try from 035f6f5c to 036f6f93 has its CatchHandler @ 035f93c0 */
      plStack_80 = plStack_b8;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x50) + 0x28)) {
        plStack_80 = (long *)*plStack_b8;
      }
      (**(code **)(lVar11 + 0x10))(uVar19,lVar11,lVar7,&plStack_80,acStack_84);
      if (acStack_84[0] != '\0') {
        lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
                    /* try { // try from 035f6fa4 to 036f6fd3 has its CatchHandler @ 035f92d8 */
        if (lVar7 == 0) {
                    /* try { // try from 035f722c to 036f7247 has its CatchHandler @ 035f4e9c */
          if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_035f7420;
        }
        FUN_01e76ff0(lVar7,0,*(undefined8 *)PTR_DAT_04cc7018);
        lVar11 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0216b470();
        }
                    /* try { // try from 035f6fec to 036f7007 has its CatchHandler @ 035f930c */
        puVar15 = (undefined8 *)
                  thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar11 + 0xc0) + 0x80) + 0xc0);
        FUN_01e76ff0(lVar7,1,*puVar15);
                    /* try { // try from 035f7010 to 036f7017 has its CatchHandler @ 035f9248 */
        FUN_01e76ff0(lVar7,2,*(undefined8 *)PTR_DAT_04cc7010);
        uStack_90 = 0x40400000;
                    /* try { // try from 035f7024 to 036f7047 has its CatchHandler @ 035f92c8 */
        uVar19 = System_Single__ToString_48425d0(&uStack_90,0);
        FUN_01e76ff0(lVar7,3,uVar19);
                    /* try { // try from 035f7048 to 036f7057 has its CatchHandler @ 035f9240 */
        FUN_01e76ff0(lVar7,4,*(undefined8 *)PTR_DAT_04cc7008);
        func_0x049b5410(plStack_c0,lVar16,uVar18);
                    /* try { // try from 035f7070 to 036f70c3 has its CatchHandler @ 035f93b4 */
        func_0x049b5410(alStack_d0[1],lVar16,uVar18);
        func_0x049b5410(plStack_b8,lVar16,uVar18);
        lVar16 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_0216b470();
        }
        uVar18 = FUN_021331d4(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x50),plStack_b8);
        if ((uVar18 & 1) == 0) {
          plVar21 = (long *)0x0;
        }
        else {
          lVar16 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
                    /* try { // try from 035f70c4 to 036f70df has its CatchHandler @ 035f4e9c */
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x50);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470(lVar16);
          }
                    /* try { // try from 035f70e0 to 036f70ff has its CatchHandler @ 035f93b4 */
          lVar11 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470();
          }
                    /* try { // try from 035f7100 to 036f711b has its CatchHandler @ 035f4e9c */
          FUN_02133bf8(lVar16,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x60),alStack_d0[0],
                       alStack_d0[1],0,&plStack_80);
          plVar21 = plStack_80;
        }
                    /* try { // try from 035f711c to 036f713b has its CatchHandler @ 035f93b4 */
        FUN_01e76ff0(lVar7,5,plVar21);
        uVar19 = System_String__Concat_46d31f0(lVar7,0);
                    /* try { // try from 035f713c to 036f7157 has its CatchHandler @ 035f4e9c */
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 035f7158 to 036f7177 has its CatchHandler @ 035f93b4 */
        UnityEngine_Debug__LogWarning_4357a30(uVar19,0);
        lVar7 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470();
        }
                    /* try { // try from 035f7178 to 036f7193 has its CatchHandler @ 035f4e9c */
        plVar21 = (long *)thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                     0xe0);
        lVar7 = *plVar21;
        if (lVar7 != 0) {
                    /* try { // try from 035f7194 to 036f71b3 has its CatchHandler @ 035f93b4 */
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
      }
    }
  }
LAB_035f6d28:
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  FUN_01e833c8(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),0xfffffffe);
  lVar7 = *(long *)(param_2 + 0x20);
                    /* try { // try from 035f6d5c to 036f6daf has its CatchHandler @ 035f93c0 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  uVar19 = thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x100);
  func_0x049b52e0(uVar19,0,uStack_a8);
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
                    /* try { // try from 035f6db0 to 036f6dcf has its CatchHandler @ 035f4e9c */
  uVar19 = thunk_FUN_02190304(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x20);
  FUN_02247558(uVar19,0);
LAB_035f6dc0:
                    /* try { // try from 035f6dd0 to 036f6df3 has its CatchHandler @ 035f93c0 */
  if (*(long *)(lStack_b0 + 0x28) == lStack_78) {
    return;
  }
LAB_035f7420:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

