/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Finish
System_String_o* Dino_BusSand_App_Meta_Journey_LevelJourney__Finish (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t result, int32_t failReason, int32_t yardLeft, int32_t grainsLeft, int32_t roadCapacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d160c) */
/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Finish
   System_String_o* Dino_BusSand_App_Meta_Journey_LevelJourney__Finish
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t
   result, int32_t failReason, int32_t yardLeft, int32_t grainsLeft, int32_t roadCapacity, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_Journey_LevelJourney__Finish_229a1c8(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar11;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return 0;
  }
  Dino_BusSand_App_Meta_Journey_LevelJourney__WriteEnd_229a218();
  lVar13 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(lVar13 + 0x10);
  iVar2 = *(int *)(lVar13 + 0x18);
  uVar14 = 0;
  if ((bRam0000000004f9c200 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b80);
    FUN_02132f7c(PTR_DAT_04cb54d8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c200 = 1;
  }
  if ((lVar7 == 0) || (iVar2 < 1)) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9b80,(int)(iVar2 << 2 | 2U) / 3);
  puVar11 = PTR_DAT_04cb54d8;
  if (iVar2 < 3) {
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    do {
      uVar16 = uVar15;
      uVar15 = *(uint *)(lVar7 + 0x18);
      if (((uVar15 <= uVar14) || (uVar15 <= uVar14 + 1)) || (uVar15 <= uVar14 + 2))
      goto LAB_02395db0;
      if (*(long *)puVar11 == 0) goto LAB_02395db4;
      bVar3 = *(byte *)(lVar7 + (int)uVar14 + 0x20);
      bVar4 = *(byte *)(lVar7 + 0x20 + (long)(int)(uVar14 + 1));
      bVar5 = *(byte *)(lVar7 + 0x20 + (long)(int)(uVar14 + 2));
      uVar6 = System_String__get_Chars_46ccb24(*(long *)puVar11,bVar3 >> 2,0);
      if (lVar13 == 0) goto LAB_02395db4;
      if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar13 + (long)(int)uVar16 * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24
                        (lVar12,((uint)bVar3 << 0x10 | (uint)bVar4 << 8) >> 0xc & 0x3f,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar16 + 1) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar13 + (long)(int)(uVar16 + 1) * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24(lVar12,CONCAT11(bVar4,bVar5) >> 6 & 0x3f,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar16 + 2) goto LAB_02395db0;
      lVar12 = *(long *)puVar11;
      *(undefined2 *)(lVar13 + (long)(int)(uVar16 + 2) * 2 + 0x20) = uVar6;
      if (lVar12 == 0) goto LAB_02395db4;
      uVar6 = System_String__get_Chars_46ccb24(lVar12,bVar5 & 0x3f,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar16 + 3) goto LAB_02395db0;
      iVar1 = uVar14 + 5;
      uVar14 = uVar14 + 3;
      *(undefined2 *)(lVar13 + (long)(int)(uVar16 + 3) * 2 + 0x20) = uVar6;
      uVar15 = uVar16 + 4;
    } while (iVar1 < iVar2);
    uVar16 = uVar16 + 4;
  }
  puVar11 = PTR_DAT_04cb54d8;
  if (iVar2 - uVar14 == 2) {
    if ((*(uint *)(lVar7 + 0x18) <= uVar14) || (*(uint *)(lVar7 + 0x18) <= uVar14 + 1))
    goto LAB_02395db0;
    if (*(long *)PTR_DAT_04cb54d8 == 0) {
LAB_02395db4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar3 = *(byte *)(lVar7 + 0x20 + (long)(int)uVar14);
    bVar4 = *(byte *)(lVar7 + 0x20 + (long)(int)(uVar14 + 1));
    uVar6 = System_String__get_Chars_46ccb24(*(long *)PTR_DAT_04cb54d8,bVar3 >> 2,0);
    if (lVar13 == 0) goto LAB_02395db4;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) {
LAB_02395db0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar7 = *(long *)puVar11;
    *(undefined2 *)(lVar13 + (long)(int)uVar16 * 2 + 0x20) = uVar6;
    if (lVar7 == 0) goto LAB_02395db4;
    uVar14 = (uint)bVar4;
    uVar6 = System_String__get_Chars_46ccb24
                      (lVar7,((uint)bVar3 << 0x10 | uVar14 << 8) >> 0xc & 0x3f,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar16 + 1) goto LAB_02395db0;
    lVar7 = *(long *)puVar11;
    *(undefined2 *)(lVar13 + (long)(int)(uVar16 + 1) * 2 + 0x20) = uVar6;
    if (lVar7 == 0) goto LAB_02395db4;
    uVar15 = uVar16 + 2;
    uVar6 = System_String__get_Chars_46ccb24(lVar7,(uVar14 & 0xf) << 2,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_02395db0;
    uVar16 = uVar16 + 3;
  }
  else {
    if (iVar2 - uVar14 != 1) goto LAB_02395d84;
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_02395db0;
    if (*(long *)PTR_DAT_04cb54d8 == 0) goto LAB_02395db4;
    bVar3 = *(byte *)(lVar7 + (int)uVar14 + 0x20);
    uVar6 = System_String__get_Chars_46ccb24(*(long *)PTR_DAT_04cb54d8,bVar3 >> 2,0);
    if (lVar13 == 0) goto LAB_02395db4;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02395db0;
    lVar7 = *(long *)puVar11;
    *(undefined2 *)(lVar13 + (long)(int)uVar16 * 2 + 0x20) = uVar6;
    if (lVar7 == 0) goto LAB_02395db4;
    uVar15 = uVar16 + 1;
    uVar6 = System_String__get_Chars_46ccb24(lVar7,(bVar3 & 3) << 4,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_02395db0;
    uVar16 = uVar16 + 2;
  }
  *(undefined2 *)(lVar13 + (long)(int)uVar15 * 2 + 0x20) = uVar6;
LAB_02395d84:
  if (lVar13 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04caa800);
    System_ArgumentNullException___ctor_47afb54(uVar8,uVar9,0);
  }
  else {
    if ((int)uVar16 < 0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar8 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
      puVar11 = PTR_DAT_04d0b310;
    }
    else {
      if (-1 < (int)(*(int *)(lVar13 + 0x18) - uVar16)) {
        if (uVar16 == 0) {
          lVar7 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
        }
        else {
          lVar7 = thunk_FUN_0216c29c(uVar16);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = 0;
          if (*(int *)(lVar13 + 0x18) != 0) {
            lVar12 = lVar13 + 0x20;
          }
          System_Buffer__Memmove_485a338(lVar7 + 0x14,lVar12,uVar16 << 1,0);
        }
        return lVar7;
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

