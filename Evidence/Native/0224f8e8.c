/* IL2CPP: Dino.BusSand.App.Devanagari$$OrderForTmp
System_String_o* Dino_BusSand_App_Devanagari__OrderForTmp (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Devanagari$$OrderForTmp
   System_String_o* Dino_BusSand_App_Devanagari__OrderForTmp (System_String_o* s, const MethodInfo*
   method); */

long Dino_BusSand_App_Devanagari__OrderForTmp_214f8e8(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  uint uVar15;
  
                    /* try { // try from 0224f8e8 to 0234f8fb has its CatchHandler @ 0224ffa0 */
  uVar10 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar10 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
                    /* try { // try from 0224f904 to 0234f90f has its CatchHandler @ 0224ffbc */
    iVar9 = System_String__IndexOf_46d72c4(param_1,0x93f,0);
    if (iVar9 < 0) {
      return param_1;
    }
                    /* try { // try from 0224f914 to 0234f927 has its CatchHandler @ 0224ff9c */
    lVar11 = System_String__ToCharArray_46d1f90(param_1,0);
    if (lVar11 != 0) {
      uVar5 = *(uint *)(lVar11 + 0x18);
                    /* try { // try from 0224f930 to 0234f93b has its CatchHandler @ 0224ffbc */
      uVar3 = uVar5;
      if ((int)uVar5 < 2) {
        uVar3 = 1;
      }
      uVar4 = uVar5;
      if (uVar5 < 2) {
        uVar4 = 1;
      }
      if (1 < (int)uVar5) {
                    /* try { // try from 0224f940 to 0234f953 has its CatchHandler @ 0224ff8c */
        uVar13 = 0;
        uVar10 = 1;
        do {
          if (uVar10 == uVar4) {
LAB_0224fa10:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
                    /* try { // try from 0224f95c to 0234f967 has its CatchHandler @ 0224ffbc */
          if (*(short *)(lVar11 + uVar10 * 2 + 0x20) == 0x93f) {
                    /* try { // try from 0224f96c to 0234f97f has its CatchHandler @ 0224ff88 */
            uVar1 = (int)uVar10 - 1;
            if (*(short *)(lVar11 + (uVar10 - 1) * 2 + 0x20) == 0x93c && uVar10 - 1 != 0) {
              uVar1 = (int)uVar10 - 2;
            }
            if (uVar5 <= uVar1) goto LAB_0224fa10;
            puVar14 = (ushort *)(lVar11 + (long)(int)uVar1 * 2 + 0x20);
            uVar15 = (uint)*puVar14;
                    /* try { // try from 0224f9a0 to 0234f9a7 has its CatchHandler @ 0224ffbc */
            if ((uVar15 - 0x915 < 0x25) || ((uVar15 & 0xffd8) == 0x958)) {
              uVar8 = uVar13;
              uVar7 = uVar10;
              while (uVar6 = uVar8, (long)(int)uVar1 < (long)uVar7) {
                if (uVar5 <= (uint)uVar6) goto LAB_0224fa10;
                lVar12 = lVar11 + uVar6 * 2;
                *(undefined2 *)(lVar12 + 0x22) = *(undefined2 *)(lVar12 + 0x20);
                uVar8 = uVar6 - 1;
                uVar7 = uVar6;
              }
              *puVar14 = 0x93f;
            }
          }
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar10 != uVar3);
      }
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
        lVar12 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
      else {
        lVar12 = thunk_FUN_0216c29c(*(long *)(lVar11 + 0x18),lVar11,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar2 = 0;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar2 = lVar11 + 0x20;
        }
        System_Buffer__Memmove_485a338(lVar12 + 0x14,lVar2,*(int *)(lVar11 + 0x18) << 1,0);
      }
      return lVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

