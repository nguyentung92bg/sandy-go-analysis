/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$IsDecorate
bool Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate (int32_t id, System_String_o* type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$IsDecorate
   bool Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate (int32_t id, System_String_o* type, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb4750);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0c3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__Decorate_226cc9c(param_1);
  puVar1 = PTR_DAT_04ca9c30;
  if (lVar3 == 0) {
    return false;
  }
  uVar4 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar3,*(undefined8 *)PTR_DAT_04cb4750,0);
  lVar3 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar4,*(undefined8 *)puVar1,0);
  if (lVar3 == param_2) {
    return true;
  }
  if (lVar3 != 0) {
    if (param_2 == 0) {
      return false;
    }
    if (*(int *)(lVar3 + 0x10) != *(int *)(param_2 + 0x10)) {
      return false;
    }
    lVar8 = (long)*(int *)(lVar3 + 0x10) << 1;
    lVar3 = lVar3 + 0x14;
    param_2 = param_2 + 0x14;
    if (lVar3 != param_2) {
      lVar5 = System_IntPtr__op_Explicit_4878324(0,0,lVar8,0);
      uVar4 = System_IntPtr__op_Explicit_4878330(lVar8,0);
      uVar6 = System_IntPtr__op_Explicit_487833c(uVar4,0);
      if (7 < uVar6) {
        lVar8 = System_IntPtr__op_Subtraction_4878350(uVar4,8,0);
        while( true ) {
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar8,0);
          uVar7 = System_IntPtr__op_Explicit_487833c(lVar5,0);
          if (uVar6 <= uVar7) {
            return *(long *)(lVar3 + lVar8) == *(long *)(param_2 + lVar8);
          }
          uVar6 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar3 + lVar5),*(undefined8 *)(param_2 + lVar5),0);
          if ((uVar6 & 1) != 0) break;
          lVar5 = System_IntPtr__op_Addition_4878348(lVar5,8,0);
        }
        return false;
      }
      uVar6 = System_IntPtr__op_Explicit_487833c(uVar4,0);
      uVar7 = System_IntPtr__op_Explicit_487833c(lVar5,0);
      if (uVar7 < uVar6) {
        do {
          bVar2 = *(char *)(lVar3 + lVar5) == *(char *)(param_2 + lVar5);
          if (!bVar2) {
            return bVar2;
          }
          lVar5 = System_IntPtr__op_Addition_4878348(lVar5,1,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(uVar4,0);
          uVar7 = System_IntPtr__op_Explicit_487833c(lVar5,0);
        } while (uVar7 < uVar6);
        return bVar2;
      }
    }
    return true;
  }
  return false;
}

