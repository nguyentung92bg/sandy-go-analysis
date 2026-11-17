/* IL2CPP: Dino.BusSand.Core.TruckGrid$$BlockersOf
System_Collections_Generic_List_int__o* Dino_BusSand_Core_TruckGrid__BlockersOf (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, bool ignoreChain, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$BlockersOf
   System_Collections_Generic_List_int__o* Dino_BusSand_Core_TruckGrid__BlockersOf
   (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, bool ignoreChain, const
   MethodInfo* method); */

long Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c(long param_1,double param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  double dVar23;
  double dStack_140;
  undefined8 *puStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  
  puVar5 = PTR_DAT_04cbe9f8;
  puVar7 = PTR_DAT_04cbe9f0;
  if ((bRam0000000004f9cbe8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbea00);
    FUN_02132f7c(PTR_DAT_04cbea08);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cbea10);
    FUN_02132f7c(PTR_DAT_04cbea18);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbea20);
    FUN_02132f7c(PTR_DAT_04cbea28);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cbea30);
    FUN_02132f7c(PTR_DAT_04cbe9f8);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cbea38);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbe9f0);
    FUN_02132f7c(PTR_DAT_04cbea40);
    FUN_02132f7c(PTR_DAT_04cbea48);
    FUN_02132f7c(PTR_DAT_04cbea50);
    bRam0000000004f9cbe8 = 1;
  }
  dStack_c0 = 0.0;
  dStack_b8 = 0.0;
  dStack_b0 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  dStack_e8 = 0.0;
  dStack_f0 = 0.0;
  dStack_d8 = 0.0;
  dStack_e0 = 0.0;
  uStack_c8 = 0;
  dStack_d0 = 0.0;
  dStack_88 = 0.0;
  dStack_90 = 0.0;
  uStack_78 = 0;
  dStack_80 = 0.0;
  dStack_98 = 0.0;
  dStack_a0 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Collections_Generic_List_ValueTuple_double__int_____ctor_39a3c70
            (lVar16,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_04cbc080;
  if (param_2 != 0.0) {
    Dino_BusSand_Core_Truck__get_Obb_242cab0(&dStack_140,param_2);
    uVar22 = uStack_118;
    dVar15 = dStack_120;
    dVar14 = dStack_128;
    dVar13 = dStack_130;
    puVar20 = puStack_138;
    dVar12 = dStack_140;
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar23 = (dVar15 + dVar15 + (double)iVar2 + (double)iVar1) * 0.5;
    dStack_80 = dVar15 + dVar23;
    dStack_a0 = dVar12 + dVar13 * dVar23;
    dStack_98 = (double)puVar20 + dVar14 * dVar23;
    uStack_78 = uVar22;
    dStack_88 = dVar14;
    dStack_90 = dVar13;
    Dino_BusSand_Core_Truck__get_Obb_242cab0(&dStack_140,param_2);
    dVar14 = dStack_128;
    dVar13 = dStack_130;
    puVar20 = puStack_138;
    dVar12 = dStack_140;
    puVar11 = PTR_DAT_04cbea50;
    puVar10 = PTR_DAT_04cbea48;
    puVar9 = PTR_DAT_04cbea20;
    puVar8 = PTR_DAT_04cbea10;
    puVar6 = PTR_DAT_04cab9e8;
    puVar5 = PTR_DAT_04caa160;
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&dStack_140,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
      uVar22 = _UNK_00e6a330;
      dStack_b0 = dStack_130;
      dStack_b8 = (double)puStack_138;
      dStack_c0 = dStack_140;
LAB_0251cfc8:
      do {
        uVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&dStack_c0,*(undefined8 *)puVar6);
        dVar15 = dStack_b0;
        if ((uVar17 & 1) == 0) goto LAB_0251d0d0;
        if (dStack_b0 != param_2) {
          if (((param_3 & 1) == 0) || (*(int *)((long)param_2 + 0x40) < 1)) {
            if (dStack_b0 == 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
          else {
            if (dStack_b0 == 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)((long)dStack_b0 + 0x40) == *(int *)((long)param_2 + 0x40))
            goto LAB_0251cfc8;
          }
          Dino_BusSand_Core_Truck__get_Obb_242cab0(&dStack_140,dStack_b0);
          dStack_e8 = (double)puStack_138;
          dStack_f0 = dStack_140;
          dStack_d8 = dStack_128;
          dStack_e0 = dStack_130;
          uStack_c8 = uStack_118;
          dStack_d0 = dStack_120;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar17 = Dino_BusSand_Core_BusGeometry__Overlaps_242c220(uVar22,&dStack_a0,&dStack_f0);
          if ((uVar17 & 1) != 0) {
            dStack_140 = 0.0;
            puStack_138 = (undefined8 *)0x0;
            System_ValueTuple_double__int____ctor_30d9580
                      (dVar13 * (dStack_f0 - dVar12) + dVar14 * (dStack_e8 - (double)puVar20),
                       &dStack_140,*(undefined4 *)((long)dVar15 + 0x10),*(undefined8 *)puVar11);
            if (lVar16 != 0) {
              lVar19 = *(long *)(lVar16 + 0x10);
              lVar21 = *(long *)puVar9;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar19 != 0) {
                uVar4 = *(uint *)(lVar16 + 0x18);
                if (uVar4 < *(uint *)(lVar19 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)uVar4 * 0x10;
                  *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                  *(double *)(lVar19 + 0x20) = dStack_140;
                  *(undefined8 **)(lVar19 + 0x28) = puStack_138;
                }
                else {
                  System_Collections_Generic_List_ValueTuple_double__int____AddWithResize_39a4508
                            (lVar16,dStack_140,puStack_138,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0251cfc8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      } while( true );
    }
  }
  goto LAB_0251d27c;
LAB_0251d0d0:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&dStack_c0,*(undefined8 *)PTR_DAT_04cab9e0);
  lVar19 = *(long *)puVar10;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar19 = *(long *)puVar10;
  }
  puVar20 = *(undefined8 **)(lVar19 + 0xb8);
  lVar21 = puVar20[1];
  if (lVar21 == 0) {
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar20 = *(undefined8 **)(*(long *)puVar10 + 0xb8);
    }
    uVar22 = *puVar20;
    lVar21 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbea00);
    System_Comparison_ValueTuple_double__int_____ctor_33233ac
              (lVar21,uVar22,*(undefined8 *)PTR_DAT_04cbea40,0);
    plVar18 = (long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
    *plVar18 = lVar21;
    thunk_FUN_02134474(plVar18,lVar21);
  }
  if (lVar16 != 0) {
    System_Collections_Generic_List_ValueTuple_double__int____Sort_39a5f64
              (lVar16,lVar21,*(undefined8 *)PTR_DAT_04cbea30);
    uVar3 = *(undefined4 *)(lVar16 + 0x18);
    lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b854
              (lVar19,uVar3,*(undefined8 *)PTR_DAT_04caa188);
    System_Collections_Generic_List_ValueTuple_double__int____GetEnumerator_39a4f1c
              (&uStack_110,lVar16,*(undefined8 *)PTR_DAT_04cbea28);
    dStack_140 = 0.0;
    puStack_138 = &uStack_110;
    while( true ) {
      uVar17 = System_Collections_Generic_List_Enumerator_ValueTuple_double__int____MoveNext_35badac
                         (&uStack_110,*(undefined8 *)puVar8);
      if ((uVar17 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_ValueTuple_double__int____Dispose_35bada8
                  (&uStack_110,*(undefined8 *)PTR_DAT_04cbea08);
        return lVar19;
      }
      if (lVar19 == 0) break;
      lVar16 = *(long *)(lVar19 + 0x10);
      lVar21 = *(long *)puVar5;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar16 == 0) break;
      uVar4 = *(uint *)(lVar19 + 0x18);
      if (uVar4 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar4 + 1;
        *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = (undefined4)uStack_f8;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar19,uStack_f8 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0251d27c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

