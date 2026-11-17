/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Encode
System_String_o* Dino_BusSand_App_Meta_Journey_Base64Url__Encode (System_Byte_array* b, int32_t off, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d160c) */
/* IL2CPP: Dino.BusSand.App.Meta.Journey.Base64Url$$Encode
   System_String_o* Dino_BusSand_App_Meta_Journey_Base64Url__Encode (System_Byte_array* b, int32_t
   off, int32_t count, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Journey_Base64Url__Encode_2295a1c(long param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar11;
  
  if ((bRam0000000004f9c200 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b80);
    FUN_02132f7c(PTR_DAT_04cb54d8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c200 = 1;
  }
  if ((param_1 == 0) || (param_3 < 1)) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9b80,(int)(param_3 << 2 | 2U) / 3);
  puVar11 = PTR_DAT_04cb54d8;
  param_3 = param_3 + param_2;
  if ((int)(param_2 + 2) < param_3) {
    uVar13 = 0;
    do {
      uVar15 = uVar13;
      uVar13 = *(uint *)(param_1 + 0x18);
      if (((uVar13 <= param_2) || (uVar13 <= param_2 + 1)) || (uVar13 <= param_2 + 2))
      goto LAB_02395db0;
      if (*(long *)puVar11 == 0) goto LAB_02395db4;
      bVar3 = *(byte *)(param_1 + (int)param_2 + 0x20);
      bVar4 = *(byte *)(param_1 + 0x20 + (long)(int)(param_2 + 1));
      bVar5 = *(byte *)(param_1 + 0x20 + (long)(int)(param_2 + 2));
      uVar6 = System_String__get_Chars_46ccb24(*(long *)puVar11,bVar3 >> 2,0);
      if (lVar7 == 0) goto LAB_02395db4;
      if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar7 + (long)(int)uVar15 * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24
                        (lVar12,((uint)bVar3 << 0x10 | (uint)bVar4 << 8) >> 0xc & 0x3f,0);
      if (*(uint *)(lVar7 + 0x18) <= uVar15 + 1) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar7 + (long)(int)(uVar15 + 1) * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24(lVar12,CONCAT11(bVar4,bVar5) >> 6 & 0x3f,0);
      if (*(uint *)(lVar7 + 0x18) <= uVar15 + 2) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar7 + (long)(int)(uVar15 + 2) * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24(lVar12,bVar5 & 0x3f,0);
      if (*(uint *)(lVar7 + 0x18) <= uVar15 + 3) goto LAB_02395db0;
      iVar1 = param_2 + 5;
      param_2 = param_2 + 3;
      *(undefined2 *)(lVar7 + (long)(int)(uVar15 + 3) * 2 + 0x20) = uVar6;
      uVar13 = uVar15 + 4;
    } while (iVar1 < param_3);
    uVar15 = uVar15 + 4;
  }
  else {
    uVar15 = 0;
  }
  puVar11 = PTR_DAT_04cb54d8;
  if (param_3 - param_2 == 2) {
    if ((*(uint *)(param_1 + 0x18) <= param_2) || (*(uint *)(param_1 + 0x18) <= param_2 + 1))
    goto LAB_02395db0;
    if (*(long *)PTR_DAT_04cb54d8 == 0) {
LAB_02395db4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar3 = *(byte *)(param_1 + 0x20 + (long)(int)param_2);
    bVar4 = *(byte *)(param_1 + 0x20 + (long)(int)(param_2 + 1));
    uVar6 = System_String__get_Chars_46ccb24(*(long *)PTR_DAT_04cb54d8,bVar3 >> 2,0);
    if (lVar7 == 0) goto LAB_02395db4;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) {
LAB_02395db0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar12 = *(long *)puVar11;
    *(undefined2 *)(lVar7 + (long)(int)uVar15 * 2 + 0x20) = uVar6;
    if (lVar12 == 0) goto LAB_02395db4;
    uVar13 = (uint)bVar4;
    uVar6 = System_String__get_Chars_46ccb24
                      (lVar12,((uint)bVar3 << 0x10 | uVar13 << 8) >> 0xc & 0x3f,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar15 + 1) goto LAB_02395db0;
    lVar12 = *(long *)puVar11;
    *(undefined2 *)(lVar7 + (long)(int)(uVar15 + 1) * 2 + 0x20) = uVar6;
    if (lVar12 == 0) goto LAB_02395db4;
    uVar14 = uVar15 + 2;
    uVar6 = System_String__get_Chars_46ccb24(lVar12,(uVar13 & 0xf) << 2,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_02395db0;
    uVar15 = uVar15 + 3;
  }
  else {
    if (param_3 - param_2 != 1) goto LAB_02395d84;
    if (*(uint *)(param_1 + 0x18) <= param_2) goto LAB_02395db0;
    if (*(long *)PTR_DAT_04cb54d8 == 0) goto LAB_02395db4;
    bVar3 = *(byte *)(param_1 + (int)param_2 + 0x20);
    uVar6 = System_String__get_Chars_46ccb24(*(long *)PTR_DAT_04cb54d8,bVar3 >> 2,0);
    if (lVar7 == 0) goto LAB_02395db4;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_02395db0;
    lVar12 = *(long *)puVar11;
    *(undefined2 *)(lVar7 + (long)(int)uVar15 * 2 + 0x20) = uVar6;
    if (lVar12 == 0) goto LAB_02395db4;
    uVar14 = uVar15 + 1;
    uVar6 = System_String__get_Chars_46ccb24(lVar12,(bVar3 & 3) << 4,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_02395db0;
    uVar15 = uVar15 + 2;
  }
  *(undefined2 *)(lVar7 + (long)(int)uVar14 * 2 + 0x20) = uVar6;
LAB_02395d84:
  if (lVar7 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04caa800);
    System_ArgumentNullException___ctor_47afb54(uVar8,uVar9,0);
  }
  else {
    if ((int)uVar15 < 0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar8 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
      puVar11 = PTR_DAT_04d0b310;
    }
    else {
      if (-1 < (int)(*(int *)(lVar7 + 0x18) - uVar15)) {
        if (uVar15 == 0) {
          lVar12 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
        }
        else {
          lVar12 = thunk_FUN_0216c29c(uVar15);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar2 = 0;
          if (*(int *)(lVar7 + 0x18) != 0) {
            lVar2 = lVar7 + 0x20;
          }
          System_Buffer__Memmove_485a338(lVar12 + 0x14,lVar2,uVar15 << 1,0);
        }
        return lVar12;
      }
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar8 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
      puVar11 = PTR_DAT_04cc3e30;
    }
    uVar10 = thunk_FUN_021985a8(puVar11);
    System_ArgumentOutOfRangeException___ctor_47b3440(uVar8,uVar9,uVar10,0);
  }
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04d0b380);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar8,uVar9);
}

