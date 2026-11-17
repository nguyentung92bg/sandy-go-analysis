/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$ToParams
Dino_Common_DinoTrackingParameter_array* Dino_BusSand_Sdk_SandBusTrackingProvider__ToParams (System_Collections_Generic_Dictionary_string__object__o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$ToParams
   Dino_Common_DinoTrackingParameter_array* Dino_BusSand_Sdk_SandBusTrackingProvider__ToParams
   (System_Collections_Generic_Dictionary_string__object__o* d, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusTrackingProvider__ToParams_2439cec(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined1 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9cc69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04cb4968);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cbf448);
    FUN_02132f7c(PTR_DAT_04cbf450);
    FUN_02132f7c(PTR_DAT_04cbf3c0);
    bRam0000000004f9cc69 = 1;
  }
  puVar5 = PTR_DAT_04cbf450;
  puVar4 = PTR_DAT_04cbf3c0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_e0 = 0;
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = System_Collections_Generic_Dictionary_object__object___get_Count_34b405c
                       (param_1,*(undefined8 *)PTR_DAT_04cb4968);
  }
  puVar8 = PTR_DAT_04cbf448;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_DinoTrackingParameter____ctor_3a1410c
            (lVar11,uVar10,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_04cbf440;
  puVar6 = PTR_DAT_04caa370;
  puVar5 = PTR_DAT_04caa300;
  puVar4 = PTR_DAT_04ca9b88;
  if (param_1 == 0) {
    if (lVar11 != 0) {
      lVar19 = *(long *)puVar8;
      iVar1 = *(int *)(lVar11 + 0x18);
      lVar20 = *(long *)(*(long *)(lVar19 + 0x20) + 0xc0);
                    /* try { // try from 0253a48c to 0263a493 has its CatchHandler @ 0253ab98 */
                    /* try { // try from 0253a49c to 0263a4a7 has its CatchHandler @ 0253ab94 */
      if (iVar1 == 0) {
        lVar11 = *(long *)(lVar20 + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0216b470();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0216b470();
        }
        uVar18 = **(undefined8 **)(lVar11 + 0xb8);
      }
      else {
        lVar19 = *(long *)(lVar20 + 0x18);
        if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_0216b470();
        }
        uVar18 = FUN_02133068(lVar19,iVar1);
        System_Array__Copy_4852078
                  (*(undefined8 *)(lVar11 + 0x10),0,uVar18,0,*(undefined4 *)(lVar11 + 0x18),0);
      }
      return uVar18;
    }
  }
  else {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_90,param_1,*(undefined8 *)PTR_DAT_04caa2f0);
    puVar3 = PTR_DAT_04ca9ac8;
    puStack_f8 = &uStack_f0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    plStack_d8 = plStack_78;
    uStack_e0 = uStack_80;
    uStack_d0 = uStack_70;
    uStack_100 = 0;
