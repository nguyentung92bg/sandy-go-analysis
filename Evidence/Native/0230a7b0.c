/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Join
System_String_o* Dino_BusSand_App_Meta_EconomySettings__Join (System_Collections_Generic_List_object__o* l, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d4194) */
/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Join
   System_String_o* Dino_BusSand_App_Meta_EconomySettings__Join
   (System_Collections_Generic_List_object__o* l, const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Join_220a7b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long lStack_80;
  undefined *puVar12;
  
  if ((bRam0000000004f9bce5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bce5 = 1;
  }
  if (param_1 == 0) {
LAB_0230a8d0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,*(undefined4 *)(param_1 + 0x18));
  puVar6 = PTR_DAT_04cb15c0;
  puVar12 = PTR_DAT_04ca9c30;
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar18 = 0;
    puVar20 = (undefined8 *)(lVar7 + 0x20);
    do {
      uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                        (param_1,uVar18 & 0xffffffff,*(undefined8 *)puVar6);
      uVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar12,0);
      if (lVar7 == 0) goto LAB_0230a8d0;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *puVar20 = uVar8;
      thunk_FUN_02134474(puVar20,uVar8);
      uVar18 = uVar18 + 1;
      puVar20 = puVar20 + 1;
    } while ((long)uVar18 < (long)*(int *)(param_1 + 0x18));
  }
  lVar9 = *(long *)PTR_DAT_04cae4f8;
  if (lVar7 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,0);
    uVar8 = thunk_FUN_0216e89c();
    uVar13 = thunk_FUN_021985a8(PTR_DAT_04caa800);
    System_ArgumentNullException___ctor_47afb54(uVar8,uVar13,0);
    uVar13 = thunk_FUN_021985a8(PTR_DAT_04d0b450);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,uVar13);
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  if ((lVar9 == 0) && (lVar9 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8), lVar9 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar3 = *(int *)(lVar9 + 0x10);
  uVar18 = (ulong)(uVar2 - 1) * (long)iVar3;
  lStack_80 = 0;
  lVar21 = lVar7;
  while( true ) {
    if ((bRam0000000004facb09 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa038);
      bRam0000000004facb09 = 1;
    }
    if (lVar21 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
      uVar8 = thunk_FUN_0216e89c();
      uVar13 = thunk_FUN_021985a8(PTR_DAT_04caa800);
      System_ArgumentNullException___ctor_47afb54(uVar8,uVar13,0);
      goto LAB_047d41d8;
    }
    if ((int)uVar2 < 0) break;
    uVar4 = *(uint *)(lVar21 + 0x18);
    if ((int)(uVar4 - uVar2) < 0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
      uVar8 = thunk_FUN_0216e89c();
      uVar13 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
      puVar12 = PTR_DAT_04d0b460;
      goto LAB_047d41c0;
    }
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        if (uVar4 == 0) {
LAB_047d40d8:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (*(long *)(lVar7 + 0x20) != 0) {
          return *(long *)(lVar7 + 0x20);
        }
      }
      return **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
    if (0x7fffffff < (long)uVar18) {
LAB_047d40dc:
      thunk_FUN_021985a8(PTR_DAT_04cc27f0);
      uVar8 = thunk_FUN_0216e89c();
      System_OutOfMemoryException___ctor_4851a74(uVar8,0);
      goto LAB_047d41d8;
    }
    if ((int)uVar2 < 1) {
      lVar10 = thunk_FUN_0216c29c(uVar18 & 0xffffffff);
      iVar17 = 0;
      iVar22 = (int)uVar18;
    }
    else {
      plVar15 = (long *)(lVar21 + 0x20);
      uVar16 = 0;
      uVar23 = uVar18 & 0xffffffff;
      lVar10 = (long)(int)uVar2;
      do {
        if (uVar4 <= uVar16) goto LAB_047d40d8;
        if ((*plVar15 != 0) &&
           (uVar1 = *(int *)(*plVar15 + 0x10) + (int)uVar23, uVar23 = (ulong)uVar1, (int)uVar1 < 0))
        goto LAB_047d40dc;
        iVar22 = (int)uVar23;
        lVar10 = lVar10 + -1;
        plVar15 = plVar15 + 1;
        uVar16 = uVar16 + 1;
      } while (lVar10 != 0);
      lVar10 = thunk_FUN_0216c29c(uVar23);
      iVar17 = 0;
      if (0 < (int)uVar2) {
        lVar19 = lStack_80;
        do {
          if (*(uint *)(lVar21 + 0x18) <= (uint)lVar19) goto LAB_047d40d8;
          lVar14 = *(long *)(lVar21 + 0x20 + lVar19 * 8);
          if (lVar14 != 0) {
            iVar5 = *(int *)(lVar14 + 0x10);
            if (iVar22 - iVar17 < iVar5) {
              iVar17 = -1;
              break;
            }
            System_String__FillStringChecked_46d2a48(lVar10,iVar17);
            iVar17 = iVar5 + iVar17;
          }
          if (lVar19 < (int)(uVar2 - 1)) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (iVar3 == 1) {
              *(undefined2 *)(lVar10 + 0x14 + (long)iVar17 * 2) = *(undefined2 *)(lVar9 + 0x14);
            }
            else {
              System_Buffer__Memmove_485a338
                        (lVar10 + 0x14 + (long)iVar17 * 2,(undefined2 *)(lVar9 + 0x14),iVar3 << 1,0)
              ;
            }
            iVar17 = iVar17 + iVar3;
          }
          lVar19 = lVar19 + 1;
        } while ((int)uVar2 != lVar19);
      }
    }
    if (iVar17 == iVar22) {
      return lVar10;
    }
    lVar10 = System_Array__Clone_485257c(lVar21,0);
    lVar21 = 0;
    if (lVar10 != 0) {
      uVar8 = *(undefined8 *)PTR_DAT_04caa038;
      lVar21 = thunk_FUN_0216e7a0(lVar10,uVar8);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar10,uVar8);
      }
    }
  }
  thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
  uVar8 = thunk_FUN_0216e89c();
  uVar13 = thunk_FUN_021985a8(PTR_DAT_04cb1d30);
  puVar12 = PTR_DAT_04d0b330;
LAB_047d41c0:
  uVar11 = thunk_FUN_021985a8(puVar12);
  System_ArgumentOutOfRangeException___ctor_47b3440(uVar8,uVar13,uVar11,0);
LAB_047d41d8:
  uVar13 = thunk_FUN_021985a8(PTR_DAT_04d0b468);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar8,uVar13);
}

