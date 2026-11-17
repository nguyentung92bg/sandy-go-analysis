/* IL2CPP: Dino.BusSand.View.StaticMerge$$Bakeable
bool Dino_BusSand_View_StaticMerge__Bakeable (UnityEngine_Material_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StaticMerge$$Bakeable
   bool Dino_BusSand_View_StaticMerge__Bakeable (UnityEngine_Material_o* m, const MethodInfo*
   method); */

bool Dino_BusSand_View_StaticMerge__Bakeable_23e9e9c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbcb68);
    bRam0000000004f9ca9b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    return false;
  }
  if (param_1 != 0) {
    uVar4 = UnityEngine_Material__get_shader_437b8d4(param_1,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    lVar9 = UnityEngine_Material__get_shader_437b8d4(param_1,0);
    if (lVar9 != 0) {
      lVar9 = UnityEngine_Object__get_name_43c71a4(lVar9,0);
      lVar7 = *(long *)PTR_DAT_04cbcb68;
      if (lVar9 == lVar7) {
        return true;
      }
      if (lVar9 == 0) {
        return false;
      }
      if (lVar7 == 0) {
        return false;
      }
      if (*(int *)(lVar9 + 0x10) == *(int *)(lVar7 + 0x10)) {
        lVar8 = (long)*(int *)(lVar9 + 0x10) << 1;
        lVar9 = lVar9 + 0x14;
        lVar7 = lVar7 + 0x14;
        if (lVar9 != lVar7) {
          lVar5 = System_IntPtr__op_Explicit_4878324(0,0,lVar8,0);
          uVar4 = System_IntPtr__op_Explicit_4878330(lVar8,0);
          uVar3 = System_IntPtr__op_Explicit_487833c(uVar4,0);
          if (7 < uVar3) {
            lVar8 = System_IntPtr__op_Subtraction_4878350(uVar4,8,0);
            while( true ) {
              uVar3 = System_IntPtr__op_Explicit_487833c(lVar8,0);
              uVar6 = System_IntPtr__op_Explicit_487833c(lVar5,0);
              if (uVar3 <= uVar6) {
                return *(long *)(lVar9 + lVar8) == *(long *)(lVar7 + lVar8);
              }
              uVar3 = System_UIntPtr__op_Inequality_4886170
                                (*(undefined8 *)(lVar9 + lVar5),*(undefined8 *)(lVar7 + lVar5),0);
              if ((uVar3 & 1) != 0) break;
              lVar5 = System_IntPtr__op_Addition_4878348(lVar5,8,0);
            }
            return false;
          }
          uVar3 = System_IntPtr__op_Explicit_487833c(uVar4,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar5,0);
          if (uVar6 < uVar3) {
            do {
              bVar2 = *(char *)(lVar9 + lVar5) == *(char *)(lVar7 + lVar5);
              if (!bVar2) {
                return bVar2;
              }
              lVar5 = System_IntPtr__op_Addition_4878348(lVar5,1,0);
              uVar3 = System_IntPtr__op_Explicit_487833c(uVar4,0);
              uVar6 = System_IntPtr__op_Explicit_487833c(lVar5,0);
            } while (uVar6 < uVar3);
            return bVar2;
          }
        }
        return true;
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

