/* IL2CPP: Dino.BusSand.View.GameView$$UpdateRoadVehicles
void Dino_BusSand_View_GameView__UpdateRoadVehicles (Dino_BusSand_View_GameView_o* __this, float vdt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$UpdateRoadVehicles
   void Dino_BusSand_View_GameView__UpdateRoadVehicles (Dino_BusSand_View_GameView_o* __this, float
   vdt, const MethodInfo* method); */

void Dino_BusSand_View_GameView__UpdateRoadVehicles_23a332c(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
                    /* try { // try from 024a3348 to 025a33e7 has its CatchHandler @ 024a3348
                       catch() { ... } // from try @ 024a3348 with catch @ 024a3348
                       catch() { ... } // from try @ 024a3420 with catch @ 024a3348
                       catch() { ... } // from try @ 024a347c with catch @ 024a3348
                       catch() { ... } // from try @ 024a34a8 with catch @ 024a3348 */
  if ((bRam0000000004f9c92a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc538);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc540);
    FUN_02132f7c(PTR_DAT_04cbc548);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c92a = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 024a33e8 to 025a33ef has its CatchHandler @ 024a345c */
  lStack_b0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  fStack_d8 = 0.0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  fStack_f0 = 0.0;
                    /* try { // try from 024a3400 to 025a340b has its CatchHandler @ 024a3458 */
  uStack_108 = 0;
  uStack_110 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    fVar15 = (float)Dino_BusSand_Core_StageEngine__get_Alpha_2425324(*(long *)(param_2 + 0x20),0);
    puVar6 = PTR_DAT_04cbc4b8;
    puVar5 = PTR_DAT_04cb18a8;
    puVar4 = PTR_DAT_04cb1898;
    puVar3 = PTR_DAT_04caa200;
                    /* try { // try from 024a3414 to 025a341f has its CatchHandler @ 024a3454 */
                    /* try { // try from 024a3420 to 025a3477 has its CatchHandler @ 024a3348 */
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar13 != 0)) {
      uStack_c8 = Dino_BusSand_Core_Road__get_Buses_2411e9c(lVar13,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a3414 with catch @ 024a3454
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a3400 with catch @ 024a3458
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a33e8 with catch @ 024a345c
                        */
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&uStack_130,&uStack_c8,*(undefined8 *)puVar5);
      fVar2 = _UNK_00e207cc;
      fVar1 = _UNK_00e20590;
      lStack_b0 = CONCAT44(uStack_11c,fStack_120);
                    /* try { // try from 024a3478 to 025a347b has its CatchHandler @ 024a349c */
                    /* try { // try from 024a347c to 025a349f has its CatchHandler @ 024a3348 */
      uStack_b8 = uStack_128;
      uStack_c0 = uStack_130;
                    /* catch() { ... } // from try @ 024a3478 with catch @ 024a349c */
                    /* try { // try from 024a34a0 to 025a34a7 has its CatchHandler @ 024a34b0 */
                    /* try { // try from 024a34a8 to 025a34b3 has its CatchHandler @ 024a3348 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a34a0 with catch @ 024a34b0
                        */
LAB_024a34b4:
      do {
                    /* try { // try from 024a34b4 to 025a354f has its CatchHandler @ 024a34b4
                       catch() { ... } // from try @ 024a34b4 with catch @ 024a34b4
                       catch() { ... } // from try @ 024a3578 with catch @ 024a34b4
                       catch() { ... } // from try @ 024a35c8 with catch @ 024a34b4
                       catch() { ... } // from try @ 024a35f4 with catch @ 024a34b4 */
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_c0,*(undefined8 *)puVar4);
        lVar11 = lStack_b0;
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 024a3a84 to 025a3a8f has its CatchHandler @ 024a3780 */
                    /* catch() { ... } // from try @ 024a3a7c with catch @ 024a3a8c */
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_c0,*(undefined8 *)PTR_DAT_04cb1890);
          return;
        }
        if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(param_2 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                           (*(long *)(param_2 + 0xe0),*(undefined4 *)(lStack_b0 + 0x10),&lStack_d0,
                            *(undefined8 *)puVar6);
      } while (((uVar10 & 1) == 0) ||
              (uVar10 = Dino_BusSand_Core_RoadBus__get_HasRoadPosition_2411880(lVar11,0),
              (uVar10 & 1) == 0));
      if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(int *)(lStack_d0 + 0x2c) == 2) && (*(char *)(lVar11 + 0x50) != '\0'))
      goto code_r0x024a3514;
      goto LAB_024a3558;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
