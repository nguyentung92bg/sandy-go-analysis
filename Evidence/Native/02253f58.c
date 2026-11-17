/* IL2CPP: Dino.BusSand.App.LanguageFonts$$IsRtl
bool Dino_BusSand_App_LanguageFonts__IsRtl (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$IsRtl
   bool Dino_BusSand_App_LanguageFonts__IsRtl (System_String_o* lang, const MethodInfo* method); */

bool Dino_BusSand_App_LanguageFonts__IsRtl_2153f58(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cab758;
                    /* try { // try from 02253f6c to 02353f77 has its CatchHandler @ 02253fa8 */
  if ((bRam0000000004f9b7d2 & 1) == 0) {
                    /* try { // try from 02253f78 to 02353fc3 has its CatchHandler @ 02253ef8 */
    FUN_02132f7c(PTR_DAT_04cab758);
    FUN_02132f7c(PTR_DAT_04cab760);
    bRam0000000004f9b7d2 = 1;
  }
  uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
                    /* catch() { ... } // from try @ 02253f6c with catch @ 02253fa8 */
  if ((uVar3 & 1) != 0) {
    return true;
  }
  lVar7 = *(long *)PTR_DAT_04cab760;
  if (param_1 == lVar7) {
    return true;
  }
  if (param_1 != 0) {
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x10) != *(int *)(lVar7 + 0x10)) {
      return false;
    }
    lVar8 = (long)*(int *)(param_1 + 0x10) << 1;
    param_1 = param_1 + 0x14;
    lVar7 = lVar7 + 0x14;
    if (param_1 != lVar7) {
      lVar4 = System_IntPtr__op_Explicit_4878324(0,0,lVar8,0);
      uVar5 = System_IntPtr__op_Explicit_4878330(lVar8,0);
      uVar3 = System_IntPtr__op_Explicit_487833c(uVar5,0);
      if (7 < uVar3) {
        lVar8 = System_IntPtr__op_Subtraction_4878350(uVar5,8,0);
        while( true ) {
          uVar3 = System_IntPtr__op_Explicit_487833c(lVar8,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
          if (uVar3 <= uVar6) {
            return *(long *)(param_1 + lVar8) == *(long *)(lVar7 + lVar8);
          }
          uVar3 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(param_1 + lVar4),*(undefined8 *)(lVar7 + lVar4),0);
          if ((uVar3 & 1) != 0) break;
          lVar4 = System_IntPtr__op_Addition_4878348(lVar4,8,0);
        }
        return false;
      }
      uVar3 = System_IntPtr__op_Explicit_487833c(uVar5,0);
      uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
      if (uVar6 < uVar3) {
        do {
          bVar2 = *(char *)(param_1 + lVar4) == *(char *)(lVar7 + lVar4);
          if (!bVar2) {
            return bVar2;
          }
          lVar4 = System_IntPtr__op_Addition_4878348(lVar4,1,0);
          uVar3 = System_IntPtr__op_Explicit_487833c(uVar5,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar4,0);
        } while (uVar6 < uVar3);
        return bVar2;
      }
    }
    return true;
  }
  return false;
}

