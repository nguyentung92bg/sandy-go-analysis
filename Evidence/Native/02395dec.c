/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Decode
System_Byte_array* Dino_BusSand_App_Meta_Journey_Base64Url__Decode (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0216dff4) */
/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Decode
   System_Byte_array* Dino_BusSand_App_Meta_Journey_Base64Url__Decode (System_String_o* s, const
   MethodInfo* method); */

long * Dino_BusSand_App_Meta_Journey_Base64Url__Decode_2295dec(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((bRam0000000004f9c201 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    bRam0000000004f9c201 = 1;
  }
  puVar3 = PTR_DAT_04caaad0;
  uVar7 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)puVar3;
    FUN_02193814();
    il2cpp_array_element_size(lVar8);
    if ((*(ushort *)(lVar8 + 0x135) >> 5 & 1) == 0) {
      plVar6 = (long *)FUN_021a5ef0(0x20);
      *plVar6 = lVar8;
      plVar6[1] = 0;
      FUN_02220bc0(1,PTR_DAT_04d16040);
      plVar6[2] = 0;
      func_0x049b52e0(plVar6 + 2,0,0x10);
    }
    else if ((*(int *)(*(long *)(lVar8 + 0x40) + 0x28) < 0) &&
            ((*(ulong *)(*(long *)(lVar8 + 0x40) + 8) & 3) == 1)) {
      plVar6 = (long *)FUN_021ac1cc(0x20,lVar8);
    }
    else {
      if (*(long *)(lVar8 + 8) == 0) {
        plVar6 = (long *)FUN_021a5cdc(0x20);
        *plVar6 = lVar8;
      }
      else {
        plVar6 = (long *)FUN_021a0d6c(0x20,lVar8);
      }
      FUN_02220bc0(1,PTR_DAT_04d16040);
    }
    plVar6[3] = 0;
    if (DAT_04faeb60 < '\0') {
      FUN_0217d5b8(plVar6,lVar8);
    }
    return plVar6;
  }
  if (param_1 != 0) {
    uVar15 = *(uint *)(param_1 + 0x10);
    iVar1 = *(uint *)(param_1 + 0x10) * 3;
    do {
      iVar2 = iVar1;
      uVar11 = uVar15;
      if ((int)uVar11 < 1) break;
      sVar4 = System_String__get_Chars_46ccb24(param_1,uVar11 - 1,0);
      uVar15 = uVar11 - 1;
      iVar1 = iVar2 + -3;
    } while (sVar4 == 0x3d);
    if ((uVar11 & 0x80000003) == 1) {
      thunk_FUN_021985a8(PTR_DAT_04cb3f78);
      uVar9 = thunk_FUN_0216e89c();
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cb54e0);
      System_FormatException___ctor_4818b54(uVar9,uVar10,0);
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cb54e8);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,uVar10);
    }
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar3,iVar1 >> 2);
    if (0 < (int)uVar11) {
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar12 = 0;
      do {
        System_String__get_Chars_46ccb24(param_1,uVar12,0);
        uVar5 = Dino_BusSand_App_Meta_Journey_Base64Url__Value_2295fac();
        uVar13 = uVar5 | uVar13 << 6;
        uVar5 = uVar14 + 6;
        if (7 < (int)(uVar14 + 6)) {
          if (plVar6 == (long *)0x0) goto LAB_02395f5c;
          if (*(uint *)(plVar6 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar5 = uVar14 - 2;
          lVar8 = (long)(int)uVar15;
          uVar15 = uVar15 + 1;
          iVar1 = (int)uVar13 >> (uVar5 & 0x1f);
          uVar13 = uVar13 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
          *(char *)((long)plVar6 + lVar8 + 0x20) = (char)iVar1;
        }
        uVar14 = uVar5;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    return plVar6;
  }
LAB_02395f5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

