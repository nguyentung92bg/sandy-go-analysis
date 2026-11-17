/* IL2CPP: Dino.BusSand.View.GameView$$SpaceEscapes
void Dino_BusSand_View_GameView__SpaceEscapes (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0249f49c) */
/* WARNING: Removing unreachable block (ram,0x0249f4a0) */
/* WARNING: Removing unreachable block (ram,0x0249f5b0) */
/* WARNING: Removing unreachable block (ram,0x0249f53c) */
/* WARNING: Removing unreachable block (ram,0x0249f6a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$SpaceEscapes
   void Dino_BusSand_View_GameView__SpaceEscapes (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__SpaceEscapes_239efac
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  float fStack_54;
  
  if ((bRam0000000004f9c911 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc3e0);
    FUN_02132f7c(PTR_DAT_04cbc3e8);
    FUN_02132f7c(PTR_DAT_04cbc4c8);
    FUN_02132f7c(PTR_DAT_04cbc4d0);
                    /* try { // try from 0249f01c to 0259f023 has its CatchHandler @ 0249f278 */
    FUN_02132f7c(PTR_DAT_04cbc400);
    FUN_02132f7c(PTR_DAT_04cbc408);
    FUN_02132f7c(PTR_DAT_04cbc4d8);
                    /* try { // try from 0249f03c to 0259f047 has its CatchHandler @ 0249f21c */
    FUN_02132f7c(PTR_DAT_04cb68f8);
                    /* try { // try from 0249f048 to 0259f213 has its CatchHandler @ 0249ebbc */
    FUN_02132f7c(PTR_DAT_04cb68d8);
    FUN_02132f7c(PTR_DAT_04cbc4e0);
    FUN_02132f7c(PTR_DAT_04cbc4e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc430);
    bRam0000000004f9c911 = 1;
  }
  lVar14 = *(long *)(param_4 + 0x178);
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  uStack_100 = 0;
  puStack_f8 = (undefined8 *)0x0;
  lStack_f0 = 0;
  if (lVar14 != 0) {
    iVar1 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
    }
    if ((*(long *)(param_4 + 0xe0) != 0) &&
       (lVar14 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                           (*(long *)(param_4 + 0xe0),*(undefined8 *)PTR_DAT_04cbc3e0),
       puVar12 = PTR_DAT_04cbc4e0, puVar11 = PTR_DAT_04cbc4d0, puVar10 = PTR_DAT_04cbc4c8,
       puVar9 = PTR_DAT_04cbc400, puVar8 = PTR_DAT_04cbc3e8, puVar7 = PTR_DAT_04cb68f8,
       puVar6 = PTR_DAT_04ca9ae8, lVar14 != 0)) {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                (&uStack_118,lVar14,*(undefined8 *)PTR_DAT_04cbc430);
      lStack_b0 = lStack_108;
      puStack_b8 = puStack_110;
      uStack_c0 = uStack_118;
      uStack_118 = 0;
      puStack_110 = &uStack_c0;
LAB_0249f150:
      uVar13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                         (&uStack_c0,*(undefined8 *)puVar9);
      if ((uVar13 & 1) != 0) {
        if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lStack_b0 + 0x2c) == 2) {
          lVar14 = *(long *)(param_4 + 0x178);
          if (lVar14 != 0) {
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)puVar7;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar14 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                plVar16 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                *plVar16 = lStack_b0;
                thunk_FUN_02134474(plVar16);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar14,lStack_b0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0249f150;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0249f150;
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                (&uStack_c0,*(undefined8 *)puVar8);
      if (*(long *)(param_4 + 0x178) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_118,*(long *)(param_4 + 0x178),*(undefined8 *)puVar12);
        fVar5 = _UNK_00e208d8;
        fVar4 = _UNK_00e20188;
        fVar3 = _UNK_00e1fea8;
        puStack_d8 = puStack_110;
        uStack_e0 = uStack_118;
                    /* try { // try from 0249f214 to 0259f217 has its CatchHandler @ 0249f274 */
        lStack_d0 = lStack_108;
                    /* try { // try from 0249f218 to 0259f23f has its CatchHandler @ 0249ebbc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249f03c with catch @ 0249f21c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249ee2c with catch @ 0249f220
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249ee1c with catch @ 0249f224
                        */
                    /* try { // try from 0249f240 to 0259f243 has its CatchHandler @ 0249f264 */
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_e0,*(undefined8 *)puVar11), lVar14 = lStack_d0,
              (uVar13 & 1) != 0) {
                    /* try { // try from 0249f244 to 0259f267 has its CatchHandler @ 0249ebbc */
          if (*(long *)(param_4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(*(long *)(param_4 + 0x178) + 0x18) < 2) {
            fStack_54 = 3.4028235e+38;
            fVar27 = param_2;
            fVar30 = param_3;
LAB_0249f264:
                    /* catch() { ... } // from try @ 0249f240 with catch @ 0249f264 */
            param_2 = fVar27;
            param_3 = fVar30;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
          else {
            if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
                    /* try { // try from 0249f270 to 0259f293 has its CatchHandler @ 0249ebbc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249f214 with catch @ 0249f274
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249f01c with catch @ 0249f278
                        */
            uVar13 = Dino_BusSand_View_VehicleView__get_EscapeLate_2400fbc(lStack_d0,0);
            if ((uVar13 & 1) == 0) {
                    /* try { // try from 0249f294 to 0259f297 has its CatchHandler @ 0249f2b8 */
                    /* try { // try from 0249f298 to 0259f2bb has its CatchHandler @ 0249ebbc */
              lVar15 = UnityEngine_Component__get_transform_43bcd18(lVar14,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              fVar18 = (float)UnityEngine_Transform__get_position_43d0e48(lVar15,0);
              fVar23 = param_2;
              fVar28 = param_3;
                    /* catch() { ... } // from try @ 0249f294 with catch @ 0249f2b8 */
                    /* try { // try from 0249f2bc to 0259f2c3 has its CatchHandler @ 0249f2cc */
              lVar15 = UnityEngine_Component__get_transform_43bcd18(lVar14,0);
                    /* try { // try from 0249f2c4 to 0259f2cf has its CatchHandler @ 0249ebbc */
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0249f268 with catch @ 0249f2cc
                       catch(type#2 @ 00000000) { ... } // from try @ 0249f2bc with catch @ 0249f2cc
                        */
              fVar19 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar15,0);
              fVar24 = fVar23;
              fVar29 = fVar28;
              lVar15 = UnityEngine_Component__get_transform_43bcd18(lVar14,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              fVar20 = (float)UnityEngine_Transform__get_right_43d15f4(lVar15,0);
              fVar30 = fVar29;
              fVar21 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar14,0);
              if (*(long *)(param_4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_118,*(long *)(param_4 + 0x178),*(undefined8 *)puVar12);
              uStack_100 = uStack_118;
              fVar21 = fVar21 * fVar5;
              lStack_f0 = lStack_108;
              uStack_118 = 0;
              puStack_f8 = puStack_110;
              fStack_54 = 3.4028235e+38;
              fVar27 = fVar21;
              puStack_110 = &uStack_100;
              while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                        (&uStack_100,*(undefined8 *)puVar11), lVar15 = lStack_f0,
                    (uVar13 & 1) != 0) {
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar15,lVar14,0);
                if ((uVar13 & 1) == 0) {
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar17 = UnityEngine_Component__get_transform_43bcd18(lVar15,0);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  fVar22 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar17,0);
                  fVar25 = fVar23 * fVar27;
                  fVar26 = 0.5;
                  fVar27 = fVar26;
                  if (0.5 <= fVar28 * fVar30 + fVar19 * fVar22 + fVar25) {
                    lVar17 = UnityEngine_Component__get_transform_43bcd18(lVar15,0);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    fVar22 = (float)UnityEngine_Transform__get_position_43d0e48(lVar17,0);
                    fVar30 = fVar30 - param_3;
                    fVar27 = fVar28 * fVar30 +
                             fVar19 * (fVar22 - fVar18) + fVar23 * (fVar26 - param_2);
                    if ((0.0 < fVar27) && (fVar27 <= fVar21 * fVar4)) {
                      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      fVar25 = fVar29 * fVar30;
                      fVar30 = *(float *)(*(long *)(param_4 + 0x30) + 0xfc) * fVar3;
                      if (ABS(fVar25 + fVar20 * (fVar22 - fVar18) + fVar24 * (fVar26 - param_2)) <=
                          fVar30) {
                        fVar22 = 0.0;
                        fVar30 = fVar21;
                        if (fVar21 <= fVar27) {
                          fVar22 = (float)Dino_BusSand_View_VehicleView__get_EscapeSpeed_2400fa4
                                                    (lVar15,0);
                        }
                        fVar27 = fStack_54;
                        if (fVar22 <= fStack_54) {
                          fVar27 = fVar22;
                          fStack_54 = fVar22;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_100,*(undefined8 *)puVar10);
              goto LAB_0249f264;
            }
            fStack_54 = 3.4028235e+38;
          }
          *(float *)(lVar14 + 0x374) = fStack_54;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_e0,*(undefined8 *)puVar10);
        if (*(long *)(param_4 + 0x178) != 0) {
          if (0 < *(int *)(*(long *)(param_4 + 0x178) + 0x18)) {
            Dino_BusSand_View_GameView__Drafts_239f6c0(param_4);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

