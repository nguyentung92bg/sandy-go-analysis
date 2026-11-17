/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$Config
void Dino_BusSand_App_Meta_StreakRateFeature__Config (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t activityId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234bcbc) */
/* WARNING: Removing unreachable block (ram,0x0234bd9c) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$Config
   void Dino_BusSand_App_Meta_StreakRateFeature__Config (Dino_BusSand_App_Meta_StreakRateFeature_o*
   __this, int32_t activityId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  
  if ((bRam0000000004f9bfa1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3af0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caec70);
                    /* try { // try from 0234b7bc to 0244b83b has its CatchHandler @ 0234bbe0 */
    FUN_02132f7c(PTR_DAT_04cb2ee0);
    FUN_02132f7c(PTR_DAT_04cb3af8);
    FUN_02132f7c(PTR_DAT_04cb3b00);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb3b08);
    FUN_02132f7c(PTR_DAT_04cb3b10);
    FUN_02132f7c(PTR_DAT_04cb29b0);
    FUN_02132f7c(PTR_DAT_04cb3b18);
    FUN_02132f7c(PTR_DAT_04cb21c8);
    FUN_02132f7c(PTR_DAT_04cb2df0);
    FUN_02132f7c(PTR_DAT_04cb3b20);
    FUN_02132f7c(PTR_DAT_04cb3b28);
                    /* try { // try from 0234b850 to 0244b853 has its CatchHandler @ 0234bbd4 */
    FUN_02132f7c(PTR_DAT_04cb3b30);
    FUN_02132f7c(PTR_DAT_04cb3b38);
                    /* try { // try from 0234b864 to 0244b86b has its CatchHandler @ 0234bbc0 */
    FUN_02132f7c(PTR_DAT_04cb3b40);
    bRam0000000004f9bfa1 = 1;
  }
  puVar5 = PTR_DAT_04cb3b38;
  puVar4 = PTR_DAT_04cb3b30;
  puVar3 = PTR_DAT_04cb2df0;
  puVar2 = PTR_DAT_04cac018;
                    /* try { // try from 0234b87c to 0244b89f has its CatchHandler @ 0234bbc4 */
  if (*(int *)(param_1 + 0x18) == param_2) {
    return;
  }
  iVar10 = *(int *)(*(long *)PTR_DAT_04cac018 + 0xe4);
  *(int *)(param_1 + 0x18) = param_2;
  if (iVar10 == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0234b8c8 to 0244b8d3 has its CatchHandler @ 0234bba0 */
  lVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,param_2,0);
  Dino_BusSand_App_MiniJson__Get_21565a8(lVar11,*(undefined8 *)puVar4,0);
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24();
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  thunk_FUN_02134474();
  Dino_BusSand_App_MiniJson__Get_21565a8(lVar11,*(undefined8 *)puVar3,0);
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24();
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  thunk_FUN_02134474();
                    /* try { // try from 0234b914 to 0244b91f has its CatchHandler @ 0234bba8 */
  if (lVar11 == 0) {
    uVar9 = 1;
  }
  else {
    uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar11,*(undefined8 *)PTR_DAT_04cb3b18,0);
                    /* try { // try from 0234b930 to 0244b933 has its CatchHandler @ 0234bbe0 */
                    /* try { // try from 0234b934 to 0244b9d3 has its CatchHandler @ 0234b284 */
    uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,1,0);
  }
  lVar11 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  if (lVar11 != 0) {
    iVar10 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar10) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar11 + 0x10),0,iVar10,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar13 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cb3b28,0);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cad288) {
                    /* try { // try from 0234b9f0 to 0244b9fb has its CatchHandler @ 0234bbb8 */
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_0234b9f4;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
                    /* try { // try from 0234b9d4 to 0244b9df has its CatchHandler @ 0234bbbc */
        } while (uVar18 != 0);
      }
      puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04cad288,0);
LAB_0234b9f4:
                    /* try { // try from 0234b9fc to 0244ba43 has its CatchHandler @ 0234b284 */
      plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar8 = PTR_DAT_04cb3b40;
      puVar7 = PTR_DAT_04cb3b20;
      puVar6 = PTR_DAT_04cb2ee0;
      puVar5 = PTR_DAT_04cb29b0;
      puVar4 = PTR_DAT_04cb21c8;
      puVar3 = PTR_DAT_04cad290;
      puVar2 = PTR_DAT_04ca9c08;