LAB_02539e7c:
    uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                       (&uStack_f0,*(undefined8 *)puVar5);
    plVar9 = plStack_d8;
    uVar18 = uStack_e0;
    if ((uVar12 & 1) != 0) {
      if (plStack_d8 != (long *)0x0) {
        lVar19 = *plStack_d8;
        if (lVar19 != *(long *)(puVar3 + 0x90)) {
          if (lVar19 != *(long *)(puVar3 + 0x48)) {
            if (lVar19 != *(long *)(puVar3 + 0x68)) {
              if (lVar19 != *(long *)(puVar3 + 0x28)) {
                if (lVar19 != *(long *)(puVar3 + 0x78)) {
                  if (lVar19 != *(long *)(puVar3 + 0x80)) {
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar13 = System_Convert__ToString_47c2eec(plVar9,uVar13,0);
                    plStack_118 = (long *)0x0;
                    uStack_120 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    uStack_130 = 0;
                    Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_130,uVar18,uVar13,0);
                    if (lVar11 != 0) {
                      lVar19 = *(long *)(lVar11 + 0x10);
                      lVar20 = *(long *)puVar7;
                      uStack_b8 = uStack_128;
                      uStack_c0 = uStack_130;
                      plStack_a8 = plStack_118;
                      uStack_b0 = uStack_120;
                      uStack_98 = uStack_108;
                      uStack_a0 = uStack_110;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar19 != 0) {
                        uVar2 = *(uint *)(lVar11 + 0x18);
                        if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                          lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                          *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                          *(long **)(lVar19 + 0x38) = plStack_118;
                          *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                          *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                          *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                          thunk_FUN_02134474(lVar19 + 0x20,0);
                        }
                        else {
                    /* try { // try from 0253a3c4 to 0263a3df has its CatchHandler @ 0253aaac */
                          uStack_88 = uStack_128;
                          uStack_90 = uStack_130;
                          plStack_78 = plStack_118;
                          uStack_80 = uStack_120;
                          uStack_68 = uStack_108;
                          uStack_70 = uStack_110;
                          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                                    (lVar11,&uStack_90,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                        }
                        goto LAB_02539e7c;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  puVar17 = (undefined8 *)thunk_FUN_0216e9e4(plStack_d8);
                  plStack_118 = (long *)0x0;
                  uStack_120 = 0;
                  uStack_108 = 0;
                  uStack_110 = 0;
                  uStack_128 = 0;
                  uStack_130 = 0;
                  Dino_Common_DinoTrackingParameter___ctor_24475ac(*puVar17,&uStack_130,uVar18,0);
                  if (lVar11 != 0) {
                    lVar19 = *(long *)(lVar11 + 0x10);
                    lVar20 = *(long *)puVar7;
                    uStack_b8 = uStack_128;
                    uStack_c0 = uStack_130;
                    plStack_a8 = plStack_118;
                    uStack_b0 = uStack_120;
                    uStack_98 = uStack_108;
                    uStack_a0 = uStack_110;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar19 != 0) {
                      uVar2 = *(uint *)(lVar11 + 0x18);
                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                    /* try { // try from 0253a388 to 0263a38b has its CatchHandler @ 0253aa88 */
                        lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                    /* try { // try from 0253a398 to 0263a39f has its CatchHandler @ 0253aa8c */
                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                        *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                        *(long **)(lVar19 + 0x38) = plStack_118;
                        *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                        *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                        *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                        thunk_FUN_02134474(lVar19 + 0x20,0);
                      }
                      else {
                        uStack_88 = uStack_128;
                        uStack_90 = uStack_130;
                        plStack_78 = plStack_118;
                        uStack_80 = uStack_120;
                        uStack_68 = uStack_108;
                        uStack_70 = uStack_110;
                        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                                  (lVar11,&uStack_90,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_02539e7c;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253a4c4 to 0263a4c7 has its CatchHandler @ 0253ab1c */
                  FUN_02133224();
                }
                pfVar16 = (float *)thunk_FUN_0216e9e4(plStack_d8);
                plStack_118 = (long *)0x0;
                uStack_120 = 0;
                uStack_108 = 0;
                uStack_110 = 0;
                uStack_128 = 0;
                uStack_130 = 0;
                Dino_Common_DinoTrackingParameter___ctor_24475ac
                          ((double)*pfVar16,&uStack_130,uVar18,0);
                if (lVar11 != 0) {
                  lVar19 = *(long *)(lVar11 + 0x10);
                  lVar20 = *(long *)puVar7;
                  uStack_b8 = uStack_128;
                  uStack_c0 = uStack_130;
                  plStack_a8 = plStack_118;
                  uStack_b0 = uStack_120;
                  uStack_98 = uStack_108;
                  uStack_a0 = uStack_110;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar19 != 0) {
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                      lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                    /* try { // try from 0253a2d4 to 0263a2db has its CatchHandler @ 0253aac0 */
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                      *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                      *(long **)(lVar19 + 0x38) = plStack_118;
                      *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                      *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                      *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                      thunk_FUN_02134474(lVar19 + 0x20,0);
                    }
                    else {
                      uStack_88 = uStack_128;
                      uStack_90 = uStack_130;
                      plStack_78 = plStack_118;
                      uStack_80 = uStack_120;
                      uStack_68 = uStack_108;
                      uStack_70 = uStack_110;
                    /* try { // try from 0253a3fc to 0263a423 has its CatchHandler @ 0253ab0c */
                      System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                                (lVar11,&uStack_90,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    goto LAB_02539e7c;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              puVar15 = (undefined1 *)thunk_FUN_0216e9e4(plStack_d8);
              plStack_118 = (long *)0x0;
              uStack_120 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              uStack_128 = 0;
              uStack_130 = 0;
              Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_130,uVar18,*puVar15,0);
              if (lVar11 != 0) {
                    /* try { // try from 0253a1d4 to 0263a2d3 has its CatchHandler @ 0253a1d4
                       catch() { ... } // from try @ 0253a1d4 with catch @ 0253a1d4
                       catch() { ... } // from try @ 0253aa88 with catch @ 0253a1d4
                       catch() { ... } // from try @ 0253ab64 with catch @ 0253a1d4
                       catch() { ... } // from try @ 0253ab8c with catch @ 0253a1d4 */
                lVar19 = *(long *)(lVar11 + 0x10);
                lVar20 = *(long *)puVar7;
                uStack_b8 = uStack_128;
                uStack_c0 = uStack_130;
                plStack_a8 = plStack_118;
                uStack_b0 = uStack_120;
                uStack_98 = uStack_108;
                uStack_a0 = uStack_110;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar19 != 0) {
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                    *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                    *(long **)(lVar19 + 0x38) = plStack_118;
                    *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                    *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                    *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                    thunk_FUN_02134474(lVar19 + 0x20,0);
                  }
                  else {
                    /* try { // try from 0253a2fc to 0263a2ff has its CatchHandler @ 0253aaa0 */
                    uStack_88 = uStack_128;
                    uStack_90 = uStack_130;
                    plStack_78 = plStack_118;
                    uStack_80 = uStack_120;
                    uStack_68 = uStack_108;
                    uStack_70 = uStack_110;
                    System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                              (lVar11,&uStack_90,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_02539e7c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            puVar17 = (undefined8 *)thunk_FUN_0216e9e4(plStack_d8);
            plStack_118 = (long *)0x0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_130,uVar18,*puVar17,0);
            if (lVar11 != 0) {
              lVar19 = *(long *)(lVar11 + 0x10);
              lVar20 = *(long *)puVar7;
              uStack_b8 = uStack_128;
              uStack_c0 = uStack_130;
              plStack_a8 = plStack_118;
              uStack_b0 = uStack_120;
              uStack_98 = uStack_108;
              uStack_a0 = uStack_110;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar19 != 0) {
                uVar2 = *(uint *)(lVar11 + 0x18);
                if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                  *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                  *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                  *(long **)(lVar19 + 0x38) = plStack_118;
                  *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                  *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                  *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                  thunk_FUN_02134474(lVar19 + 0x20,0);
                }
                else {
                  uStack_88 = uStack_128;
                  uStack_90 = uStack_130;
                  plStack_78 = plStack_118;
                  uStack_80 = uStack_120;
                  uStack_68 = uStack_108;
                  uStack_70 = uStack_110;
                  System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                            (lVar11,&uStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_02539e7c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          piVar14 = (int *)thunk_FUN_0216e9e4(plStack_d8);
          plStack_118 = (long *)0x0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_130,uVar18,(long)*piVar14,0);
          if (lVar11 != 0) {
            lVar19 = *(long *)(lVar11 + 0x10);
            lVar20 = *(long *)puVar7;
            uStack_b8 = uStack_128;
            uStack_c0 = uStack_130;
            plStack_a8 = plStack_118;
            uStack_b0 = uStack_120;
            uStack_98 = uStack_108;
            uStack_a0 = uStack_110;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar19 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar19 + 0x28) = uStack_128;
                *(undefined8 *)(lVar19 + 0x20) = uStack_130;
                *(long **)(lVar19 + 0x38) = plStack_118;
                *(undefined8 *)(lVar19 + 0x30) = uStack_120;
                *(undefined8 *)(lVar19 + 0x48) = uStack_108;
                *(undefined8 *)(lVar19 + 0x40) = uStack_110;
                thunk_FUN_02134474(lVar19 + 0x20,0);
              }
              else {
                uStack_88 = uStack_128;
                uStack_90 = uStack_130;
                plStack_78 = plStack_118;
                uStack_80 = uStack_120;
                uStack_68 = uStack_108;
                uStack_70 = uStack_110;
                System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                          (lVar11,&uStack_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_02539e7c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        plStack_118 = (long *)0x0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_130,uStack_e0,plStack_d8,0);
        if (lVar11 != 0) {
          lVar19 = *(long *)(lVar11 + 0x10);
          lVar20 = *(long *)puVar7;
          uStack_b8 = uStack_128;
          uStack_c0 = uStack_130;
          plStack_a8 = plStack_118;
          uStack_b0 = uStack_120;
          uStack_98 = uStack_108;
          uStack_a0 = uStack_110;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar19 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar2 * 0x30;
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar19 + 0x28) = uStack_128;
              *(undefined8 *)(lVar19 + 0x20) = uStack_130;
              *(long **)(lVar19 + 0x38) = plStack_118;
              *(undefined8 *)(lVar19 + 0x30) = uStack_120;
              *(undefined8 *)(lVar19 + 0x48) = uStack_108;
              *(undefined8 *)(lVar19 + 0x40) = uStack_110;
              thunk_FUN_02134474(lVar19 + 0x20,0);
            }
            else {
              uStack_88 = uStack_128;
              uStack_90 = uStack_130;
              plStack_78 = plStack_118;
              uStack_80 = uStack_120;
              uStack_68 = uStack_108;
              uStack_70 = uStack_110;
              System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                        (lVar11,&uStack_90,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02539e7c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02539e7c;
    }
                    /* try { // try from 0253a440 to 0263a44b has its CatchHandler @ 0253ab00 */
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
              (&uStack_f0,*(undefined8 *)PTR_DAT_04caa2f8);
    if (lVar11 != 0) {
      uVar18 = System_Collections_Generic_List_DinoTrackingParameter___ToArray_3a16828
                         (lVar11,*(undefined8 *)puVar8);
                    /* try { // try from 0253a460 to 0263a467 has its CatchHandler @ 0253aaf8 */
      return uVar18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

