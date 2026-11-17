/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$CaptureItemState
void Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t targetId, bool roadTarget, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$CaptureItemState
   void Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t targetId, bool roadTarget, const
   MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState_229b468
               (long param_1,int param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  float fVar21;
  int iStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c223 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9d8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb57c0);
    FUN_02132f7c(PTR_DAT_04cb57c8);
    FUN_02132f7c(PTR_DAT_04cb57d0);
    FUN_02132f7c(PTR_DAT_04cb57d8);
    FUN_02132f7c(PTR_DAT_04cb57e0);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cb57e8);
    FUN_02132f7c(PTR_DAT_04cb57f0);
    FUN_02132f7c(PTR_DAT_04cb57f8);
    FUN_02132f7c(PTR_DAT_04cb5800);
    bRam0000000004f9c223 = 1;
  }
  puVar2 = PTR_DAT_04ca9c20;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a0 = 0;
  puStack_98 = (ulong *)0x0;
  lStack_90 = 0;
  uStack_68 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar11 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar11 == 0) {
    uVar16 = FUN_02133068(*(undefined8 *)puVar2,0);
    puVar17 = (undefined8 *)(param_1 + 0x50);
    *puVar17 = uVar16;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar17 >> 0xc & 0x3f),
                   ((ulong)puVar17 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  uStack_80 = *(undefined8 *)(lVar11 + 0x18);
  thunk_FUN_02134474(&uStack_80);
  puVar6 = PTR_DAT_04cabc80;
  puVar5 = PTR_DAT_04cab9f8;
  puVar4 = PTR_DAT_04cab9e8;
  puVar3 = PTR_DAT_04cab9e0;
  puVar2 = PTR_DAT_04cab9d8;
  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0239be9c;
  uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x3c));
  if (*(long *)(lVar11 + 0x28) == 0) goto LAB_0239be9c;
  uStack_68 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar11 + 0x28),0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_d8,&uStack_68,*(undefined8 *)puVar5);
  iVar18 = 0;
  iStack_f0 = 0;
  lStack_90 = lStack_c8;
  puStack_98 = puStack_d0;
  uStack_a0 = uStack_d8;
  uStack_d8 = 0;
  iVar7 = 0;
  puStack_d0 = &uStack_a0;
  while (iVar20 = iVar7,
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_a0,*(undefined8 *)puVar4), lVar14 = lStack_90, (uVar12 & 1) != 0
        ) {
    if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(*(long *)(lVar11 + 0x28),lStack_90,0);
    iVar7 = iVar20;
    if ((uVar12 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar12 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                         (*(long *)(lVar11 + 0x50),*(undefined4 *)(lVar14 + 0x10),&uStack_a8,
                          *(undefined8 *)puVar2);
      if ((uVar12 & 1) != 0) {
        iVar18 = iVar18 + 1;
        uVar12 = uStack_a8 & 0xff;
        if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar7 = Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0_229bf0c
                          (uVar12,&uStack_80);
        if (0 < iVar7) {
          iStack_f0 = iStack_f0 + 1;
        }
        if (iVar7 <= iVar20) {
          iVar7 = iVar20;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_a0,*(undefined8 *)puVar3);
  if (param_2 < 0) {
LAB_0239b7e0:
                    /* try { // try from 0239b7e0 to 0249b7fb has its CatchHandler @ 0239b788 */
    uVar9 = 0xffffffff;
    uVar8 = 0xffffffff;
    plVar19 = (long *)PTR_DAT_04caa200;
  }
  else {
    if ((param_3 & 1) == 0) {
                    /* catch() { ... } // from try @ 0239b79c with catch @ 0239b788
                       catch() { ... } // from try @ 0239b7e0 with catch @ 0239b788
                       catch() { ... } // from try @ 0239b814 with catch @ 0239b788 */
      if (*(long *)(lVar11 + 0x28) == 0) goto LAB_0239be9c;
                    /* try { // try from 0239b794 to 0249b79b has its CatchHandler @ 0239b7b0 */
      uVar12 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                         (*(long *)(lVar11 + 0x28),param_2,&uStack_b8,0);
                    /* try { // try from 0239b79c to 0249b7db has its CatchHandler @ 0239b788 */
      if ((uVar12 & 1) != 0) {
        if (*(long *)(lVar11 + 0x50) == 0) goto LAB_0239be9c;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0239b794 with catch @ 0239b7b0
                        */
        uVar12 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                           (*(long *)(lVar11 + 0x50),param_2,&uStack_c0,*(undefined8 *)puVar2);
        if ((uVar12 & 1) != 0) {
          uVar12 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8(lVar11,param_2,0);
          plVar19 = (long *)PTR_DAT_04caa200;
          if ((uVar12 & 1) == 0) {
            uVar12 = uStack_c0 & 0xff;
                    /* catch() { ... } // from try @ 0239b7dc with catch @ 0239b80c
                       catch() { ... } // from try @ 0239b7fc with catch @ 0239b80c */
                    /* try { // try from 0239b810 to 0249b813 has its CatchHandler @ 0239b81c */
                    /* try { // try from 0239b814 to 0249b81f has its CatchHandler @ 0239b788 */
            if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0239b810 with catch @ 0239b81c
                        */
            uVar8 = Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0_229bf0c
                              (uVar12,&uStack_80);
          }
          else {
            uVar8 = 0xffffffff;
                    /* try { // try from 0239b7dc to 0249b7df has its CatchHandler @ 0239b80c */
          }
          if (*(long *)(lVar11 + 0x28) == 0) goto LAB_0239be9c;
          uVar9 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4
                            (*(long *)(lVar11 + 0x28),uStack_b8,0);
          uVar9 = uVar9 & 1;
          goto LAB_0239b844;
        }
      }
      goto LAB_0239b7e0;
    }
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0239be9c;
    uVar12 = Dino_BusSand_Core_Road__TryGet_24127e0(*(long *)(lVar11 + 0x20),param_2,&lStack_b0,0);
    plVar19 = (long *)PTR_DAT_04caa200;
    if ((uVar12 & 1) == 0) {
      uVar9 = 0xffffffff;
      uVar8 = 0xffffffff;
                    /* try { // try from 0239b7fc to 0249b80b has its CatchHandler @ 0239b80c */
    }
    else {
      if (lStack_b0 == 0) goto LAB_0239be9c;
      uVar1 = *(undefined1 *)(lStack_b0 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Gameplay_GameplayController___CaptureItemState_g__Band_52_0_229bf0c
                        (uVar1,&uStack_80);
      uVar9 = 0xffffffff;
    }
  }
LAB_0239b844:
  plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x14);
  if (plVar13 == (long *)0x0) goto LAB_0239be9c;
  lVar14 = *(long *)puVar6;
  if ((lVar14 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_0239be90:
    uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar16,0);
  }
  if ((int)plVar13[3] != 0) {
    plVar13[4] = *(long *)puVar6;
    thunk_FUN_02134474();
    fVar21 = (float)Dino_BusSand_App_Gameplay_GameplayController__get_Progress01_229b3c8(param_1);
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b890 = '\x01';
    }
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_d8 = System_Math__Round_48312e4((double)fVar21,3,0,0);
    puVar2 = PTR_DAT_04ca9ac8;
    lVar14 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_d8);
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
    goto LAB_0239be90;
    if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
      plVar13[5] = lVar14;
      thunk_FUN_02134474(plVar13 + 5,lVar14);
      puVar3 = PTR_DAT_04cb57d0;
      if ((*(long *)PTR_DAT_04cb57d0 != 0) &&
         (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57d0,*(undefined8 *)(*plVar13 + 0x40)),
         lVar14 == 0)) goto LAB_0239be90;
      if (2 < *(uint *)(plVar13 + 3)) {
        plVar13[6] = *(long *)puVar3;
        thunk_FUN_02134474();
        fVar21 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        fVar21 = fVar21 - *(float *)(param_1 + 0x5c);
        iStack_dc = -0x80000000;
        if (fVar21 != INFINITY) {
          iStack_dc = (int)fVar21;
        }
        lVar14 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_dc);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
        goto LAB_0239be90;
        if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
          plVar13[7] = lVar14;
          thunk_FUN_02134474(plVar13 + 7,lVar14);
          puVar3 = PTR_DAT_04cb5800;
          if ((*(long *)PTR_DAT_04cb5800 != 0) &&
             (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb5800,*(undefined8 *)(*plVar13 + 0x40)
                                         ), lVar14 == 0)) goto LAB_0239be90;
          if (4 < *(uint *)(plVar13 + 3)) {
            plVar13[8] = *(long *)puVar3;
            thunk_FUN_02134474();
            if (*(long *)(lVar11 + 0x20) == 0) {
LAB_0239be9c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iStack_e0 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(lVar11 + 0x20),0);
            lVar14 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_e0);
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0239be90;
            if (5 < *(uint *)(plVar13 + 3)) {
              plVar13[9] = lVar14;
              thunk_FUN_02134474(plVar13 + 9,lVar14);
              puVar3 = PTR_DAT_04cb57d8;
              if ((*(long *)PTR_DAT_04cb57d8 != 0) &&
                 (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57d8,
                                              *(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
              goto LAB_0239be90;
              if (6 < *(uint *)(plVar13 + 3)) {
                plVar13[10] = *(long *)puVar3;
                thunk_FUN_02134474();
                if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0239be9c;
                iStack_e4 = *(int *)(*(long *)(lVar11 + 0x20) + 0x38);
                lVar14 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_e4);
                if ((lVar14 != 0) &&
                   (lVar15 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar15 == 0)) goto LAB_0239be90;
                if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                  plVar13[0xb] = lVar14;
                  thunk_FUN_02134474(plVar13 + 0xb,lVar14);
                  puVar3 = PTR_DAT_04cb57e0;
                  if ((*(long *)PTR_DAT_04cb57e0 != 0) &&
                     (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57e0,
                                                  *(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                  goto LAB_0239be90;
                  if (8 < *(uint *)(plVar13 + 3)) {
                    plVar13[0xc] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0239be9c;
                    uVar10 = Dino_BusSand_Core_Road__get_AnyBusLeaving_24121d8
                                       (*(long *)(lVar11 + 0x20),0);
                    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar10) & 0xffffffff00000001;
                    lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_d8);
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar14 == 0)) goto LAB_0239be90;
                    if (9 < *(uint *)(plVar13 + 3)) {
                      plVar13[0xd] = lVar11;
                      thunk_FUN_02134474(plVar13 + 0xd,lVar11);
                      puVar3 = PTR_DAT_04cb57c8;
                      if ((*(long *)PTR_DAT_04cb57c8 != 0) &&
                         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57c8,
                                                      *(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0
                         )) goto LAB_0239be90;
                      if (10 < *(uint *)(plVar13 + 3)) {
                        plVar13[0xe] = *(long *)puVar3;
                        thunk_FUN_02134474();
                        iStack_dc = iVar18;
                        lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_dc);
                        if ((lVar11 != 0) &&
                           (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar14 == 0)) goto LAB_0239be90;
                        if (0xb < *(uint *)(plVar13 + 3)) {
                          plVar13[0xf] = lVar11;
                          thunk_FUN_02134474(plVar13 + 0xf,lVar11);
                          puVar3 = PTR_DAT_04cb57c0;
                          if ((*(long *)PTR_DAT_04cb57c0 != 0) &&
                             (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57c0,
                                                          *(undefined8 *)(*plVar13 + 0x40)),
                             lVar11 == 0)) goto LAB_0239be90;
                          if (0xc < *(uint *)(plVar13 + 3)) {
                            plVar13[0x10] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            iStack_e0 = iStack_f0;
                            lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_e0);
                            if ((lVar11 != 0) &&
                               (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar14 == 0)) goto LAB_0239be90;
                            if (0xd < *(uint *)(plVar13 + 3)) {
                              plVar13[0x11] = lVar11;
                              thunk_FUN_02134474(plVar13 + 0x11,lVar11);
                              puVar3 = PTR_DAT_04cb57e8;
                              if ((*(long *)PTR_DAT_04cb57e8 != 0) &&
                                 (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57e8,
                                                              *(undefined8 *)(*plVar13 + 0x40)),
                                 lVar11 == 0)) goto LAB_0239be90;
                              if (0xe < *(uint *)(plVar13 + 3)) {
                                plVar13[0x12] = *(long *)puVar3;
                                thunk_FUN_02134474();
                                iStack_e4 = iVar20;
                                lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_e4);
                                if ((lVar11 != 0) &&
                                   (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_0239be90;
                                if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                  plVar13[0x13] = lVar11;
                                  thunk_FUN_02134474(plVar13 + 0x13,lVar11);
                                  puVar3 = PTR_DAT_04cb57f8;
                                  if ((*(long *)PTR_DAT_04cb57f8 != 0) &&
                                     (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57f8,
                                                                  *(undefined8 *)(*plVar13 + 0x40)),
                                     lVar11 == 0)) goto LAB_0239be90;
                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                    plVar13[0x14] = *(long *)puVar3;
                                    thunk_FUN_02134474();
                                    uStack_e8 = uVar8;
                                    lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_e8)
                                    ;
                                    if ((lVar11 != 0) &&
                                       (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)
                                                                            (*plVar13 + 0x40)),
                                       lVar14 == 0)) goto LAB_0239be90;
                                    if (0x11 < *(uint *)(plVar13 + 3)) {
                                      plVar13[0x15] = lVar11;
                                      thunk_FUN_02134474(plVar13 + 0x15,lVar11);
                                      puVar3 = PTR_DAT_04cb57f0;
                                      if ((*(long *)PTR_DAT_04cb57f0 != 0) &&
                                         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb57f0,
                                                                      *(undefined8 *)
                                                                       (*plVar13 + 0x40)),
                                         lVar11 == 0)) goto LAB_0239be90;
                                      if (0x12 < *(uint *)(plVar13 + 3)) {
                                        plVar13[0x16] = *(long *)puVar3;
                                        thunk_FUN_02134474();
                                        uStack_ec = uVar9;
                                        lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),
                                                              &uStack_ec);
                                        if ((lVar11 != 0) &&
                                           (lVar14 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)
                                                                                (*plVar13 + 0x40)),
                                           lVar14 == 0)) goto LAB_0239be90;
                                        if (0x13 < *(uint *)(plVar13 + 3)) {
                                          plVar13[0x17] = lVar11;
                                          thunk_FUN_02134474(plVar13 + 0x17,lVar11);
                                          *(long *)(param_1 + 0x50) = (long)plVar13;
                                          thunk_FUN_02134474((long *)(param_1 + 0x50),plVar13);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

