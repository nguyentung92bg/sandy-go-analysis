/* IL2CPP: Dino.BusSand.View.GameView.<JamRipple>d__212$$MoveNext
bool Dino_BusSand_View_GameView__JamRipple_d__212__MoveNext (Dino_BusSand_View_GameView__JamRipple_d__212_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024ad638) */
/* WARNING: Removing unreachable block (ram,0x024ad870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<JamRipple>d__212$$MoveNext
   bool Dino_BusSand_View_GameView__JamRipple_d__212__MoveNext
   (Dino_BusSand_View_GameView__JamRipple_d__212_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__JamRipple_d__212__MoveNext_23ad33c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
                    /* try { // try from 024ad33c to 025ad363 has its CatchHandler @ 024ad998 */
  lStack_48 = param_1;
  if ((bRam0000000004f9c963 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc758);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cbc760);
    FUN_02132f7c(PTR_DAT_04cb1898);
                    /* try { // try from 024ad3a0 to 025ad3cb has its CatchHandler @ 024ad994 */
    FUN_02132f7c(PTR_DAT_04cbc768);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cb18a8);
                    /* try { // try from 024ad3d4 to 025ad3db has its CatchHandler @ 024ad98c */
    FUN_02132f7c(PTR_DAT_04cbc770);
                    /* try { // try from 024ad3dc to 025ad4a3 has its CatchHandler @ 024acb6c */
    FUN_02132f7c(PTR_DAT_04cbc778);
    FUN_02132f7c(PTR_DAT_04cbc780);
    FUN_02132f7c(PTR_DAT_04cbc788);
    FUN_02132f7c(PTR_DAT_04cbc790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc798);
    FUN_02132f7c(PTR_DAT_04cbc720);
    FUN_02132f7c(PTR_DAT_04cbc7a0);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c963 = 1;
  }
  puVar2 = PTR_DAT_04cbc790;
  plStack_78 = &lStack_48;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_80 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar10 = (undefined8 *)PTR_DAT_04cbc760;
    plVar11 = (long *)PTR_DAT_04ca9ae8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar13 = 0;
      goto LAB_024ad830;
    }
    lVar12 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_ValueTuple_double__object_____ctor_39a6508
              (lVar6,*(undefined8 *)PTR_DAT_04cbc788);
                    /* try { // try from 024ad4a4 to 025ad4cb has its CatchHandler @ 024ad8fc */
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad864 to 025ad867 has its CatchHandler @ 024ad984 */
      FUN_02133224();
    }
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad868 to 025ad873 has its CatchHandler @ 024acb6c */
      FUN_02133224();
    }
    lVar7 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_68 = Dino_BusSand_Core_Road__get_Buses_2411e9c(lVar7,0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_a0,&uStack_68,*(undefined8 *)PTR_DAT_04cb18a8);
    puVar5 = PTR_DAT_04cbc7a0;
    puVar4 = PTR_DAT_04cbc770;
    puVar3 = PTR_DAT_04cbc4b8;
    puVar2 = PTR_DAT_04cb1898;
    uStack_58 = puStack_98;
    uStack_60 = uStack_a0;
    lStack_50 = lStack_90;
    puStack_98 = &uStack_60;
                    /* try { // try from 024ad508 to 025ad52f has its CatchHandler @ 024ad8f8 */
    uStack_a0 = 0;
