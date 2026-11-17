/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CollectObbs
System_Collections_Generic_List_BusObb__o* Dino_BusSand_Core_TruckGrid__CollectObbs (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, bool ignoreChain, int32_t* self, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CollectObbs
   System_Collections_Generic_List_BusObb__o* Dino_BusSand_Core_TruckGrid__CollectObbs
   (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, bool ignoreChain, int32_t*
   self, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_TruckGrid__CollectObbs_242cfd0
          (long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9cbe2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeed0);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cbeef0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cbeef8);
    FUN_02132f7c(PTR_DAT_04cbeed8);
    FUN_02132f7c(PTR_DAT_04cbef00);
    FUN_02132f7c(PTR_DAT_04cbeee0);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbd2e8);
    FUN_02132f7c(PTR_DAT_04cbee78);
    FUN_02132f7c(PTR_DAT_04cbeee8);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cbef08);
    FUN_02132f7c(PTR_DAT_04cbd2f8);
    FUN_02132f7c(PTR_DAT_04cbeec8);
    bRam0000000004f9cbe2 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x40);
  uStack_140 = 0;
  puStack_138 = (undefined8 *)0x0;
  lStack_130 = 0;
  uStack_150 = 0;
  uStack_1a0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  lStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puStack_178 = (undefined8 *)0x0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (lVar9 != 0) {
    bVar1 = false;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    /* try { // try from 0252d110 to 0262d403 has its CatchHandler @ 0252d110
                       catch() { ... } // from try @ 0252d110 with catch @ 0252d110
                       catch() { ... } // from try @ 0252d470 with catch @ 0252d110
                       catch() { ... } // from try @ 0252d984 with catch @ 0252d110
                       catch() { ... } // from try @ 0252d9b4 with catch @ 0252d110
                       catch() { ... } // from try @ 0252d9d8 with catch @ 0252d110 */
    *param_4 = 0xffffffff;
    puVar7 = PTR_DAT_04cbeef8;
    puVar6 = PTR_DAT_04cbeed8;
    puVar5 = PTR_DAT_04cbeec8;
    puVar4 = PTR_DAT_04cbd2e8;
    puVar3 = PTR_DAT_04cab9e8;
    if ((param_3 & 1) != 0) {
      if (param_2 == 0) goto LAB_0252d340;
      bVar1 = 0 < *(int *)(param_2 + 0x40);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_260,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
      lStack_130 = lStack_250;
      puStack_88 = &uStack_140;
      puStack_138 = puStack_258;
      uStack_140 = uStack_260;
      uStack_90 = 0;
LAB_0252d188:
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_140,*(undefined8 *)puVar3);
      if ((uVar8 & 1) != 0) {
        if (lStack_130 == param_2) {
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *param_4 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18);
LAB_0252d1d4:
          if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_0252d1d8;
        }
        if (!bVar1) goto LAB_0252d1d4;
        if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lStack_130 + 0x40) != *(int *)(param_2 + 0x40)) {
LAB_0252d1d8:
          lVar9 = *(long *)(param_1 + 0x40);
          Dino_BusSand_Core_Truck__get_Obb_242cab0(&uStack_260);
          puStack_208 = puStack_258;
          uStack_210 = uStack_260;
          uStack_1f8 = uStack_248;
          lStack_200 = lStack_250;
          uStack_1e8 = uStack_238;
          uStack_1f0 = uStack_240;
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar2 * 0x30;
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(undefined8 **)(lVar10 + 0x28) = puStack_258;
                *(undefined8 *)(lVar10 + 0x20) = uStack_260;
                *(undefined8 *)(lVar10 + 0x38) = uStack_248;
                *(long *)(lVar10 + 0x30) = lStack_250;
                *(undefined8 *)(lVar10 + 0x48) = uStack_238;
                *(undefined8 *)(lVar10 + 0x40) = uStack_240;
              }
              else {
                puStack_118 = puStack_258;
                uStack_120 = uStack_260;
                uStack_108 = uStack_248;
                lStack_110 = lStack_250;
                uStack_f8 = uStack_238;
                uStack_100 = uStack_240;
                System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                          (lVar9,&uStack_120,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0252d188;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0252d188;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_140,*(undefined8 *)PTR_DAT_04cab9e0);
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 != 0) {
        iVar12 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar12) {
            if (*(long *)(param_1 + 0x38) != 0) {
              System_Collections_Generic_List_ValueTuple_BusObb__int____GetEnumerator_399d24c
                        (&uStack_260,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbef08);
              func_0x049b5410(&uStack_190,&uStack_260,0x48);
              uStack_260 = 0;
              puStack_258 = &uStack_190;
              goto LAB_0252d37c;
            }
            break;
          }
          lVar10 = *(long *)(param_1 + 0x40);
          System_Collections_Generic_List_BusObb___get_Item_39f7c24
                    (&uStack_c0,lVar9,iVar12,*(undefined8 *)puVar5);
          if (lVar10 == 0) break;
          lVar9 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)puVar4;
          puStack_88 = puStack_b8;
          uStack_90 = uStack_c0;
          uStack_78 = uStack_a8;
          lStack_80 = lStack_b0;
          uStack_68 = uStack_98;
          uStack_70 = uStack_a0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x30;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined8 **)(lVar9 + 0x28) = puStack_b8;
            *(undefined8 *)(lVar9 + 0x20) = uStack_c0;
            *(undefined8 *)(lVar9 + 0x38) = uStack_a8;
            *(long *)(lVar9 + 0x30) = lStack_b0;
            *(undefined8 *)(lVar9 + 0x48) = uStack_98;
            *(undefined8 *)(lVar9 + 0x40) = uStack_a0;
          }
          else {
            puStack_258 = puStack_b8;
            uStack_260 = uStack_c0;
            uStack_248 = uStack_a8;
            lStack_250 = lStack_b0;
            uStack_238 = uStack_98;
            uStack_240 = uStack_a0;
            System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                      (lVar10,&uStack_260,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(param_1 + 0x28);
          iVar12 = iVar12 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  goto LAB_0252d340;
LAB_0252d37c:
  uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__int____MoveNext_35ba76c
                    (&uStack_190,*(undefined8 *)puVar7);
  if ((uVar8 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)uStack_150 != *(int *)(param_2 + 0x48)) {
      lVar9 = *(long *)(param_1 + 0x40);
      if (lVar9 != 0) {
        puStack_e8 = puStack_178;
        uStack_f0 = uStack_180;
        uStack_d8 = uStack_168;
        lStack_e0 = lStack_170;
        uStack_c8 = uStack_158;
        uStack_d0 = uStack_160;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0x30;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined8 **)(lVar10 + 0x28) = puStack_178;
            *(undefined8 *)(lVar10 + 0x20) = uStack_180;
            *(undefined8 *)(lVar10 + 0x38) = uStack_168;
            *(long *)(lVar10 + 0x30) = lStack_170;
            *(undefined8 *)(lVar10 + 0x48) = uStack_158;
            *(undefined8 *)(lVar10 + 0x40) = uStack_160;
          }
          else {
                    /* try { // try from 0252d404 to 0262d40b has its CatchHandler @ 0252d990 */
            puStack_b8 = puStack_178;
            uStack_c0 = uStack_180;
            uStack_a8 = uStack_168;
            lStack_b0 = lStack_170;
            uStack_98 = uStack_158;
            uStack_a0 = uStack_160;
            System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                      (lVar9,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0252d37c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_0252d37c;
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__int____Dispose_35ba768
            (&uStack_190,*(undefined8 *)PTR_DAT_04cbeef0);
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List_ValueTuple_BusObb__byte____GetEnumerator_399a4b4
              (&uStack_260,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbeee8);
                    /* try { // try from 0252d468 to 0262d46f has its CatchHandler @ 0252d98c */
    func_0x049b5410(&uStack_1e0,&uStack_260,0x48);
                    /* try { // try from 0252d470 to 0262d97f has its CatchHandler @ 0252d110 */
    while( true ) {
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__byte____MoveNext_35ba51c
                          (&uStack_1e0,*(undefined8 *)puVar6);
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_ValueTuple_BusObb__byte____Dispose_35ba518
                    (&uStack_1e0,*(undefined8 *)PTR_DAT_04cbeed0);
          return *(undefined8 *)(param_1 + 0x40);
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while ((char)uStack_1a0 == *(char *)(param_2 + 0x4c));
      lVar9 = *(long *)(param_1 + 0x40);
      if (lVar9 == 0) break;
      puStack_88 = puStack_1c8;
      uStack_90 = uStack_1d0;
      uStack_78 = uStack_1b8;
      lStack_80 = lStack_1c0;
      uStack_68 = uStack_1a8;
      uStack_70 = uStack_1b0;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar2 * 0x30;
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 **)(lVar10 + 0x28) = puStack_1c8;
        *(undefined8 *)(lVar10 + 0x20) = uStack_1d0;
        *(undefined8 *)(lVar10 + 0x38) = uStack_1b8;
        *(long *)(lVar10 + 0x30) = lStack_1c0;
        *(undefined8 *)(lVar10 + 0x48) = uStack_1a8;
        *(undefined8 *)(lVar10 + 0x40) = uStack_1b0;
      }
      else {
        puStack_258 = puStack_1c8;
        uStack_260 = uStack_1d0;
        uStack_248 = uStack_1b8;
        lStack_250 = lStack_1c0;
        uStack_238 = uStack_1a8;
        uStack_240 = uStack_1b0;
        System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                  (lVar9,&uStack_260,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0252d340:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

