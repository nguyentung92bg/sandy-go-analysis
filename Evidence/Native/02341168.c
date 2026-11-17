/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Register
void Dino_BusSand_App_Meta_LiveOps__Register (Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Register
   void Dino_BusSand_App_Meta_LiveOps__Register (Dino_BusSand_App_Meta_ILiveFeature_o* f, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps__Register_2241168(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f0);
    FUN_02132f7c(PTR_DAT_04cb37f8);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cb3810);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cb3820);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3828);
    FUN_02132f7c(PTR_DAT_04cb3830);
    bRam0000000004f9bf03 = 1;
  }
  lVar9 = *(long *)puVar2;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  plStack_60 = (long *)0x0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  puVar8 = PTR_DAT_04cb3830;
  puVar7 = PTR_DAT_04cb3820;
  puVar6 = PTR_DAT_04cb3810;
  puVar5 = PTR_DAT_04cb3800;
  puVar4 = PTR_DAT_04cb37f8;
  puVar3 = PTR_DAT_04cb37e8;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,**(long **)(lVar9 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
    plStack_60 = plStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_70,*(undefined8 *)puVar5), plVar15 = plStack_60,
          (uVar10 & 1) != 0) {
      if (plStack_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar14 = *plStack_60;
      lVar9 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0234130c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plStack_60,lVar9,0);
LAB_0234130c:
      uVar12 = (*(code *)*puVar11)(plVar15,puVar11[1]);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar14 = *param_1;
      lVar9 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0234136c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(param_1,lVar9,0);
LAB_0234136c:
      uVar13 = (*(code *)*puVar11)(param_1,puVar11[1]);
      uVar10 = System_String__op_Equality_46d1108(uVar12,uVar13,0);
      if ((uVar10 & 1) != 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)puVar4);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar4);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
    if (lVar9 != 0) {
      lVar14 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)puVar6;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar15 = (long)param_1;
          thunk_FUN_02134474(plVar15,param_1);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar9,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)puVar8;
        lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar8;
        }
        puVar11 = *(undefined8 **)(lVar9 + 0xb8);
        lVar16 = puVar11[1];
        if (lVar16 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar11 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
          }
          uVar12 = *puVar11;
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb37f0);
          System_Comparison_object____ctor_3326afc(lVar16,uVar12,*(undefined8 *)PTR_DAT_04cb3828,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar15 = lVar16;
          thunk_FUN_02134474(plVar15,lVar16);
        }
        if (lVar14 != 0) {
          System_Collections_Generic_List_object___Sort_3a83690(lVar14,lVar16,*(undefined8 *)puVar7)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

