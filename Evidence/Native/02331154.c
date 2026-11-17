/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$BuildBots
System_Collections_Generic_List_CupBot__o* Dino_BusSand_App_Meta_WeeklyCupModel__BuildBots (int64_t weekIndex, int32_t playerSeed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$BuildBots
   System_Collections_Generic_List_CupBot__o* Dino_BusSand_App_Meta_WeeklyCupModel__BuildBots
   (int64_t weekIndex, int32_t playerSeed, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupModel__BuildBots_2231154(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar5 = PTR_DAT_04cb3120;
  puVar4 = PTR_DAT_04cb3110;
  if ((bRam0000000004f9be76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3128);
    FUN_02132f7c(PTR_DAT_04cb3130);
    FUN_02132f7c(PTR_DAT_04cb3120);
    FUN_02132f7c(PTR_DAT_04cb3110);
    bRam0000000004f9be76 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a81404(lVar6,0x1d,*(undefined8 *)puVar5);
  uVar16 = 0;
  lVar1 = (param_1 * 0x1eef - (long)param_2) + (long)param_2 * 0x20;
  while( true ) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3128);
    System_Object___ctor_4870e5c(lVar7,0);
    if (uVar16 == 0) {
      if (lVar7 == 0) break;
      iVar9 = 0x82;
      uVar11 = 0x29;
    }
    else if (uVar16 < 5) {
      if (lVar7 == 0) break;
      iVar9 = 0x46;
      uVar11 = 0x33;
    }
    else {
      if (lVar7 == 0) break;
      iVar9 = 8;
      uVar11 = 0x35;
    }
    uVar13 = lVar1 + -0x61c8864680b583eb + uVar16;
    uVar14 = lVar1 + 0x3c6ef372fe94f82a + uVar16;
    uVar15 = lVar1 + -0x255992d382208bc1 + uVar16;
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * -0x40a7b892e31b1a47;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * -0x40a7b892e31b1a47;
    uVar15 = (uVar15 ^ uVar15 >> 0x1e) * -0x40a7b892e31b1a47;
    uVar13 = (uVar13 ^ uVar13 >> 0x1b) * -0x6b2fb644ecceee15;
    uVar14 = (uVar14 ^ uVar14 >> 0x1b) * -0x6b2fb644ecceee15;
    uVar15 = (uVar15 ^ uVar15 >> 0x1b) * -0x6b2fb644ecceee15;
    uVar13 = uVar13 ^ uVar13 >> 0x1f;
    iVar3 = 0;
    if (uVar11 != 0) {
      iVar3 = (int)(uVar13 / uVar11);
    }
    uVar14 = uVar14 ^ uVar14 >> 0x1f;
    uVar15 = uVar15 ^ uVar15 >> 0x1f;
    *(int *)(lVar7 + 0x14) = iVar9 + ((int)uVar13 - iVar3 * (int)uVar11);
    *(int *)(lVar7 + 0x18) = (int)uVar14 + (int)(uVar14 / 0x79) * -0x79 + -0x3c;
    *(int *)(lVar7 + 0x10) = (int)uVar15 + (int)(uVar15 / 1000) * -1000;
    if (lVar6 == 0) break;
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar12 = *(long *)PTR_DAT_04cb3130;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      plVar8 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      *plVar8 = lVar7;
      thunk_FUN_02134474(plVar8,lVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == 0x1d) {
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

