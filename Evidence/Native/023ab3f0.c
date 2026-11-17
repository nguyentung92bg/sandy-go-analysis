/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$IsCurrency
bool Dino_BusSand_App_UI_CommerceUi__IsCurrency (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$IsCurrency
   bool Dino_BusSand_App_UI_CommerceUi__IsCurrency (int32_t id, const MethodInfo* method); */

bool Dino_BusSand_App_UI_CommerceUi__IsCurrency_22ab3f0(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cb3ca0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb3ca8);
    bRam0000000004f9c2a3 = 1;
  }
  puVar4 = PTR_DAT_04cb3ca8;
  puVar3 = PTR_DAT_04cb3ca0;
  puVar1 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_UI_CommerceUi__ItemRow_22ab158(param_1);
  uVar6 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar6,*(undefined8 *)puVar4,0);
  lVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar6,*(undefined8 *)puVar1,0);
  lVar11 = *(long *)puVar3;
  if (lVar7 == lVar11) {
    return true;
  }
  if (lVar7 == 0) {
    return false;
  }
  if (lVar11 != 0) {
    if (*(int *)(lVar7 + 0x10) != *(int *)(lVar11 + 0x10)) {
      return false;
    }
    lVar12 = (long)*(int *)(lVar7 + 0x10) << 1;
    lVar7 = lVar7 + 0x14;
    lVar11 = lVar11 + 0x14;
    if (lVar7 != lVar11) {
      lVar8 = System_IntPtr__op_Explicit_4878324(0,0,lVar12,0);
      uVar6 = System_IntPtr__op_Explicit_4878330(lVar12,0);
      uVar9 = System_IntPtr__op_Explicit_487833c(uVar6,0);
      if (7 < uVar9) {
        lVar12 = System_IntPtr__op_Subtraction_4878350(uVar6,8,0);
        while( true ) {
          uVar9 = System_IntPtr__op_Explicit_487833c(lVar12,0);
          uVar10 = System_IntPtr__op_Explicit_487833c(lVar8,0);
          if (uVar9 <= uVar10) {
            return *(long *)(lVar7 + lVar12) == *(long *)(lVar11 + lVar12);
          }
          uVar9 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar7 + lVar8),*(undefined8 *)(lVar11 + lVar8),0);
          if ((uVar9 & 1) != 0) break;
          lVar8 = System_IntPtr__op_Addition_4878348(lVar8,8,0);
        }
        return false;
      }
      uVar9 = System_IntPtr__op_Explicit_487833c(uVar6,0);
      uVar10 = System_IntPtr__op_Explicit_487833c(lVar8,0);
      if (uVar10 < uVar9) {
        do {
          bVar5 = *(char *)(lVar7 + lVar8) == *(char *)(lVar11 + lVar8);
          if (!bVar5) {
            return bVar5;
          }
          lVar8 = System_IntPtr__op_Addition_4878348(lVar8,1,0);
          uVar9 = System_IntPtr__op_Explicit_487833c(uVar6,0);
          uVar10 = System_IntPtr__op_Explicit_487833c(lVar8,0);
        } while (uVar10 < uVar9);
        return bVar5;
      }
    }
    return true;
  }
  return false;
}