joined_r0x0234ba0c:
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* try { // try from 0234ba64 to 0244ba67 has its CatchHandler @ 0234bb94 */
                    /* try { // try from 0234ba6c to 0244ba77 has its CatchHandler @ 0234bb98 */
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                    /* try { // try from 0234ba8c to 0244bb37 has its CatchHandler @ 0234bbac */
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0234ba98;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar2,0);
LAB_0234ba98:
        uVar18 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar18 & 1) == 0) {
                    /* try { // try from 0234bc4c to 0244bc5b has its CatchHandler @ 0234bc5c */
          if (plVar13 == (long *)0x0) goto LAB_0234bcb0;
          lVar11 = *plVar13;
                    /* catch() { ... } // from try @ 0234bc00 with catch @ 0234bc5c
                       catch() { ... } // from try @ 0234bc4c with catch @ 0234bc5c */
          uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 0234bc60 to 0244bc63 has its CatchHandler @ 0234bc6c */
                    /* try { // try from 0234bc64 to 0244bc6f has its CatchHandler @ 0234b284 */
          if (uVar18 == 0) goto LAB_0234bc88;
                    /* catch() { ... } // from try @ 0234b660 with catch @ 0234bc6c
                       catch() { ... } // from try @ 0234b694 with catch @ 0234bc6c
                       catch() { ... } // from try @ 0234bc60 with catch @ 0234bc6c */
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0234bc70;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0234bafc;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar3,0);
LAB_0234bafc:
        uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,*(undefined8 *)puVar5,0);
        iVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      } while (iVar10 != *(int *)(param_1 + 0x1c));
      lVar21 = *(long *)(param_1 + 0x30);
      lVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,3);
                    /* try { // try from 0234bb54 to 0244bb5f has its CatchHandler @ 0234bb90 */
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,*(undefined8 *)puVar8,0);
      uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 0234bb70 to 0244bb7b has its CatchHandler @ 0234bb8c */
      if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar15 = *(undefined8 *)puVar7;
      *(undefined4 *)(lVar11 + 0x20) = uVar9;
                    /* try { // try from 0234bb84 to 0244bb87 has its CatchHandler @ 0234bba4 */
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,uVar15,0);
                    /* try { // try from 0234bb88 to 0244bb8b has its CatchHandler @ 0234bb9c */
                    /* catch() { ... } // from try @ 0234bb70 with catch @ 0234bb8c
                       try { // try from 0234bb8c to 0244bbff has its CatchHandler @ 0234b284 */
                    /* catch() { ... } // from try @ 0234bb54 with catch @ 0234bb90 */
      uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
                    /* catch() { ... } // from try @ 0234ba64 with catch @ 0234bb94 */
                    /* catch() { ... } // from try @ 0234ba6c with catch @ 0234bb98 */
                    /* catch() { ... } // from try @ 0234bb88 with catch @ 0234bb9c */
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* catch() { ... } // from try @ 0234b8c8 with catch @ 0234bba0 */
      uVar15 = *(undefined8 *)puVar4;
                    /* catch() { ... } // from try @ 0234bb84 with catch @ 0234bba4 */
      *(undefined4 *)(lVar11 + 0x24) = uVar9;
                    /* catch() { ... } // from try @ 0234b914 with catch @ 0234bba8
                       catch() { ... } // from try @ 0234ba44 with catch @ 0234bba8 */
                    /* catch() { ... } // from try @ 0234ba8c with catch @ 0234bbac */
      uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,uVar15,0);
                    /* catch() { ... } // from try @ 0234b9f0 with catch @ 0234bbb8 */
                    /* catch() { ... } // from try @ 0234b9d4 with catch @ 0234bbbc */
      uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
                    /* catch() { ... } // from try @ 0234b864 with catch @ 0234bbc0 */
                    /* catch() { ... } // from try @ 0234b87c with catch @ 0234bbc4 */
                    /* catch() { ... } // from try @ 0234b6c0 with catch @ 0234bbc8 */
      if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* catch() { ... } // from try @ 0234b6c4 with catch @ 0234bbcc */
      *(undefined4 *)(lVar11 + 0x28) = uVar9;
                    /* catch() { ... } // from try @ 0234b6e4 with catch @ 0234bbd0 */
      if (lVar21 != 0) {
                    /* catch() { ... } // from try @ 0234b850 with catch @ 0234bbd4 */
        lVar17 = *(long *)(lVar21 + 0x10);
        lVar19 = *(long *)puVar6;
                    /* catch() { ... } // from try @ 0234b7bc with catch @ 0234bbe0
                       catch() { ... } // from try @ 0234b930 with catch @ 0234bbe0 */
                    /* catch() { ... } // from try @ 0234b704 with catch @ 0234bbe4 */
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar1 = *(uint *)(lVar21 + 0x18);
          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    /* try { // try from 0234bc00 to 0244bc17 has its CatchHandler @ 0234bc5c */
            *(uint *)(lVar21 + 0x18) = uVar1 + 1;
            plVar16 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
            *plVar16 = lVar11;
            thunk_FUN_02134474(plVar16,lVar11);
          }
          else {
                    /* try { // try from 0234bc18 to 0244bc4b has its CatchHandler @ 0234b284 */
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar21,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x0234ba0c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  goto LAB_0234bd98;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_0234bc70:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0234bca4;
    }
  }
LAB_0234bc88:
  puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04ca9b30,0);
LAB_0234bca4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0234bcb0:
  puVar2 = PTR_DAT_04cb3b10;
  lVar21 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)PTR_DAT_04cb3b10;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  puVar14 = *(undefined8 **)(lVar11 + 0xb8);
  lVar17 = puVar14[1];
  if (lVar17 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar12 = *puVar14;
    lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3af0);
    System_Comparison_object____ctor_3326afc(lVar17,uVar12,*(undefined8 *)PTR_DAT_04cb3b08,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar13 = lVar17;
    thunk_FUN_02134474(plVar13,lVar17);
  }
  if (lVar21 != 0) {
    System_Collections_Generic_List_object___Sort_3a83690
              (lVar21,lVar17,*(undefined8 *)PTR_DAT_04cb3b00);
    return;
  }
LAB_0234bd98:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

