/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SanitizeName
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__SanitizeName (System_String_o* raw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d6f18) */
/* WARNING: Removing unreachable block (ram,0x047d6fd4) */
/* WARNING: Removing unreachable block (ram,0x047d6f24) */
/* WARNING: Removing unreachable block (ram,0x047d6f30) */
/* WARNING: Removing unreachable block (ram,0x047d6f38) */
/* WARNING: Removing unreachable block (ram,0x047d6f40) */
/* WARNING: Removing unreachable block (ram,0x047d6f50) */
/* WARNING: Removing unreachable block (ram,0x047d6f54) */
/* WARNING: Removing unreachable block (ram,0x047d6f64) */
/* WARNING: Removing unreachable block (ram,0x047d6f74) */
/* WARNING: Removing unreachable block (ram,0x047d6f78) */
/* WARNING: Removing unreachable block (ram,0x047d6fdc) */
/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SanitizeName
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__SanitizeName (System_String_o* raw, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__SanitizeName_226e578(long param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  if ((bRam0000000004f9c0d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b78);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0d5 = 1;
  }
  uVar7 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar7 & 1) != 0) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  if (param_1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
    System_Text_StringBuilder___ctor_46db688(plVar8,uVar6,0);
    puVar3 = PTR_DAT_04ca9ac8;
    if (0 < *(int *)(param_1 + 0x10)) {
      bVar1 = false;
      iVar12 = 0;
      do {
        uVar4 = System_String__get_Chars_46ccb24(param_1,iVar12,0);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(puVar3 + 0x88));
        }
        uVar7 = System_Char__IsWhiteSpace_47b9ba0(uVar4,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = System_Char__IsControl_47bcdb8(uVar4,0);
          if (((uVar7 & 1) == 0) && ((uVar4 & 0xffff | 2) != 0x3e)) {
            if (bVar1) {
              if (plVar8 == (long *)0x0) goto LAB_0236e790;
              System_Text_StringBuilder__Append_46dd710(plVar8,0x20,0);
            }
            else if (plVar8 == (long *)0x0) goto LAB_0236e790;
            System_Text_StringBuilder__Append_46dd710(plVar8,uVar4,0);
            bVar1 = false;
          }
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_0236e790;
          iVar5 = System_Text_StringBuilder__get_Length_46dc130(plVar8,0);
          bVar1 = 0 < iVar5;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x10));
    }
    if ((plVar8 != (long *)0x0) &&
       (lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170)), lVar9 != 0)
       ) {
      if (*(int *)(lVar9 + 0x10) < 0xd) {
        return lVar9;
      }
      uVar6 = System_String__get_Chars_46ccb24(lVar9,0xb,0);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(puVar3 + 0x88));
      }
      uVar7 = System_Char__IsHighSurrogate_47bd4b4(uVar6,0);
      uVar6 = 0xb;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0xc;
      }
      lVar9 = System_String__Substring_46d4848(lVar9,0,uVar6,0);
      puVar3 = PTR_DAT_04ca9ac8;
      if (lVar9 != 0) {
        uVar7 = (ulong)(*(int *)(lVar9 + 0x10) + -1);
        do {
          iVar12 = (int)uVar7;
          if (iVar12 < 0) break;
          if ((long)*(int *)(lVar9 + 0x10) <= (long)(uVar7 & 0xffffffff)) {
            System_ThrowHelper__ThrowIndexOutOfRangeException_484fd6c(0);
          }
          uVar2 = *(undefined2 *)(lVar9 + 0x14 + uVar7 * 2);
          if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = System_Char__IsWhiteSpace_47b9ba0(uVar2,0);
          uVar7 = uVar7 - 1;
        } while ((uVar11 & 1) != 0);
        iVar12 = iVar12 + 1;
        if (iVar12 != *(int *)(lVar9 + 0x10)) {
          if (iVar12 != 0) {
            lVar10 = thunk_FUN_0216c29c(iVar12);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Buffer__Memmove_485a338(lVar10 + 0x14,lVar9 + 0x14,iVar12 * 2,0);
            return lVar10;
          }
          lVar9 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
        }
        return lVar9;
      }
    }
  }
LAB_0236e790:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