code_r0x024a3514:
  lVar14 = *(long *)(param_2 + 0x30);
  dVar25 = *(double *)(lVar11 + 0x40);
  dVar19 = (double)Dino_BusSand_Core_RoadBus__get_Half_24117d4(lVar11,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar16 = (float)Dino_BusSand_View_StageLayout__RoadToWorldX_23e8aa8(dVar25 + dVar19,lVar14,0);
  if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (fVar16 < *(float *)(*(long *)(param_2 + 0x30) + 0x4c)) goto LAB_024a34b4;
                    /* try { // try from 024a3550 to 025a3557 has its CatchHandler @ 024a35a8 */
  if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_024a3558:
  if (*(int *)(lStack_d0 + 0x2c) != 4) {
    Dino_BusSand_View_VehicleView__EnterRoad_23feb40(lStack_d0,0);
  }
  lVar14 = lStack_d0;
                    /* try { // try from 024a356c to 025a3577 has its CatchHandler @ 024a35a4 */
  dVar22 = *(double *)(lVar11 + 0x48);
  dVar25 = (double)*(int *)(lVar13 + 0x24);
                    /* try { // try from 024a3578 to 025a35c3 has its CatchHandler @ 024a34b4 */
  dVar19 = dVar25;
  if (dVar22 + dVar25 * -0.5 <= *(double *)(lVar11 + 0x40)) {
    dVar19 = -0.0;
  }
  dVar22 = dVar22 + ((*(double *)(lVar11 + 0x40) + dVar19) - dVar22) * (double)fVar15;
  if (dVar25 <= dVar22) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a356c with catch @ 024a35a4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a3550 with catch @ 024a35a8
                        */
    dVar19 = 0.0;
    if (*(int *)(lVar11 + 0x28) != 3) {
      dVar19 = dVar25;
    }
    dVar22 = dVar22 - dVar19;
  }
  if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 024a35c4 to 025a35c7 has its CatchHandler @ 024a35e8 */
                    /* try { // try from 024a35c8 to 025a35eb has its CatchHandler @ 024a34b4 */
  if ((*(char *)(lStack_d0 + 0x378) != '\0') && (*(char *)(lStack_d0 + 0x379) == '\0')) {
    uVar18 = Dino_BusSand_Core_RoadBus__get_Progress_2411810(lVar11,0);
    uVar17 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lVar11,0);
    Dino_BusSand_View_VehicleView__SetFill_23fed2c(uVar18,lVar14,uVar17 & 1,0);
    lVar14 = lStack_d0;
                    /* try { // try from 024a38c8 to 025a38cf has its CatchHandler @ 024a3a40 */
    if (*(int *)(lVar11 + 0x28) == 3) {
LAB_024a3924:
                    /* try { // try from 024a3924 to 025a393b has its CatchHandler @ 024a3a2c */
      bVar7 = false;
    }
    else {
      lVar11 = *(long *)(param_2 + 0x30);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar16 = *(float *)(lVar11 + 0x60);
      uVar18 = *(undefined4 *)(lVar11 + 0xb4);
                    /* try { // try from 024a38f0 to 025a38f3 has its CatchHandler @ 024a3a28 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 024a38f4 to 025a3903 has its CatchHandler @ 024a3a3c */
        thunk_FUN_0218fdac();
      }
      fVar20 = (float)System_Math__Max_4830ff4(_UNK_00e20948,uVar18,0);
      if (dVar22 < (double)((fVar16 * -0.5) / fVar20)) goto LAB_024a3924;
                    /* try { // try from 024a3a5c to 025a3a5f has its CatchHandler @ 024a3a78 */
                    /* try { // try from 024a3a60 to 025a3a7b has its CatchHandler @ 024a3780 */
      bVar7 = dVar22 < (double)*(int *)(lVar13 + 0x20);
    }
    if (lVar14 != 0) {
                    /* catch() { ... } // from try @ 024a3a5c with catch @ 024a3a78 */
      Dino_BusSand_View_VehicleView__SetLidOpen_23febdc(lVar14,bVar7,0);
                    /* try { // try from 024a3a7c to 025a3a83 has its CatchHandler @ 024a3a8c */
      goto LAB_024a34b4;
    }
    goto LAB_024a3ad0;
  }
  lVar14 = *(long *)(param_2 + 0x30);
  if (*(int *)(lVar11 + 0x28) == 3) {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 024a35c4 with catch @ 024a35e8 */
                    /* try { // try from 024a35ec to 025a35f3 has its CatchHandler @ 024a35fc */
    uVar17 = Dino_BusSand_View_StageLayout__RoadToWorldX_23e8aa8(dVar22,lVar14,0);
                    /* try { // try from 024a35f4 to 025a35ff has its CatchHandler @ 024a34b4 */
    if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fStack_d8 = *(float *)(*(long *)(param_2 + 0x30) + 0xc4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a35ec with catch @ 024a35fc
                        */
    uStack_e0 = (ulong)uVar17;
    uStack_e8 = uStack_e8 & 0xffffffff;
    if (*(long *)(param_2 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__float__float____TryGetValue_340f358
                       (*(long *)(param_2 + 0x140),*(undefined4 *)(lVar11 + 0x10),&uStack_100,
                        *(undefined8 *)PTR_DAT_04cbc540);
    if ((uVar10 & 1) != 0) {
      lVar14 = *(long *)(param_2 + 0x140);
      fStack_f0 = fStack_f0 + param_1;
      fVar20 = fStack_f0 / fVar1;
      fVar16 = 1.0;
      if (fVar20 <= 1.0) {
        fVar16 = fVar20;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar20) {
        fVar21 = fVar16;
      }
      fVar20 = fVar21 * fVar21 * 3.0 - fVar21 * fVar21 * (fVar21 + fVar21);
      fVar20 = fVar20 + (1.0 - fVar20) * 0.0;
      fVar16 = 1.0;
      if (fVar20 <= 1.0) {
        fVar16 = fVar20;
      }
      fVar23 = (0.0 - uStack_f8._4_4_) + (float)(int)((0.0 - uStack_f8._4_4_) / 360.0) * -360.0;
      fVar21 = 0.0;
      if (0.0 <= fVar20) {
        fVar21 = fVar16;
      }
      fVar16 = 360.0;
      if (fVar23 <= 360.0) {
        fVar16 = fVar23;
      }
      fVar24 = (float)((ulong)uStack_100 >> 0x20);
      fVar20 = 0.0;
      if (0.0 <= fVar23) {
        fVar20 = fVar16;
      }
      fVar16 = fVar20 + -360.0;
      if (fVar20 <= 180.0) {
        fVar16 = fVar20;
      }
      uStack_e0 = CONCAT44(fVar24 + ((float)(uStack_e0 >> 0x20) - fVar24) * fVar21,
                           (float)uStack_100 + ((float)uStack_e0 - (float)uStack_100) * fVar21);
      fStack_d8 = (float)uStack_f8 + (fStack_d8 - (float)uStack_f8) * fVar21;
      uStack_e8 = CONCAT44(uStack_f8._4_4_ + fVar21 * fVar16,(float)uStack_e8);
      if (fVar1 <= fStack_f0) {
                    /* catch() { ... } // from try @ 024a38c8 with catch @ 024a3a40 */
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__float__float____Remove_340edac
                  (lVar14,*(undefined4 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_04cbc538);
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uStack_128 = uStack_f8;
        uStack_130 = uStack_100;
        fStack_120 = fStack_f0;
        System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__float__float____set_Item_340d824
                  (lVar14,*(undefined4 *)(lVar11 + 0x10),&uStack_130,*(undefined8 *)PTR_DAT_04cbc548
                  );
      }
    }
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_View_StageLayout__VehiclePose_23e9634
              (dVar22,lVar14,&uStack_e0,(long)&uStack_e8 + 4,0);
  }
  lVar14 = *(long *)(param_2 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  System_Math__Max_4830f98(0,dVar22 + -2.0,0);
                    /* try { // try from 024a3780 to 025a38c7 has its CatchHandler @ 024a3780
                       catch() { ... } // from try @ 024a3780 with catch @ 024a3780
                       catch() { ... } // from try @ 024a39d0 with catch @ 024a3780
                       catch() { ... } // from try @ 024a3a10 with catch @ 024a3780
                       catch() { ... } // from try @ 024a3a60 with catch @ 024a3780
                       catch() { ... } // from try @ 024a3a84 with catch @ 024a3780 */
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_StageLayout__VehiclePose_23e9634(lVar14,&uStack_110,&uStack_e8,0);
  if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar20 = (uStack_e8._4_4_ - (float)uStack_e8) +
           (float)(int)((uStack_e8._4_4_ - (float)uStack_e8) / 360.0) * -360.0;
  fVar16 = 360.0;
  if (fVar20 <= 360.0) {
    fVar16 = fVar20;
  }
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar16;
  }
  fVar16 = fVar21 + -360.0;
  if (fVar21 <= 180.0) {
    fVar16 = fVar21;
  }
  Dino_BusSand_View_VehicleView__SetRoadPose_23fec70
            (uStack_e0 & 0xffffffff,uStack_e0._4_4_,fStack_d8,uStack_e8._4_4_,fVar16 * 20.0,
             lStack_d0,0);
  lVar14 = lStack_d0;
  uVar18 = Dino_BusSand_Core_RoadBus__get_Progress_2411810(lVar11,0);
  uVar17 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lVar11,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_VehicleView__SetFill_23fed2c(uVar18,lVar14,uVar17 & 1,0);
  lVar14 = lStack_d0;
  if (*(int *)(lVar11 + 0x28) == 3) {
LAB_024a388c:
    bVar7 = false;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x30);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar16 = *(float *)(lVar12 + 0x60);
    uVar18 = *(undefined4 *)(lVar12 + 0xb4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar20 = (float)System_Math__Max_4830ff4(_UNK_00e20948,uVar18,0);
    if (dVar22 < (double)((fVar16 * -0.5) / fVar20)) goto LAB_024a388c;
    bVar7 = dVar22 < (double)*(int *)(lVar13 + 0x20);
  }
  if (lVar14 == 0) {
LAB_024a3ad0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 024a3948 to 025a394f has its CatchHandler @ 024a3a1c */
  Dino_BusSand_View_VehicleView__SetLidOpen_23febdc(lVar14,bVar7,0);
  uVar10 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
  if ((uVar10 & 1) == 0) {
                    /* try { // try from 024a399c to 025a399f has its CatchHandler @ 024a3a14 */
                    /* try { // try from 024a39a0 to 025a39af has its CatchHandler @ 024a3a20 */
    uVar10 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920(dVar22,lVar13,0);
    if ((uVar10 & 1) != 0) {
      lVar11 = *(long *)(param_2 + 0xa0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar16 = *(float *)(*(long *)(param_2 + 0x30) + 0x60) * fVar2;
                    /* try { // try from 024a39c8 to 025a39cf has its CatchHandler @ 024a3a34 */
                    /* try { // try from 024a39d0 to 025a3a03 has its CatchHandler @ 024a3780 */
      if (*(float *)(lVar11 + 0x30) + fVar16 < (float)uStack_e0) {
        bVar8 = (float)uStack_e0 < *(float *)(lVar11 + 0x34) - fVar16;
        goto LAB_024a39f4;
      }
    }
  }
  else {
                    /* try { // try from 024a3970 to 025a3977 has its CatchHandler @ 024a3a18 */
    if ((*(int *)(lVar11 + 0x28) != 3) &&
       (uVar10 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920(dVar22,lVar13,0),
       (uVar10 & 1) != 0)) {
      if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar8 = Dino_BusSand_View_StageLayout__BehindFrame_23e8ac0
                        (uStack_e0 & 0xffffffff,uStack_e0._4_4_,fStack_d8,*(long *)(param_2 + 0x30),
                         0);
      goto LAB_024a39f4;
    }
  }
  bVar8 = 0;
LAB_024a39f4:
  if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lStack_d0,0);
                    /* try { // try from 024a3a04 to 025a3a07 has its CatchHandler @ 024a3a38 */
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 024a3a08 to 025a3a0b has its CatchHandler @ 024a3a30 */
                    /* try { // try from 024a3a0c to 025a3a0f has its CatchHandler @ 024a3a24 */
  bVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar11,0);
                    /* try { // try from 024a3a10 to 025a3a5b has its CatchHandler @ 024a3780 */
                    /* catch() { ... } // from try @ 024a399c with catch @ 024a3a14 */
  if (((bVar8 ^ bVar9) & 1) == 0) {
                    /* catch() { ... } // from try @ 024a3970 with catch @ 024a3a18 */
                    /* catch() { ... } // from try @ 024a3948 with catch @ 024a3a1c */
    if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 024a39a0 with catch @ 024a3a20 */
                    /* catch() { ... } // from try @ 024a3a0c with catch @ 024a3a24 */
    lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lStack_d0,0);
                    /* catch() { ... } // from try @ 024a38f0 with catch @ 024a3a28 */
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 024a3924 with catch @ 024a3a2c */
                    /* catch() { ... } // from try @ 024a3a08 with catch @ 024a3a30 */
                    /* catch() { ... } // from try @ 024a39c8 with catch @ 024a3a34 */
                    /* catch() { ... } // from try @ 024a3a04 with catch @ 024a3a38 */
    UnityEngine_GameObject__SetActive_43c1408(lVar11,(bVar8 ^ 0xff) & 1,0);
                    /* catch() { ... } // from try @ 024a38f4 with catch @ 024a3a3c */
  }
  goto LAB_024a34b4;
}

