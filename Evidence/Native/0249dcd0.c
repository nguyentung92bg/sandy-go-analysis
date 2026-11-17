/* IL2CPP: Dino.BusSand.View.GameView$$PlanEscapeRoutes
void Dino_BusSand_View_GameView__PlanEscapeRoutes (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$PlanEscapeRoutes
   void Dino_BusSand_View_GameView__PlanEscapeRoutes (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__PlanEscapeRoutes_239dcd0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9c90f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb010);
    FUN_02132f7c(PTR_DAT_04cbc4a8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cac568);
    FUN_02132f7c(PTR_DAT_04cbc4b0);
    bRam0000000004f9c90f = 1;
  }
  puVar8 = PTR_DAT_04cbc4a8;
  puVar7 = PTR_DAT_04cbb010;
  puVar6 = PTR_DAT_04cb2870;
  puVar5 = PTR_DAT_04cac568;
  puVar4 = PTR_DAT_04cab9f8;
  puVar3 = PTR_DAT_04cab9e8;
  puVar2 = PTR_DAT_04cab9e0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_98 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar9 != 0)) {
    uStack_98 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar9,0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_b0,&uStack_98,*(undefined8 *)puVar4);
    lStack_80 = lStack_a0;
    puStack_88 = puStack_a8;
    uStack_90 = uStack_b0;
    uStack_b0 = 0;
    fVar17 = 0.0;
    puStack_a8 = &uStack_90;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_90,*(undefined8 *)puVar3), lVar9 = lStack_80,
          (uVar10 & 1) != 0) {
      uVar11 = Dino_BusSand_View_GameView__BuildEscape_239e5a4(param_1,lStack_80,1);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                (*(long *)(param_1 + 0xf8),*(undefined4 *)(lVar9 + 0x10),uVar11,
                 *(undefined8 *)puVar8);
      lVar14 = *(long *)(param_1 + 0x100);
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x40) < 1) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_View_GameView__RouteLength_239ed68(uVar11);
      }
      else {
        uVar12 = Dino_BusSand_View_GameView__BuildEscape_239e5a4(param_1,lVar9,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_View_GameView__RouteLength_239ed68(uVar12);
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_int__float___set_Item_343e2a4
                (lVar14,uVar1,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar15 = (float)Dino_BusSand_View_GameView__RouteLength_239ed68(uVar11);
      if (fVar17 <= fVar15) {
        fVar17 = fVar15;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar2);
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar6;
    }
    lVar14 = *(long *)puVar5;
    fVar15 = *(float *)(*(long *)(lVar9 + 0xb8) + 0x14);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar14);
    }
    puVar2 = PTR_DAT_04ca9ac8;
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 != 0) {
      uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar17);
      uVar11 = *(undefined8 *)(PTR_DAT_04ca9ac8 + 0x78);
      fVar16 = fVar15 * (float)**(double **)(*(long *)puVar5 + 0xb8) *
               (*(float *)(lVar9 + 0x50) - *(float *)(lVar9 + 0x4c));
      fVar15 = _UNK_00e20448;
      if (_UNK_00e20448 <= fVar16) {
        fVar15 = fVar16;
      }
      *(float *)(param_1 + 0x108) = fVar15;
      uVar11 = FUN_02133100(uVar11,&uStack_b0);
      fStack_b4 = fVar17 / *(float *)(param_1 + 0x108);
      uVar12 = FUN_02133100(*(undefined8 *)(puVar2 + 0x78),&fStack_b4);
      uStack_b8 = *(undefined4 *)(param_1 + 0x108);
      uVar13 = FUN_02133100(*(undefined8 *)(puVar2 + 0x78),&uStack_b8);
                    /* try { // try from 0249dfb0 to 0259e097 has its CatchHandler @ 0249dfb0
                       catch() { ... } // from try @ 0249dfb0 with catch @ 0249dfb0
                       catch() { ... } // from try @ 0249e0bc with catch @ 0249dfb0
                       catch() { ... } // from try @ 0249e20c with catch @ 0249dfb0
                       catch() { ... } // from try @ 0249e214 with catch @ 0249dfb0
                       catch() { ... } // from try @ 0249e240 with catch @ 0249dfb0
                       catch() { ... } // from try @ 0249e26c with catch @ 0249dfb0 */
      uVar11 = System_String__Format_46d352c(*(undefined8 *)PTR_DAT_04cbc4b0,uVar11,uVar12,uVar13,0)
      ;
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__Log_4360fc8(uVar11,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

