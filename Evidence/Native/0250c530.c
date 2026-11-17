/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$Build
Dino_BusSand_Core_SandGrid_o* Dino_BusSand_Core_BoardBuilder__Build (Dino_BusSand_Core_LevelData_o* level, Dino_BusSand_Core_SandTuning_o* tuning, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$Build
   Dino_BusSand_Core_SandGrid_o* Dino_BusSand_Core_BoardBuilder__Build
   (Dino_BusSand_Core_LevelData_o* level, Dino_BusSand_Core_SandTuning_o* tuning, const MethodInfo*
   method); */

long Dino_BusSand_Core_BoardBuilder__Build_240c530(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9cb2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cbe360);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbc670);
    bRam0000000004f9cb2d = 1;
  }
  puVar14 = PTR_DAT_04cbc670;
  uStack_68 = 0;
  if (param_2 == 0) {
    lVar10 = *(long *)PTR_DAT_04cbc670;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar14;
    }
    param_2 = **(long **)(lVar10 + 0xb8);
  }
  if (param_1 != 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0x40) == 0)) ||
       (*(long *)(*(long *)(lVar10 + 0x40) + 0x18) == 0)) {
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar22 = thunk_FUN_0216e89c();
                    /* catch() { ... } // from try @ 0250c9d8 with catch @ 0250c9f4 */
                    /* try { // try from 0250c9f8 to 0260c9ff has its CatchHandler @ 0250ca08 */
      uVar13 = thunk_FUN_021985a8(PTR_DAT_04cbe388);
                    /* try { // try from 0250ca00 to 0260ca0b has its CatchHandler @ 0250c624 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0250c9f8 with catch @ 0250ca08
                        */
      System_ArgumentException___ctor_47b660c(uVar22,uVar13,0);
      uVar13 = thunk_FUN_021985a8(PTR_DAT_04cbe370);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar22,uVar13);
    }
    if ((*(long *)(lVar10 + 0x38) != 0) &&
       (uVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,
                              *(undefined4 *)(*(long *)(lVar10 + 0x38) + 0x18)),
       puVar14 = PTR_DAT_04cbbfb8, uVar11 != 0)) {
      uVar12 = uVar11;
      if (0 < *(int *)(uVar11 + 0x18)) {
        uVar21 = 0;
                    /* try { // try from 0250c624 to 0260c757 has its CatchHandler @ 0250c624
                       catch() { ... } // from try @ 0250c624 with catch @ 0250c624
                       catch() { ... } // from try @ 0250c7bc with catch @ 0250c624
                       catch() { ... } // from try @ 0250c9ac with catch @ 0250c624
                       catch() { ... } // from try @ 0250c9dc with catch @ 0250c624
                       catch() { ... } // from try @ 0250ca00 with catch @ 0250c624 */
        do {
          lVar15 = *(long *)(lVar10 + 0x38);
          if (lVar15 == 0) goto LAB_0250c978;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_0250c97c;
          uVar22 = *(undefined8 *)(lVar15 + uVar21 * 8 + 0x20);
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = Dino_BusSand_Core_SandPalette__Id_2419278(uVar22,0);
          if (*(uint *)(uVar11 + 0x18) <= uVar21) goto LAB_0250c97c;
          *(char *)(uVar11 + 0x20 + uVar21) = (char)uVar12;
          if ((uVar12 & 0xff) == 0) {
            FUN_01e7b2d8(lVar10);
            uVar22 = *(undefined8 *)(lVar10 + 0x38);
            FUN_01e7b2d8(uVar22);
            uVar22 = FUN_01e7b318(uVar22,uVar21);
            puVar14 = PTR_DAT_04cbe378;
                    /* try { // try from 0250c9a8 to 0260c9ab has its CatchHandler @ 0250c9b0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250c774 with catch @ 0250c9ac
                       try { // try from 0250c9ac to 0260c9d7 has its CatchHandler @ 0250c624 */
            goto LAB_0250c9cc;
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar15 = *(long *)(lVar10 + 0x38);
            if (lVar15 == 0) goto LAB_0250c978;
            if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_0250c97c;
            uVar7 = Dino_BusSand_Core_LevelData__ColorOf_240ca28
                              (param_1,*(undefined8 *)(lVar15 + uVar21 * 8 + 0x20));
            lVar15 = *(long *)puVar14;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar15);
            }
            uVar12 = Dino_BusSand_Core_SandPalette__Override_2419868(uVar12 & 0xffffffff,uVar7,0);
          }
          uVar21 = uVar21 + 1;
        } while ((long)uVar21 < (long)*(int *)(uVar11 + 0x18));
      }
      lVar15 = *(long *)(lVar10 + 0x40);
      if (lVar15 != 0) {
        uVar21 = *(ulong *)(lVar15 + 0x18);
        iVar18 = (int)uVar21;
        if (iVar18 == 0) {
LAB_0250c97c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c(uVar12);
        }
        if (*(long *)(lVar15 + 0x20) != 0) {
          iVar1 = *(int *)(*(long *)(lVar15 + 0x20) + 0x10);
          uVar7 = *(undefined4 *)(lVar10 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar8 = System_Math__Max_4830fc8(1,uVar7,0);
          if (param_2 != 0) {
            uVar7 = *(undefined4 *)(param_2 + 0x10);
            uVar2 = *(undefined4 *)(param_1 + 0x14);
            lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe360);
                    /* try { // try from 0250c758 to 0260c75f has its CatchHandler @ 0250c9b8 */
            Dino_BusSand_Core_SandGrid___ctor_24172a8
                      (lVar15,iVar8 * iVar1,iVar8 * iVar18,uVar7,uVar2,0);
            if (lVar15 != 0) {
                    /* try { // try from 0250c774 to 0260c777 has its CatchHandler @ 0250c9ac */
                    /* try { // try from 0250c778 to 0260c787 has its CatchHandler @ 0250c9b4 */
              Dino_BusSand_Core_SandGrid__ApplyTuning_2417464(lVar15,param_2,0);
                    /* try { // try from 0250c790 to 0260c7bb has its CatchHandler @ 0250c9bc */
              uVar12 = Dino_BusSand_Core_SandRandom___ctor_24170bc
                                 ((long)&uStack_68 + 4,*(undefined4 *)(param_1 + 0x14),1,0);
              if (0 < iVar18) {
                uVar17 = 0;
                iVar20 = iVar8;
                do {
                  lVar16 = *(long *)(lVar10 + 0x40);
                  if (lVar16 == 0) goto LAB_0250c978;
                    /* try { // try from 0250c7bc to 0260c9a7 has its CatchHandler @ 0250c624 */
                  uVar9 = ~(uint)uVar17 + iVar18;
                  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0250c97c;
                  uVar12 = *(ulong *)(lVar16 + (long)(int)uVar9 * 8 + 0x20);
                  if (uVar12 == 0) goto LAB_0250c978;
                  if (*(int *)(uVar12 + 0x10) != iVar1) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250c9a8 with catch @ 0250c9b0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250c778 with catch @ 0250c9b4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250c758 with catch @ 0250c9b8
                        */
                    uStack_68 = CONCAT44(uStack_68._4_4_,uVar9);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250c790 with catch @ 0250c9bc
                        */
                    uVar22 = System_Int32__ToString_482d750(&uStack_68,0);
                    puVar14 = PTR_DAT_04cbe380;
LAB_0250c9cc:
                    uVar13 = thunk_FUN_021985a8(puVar14);
                    /* try { // try from 0250c9d8 to 0260c9db has its CatchHandler @ 0250c9f4 */
                    uVar22 = System_String__Concat_46c82e0(uVar13,uVar22,0);
                    /* try { // try from 0250c9dc to 0260c9f7 has its CatchHandler @ 0250c624 */
LAB_0250c93c:
                    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                    uVar13 = thunk_FUN_0216e89c();
                    System_ArgumentException___ctor_47b660c(uVar13,uVar22,0);
                    uVar22 = thunk_FUN_021985a8(PTR_DAT_04cbe370);
                    /* WARNING: Subroutine does not return */
                    FUN_021330e8(uVar13,uVar22);
                  }
                  if (0 < iVar1) {
                    iVar23 = 0;
                    iVar4 = iVar8 * (uint)uVar17;
                    do {
                      System_String__get_Chars_46ccb24(uVar12,iVar23,0);
                      uVar9 = Dino_BusSand_Core_BoardBuilder__PaletteIndex_240cabc();
                      if (-1 < (int)uVar9) {
                        if (*(int *)(uVar11 + 0x18) <= (int)uVar9) {
                          uStack_6c = uVar9;
                          uVar22 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_6c)
                          ;
                          uVar13 = thunk_FUN_021985a8(PTR_DAT_04cbe368);
                          uVar22 = System_String__Format_46c8eb8(uVar13,uVar22,0);
                          goto LAB_0250c93c;
                        }
                        if (iVar4 < iVar4 + iVar8) {
                          iVar5 = iVar23 * iVar8;
                          uVar3 = *(undefined1 *)(uVar11 + uVar9 + 0x20);
                          iVar24 = iVar4;
                          do {
                            iVar6 = iVar5;
                            iVar19 = iVar8;
                            if (iVar5 < iVar5 + iVar8) {
                              do {
                                uVar7 = Dino_BusSand_Core_BoardBuilder__NextShade_240cb9c
                                                  ((long)&uStack_68 + 4,param_2);
                                Dino_BusSand_Core_SandGrid__TrySpawn_2417730
                                          (lVar15,iVar6,iVar24,uVar3,uVar7,0);
                                iVar19 = iVar19 + -1;
                                iVar6 = iVar6 + 1;
                              } while (iVar19 != 0);
                            }
                            iVar24 = iVar24 + 1;
                          } while (iVar24 != iVar20);
                        }
                      }
                      iVar23 = iVar23 + 1;
                    } while (iVar23 != iVar1);
                  }
                  iVar20 = iVar20 + iVar8;
                  uVar17 = uVar17 + 1;
                } while (uVar17 != (uVar21 & 0xffffffff));
              }
              *(undefined1 *)(lVar15 + 0x74) = 1;
              return lVar15;
            }
          }
        }
      }
    }
  }
LAB_0250c978:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

