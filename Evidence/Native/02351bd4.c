/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$L
System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__L (System_String_o* key, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$L
   System_String_o* Dino_BusSand_App_Meta_StreakTowerUtil__L (System_String_o* key,
   System_Object_array* args, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  ulong uVar11;
  short *psVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_2a0 [520];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar2 = PTR_DAT_04cab550;
  if ((bRam0000000004f9bfcf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04ca9bc0);
    bRam0000000004f9bfcf = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Lang__Get_215f9c0(param_1,param_2,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = *(long *)PTR_DAT_04ca9bc0;
  lVar9 = *(long *)PTR_DAT_04caa398;
  lVar14 = tpidr_el0;
  lStack_68 = *(long *)(lVar14 + 0x28);
  if ((bRam0000000004facb0a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cd56e0,lVar8,lVar9,0);
    FUN_02132f7c(PTR_DAT_04d0b4b8);
    FUN_02132f7c(PTR_DAT_04d0b4c0);
    FUN_02132f7c(PTR_DAT_04d0b4c8);
    FUN_02132f7c(PTR_DAT_04d0b4d0);
    FUN_02132f7c(PTR_DAT_04d0b4d8);
    bRam0000000004facb0a = 1;
  }
  puVar2 = PTR_DAT_04d0b4d0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar8 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar5 = thunk_FUN_0216e89c();
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b4e0);
    System_ArgumentNullException___ctor_47afb54(uVar5,uVar6,0);
  }
  else {
    if (*(int *)(lVar8 + 0x10) != 0) {
      if (lVar9 == 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
      lStack_98 = lVar14;
      func_0x049b52e0(auStack_2a0,0,0x200);
      System_Collections_Generic_ValueListBuilder_int____ctor_30c70f4
                (&lStack_90,auStack_2a0,0x80,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_04d0b4b8;
      uVar13 = *(uint *)(lVar8 + 0x10);
      iVar1 = *(int *)(lVar4 + 0x10) - uVar13;
      if (-1 < iVar1) {
        iVar16 = 0;
        do {
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            psVar10 = (short *)(lVar4 + 0x14 + (long)iVar16 * 2);
            psVar12 = (short *)(lVar8 + 0x14);
            do {
              if (*psVar10 != *psVar12) {
                iVar16 = iVar16 + 1;
                goto LAB_047d4c38;
              }
              uVar11 = uVar11 - 1;
              psVar10 = psVar10 + 1;
              psVar12 = psVar12 + 1;
            } while (uVar11 != 0);
          }
          lVar14 = *(long *)puVar2;
          uVar3 = (uint)uStack_78;
          lVar15 = (long)(int)(uint)uStack_78;
          if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_0216b470();
          }
          if ((int)(uint)uStack_88 <= (int)uVar3) {
            lVar14 = *(long *)(lVar14 + 0x20);
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_0216b470();
            }
            System_Collections_Generic_ValueListBuilder_int___Grow_30c7334
                      (&lStack_90,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
          }
          if ((uint)uStack_88 <= uVar3) {
            if (*(long *)(lStack_98 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            goto LAB_047d4d7c;
          }
          *(int *)(lStack_90 + lVar15 * 4) = iVar16;
          uVar13 = *(uint *)(lVar8 + 0x10);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar3 + 1);
          iVar16 = uVar13 + iVar16;
LAB_047d4c38:
        } while (iVar16 <= iVar1);
      }
      puVar2 = PTR_DAT_04d0b4c8;
      if ((uint)uStack_78 != 0) {
        auVar17 = System_Collections_Generic_ValueListBuilder_int___AsSpan_30c719c
                            (&lStack_90,*(undefined8 *)PTR_DAT_04d0b4c0);
        lVar4 = System_String__ReplaceHelper_46d4d80(lVar4,uVar13,lVar9,auVar17._0_8_,auVar17._8_8_)
        ;
        FUN_047d8c84(&lStack_90,*(undefined8 *)puVar2);
      }
      if (*(long *)(lStack_98 + 0x28) == lStack_68) {
        return lVar4;
      }
      goto LAB_047d4d7c;
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar5 = thunk_FUN_0216e89c();
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b4e8);
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04d0b4e0);
    System_ArgumentException___ctor_47afbcc(uVar5,uVar6,uVar7,0);
  }
  if (*(long *)(lVar14 + 0x28) == lStack_68) {
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b4f0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar6);
  }
LAB_047d4d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