LAB_024ad514:
    uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar2);
    lVar7 = lStack_50;
    if ((uVar8 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad850 to 025ad853 has its CatchHandler @ 024ad9e0 */
        FUN_02133224();
      }
      uVar8 = Dino_BusSand_Core_RoadBus__get_HasRoadPosition_2411880(lStack_50,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar12 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad854 to 025ad857 has its CatchHandler @ 024ad9d8 */
          FUN_02133224();
        }
                    /* try { // try from 024ad54c to 025ad553 has its CatchHandler @ 024ad894 */
        uVar8 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(lVar12 + 0xe0),*(undefined4 *)(lVar7 + 0x10),&lStack_70,
                           *(undefined8 *)puVar3);
        if ((uVar8 & 1) != 0) {
                    /* try { // try from 024ad55c to 025ad55f has its CatchHandler @ 024ad8f4 */
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad858 to 025ad85b has its CatchHandler @ 024ad9d4 */
            FUN_02133224();
          }
                    /* try { // try from 024ad560 to 025ad5cf has its CatchHandler @ 024acb6c */
          if (*(int *)(lStack_70 + 0x2c) == 4) {
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lStack_70,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad85c to 025ad85f has its CatchHandler @ 024ad990 */
              FUN_02133224();
            }
            uVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
            if ((uVar8 & 1) != 0) {
              uStack_c0 = 0;
              uStack_b8 = 0;
              System_ValueTuple_double__object____ctor_30dbb58
                        (*(undefined8 *)(lVar7 + 0x40),&uStack_c0,lStack_70,*(undefined8 *)puVar5);
              if (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x10);
                lVar9 = *(long *)puVar4;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                    /* try { // try from 024ad5d0 to 025ad5f7 has its CatchHandler @ 024ad948 */
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    puVar10 = (undefined8 *)(lVar7 + 0x28);
                    *puVar10 = uStack_b8;
                    *(undefined8 *)(lVar7 + 0x20) = uStack_c0;
                    thunk_FUN_02134474(puVar10,0);
                  }
                  else {
                    System_Collections_Generic_List_ValueTuple_double__object____AddWithResize_39a6dc0
                              (lVar6,uStack_c0,uStack_b8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_024ad514;
                }
              }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad860 to 025ad863 has its CatchHandler @ 024ad988 */
              FUN_02133224();
            }
          }
        }
      }
      goto LAB_024ad514;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cb1890);
    puVar2 = PTR_DAT_04cbc720;
                    /* try { // try from 024ad634 to 025ad65b has its CatchHandler @ 024ad944 */
    lVar12 = *(long *)PTR_DAT_04cbc720;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    puVar10 = *(undefined8 **)(lVar12 + 0xb8);
    lVar7 = puVar10[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
                    /* try { // try from 024ad678 to 025ad67f has its CatchHandler @ 024ad8ec */
      uVar13 = *puVar10;
                    /* try { // try from 024ad688 to 025ad68b has its CatchHandler @ 024ad940 */
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc758);
                    /* try { // try from 024ad68c to 025ad793 has its CatchHandler @ 024acb6c */
      System_Comparison_ValueTuple_double__object_____ctor_3323460
                (lVar7,uVar13,*(undefined8 *)PTR_DAT_04cbc798,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar11 = lVar7;
      thunk_FUN_02134474(plVar11,lVar7);
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad87c to 025ad87f has its CatchHandler @ 024ad8e8 */
      FUN_02133224();
    }
    System_Collections_Generic_List_ValueTuple_double__object____Sort_39a88d0
              (lVar6,lVar7,*(undefined8 *)PTR_DAT_04cbc780);
    System_Collections_Generic_List_ValueTuple_double__object____GetEnumerator_39a780c
              (&uStack_c0,lVar6,*(undefined8 *)PTR_DAT_04cbc778);
    puStack_98 = (undefined8 *)uStack_b8;
    uStack_a0 = uStack_c0;
    uStack_88 = uStack_a8;
    lStack_90 = lStack_b0;
    *(undefined8 *)(lStack_48 + 0x30) = uStack_b8;
    *(undefined8 *)(lStack_48 + 0x28) = uStack_c0;
    *(undefined8 *)(lStack_48 + 0x40) = uStack_a8;
    *(long *)(lStack_48 + 0x38) = lStack_b0;
    thunk_FUN_02134474(lStack_48 + 0x28,0);
    *(undefined4 *)(lStack_48 + 0x10) = 0xfffffffd;
    puVar10 = (undefined8 *)PTR_DAT_04cbc760;
    plVar11 = (long *)PTR_DAT_04ca9ae8;
  }
  do {
    uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_double__object____MoveNext_35bafa4
                      (lStack_48 + 0x28,*puVar10);
    if ((uVar8 & 1) == 0) {
      Dino_BusSand_View_GameView__JamRipple_d__212____m__Finally1_23ad990();
      uVar13 = 0;
      *(undefined8 *)(lStack_48 + 0x30) = 0;
      *(undefined8 *)(lStack_48 + 0x28) = 0;
                    /* try { // try from 024ad82c to 025ad833 has its CatchHandler @ 024ad8a0 */
      *(undefined8 *)(lStack_48 + 0x40) = 0;
      *(undefined8 *)(lStack_48 + 0x38) = 0;
      goto LAB_024ad830;
    }
    lVar6 = *(long *)(lStack_48 + 0x40);
    if (*(int *)(*plVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*plVar11);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  } while ((uVar8 & 1) != 0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ad878 to 025ad87b has its CatchHandler @ 024ad8f0 */
    FUN_02133224();
  }
  Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e20aec,0,lVar6,0);
  puVar2 = PTR_DAT_04cb2870;
                    /* try { // try from 024ad794 to 025ad7bb has its CatchHandler @ 024ad8ac */
  lVar12 = *(long *)PTR_DAT_04cb2870;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  lVar12 = *(long *)(lVar12 + 0xb8);
  Dino_BusSand_View_VehicleView__Flash_23fddcc
            (_UNK_00e206e4,*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x4c),
             *(undefined4 *)(lVar12 + 0x50),*(undefined4 *)(lVar12 + 0x54),lVar6,0);
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e2043c,uVar13,0);
  *(undefined8 *)(lStack_48 + 0x18) = uVar13;
                    /* try { // try from 024ad7f8 to 025ad823 has its CatchHandler @ 024ad8a8 */
  thunk_FUN_02134474((undefined8 *)(lStack_48 + 0x18),uVar13);
  uVar13 = 1;
  *(undefined4 *)(lStack_48 + 0x10) = 1;
LAB_024ad830:
  lVar6 = lStack_80;
  if (lStack_80 == 0) {
                    /* try { // try from 024ad838 to 025ad83b has its CatchHandler @ 024ada80 */
                    /* try { // try from 024ad83c to 025ad83f has its CatchHandler @ 024ada78 */
                    /* try { // try from 024ad840 to 025ad843 has its CatchHandler @ 024ada74 */
                    /* try { // try from 024ad844 to 025ad847 has its CatchHandler @ 024ada30 */
                    /* try { // try from 024ad848 to 025ad84b has its CatchHandler @ 024ada28 */
                    /* try { // try from 024ad84c to 025ad84f has its CatchHandler @ 024ada24 */
    return uVar13;
  }
                    /* try { // try from 024ad964 to 025ad967 has its CatchHandler @ 024ad974 */
  FUN_01e7b128(&plStack_78);
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 024ad964 with catch @ 024ad974 */
  FUN_0213321c(lVar6);
}

