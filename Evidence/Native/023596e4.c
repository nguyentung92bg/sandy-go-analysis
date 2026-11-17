/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParseUnary
double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseUnary (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0235a8a8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParseUnary
   double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseUnary
   (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseUnary_22596e4(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  long lVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  ulong extraout_d0_04;
  ulong extraout_d0_05;
  ulong extraout_d0_06;
  undefined1 auVar27 [16];
  undefined8 uVar21;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong auStack_e8 [14];
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  long lStack_60;
  long lStack_58;
  
  while( true ) {
    sVar8 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
    if (sVar8 == 0x2d) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseUnary_22596e4(param_1);
      auVar29._0_8_ = -dVar22;
      auVar29._8_8_ = 0;
      return auVar29;
    }
    sVar8 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
    if (sVar8 != 0x2b) break;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  if ((bRam0000000004f9c007 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cb3f88);
    FUN_02132f7c(PTR_DAT_04cb3f90);
    FUN_02132f7c(PTR_DAT_04cb3f98);
    FUN_02132f7c(PTR_DAT_04cb3fa0);
    FUN_02132f7c(PTR_DAT_04cb3fa8);
    FUN_02132f7c(PTR_DAT_04cb3fb0);
    FUN_02132f7c(PTR_DAT_04cb3fb8);
    FUN_02132f7c(PTR_DAT_04cb3fc0);
    bRam0000000004f9c007 = 1;
  }
  lStack_58 = 0;
  lStack_60 = 0;
  uVar9 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
  puVar6 = PTR_DAT_04ca9ac8;
  if ((uVar9 & 0xffff) != 0x28) {
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar20 = System_Char__IsDigit_47b5cfc(uVar9,0);
    if (((uVar20 & 1) == 0) && ((uVar9 & 0xffff) != 0x2e)) {
      if (*(int *)(*(long *)(puVar6 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar20 = System_Char__IsLetter_47bbff0(uVar9,0);
      if (((uVar20 & 1) == 0) && ((uVar9 & 0xffff) != 0x5f)) {
        FUN_01e78ee0(*(undefined8 *)(puVar6 + 0x88));
        uVar21 = System_Char__ToString_47ac098(&stack0xffffffffffffffcc,0);
        uVar15 = System_Int32__ToString_482d750(param_1 + 0x18,0);
        uVar26 = thunk_FUN_021985a8(PTR_DAT_04cb3fd8);
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cb3fe0);
        uVar21 = System_String__Concat_46d30e8(uVar26,uVar21,uVar14,uVar15,0);
LAB_02359b68:
        thunk_FUN_021985a8(PTR_DAT_04cb3f78);
        uVar15 = thunk_FUN_0216e89c();
        System_FormatException___ctor_4818b54(uVar15,uVar21,0);
        uVar21 = thunk_FUN_021985a8(PTR_DAT_04cb3fd0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar15,uVar21);
      }
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        iVar17 = *(int *)(param_1 + 0x18);
        iVar11 = iVar17;
        do {
          if (*(int *)(lVar12 + 0x10) <= iVar11) {
LAB_02359a30:
            lVar12 = System_String__Substring_46d4848
                               (lVar12,iVar17,*(int *)(param_1 + 0x18) - iVar17,0);
            sVar8 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
            puVar7 = PTR_DAT_04cb4000;
            puVar6 = PTR_DAT_04cb3ff8;
            if (sVar8 != 0x28) {
              uVar13 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb3fc0,0);
              uVar20 = _UNK_00e6a980;
              if (((uVar13 & 1) != 0) ||
                 (uVar13 = System_String__op_Equality_46d1108
                                     (lVar12,*(undefined8 *)PTR_DAT_04cb3fb8,0),
                 uVar20 = _UNK_00e6a988, (uVar13 & 1) != 0)) goto LAB_02359834;
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_02359b50;
              System_Collections_Generic_Dictionary_object__double___GetEnumerator_34a63bc
                        (&lStack_60,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb3f88);
              puVar6 = PTR_DAT_04cb3f98;
              uStack_70 = 0;
              uStack_6e = 0;
              uStack_68 = SUB82(&lStack_60,0);
              uStack_66 = (undefined6)((ulong)&lStack_60 >> 0x10);
              goto LAB_02359af8;
            }
            if ((bRam0000000004f9c008 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cb4008);
              FUN_02132f7c(PTR_DAT_04cb4000);
              FUN_02132f7c(PTR_DAT_04cb3ff8);
              FUN_02132f7c(PTR_DAT_04caa200);
              FUN_02132f7c(PTR_DAT_04cb4010);
              FUN_02132f7c(PTR_DAT_04cb4018);
              FUN_02132f7c(PTR_DAT_04cb4020);
              FUN_02132f7c(PTR_DAT_04cb3710);
              FUN_02132f7c(PTR_DAT_04cb4028);
              FUN_02132f7c(PTR_DAT_04cb4030);
              FUN_02132f7c(PTR_DAT_04cb4038);
              FUN_02132f7c(PTR_DAT_04cb4040);
              FUN_02132f7c(PTR_DAT_04cb4048);
              FUN_02132f7c(PTR_DAT_04cb4050);
              FUN_02132f7c(PTR_DAT_04cb4058);
              FUN_02132f7c(PTR_DAT_04cb4060);
              FUN_02132f7c(PTR_DAT_04cb4068);
              FUN_02132f7c(PTR_DAT_04cb4070);
              FUN_02132f7c(PTR_DAT_04cb4078);
              FUN_02132f7c(PTR_DAT_04cb4080);
              FUN_02132f7c(PTR_DAT_04cb4088);
              FUN_02132f7c(PTR_DAT_04cb4090);
              FUN_02132f7c(PTR_DAT_04cb4098);
              FUN_02132f7c(PTR_DAT_04cb40a0);
              bRam0000000004f9c008 = 1;
            }
            lStack_60 = 0;
            lStack_58 = lVar12;
            thunk_FUN_02134474(&lStack_58,lVar12);
            Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect_2259c60(param_1,0x28);
            lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
            System_Collections_Generic_List_double____ctor_3a16d80(lVar12,*(undefined8 *)puVar7);
            lStack_60 = lVar12;
            thunk_FUN_02134474(&lStack_60,lVar12);
            sVar8 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
            lVar12 = lStack_60;
            if (sVar8 == 0x29) goto LAB_02359f00;
            uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression_22594d4(param_1);
            puVar6 = PTR_DAT_04cb4008;
            goto joined_r0x02359fc8;
          }
          uVar10 = System_String__get_Chars_46ccb24(lVar12,iVar11,0);
          if (*(int *)(*(long *)(puVar6 + 0x88) + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)(puVar6 + 0x88));
          }
          uVar20 = System_Char__IsLetterOrDigit_47bc2d0(uVar10,0);
          if ((uVar20 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) break;
            sVar8 = System_String__get_Chars_46ccb24
                              (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
            if (sVar8 != 0x5f) {
              lVar12 = *(long *)(param_1 + 0x10);
              if (lVar12 != 0) goto LAB_02359a30;
              break;
            }
          }
          lVar12 = *(long *)(param_1 + 0x10);
          iVar11 = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x18) = iVar11;
        } while (lVar12 != 0);
      }
    }
    else {
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        iVar17 = *(int *)(param_1 + 0x18);
        iVar11 = iVar17;
        do {
          if (*(int *)(lVar12 + 0x10) <= iVar11) {
LAB_023599c4:
            lVar12 = System_String__Substring_46d4848
                               (lVar12,iVar17,*(int *)(param_1 + 0x18) - iVar17,0);
            if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa370);
            }
            uVar21 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
            if ((bRam0000000004fad5f6 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04d10670,0xa7,uVar21,0);
              bRam0000000004fad5f6 = 1;
            }
            System_Globalization_NumberFormatInfo__ValidateParseStyleFloatingPoint_47a4fc4(0xa7,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentNullException_48419e0(0x30,0);
            }
            if (cRam0000000004f9ffc2 == '\0') {
              FUN_02132f7c(PTR_DAT_04cc73d8);
              cRam0000000004f9ffc2 = '\x01';
            }
            puVar6 = PTR_DAT_04d10670;
            if (lVar12 == 0) {
              uVar15 = 0;
              uVar10 = 0;
            }
            else {
              uVar15 = System_String__GetRawStringData_46cfab8(lVar12,0);
              uVar10 = *(undefined4 *)(lVar12 + 0x10);
            }
            lVar12 = System_Globalization_NumberFormatInfo__GetInstance_47a48c4(uVar21,0);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar6);
            }
            puVar6 = PTR_DAT_04d10670;
            lVar16 = tpidr_el0;
            lStack_58 = *(long *)(lVar16 + 0x28);
            if ((bRam0000000004fad758 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04d10670,uVar10,0xa7,lVar12,0);
              FUN_02132f7c(PTR_DAT_04d135c0);
              bRam0000000004fad758 = 1;
            }
            auStack_e8[0] = 0;
            auStack_e8[4] = 0;
            auStack_e8[3] = 0;
            auStack_e8[6] = 0;
            auStack_e8[5] = 0;
            auStack_e8[8] = 0;
            auStack_e8[7] = 0;
            auStack_e8[10] = 0;
            auStack_e8[9] = 0;
            auStack_e8[0xc] = 0;
            auStack_e8[0xb] = 0;
            auStack_e8[2] = 0;
            auStack_e8[1] = 0;
            uStack_78 = 0;
            auStack_e8[0xd] = 0;
            uStack_6e = 0;
            uStack_68 = 0;
            uStack_76 = 0;
            uStack_70 = 0;
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar20 = System_Number__TryStringToNumber_483c838
                               (uVar15,uVar10,0xa7,auStack_e8 + 1,lVar12,0);
            if ((uVar20 & 1) == 0) {
              System_MemoryExtensions__TrimStart_4832054(uVar15,uVar10);
              uVar21 = System_MemoryExtensions__TrimEnd_4832140();
              uVar20 = extraout_d0_00;
              if (lVar12 == 0) goto LAB_0493d4a0;
              uVar13 = *(ulong *)(lVar12 + 0x70);
              if (cRam0000000004f9ffc2 == '\0') {
                uVar20 = FUN_02132f7c(PTR_DAT_04cc73d8);
                cRam0000000004f9ffc2 = '\x01';
                if (uVar13 != 0) goto LAB_0493d260;
LAB_0493d290:
                uVar15 = 0;
              }
              else {
                if (uVar13 == 0) goto LAB_0493d290;
LAB_0493d260:
                uVar15 = System_String__GetRawStringData_46cfab8(uVar13,0);
                uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
                uVar20 = extraout_d0_01;
              }
              if (cRam0000000004fad1e9 == '\0') {
                FUN_02132f7c(PTR_DAT_04d0b528);
                uVar20 = FUN_02132f7c(PTR_DAT_04cd5630);
                cRam0000000004fad1e9 = '\x01';
              }
              iVar11 = (int)extraout_x1;
              if ((iVar11 == (int)uVar13) &&
                 ((iVar11 == 0 ||
                  (uVar13 = FUN_047d8d88(uVar21,extraout_x1,uVar15,uVar13,
                                         *(undefined8 *)PTR_DAT_04d0b528), uVar20 = extraout_d0_02,
                  (uVar13 & 1) != 0)))) {
                uVar20 = 0x7ff0000000000000;
              }
              else {
                uVar13 = *(ulong *)(lVar12 + 0x78);
                if (cRam0000000004f9ffc2 == '\0') {
                  uVar20 = FUN_02132f7c(PTR_DAT_04cc73d8);
                  cRam0000000004f9ffc2 = '\x01';
                  if (uVar13 != 0) goto LAB_0493d308;
LAB_0493d338:
                  uVar15 = 0;
                }
                else {
                  if (uVar13 == 0) goto LAB_0493d338;
LAB_0493d308:
                  uVar15 = System_String__GetRawStringData_46cfab8(uVar13,0);
                  uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
                  uVar20 = extraout_d0_03;
                }
                if (cRam0000000004fad1e9 == '\0') {
                  FUN_02132f7c(PTR_DAT_04d0b528);
                  uVar20 = FUN_02132f7c(PTR_DAT_04cd5630);
                  cRam0000000004fad1e9 = '\x01';
                }
                if ((iVar11 == (int)uVar13) &&
                   ((iVar11 == 0 ||
                    (uVar13 = FUN_047d8d88(uVar21,extraout_x1,uVar15,uVar13,
                                           *(undefined8 *)PTR_DAT_04d0b528), uVar20 = extraout_d0_04
                    , (uVar13 & 1) != 0)))) {
                  uVar20 = 0xfff0000000000000;
                }
                else {
                  uVar13 = *(ulong *)(lVar12 + 0x68);
                  if (cRam0000000004f9ffc2 == '\0') {
                    uVar20 = FUN_02132f7c(PTR_DAT_04cc73d8);
                    cRam0000000004f9ffc2 = '\x01';
                    if (uVar13 != 0) goto LAB_0493d3ac;
LAB_0493d3dc:
                    uVar15 = 0;
                  }
                  else {
                    if (uVar13 == 0) goto LAB_0493d3dc;
LAB_0493d3ac:
                    uVar15 = System_String__GetRawStringData_46cfab8(uVar13,0);
                    uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
                    uVar20 = extraout_d0_05;
                  }
                  if (cRam0000000004fad1e9 == '\0') {
                    FUN_02132f7c(PTR_DAT_04d0b528);
                    uVar20 = FUN_02132f7c(PTR_DAT_04cd5630);
                    cRam0000000004fad1e9 = '\x01';
                  }
                  if ((iVar11 != (int)uVar13) ||
                     ((iVar11 != 0 &&
                      (uVar13 = FUN_047d8d88(uVar21,extraout_x1,uVar15,uVar13,
                                             *(undefined8 *)PTR_DAT_04d0b528),
                      uVar20 = extraout_d0_06, (uVar13 & 1) == 0)))) {
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      uVar20 = thunk_FUN_0218fdac();
                    }
                    if (*(long *)(lVar16 + 0x28) == lStack_58) {
                      uVar20 = System_Number__ThrowOverflowOrFormatException_483a2cc(0,0);
                    }
                    goto LAB_0493d4e0;
                  }
                  uVar20 = 0x7ff8000000000000;
                }
              }
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar13 = System_Number__NumberBufferToDouble_483d4e4(auStack_e8 + 1,auStack_e8);
              uVar20 = auStack_e8[0];
              if ((uVar13 & 1) == 0) {
                uVar20 = extraout_d0;
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  uVar20 = thunk_FUN_0218fdac();
                }
                if (*(long *)(lVar16 + 0x28) != lStack_58) goto LAB_0493d4e0;
                uVar20 = System_Number__ThrowOverflowOrFormatException_483a2cc
                                   (1,*(undefined8 *)PTR_DAT_04d135c0);
LAB_0493d4a0:
                if (*(long *)(lVar16 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                goto LAB_0493d4e0;
              }
            }
            if (*(long *)(lVar16 + 0x28) == lStack_58) {
              auVar30._8_8_ = 0;
              auVar30._0_8_ = uVar20;
              return auVar30;
            }
LAB_0493d4e0:
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar20);
          }
          uVar10 = System_String__get_Chars_46ccb24(lVar12,iVar11,0);
          if (*(int *)(*(long *)(puVar6 + 0x88) + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)(puVar6 + 0x88));
          }
          uVar20 = System_Char__IsDigit_47b5cfc(uVar10,0);
          if ((uVar20 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) break;
            sVar8 = System_String__get_Chars_46ccb24
                              (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
            if (sVar8 != 0x2e) {
              lVar12 = *(long *)(param_1 + 0x10);
              if (lVar12 != 0) goto LAB_023599c4;
              break;
            }
          }
          lVar12 = *(long *)(param_1 + 0x10);
          iVar11 = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x18) = iVar11;
        } while (lVar12 != 0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar20 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression_22594d4(param_1);
  Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect_2259c60(param_1,0x29);
LAB_02359834:
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar20;
  return auVar27;
joined_r0x02359fc8:
  if (lVar12 == 0) goto LAB_0235a054;
  lVar16 = *(long *)(lVar12 + 0x10);
  lVar18 = *(long *)puVar6;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_0235a054;
  uVar9 = *(uint *)(lVar12 + 0x18);
  if (uVar9 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(lVar12 + 0x18) = uVar9 + 1;
    *(undefined8 *)(lVar16 + (long)(int)uVar9 * 8 + 0x20) = uVar21;
  }
  else {
    System_Collections_Generic_List_double___AddWithResize_3a17614
              (lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
  }
  sVar8 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
  lVar12 = lStack_60;
  if (sVar8 != 0x2c) goto LAB_02359f00;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression_22594d4(param_1);
  goto joined_r0x02359fc8;
  while( true ) {
    uVar20 = System_String__Equals_46d0e60(0,lVar12,5,0);
    if ((uVar20 & 1) != 0) break;
LAB_02359af8:
    uVar20 = System_Collections_Generic_Dictionary_Enumerator_object__double___MoveNext_3643770
                       (&lStack_60,*(undefined8 *)puVar6);
    if ((uVar20 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__double___Dispose_364389c
                (&lStack_60,*(undefined8 *)PTR_DAT_04cb3f90);
LAB_02359b50:
      uVar21 = thunk_FUN_021985a8(PTR_DAT_04cb3fc8);
      uVar21 = System_String__Concat_46c82e0(uVar21,lVar12,0);
      goto LAB_02359b68;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__double___Dispose_364389c
            (&lStack_60,*(undefined8 *)PTR_DAT_04cb3f90);
  uVar20 = 0;
  goto LAB_02359834;
LAB_02359f00:
  Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect_2259c60(param_1,0x29);
  lVar12 = lStack_58;
  uVar9 = _PrivateImplementationDetails___ComputeStringHash_22a1900(lStack_58,0);
  if (uVar9 < 0x58336ad6) {
    if (uVar9 < 0x2a48023c) {
      if (uVar9 < 0x678cac0) {
        if (uVar9 == 0x36ff551) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4018,0);
          if ((uVar20 & 1) == 0) goto LAB_0235a8e0;
          plVar19 = *(long **)(param_1 + 0x28);
          dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                     (0,&lStack_60);
          dVar23 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                     (1,&lStack_60);
          if (plVar19 == (long *)0x0) {
LAB_0235a054:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar11 = -0x80000000;
          if (dVar22 != INFINITY) {
            iVar11 = (int)dVar22;
          }
          iVar17 = -0x7fffffff;
          if (dVar23 != INFINITY) {
            iVar17 = (int)dVar23 + 1;
          }
          iVar11 = (**(code **)(*plVar19 + 0x198))
                             (plVar19,iVar11,iVar17,*(undefined8 *)(*plVar19 + 0x1a0));
          auVar28._8_8_ = 0;
          auVar28._0_8_ = (double)iVar11;
        }
        else {
          if ((uVar9 != 0x678cabf) ||
             (uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4030,0),
             (uVar20 & 1) == 0)) goto LAB_0235a8e0;
          uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (0,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar28 = FUN_049b5350(uVar21);
        }
      }
      else if (uVar9 == 0x10031ed9) {
        uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb40a0,0);
        if ((uVar20 & 1) == 0) goto LAB_0235a8e0;
        uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(0,&lStack_60)
        ;
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        auVar28 = System_Math__Log_4830e18(uVar21,0x4000000000000000,0);
      }
      else if (uVar9 == 0x144f0c62) {
        uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4078,0);
        if ((uVar20 & 1) == 0) goto LAB_0235a8e0;
        dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                   (0,&lStack_60);
        plVar19 = *(long **)(param_1 + 0x28);
        if (plVar19 == (long *)0x0) goto LAB_0235a054;
        dVar23 = (double)(**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
        dVar24 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                   (1,&lStack_60);
        dVar25 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                   (0,&lStack_60);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar22 + dVar23 * (dVar24 - dVar25);
      }
      else {
        if ((uVar9 != 0x2a48023b) ||
           (uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4038,0),
           (uVar20 & 1) == 0)) goto LAB_0235a8e0;
        dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                   (0,&lStack_60);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        auVar28._8_8_ = 0;
        auVar28._0_8_ = ABS(dVar22);
      }
    }
    else {
      if (0x3f515151 < uVar9) {
        if (uVar9 == 0x4331c1ff) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4060,0);
          if ((uVar20 & 1) != 0) {
            uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                               (0,&lStack_60);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auVar29 = FUN_049b53b0(uVar21);
            return auVar29;
          }
        }
        else if (uVar9 == 0x4f0be23b) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb3710,0);
          if ((uVar20 & 1) != 0) {
            dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                       (0,&lStack_60);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            dVar23 = (double)FUN_049b52f0(dVar22,&stack0xffffffffffffffb8);
            if (0.0 <= dVar22) {
              if (dVar23 != 0.5) {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = (long)(dVar22 + 0.5);
                return auVar2;
              }
            }
            else if (dVar23 != -0.5) {
              auVar1._8_8_ = 0;
              auVar1._0_8_ = (long)(dVar22 + -0.5);
              return auVar1;
            }
            return ZEXT816(0);
          }
        }
        else if ((uVar9 == 0x58336ad5) &&
                (uVar20 = System_String__op_Equality_46d1108
                                    (lVar12,*(undefined8 *)PTR_DAT_04cb4070,0), (uVar20 & 1) != 0))
        {
          uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (0,&lStack_60);
          uVar15 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (1,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar29 = System_Math__Pow_48317a0(uVar21,uVar15,0);
          return auVar29;
        }
        goto LAB_0235a8e0;
      }
      if (uVar9 == 0x3c01df1f) {
        uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4058,0);
        if ((uVar20 & 1) == 0) goto LAB_0235a8e0;
        uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(0,&lStack_60)
        ;
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        auVar28 = FUN_049b5380(uVar21);
      }
      else {
        if ((uVar9 != 0x3f515151) ||
           (uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4020,0),
           (uVar20 & 1) == 0)) goto LAB_0235a8e0;
        uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(0,&lStack_60)
        ;
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        auVar28 = FUN_049b5360(uVar21);
      }
    }
  }
  else {
    if (uVar9 < 0xb8e70c1e) {
      if (uVar9 < 0x7dee3bd0) {
        if (uVar9 == 0x62e4e208) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4098,0);
          if ((uVar20 & 1) != 0) {
            dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                       (0,&lStack_60);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (long)dVar22;
            return auVar4;
          }
        }
        else if ((uVar9 == 0x7dee3bcf) &&
                (uVar20 = System_String__op_Equality_46d1108
                                    (lVar12,*(undefined8 *)PTR_DAT_04cb4090,0), (uVar20 & 1) != 0))
        {
          dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                     (0,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = SQRT(dVar22);
          return auVar3;
        }
LAB_0235a8e0:
        lVar12 = lStack_58;
        uVar21 = thunk_FUN_021985a8(PTR_DAT_04cb40a8);
        uVar21 = System_String__Concat_46c82e0(uVar21,lVar12,0);
        thunk_FUN_021985a8(PTR_DAT_04cb3f78);
        uVar15 = thunk_FUN_0216e89c();
        System_FormatException___ctor_4818b54(uVar15,uVar21,0);
        uVar21 = thunk_FUN_021985a8(PTR_DAT_04cb40b0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar15,uVar21);
      }
      if (uVar9 == 0x9cf73498) {
        uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4010,0);
        if ((uVar20 & 1) != 0) {
          uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (0,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar29 = FUN_049b53a0(uVar21);
          return auVar29;
        }
        goto LAB_0235a8e0;
      }
      if (uVar9 != 0xa82efcbc) {
        if ((uVar9 == 0xb8e70c1d) &&
           (uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4088,0),
           (uVar20 & 1) != 0)) {
          dVar22 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                                     (0,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (long)dVar22;
          return auVar5;
        }
        goto LAB_0235a8e0;
      }
      uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4050,0);
      if ((uVar20 & 1) == 0) goto LAB_0235a8e0;
      uVar15 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(1,&lStack_60);
      uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(2,&lStack_60);
      uVar26 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(0,&lStack_60);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar21 = System_Math__Min_48310e8(uVar21,uVar26,0);
    }
    else {
      if (0xd7a2e319 < uVar9) {
        if (uVar9 == 0xfeae7ea6) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4068,0);
          if ((uVar20 & 1) != 0) {
            uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                               (0,&lStack_60);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auVar29 = FUN_049b53c0(uVar21);
            return auVar29;
          }
        }
        else if (uVar9 == 0xfb8de29c) {
          uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4040,0);
          if ((uVar20 & 1) != 0) {
            uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                               (0,&lStack_60);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            auVar29 = FUN_049b5390(uVar21);
            return auVar29;
          }
        }
        else if ((uVar9 == 0xe0302a4d) &&
                (uVar20 = System_String__op_Equality_46d1108
                                    (lVar12,*(undefined8 *)PTR_DAT_04cb4080,0), (uVar20 & 1) != 0))
        {
          uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (0,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar29 = FUN_049b5370(uVar21);
          return auVar29;
        }
        goto LAB_0235a8e0;
      }
      if (uVar9 == 0xc98f4557) {
        uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4028,0);
        if ((uVar20 & 1) != 0) {
          uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (0,&lStack_60);
          uVar15 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938
                             (1,&lStack_60);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          auVar29 = System_Math__Min_48310e8(uVar21,uVar15,0);
          return auVar29;
        }
        goto LAB_0235a8e0;
      }
      if ((uVar9 != 0xd7a2e319) ||
         (uVar20 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)PTR_DAT_04cb4048,0),
         (uVar20 & 1) == 0)) goto LAB_0235a8e0;
      uVar15 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(0,&lStack_60);
      uVar21 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser___Call_g__A_12_0_225a938(1,&lStack_60);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
    }
    auVar28 = System_Math__Max_4830f98(uVar15,uVar21,0);
  }
  return auVar28;
}

