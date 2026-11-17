/* IL2CPP: Dino.BusSand.View.PackPalette$$Nearest
Dino_BusSand_View_ArtPackData_Swatch_o* Dino_BusSand_View_PackPalette__Nearest (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Nearest
   Dino_BusSand_View_ArtPackData_Swatch_o* Dino_BusSand_View_PackPalette__Nearest (uint8_t id, const
   MethodInfo* method); */

long Dino_BusSand_View_PackPalette__Nearest_238fa7c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc028);
    FUN_02132f7c(PTR_DAT_04cbbfd0);
    FUN_02132f7c(PTR_DAT_04cbbfd8);
    FUN_02132f7c(PTR_DAT_04cbbfe0);
    FUN_02132f7c(PTR_DAT_04cbbff0);
    FUN_02132f7c(PTR_DAT_04cbbf90);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c8bf = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_View_PackPalette__Swatches_238e800();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
    lVar10 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cbbff0;
    uVar8 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_1,0);
    fVar17 = (float)(uVar8 >> 8 & 0xff) / 255.0;
    fVar18 = (float)(uVar8 >> 0x10 & 0xff) / 255.0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cbc028;
    puVar3 = PTR_DAT_04cbbfd8;
    puVar2 = PTR_DAT_04cbbfd0;
    uVar14 = Dino_BusSand_View_PackPalette__Lab_238ea5c
                       ((float)(uVar8 & 0xff) / 255.0,fVar17,fVar18,(float)(uVar8 >> 0x18) / 255.0);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_b8,lVar10,*(undefined8 *)puVar4);
    lStack_90 = lStack_a8;
    uStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    uStack_b8 = 0;
    dVar23 = 1.7976931348623157e+308;
    lVar13 = 0;
    lVar10 = 0;
    dVar16 = 1.7976931348623157e+308;
    puStack_b0 = &uStack_a0;
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_a0,*(undefined8 *)puVar3), lVar6 = lStack_90,
          (uVar11 & 1) != 0) {
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar19 = *(undefined4 *)(lStack_90 + 0x18);
      uVar20 = *(undefined4 *)(lStack_90 + 0x1c);
      uVar21 = *(undefined4 *)(lStack_90 + 0x20);
      uVar22 = *(undefined4 *)(lStack_90 + 0x24);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = Dino_BusSand_View_PackPalette__Lab_238ea5c(uVar19,uVar20,uVar21,uVar22);
      dVar15 = (double)Dino_BusSand_View_PackPalette__Distance_238ed10
                                 (uVar14,fVar17,fVar18,uVar19,uVar20,uVar21);
      lVar12 = lVar6;
      dVar7 = dVar15;
      if (dVar23 <= dVar15) {
        lVar12 = lVar10;
        dVar7 = dVar23;
      }
      dVar23 = dVar7;
      lVar10 = lVar12;
      if (dVar15 < dVar16) {
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar1;
        }
        iVar9 = System_Array__IndexOf_object__2906334
                          (*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),lVar6,
                           *(undefined8 *)puVar5);
        if (iVar9 < 0) {
          lVar13 = lVar6;
          dVar16 = dVar15;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)puVar2);
    if (lVar13 != 0) {
      lVar10 = lVar13;
    }
  }
  return lVar10;
}

