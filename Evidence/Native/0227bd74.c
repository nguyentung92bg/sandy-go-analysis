/* IL2CPP: Dino.BusSand.App.Iap$$get_QuietFail
bool Dino_BusSand_App_Iap__get_QuietFail (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$get_QuietFail
   bool Dino_BusSand_App_Iap__get_QuietFail (const MethodInfo* method); */

bool Dino_BusSand_App_Iap__get_QuietFail_217bd74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_04cad1f0;
  if ((bRam0000000004f9b906 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
                    /* try { // try from 0227bd9c to 0237bdb3 has its CatchHandler @ 0227bf7c */
    FUN_02132f7c(PTR_DAT_04cad2d8);
    FUN_02132f7c(PTR_DAT_04cad2e0);
    FUN_02132f7c(PTR_DAT_04cad2e8);
    bRam0000000004f9b906 = 1;
  }
  puVar2 = PTR_DAT_04cad2e0;
  lVar4 = *(long *)puVar1;
                    /* try { // try from 0227bdcc to 0237becb has its CatchHandler @ 0227bf80 */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_04cad2e8;
  if ((uVar5 & 1) != 0) {
    return true;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),*(undefined8 *)puVar2,0);
  if ((uVar5 & 1) != 0) {
    return true;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  lVar9 = *(long *)PTR_DAT_04cad2d8;
  if (lVar4 != lVar9) {
    if (lVar4 == 0) {
      return false;
    }
    if (lVar9 == 0) {
      return false;
    }
    if (*(int *)(lVar4 + 0x10) != *(int *)(lVar9 + 0x10)) {
      return false;
    }
    lVar10 = (long)*(int *)(lVar4 + 0x10) << 1;
    lVar4 = lVar4 + 0x14;
    lVar9 = lVar9 + 0x14;
    if (lVar4 != lVar9) {
      lVar6 = System_IntPtr__op_Explicit_4878324(0,0,lVar10,0);
      uVar7 = System_IntPtr__op_Explicit_4878330(lVar10,0);
      uVar5 = System_IntPtr__op_Explicit_487833c(uVar7,0);
      if (7 < uVar5) {
        lVar10 = System_IntPtr__op_Subtraction_4878350(uVar7,8,0);
        while( true ) {
          uVar5 = System_IntPtr__op_Explicit_487833c(lVar10,0);
          uVar8 = System_IntPtr__op_Explicit_487833c(lVar6,0);
          if (uVar5 <= uVar8) {
            return *(long *)(lVar4 + lVar10) == *(long *)(lVar9 + lVar10);
          }
          uVar5 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar4 + lVar6),*(undefined8 *)(lVar9 + lVar6),0);
          if ((uVar5 & 1) != 0) break;
          lVar6 = System_IntPtr__op_Addition_4878348(lVar6,8,0);
        }
        return false;
      }
      uVar5 = System_IntPtr__op_Explicit_487833c(uVar7,0);
      uVar8 = System_IntPtr__op_Explicit_487833c(lVar6,0);
      if (uVar8 < uVar5) {
        do {
          bVar3 = *(char *)(lVar4 + lVar6) == *(char *)(lVar9 + lVar6);
          if (!bVar3) {
            return bVar3;
          }
          lVar6 = System_IntPtr__op_Addition_4878348(lVar6,1,0);
          uVar5 = System_IntPtr__op_Explicit_487833c(uVar7,0);
          uVar8 = System_IntPtr__op_Explicit_487833c(lVar6,0);
        } while (uVar8 < uVar5);
        return bVar3;
      }
    }
    return true;
  }
  return true;
}

