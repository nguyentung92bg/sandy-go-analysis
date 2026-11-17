/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_ReportPath
System_String_o* Dino_BusSand_Cheat_AutoQa__get_ReportPath (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_ReportPath
   System_String_o* Dino_BusSand_Cheat_AutoQa__get_ReportPath (const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__get_ReportPath_2340cd0(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
                    /* try { // try from 02440cd0 to 02540cdf has its CatchHandler @ 0244098c */
  puVar7 = PTR_DAT_04caa210;
                    /* try { // try from 02440ce0 to 02540cef has its CatchHandler @ 02440cf0 */
  if ((bRam0000000004f9c683 & 1) == 0) {
                    /* catch() { ... } // from try @ 02440ce0 with catch @ 02440cf0 */
                    /* catch() { ... } // from try @ 02440c00 with catch @ 02440cf4 */
    FUN_02132f7c(PTR_DAT_04caa210);
                    /* catch() { ... } // from try @ 02440bfc with catch @ 02440cf8 */
                    /* catch() { ... } // from try @ 02440bd0 with catch @ 02440cfc */
    FUN_02132f7c(PTR_DAT_04caa228);
                    /* try { // try from 02440d04 to 02540d07 has its CatchHandler @ 02440d8c */
                    /* try { // try from 02440d08 to 02540d57 has its CatchHandler @ 0244098c */
                    /* catch() { ... } // from try @ 02440ac8 with catch @ 02440d0c */
    FUN_02132f7c(PTR_DAT_04cb9570);
                    /* catch() { ... } // from try @ 02440a64 with catch @ 02440d10 */
                    /* catch() { ... } // from try @ 02440a9c with catch @ 02440d14 */
    bRam0000000004f9c683 = 1;
  }
  puVar1 = PTR_DAT_04caa228;
                    /* catch() { ... } // from try @ 02440c34 with catch @ 02440d18 */
                    /* catch() { ... } // from try @ 02440b28 with catch @ 02440d1c */
                    /* catch() { ... } // from try @ 02440b00 with catch @ 02440d20 */
                    /* catch() { ... } // from try @ 02440ccc with catch @ 02440d24 */
                    /* catch() { ... } // from try @ 02440cc4 with catch @ 02440d28 */
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02440cbc with catch @ 02440d2c */
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 02440c84 with catch @ 02440d30
                       catch() { ... } // from try @ 02440cc0 with catch @ 02440d30 */
  puVar7 = PTR_DAT_04cb9570;
                    /* catch() { ... } // from try @ 02440a80 with catch @ 02440d34
                       catch() { ... } // from try @ 02440ae0 with catch @ 02440d34
                       catch() { ... } // from try @ 02440c48 with catch @ 02440d34
                       catch() { ... } // from try @ 02440cc8 with catch @ 02440d34 */
                    /* catch() { ... } // from try @ 02440b70 with catch @ 02440d38 */
  lVar4 = UnityEngine_Application__get_persistentDataPath_43521d4(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 02440d58 to 02540d5b has its CatchHandler @ 02440d78 */
  lVar10 = *(long *)puVar7;
                    /* try { // try from 02440d5c to 02540d7b has its CatchHandler @ 0244098c */
  if ((bRam0000000004fad533 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa228,lVar10,0);
    bRam0000000004fad533 = 1;
  }
  puVar7 = PTR_DAT_04caa228;
  if (lVar4 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    puVar7 = PTR_DAT_04d12be8;
  }
  else {
    if (lVar10 != 0) {
      lVar5 = lVar10;
      if ((*(int *)(lVar4 + 0x10) == 0) || (lVar5 = lVar4, *(int *)(lVar10 + 0x10) == 0)) {
        return lVar5;
      }
      lVar5 = *(long *)PTR_DAT_04caa228;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar7;
      }
      iVar3 = System_String__IndexOfAny_46d7618(lVar4,**(undefined8 **)(lVar5 + 0xb8),0);
      if (iVar3 == -1) {
        lVar5 = *(long *)puVar7;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar7;
        }
        iVar3 = System_String__IndexOfAny_46d7618(lVar10,**(undefined8 **)(lVar5 + 0xb8),0);
        if (iVar3 == -1) {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = System_IO_Path__IsPathRooted_4807098(lVar10);
          if ((uVar6 & 1) != 0) {
            return lVar10;
          }
          sVar2 = System_String__get_Chars_46ccb24(lVar4,*(int *)(lVar4 + 0x10) + -1,0);
          lVar5 = *(long *)puVar7;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar5);
            lVar5 = *(long *)puVar7;
          }
          lVar12 = *(long *)(lVar5 + 0xb8);
          lVar11 = lVar10;
          if (*(short *)(lVar12 + 10) != sVar2) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar5);
              lVar5 = *(long *)puVar7;
              lVar12 = *(long *)(lVar5 + 0xb8);
            }
            if (*(short *)(lVar12 + 8) != sVar2) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar5);
                lVar5 = *(long *)puVar7;
                lVar12 = *(long *)(lVar5 + 0xb8);
              }
              if (*(short *)(lVar12 + 0x18) != sVar2) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar5);
                  lVar12 = *(long *)(*(long *)puVar7 + 0xb8);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                lVar5 = lVar12;
                if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) &&
                     (lVar5 = lVar4, lVar12 != 0)) &&
                    ((*(int *)(lVar12 + 0x10) != 0 && (lVar11 = lVar12, lVar10 != 0)))) &&
                   (*(int *)(lVar10 + 0x10) != 0)) {
                  lVar5 = thunk_FUN_0216c29c(*(int *)(lVar12 + 0x10) + *(int *)(lVar4 + 0x10) +
                                             *(int *)(lVar10 + 0x10),lVar12,lVar10,0);
                  System_String__FillStringChecked_46d2a48(lVar5,0,lVar4);
                  System_String__FillStringChecked_46d2a48
                            (lVar5,*(undefined4 *)(lVar4 + 0x10),lVar12);
                  System_String__FillStringChecked_46d2a48
                            (lVar5,*(int *)(lVar12 + 0x10) + *(int *)(lVar4 + 0x10),lVar10);
                  return lVar5;
                }
                goto System_String__Concat_46c82e0;
              }
            }
          }
          lVar5 = lVar4;
          lVar10 = 0;
System_String__Concat_46c82e0:
          if ((lVar5 == 0) || (iVar3 = *(int *)(lVar5 + 0x10), iVar3 == 0)) {
            if ((lVar11 == 0) || (lVar5 = lVar11, *(int *)(lVar11 + 0x10) == 0)) {
              lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
            }
          }
          else if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
            lVar4 = thunk_FUN_0216c29c(*(int *)(lVar11 + 0x10) + iVar3,lVar11,lVar10);
            System_String__FillStringChecked_46d2a48(lVar4,0,lVar5);
            System_String__FillStringChecked_46d2a48(lVar4,iVar3,lVar11);
            lVar5 = lVar4;
          }
          return lVar5;
        }
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar8 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04d12bd8);
      System_ArgumentException___ctor_47b660c(uVar8,uVar9,0);
      goto LAB_04907080;
    }
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    puVar7 = PTR_DAT_04d12bf0;
  }
  uVar9 = thunk_FUN_021985a8(puVar7);
  System_ArgumentNullException___ctor_47afb54(uVar8,uVar9,0);
LAB_04907080:
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04d12bf8);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar8,uVar9);
}

