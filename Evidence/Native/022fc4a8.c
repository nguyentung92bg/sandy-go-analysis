/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Name
System_String_o* Dino_BusSand_App_UI_RescueTimerWidget__Name (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Name
   System_String_o* Dino_BusSand_App_UI_RescueTimerWidget__Name (const MethodInfo* method); */

long Dino_BusSand_App_UI_RescueTimerWidget__Name_21fc4a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int iStack_6c;
  long *aplStack_68 [2];
  long lStack_58;
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9bc69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb19a0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bc69 = 1;
  }
                    /* try { // try from 022fc50c to 023fc51f has its CatchHandler @ 022fc970 */
  lVar16 = *(long *)puVar1;
  lVar15 = *(long *)(lVar16 + 0x38);
  if (lVar15 == 0) {
    FUN_0216b4cc(lVar16);
    lVar15 = *(long *)(lVar16 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
                    /* try { // try from 022fc528 to 023fc52f has its CatchHandler @ 022fc930 */
                    /* try { // try from 022fc530 to 023fc57b has its CatchHandler @ 022fc47c */
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab550;
  lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  puVar4 = PTR_DAT_04cb19a0;
  puVar3 = PTR_DAT_04caa370;
  puVar2 = PTR_DAT_04ca9c30;
                    /* try { // try from 022fc57c to 023fc58f has its CatchHandler @ 022fc95c */
  uVar17 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 022fc598 to 023fc59f has its CatchHandler @ 022fc92c */
                    /* try { // try from 022fc5a0 to 023fc61f has its CatchHandler @ 022fc47c */
  lVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar4,uVar17,0);
  lVar15 = *(long *)puVar2;
  if (lVar16 != 0) {
    lVar15 = lVar16;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  if (((plVar10 == (long *)0x0) ||
      (plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
      lVar15 == 0)) ||
     (lVar15 = System_String__ToLowerInvariant_46d6ce8(lVar15,0), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lStack_58 = lVar15;
  if ((bRam0000000004fad1c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b78,lVar15,0);
    bRam0000000004fad1c9 = 1;
  }
  aplStack_68[0] = (long *)0x0;
  iStack_6c = 0;
  if (lVar15 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar17 = thunk_FUN_0216e89c();
    uVar14 = thunk_FUN_021985a8(PTR_DAT_04d0b3b8);
    System_ArgumentNullException___ctor_47afb54(uVar17,uVar14,0);
    uVar14 = thunk_FUN_021985a8(PTR_DAT_04d10048);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar17,uVar14);
  }
  if (*(int *)(lVar15 + 0x10) != 0) {
    plVar11 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
    System_Text_StringBuilder___ctor_46db61c(plVar11,0);
    puVar1 = PTR_DAT_04ca9ac8;
    aplStack_68[0] = plVar11;
    if (0 < *(int *)(lVar15 + 0x10)) {
      iVar8 = 0;
      lVar16 = 0;
      do {
        iVar7 = System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory_47888a4
                          (lVar15,iVar8,&iStack_6c,0);
        if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(puVar1 + 0x88));
        }
        uVar12 = System_Char__CheckLetter_47bbfe4(iVar7,0);
        if ((uVar12 & 1) == 0) {
LAB_048a7230:
          iVar8 = System_Globalization_TextInfo__AddNonLetter_47a7448
                            (aplStack_68,&lStack_58,iVar8,iStack_6c);
        }
        else {
          iVar8 = System_Globalization_TextInfo__AddTitlecaseLetter_47a72d0
                            (plVar10,aplStack_68,&lStack_58,iVar8,iStack_6c);
          bVar5 = iVar7 == 1;
          iVar7 = iVar8 + 1;
          while (iVar8 = iVar7, iVar7 < *(int *)(lVar15 + 0x10)) {
            while( true ) {
              while (uVar9 = System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory_47888a4
                                       (lVar15,iVar8,&iStack_6c,0), uVar9 < 5) {
                iVar8 = iStack_6c + iVar8;
                bVar5 = (bool)(uVar9 == 1 | bVar5);
                if (*(int *)(lVar15 + 0x10) <= iVar8) goto LAB_048a71b4;
              }
              sVar6 = System_String__get_Chars_46ccb24(lVar15,iVar8,0);
              if (sVar6 == 0x27) break;
              if (((1 << (ulong)(uVar9 & 0x1f) & 0x1ffcf800U) != 0) ||
                 (iVar8 = iStack_6c + iVar8, *(int *)(lVar15 + 0x10) <= iVar8)) goto LAB_048a71b4;
            }
            lVar13 = lVar15;
            if ((bVar5) && (lVar13 = lVar16, lVar16 == 0)) {
              lVar13 = (**(code **)(*plVar10 + 0x1b8))
                                 (plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x1c0));
              lVar16 = lVar13;
            }
            if (aplStack_68[0] == (long *)0x0) goto LAB_048a7284;
            System_Text_StringBuilder__Append_46dcf30
                      (aplStack_68[0],lVar13,iVar7,(iVar8 + 1) - iVar7,0);
            bVar5 = true;
            lVar15 = lStack_58;
            iVar7 = iVar8 + 1;
            if (lStack_58 == 0) goto LAB_048a7284;
          }
LAB_048a71b4:
          if (0 < iVar8 - iVar7) {
            lVar13 = lVar15;
            if ((bVar5) && (lVar13 = lVar16, lVar16 == 0)) {
              lVar13 = (**(code **)(*plVar10 + 0x1b8))
                                 (plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x1c0));
              lVar16 = lVar13;
            }
            if (aplStack_68[0] == (long *)0x0) goto LAB_048a7284;
            System_Text_StringBuilder__Append_46dcf30(aplStack_68[0],lVar13,iVar7,iVar8 - iVar7,0);
          }
          if (lStack_58 == 0) goto LAB_048a7284;
          lVar15 = lStack_58;
          if (iVar8 < *(int *)(lStack_58 + 0x10)) goto LAB_048a7230;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar15 + 0x10));
    }
    if (aplStack_68[0] == (long *)0x0) {
LAB_048a7284:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = (**(code **)(*aplStack_68[0] + 0x168))
                       (aplStack_68[0],*(undefined8 *)(*aplStack_68[0] + 0x170));
  }
  return lVar15;
}

