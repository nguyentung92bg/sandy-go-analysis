/* IL2CPP: Dino.BusSand.View.GameView.<ReliefRipple>d__215$$MoveNext
bool Dino_BusSand_View_GameView__ReliefRipple_d__215__MoveNext (Dino_BusSand_View_GameView__ReliefRipple_d__215_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024add6c) */
/* WARNING: Removing unreachable block (ram,0x024adfac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<ReliefRipple>d__215$$MoveNext
   bool Dino_BusSand_View_GameView__ReliefRipple_d__215__MoveNext
   (Dino_BusSand_View_GameView__ReliefRipple_d__215_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__ReliefRipple_d__215__MoveNext_23ada6c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_48;
  
                    /* try { // try from 024ada70 to 025adaa3 has its CatchHandler @ 024acb6c */
                    /* catch() { ... } // from try @ 024ad840 with catch @ 024ada74 */
                    /* catch() { ... } // from try @ 024ad83c with catch @ 024ada78 */
                    /* catch() { ... } // from try @ 024ace98 with catch @ 024ada7c */
                    /* catch() { ... } // from try @ 024ad838 with catch @ 024ada80 */
                    /* catch() { ... } // from try @ 024ace6c with catch @ 024ada84 */
                    /* catch() { ... } // from try @ 024ace08 with catch @ 024ada88 */
  lStack_48 = param_1;
  if ((bRam0000000004f9c965 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc758);
                    /* try { // try from 024adaa4 to 025adaa7 has its CatchHandler @ 024adab4 */
    FUN_02132f7c(PTR_DAT_04cbc4b8);
                    /* catch() { ... } // from try @ 024adaa4 with catch @ 024adab4 */
                    /* try { // try from 024adab8 to 025adabf has its CatchHandler @ 024adac4 */
    FUN_02132f7c(PTR_DAT_04cb1890);
                    /* catch() { ... } // from try @ 024ad8dc with catch @ 024adac4
                       catch() { ... } // from try @ 024ad92c with catch @ 024adac4
                       catch() { ... } // from try @ 024ad978 with catch @ 024adac4
                       catch() { ... } // from try @ 024ad9c8 with catch @ 024adac4
                       catch() { ... } // from try @ 024ada18 with catch @ 024adac4
                       catch() { ... } // from try @ 024ada68 with catch @ 024adac4
                       catch() { ... } // from try @ 024adab8 with catch @ 024adac4 */
    FUN_02132f7c(PTR_DAT_04cbc760);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cbc768);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04cbc770);
    FUN_02132f7c(PTR_DAT_04cbc778);
    FUN_02132f7c(PTR_DAT_04cbc780);
    FUN_02132f7c(PTR_DAT_04cbc788);
    FUN_02132f7c(PTR_DAT_04cbc790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc7b8);
    FUN_02132f7c(PTR_DAT_04cbc720);
    FUN_02132f7c(PTR_DAT_04cbc7a0);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c965 = 1;
  }
  puVar3 = PTR_DAT_04cbc790;
  plStack_88 = &lStack_48;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_90 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar11 = (undefined8 *)PTR_DAT_04cbc760;
    plVar12 = (long *)PTR_DAT_04ca9ae8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar14 = 0;
      goto LAB_024adf68;
    }
    lVar13 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_ValueTuple_double__object_____ctor_39a6508
              (lVar7,*(undefined8 *)PTR_DAT_04cbc788);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar13 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)(*(long *)(lVar13 + 0x20) + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_78 = Dino_BusSand_Core_Road__get_Buses_2411e9c(lVar8,0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_b0,&uStack_78,*(undefined8 *)PTR_DAT_04cb18a8);
    puVar6 = PTR_DAT_04cbc7a0;
    puVar5 = PTR_DAT_04cbc770;
    puVar4 = PTR_DAT_04cbc4b8;
    puVar3 = PTR_DAT_04cb1898;
    uStack_68 = puStack_a8;
    uStack_70 = uStack_b0;
    lStack_60 = lStack_a0;
    puStack_a8 = &uStack_70;
    uStack_b0 = 0;
LAB_024adc48:
    uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_70,*(undefined8 *)puVar3);
    lVar8 = lStack_60;
    if ((uVar9 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar9 = Dino_BusSand_Core_RoadBus__get_HasRoadPosition_2411880(lStack_60,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar13 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(lVar13 + 0xe0),*(undefined4 *)(lVar8 + 0x10),&lStack_80,
                           *(undefined8 *)puVar4);
        if ((uVar9 & 1) != 0) {
          if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lStack_80 + 0x2c) == 4) {
            lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lStack_80,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
            if ((uVar9 & 1) != 0) {
              uStack_d0 = 0;
              uStack_c8 = 0;
              System_ValueTuple_double__object____ctor_30dbb58
                        (*(undefined8 *)(lVar8 + 0x40),&uStack_d0,lStack_80,*(undefined8 *)puVar6);
              if (lVar7 != 0) {
                lVar8 = *(long *)(lVar7 + 0x10);
                lVar10 = *(long *)puVar5;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                    puVar11 = (undefined8 *)(lVar8 + 0x28);
                    *puVar11 = uStack_c8;
                    *(undefined8 *)(lVar8 + 0x20) = uStack_d0;
                    thunk_FUN_02134474(puVar11,0);
                  }
                  else {
                    System_Collections_Generic_List_ValueTuple_double__object____AddWithResize_39a6dc0
                              (lVar7,uStack_d0,uStack_c8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_024adc48;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
      goto LAB_024adc48;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)PTR_DAT_04cb1890);
    puVar3 = PTR_DAT_04cbc720;
    lVar13 = *(long *)PTR_DAT_04cbc720;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar3;
    }
    puVar11 = *(undefined8 **)(lVar13 + 0xb8);
    lVar8 = puVar11[2];
    if (lVar8 == 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar14 = *puVar11;
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc758);
      System_Comparison_ValueTuple_double__object_____ctor_3323460
                (lVar8,uVar14,*(undefined8 *)PTR_DAT_04cbc7b8,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar12 = lVar8;
      thunk_FUN_02134474(plVar12,lVar8);
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_ValueTuple_double__object____Sort_39a88d0
              (lVar7,lVar8,*(undefined8 *)PTR_DAT_04cbc780);
    System_Collections_Generic_List_ValueTuple_double__object____GetEnumerator_39a780c
              (&uStack_d0,lVar7,*(undefined8 *)PTR_DAT_04cbc778);
    puStack_a8 = (undefined8 *)uStack_c8;
    uStack_b0 = uStack_d0;
    uStack_98 = uStack_b8;
    lStack_a0 = lStack_c0;
    *(undefined8 *)(lStack_48 + 0x30) = uStack_c8;
    *(undefined8 *)(lStack_48 + 0x28) = uStack_d0;
    *(undefined8 *)(lStack_48 + 0x40) = uStack_b8;
    *(long *)(lStack_48 + 0x38) = lStack_c0;
    thunk_FUN_02134474(lStack_48 + 0x28,0);
    *(undefined4 *)(lStack_48 + 0x10) = 0xfffffffd;
    puVar11 = (undefined8 *)PTR_DAT_04cbc760;
    plVar12 = (long *)PTR_DAT_04ca9ae8;
  }
  do {
    uVar9 = System_Collections_Generic_List_Enumerator_ValueTuple_double__object____MoveNext_35bafa4
                      (lStack_48 + 0x28,*puVar11);
    if ((uVar9 & 1) == 0) {
      Dino_BusSand_View_GameView__ReliefRipple_d__215____m__Finally1_23ae0cc();
      uVar14 = 0;
      *(undefined8 *)(lStack_48 + 0x30) = 0;
      *(undefined8 *)(lStack_48 + 0x28) = 0;
      *(undefined8 *)(lStack_48 + 0x40) = 0;
      *(undefined8 *)(lStack_48 + 0x38) = 0;
      goto LAB_024adf68;
    }
    lVar7 = *(long *)(lStack_48 + 0x40);
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*plVar12);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    uVar2 = _UNK_00e2043c;
  } while ((uVar9 & 1) != 0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e2065c,_UNK_00e2043c,lVar7,0);
  puVar3 = PTR_DAT_04cb2870;
  lVar13 = *(long *)PTR_DAT_04cb2870;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar3;
  }
  lVar13 = *(long *)(lVar13 + 0xb8);
  Dino_BusSand_View_VehicleView__Flash_23fddcc
            (_UNK_00e207cc,*(undefined4 *)(lVar13 + 0x58),*(undefined4 *)(lVar13 + 0x5c),
             *(undefined4 *)(lVar13 + 0x60),*(undefined4 *)(lVar13 + 100),lVar7,0);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar2,uVar14,0);
  *(undefined8 *)(lStack_48 + 0x18) = uVar14;
  thunk_FUN_02134474((undefined8 *)(lStack_48 + 0x18),uVar14);
  uVar14 = 1;
  *(undefined4 *)(lStack_48 + 0x10) = 1;
LAB_024adf68:
  lVar7 = lStack_90;
  if (lStack_90 == 0) {
    return uVar14;
  }
  FUN_01e7b148(&plStack_88);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar7);
}

