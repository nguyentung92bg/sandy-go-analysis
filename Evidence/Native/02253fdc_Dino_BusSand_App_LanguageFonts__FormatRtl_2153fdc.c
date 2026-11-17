/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FormatRtl
System_String_o* Dino_BusSand_App_LanguageFonts__FormatRtl (System_String_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FormatRtl
   System_String_o* Dino_BusSand_App_LanguageFonts__FormatRtl (System_String_o* input, const
   MethodInfo* method); */

long Dino_BusSand_App_LanguageFonts__FormatRtl_2153fdc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  if ((bRam0000000004f9b7d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab768);
    FUN_02132f7c(PTR_DAT_04cab770);
    FUN_02132f7c(PTR_DAT_04cab778);
    FUN_02132f7c(PTR_DAT_04cab780);
    FUN_02132f7c(PTR_DAT_04cab788);
    FUN_02132f7c(PTR_DAT_04cab790);
    FUN_02132f7c(PTR_DAT_04ca9b78);
    FUN_02132f7c(PTR_DAT_04cab798);
    FUN_02132f7c(PTR_DAT_04cab7a0);
    bRam0000000004f9b7d3 = 1;
  }
  uVar9 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar4 = PTR_DAT_04cab7a0;
  puVar3 = PTR_DAT_04cab798;
  puVar2 = PTR_DAT_04cab768;
  if ((uVar9 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
                    /* try { // try from 022540bc to 023541b7 has its CatchHandler @ 022540bc
                       catch() { ... } // from try @ 022540bc with catch @ 022540bc
                       catch() { ... } // from try @ 022541c4 with catch @ 022540bc */
    iVar5 = 0;
    while ((iVar5 = System_String__IndexOf_46d7ab8(param_1,*(undefined8 *)puVar4,iVar5,5,0),
           -1 < iVar5 &&
           (iVar6 = System_String__IndexOf_46d7ab8(param_1,*(undefined8 *)puVar3,iVar5 + 5,5,0),
           -1 < iVar6))) {
      lVar10 = System_String__Substring_46d4848(param_1,iVar5 + 5,(iVar6 - iVar5) + -5,0);
      if (lVar10 == 0) goto LAB_02254180;
      uVar11 = System_String__ToCharArray_46d1f90(lVar10,0);
      System_Array__Reverse_char__2667814(uVar11,*(undefined8 *)puVar2);
      lVar10 = System_String__CreateString_46cfa84(0,uVar11,0);
      lVar12 = System_String__Remove_46d460c(param_1,iVar5,(iVar6 - iVar5) + 6,0);
      if (((lVar12 == 0) ||
          (param_1 = System_String__Insert_46d37d0(lVar12,iVar5,lVar10,0), lVar10 == 0)) ||
         (iVar5 = *(int *)(lVar10 + 0x10) + iVar5, param_1 == 0)) goto LAB_02254180;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    plVar13 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
    System_Text_StringBuilder___ctor_46db688(plVar13,uVar8,0);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab790);
                    /* try { // try from 022541b8 to 023541c3 has its CatchHandler @ 022541f4 */
                    /* try { // try from 022541c4 to 0235420f has its CatchHandler @ 022540bc */
    System_Collections_Generic_Stack_char____ctor_2ec4398(lVar10,*(undefined8 *)PTR_DAT_04cab780);
    puVar4 = PTR_DAT_04cab778;
    puVar3 = PTR_DAT_04cab770;
    puVar2 = PTR_DAT_04ca9ac8;
    if (0 < *(int *)(param_1 + 0x10)) {
                    /* catch() { ... } // from try @ 022541b8 with catch @ 022541f4 */
      iVar5 = 0;
      goto LAB_02254204;
    }
    if (lVar10 != 0) goto LAB_022542e8;
  }
  goto LAB_02254180;
LAB_02254204:
  do {
    uVar7 = System_String__get_Chars_46ccb24(param_1,iVar5,0);
    if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0x88));
    }
    uVar9 = System_Char__IsDigit_47b5cfc(uVar7,0);
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar7 & 0xffff;
      if (((uVar1 - 0x28 < 0x36) &&
          ((1L << ((ulong)(uVar1 - 0x28) & 0x3f) & 0x28000000040053U) != 0)) ||
         ((uVar1 == 0x7b || (uVar1 == 0x7d)))) goto LAB_02254258;
      if (lVar10 == 0) goto LAB_02254180;
      iVar6 = *(int *)(lVar10 + 0x18);
      while (0 < iVar6) {
        uVar8 = System_Collections_Generic_Stack_char___Pop_2ec496c(lVar10,*(undefined8 *)puVar3);
        if (plVar13 == (long *)0x0) goto LAB_02254180;
        System_Text_StringBuilder__Append_46dd710(plVar13,uVar8,0);
                    /* try { // try from 022542c0 to 02354333 has its CatchHandler @ 022542c0
                       catch() { ... } // from try @ 022542c0 with catch @ 022542c0
                       catch() { ... } // from try @ 02254340 with catch @ 022542c0 */
        iVar6 = *(int *)(lVar10 + 0x18);
      }
      if (plVar13 == (long *)0x0) goto LAB_02254180;
      System_Text_StringBuilder__Append_46dd710(plVar13,uVar7,0);
    }
    else {
LAB_02254258:
      if (lVar10 == 0) goto LAB_02254180;
      System_Collections_Generic_Stack_char___Push_2ec4a10(lVar10,uVar7,*(undefined8 *)puVar4);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(param_1 + 0x10));
LAB_022542e8:
  puVar2 = PTR_DAT_04cab770;
  iVar5 = *(int *)(lVar10 + 0x18);
  while (0 < iVar5) {
    uVar8 = System_Collections_Generic_Stack_char___Pop_2ec496c(lVar10,*(undefined8 *)puVar2);
    if (plVar13 == (long *)0x0) goto LAB_02254180;
    System_Text_StringBuilder__Append_46dd710(plVar13,uVar8,0);
    iVar5 = *(int *)(lVar10 + 0x18);
  }
  if (plVar13 != (long *)0x0) {
                    /* try { // try from 02254334 to 0235433f has its CatchHandler @ 02254370 */
                    /* try { // try from 02254340 to 0235438b has its CatchHandler @ 022542c0 */
                    /* WARNING: Could not recover jumptable at 0x02254350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    return lVar10;
  }
LAB_02254180:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

