/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack.Gift$$Build
System_Object_array* Dino_BusSand_App_Meta_GiftPackTrack_Gift__Build (Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* __this, System_String_o* clickName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack.Gift$$Build
   System_Object_array* Dino_BusSand_App_Meta_GiftPackTrack_Gift__Build
   (Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* __this, System_String_o* clickName, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackTrack_Gift__Build_223edf4(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_04ca9b98;
  puVar3 = PTR_DAT_04ca9b90;
  if ((bRam0000000004f9bef6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cacbf8);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb3710);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cb3718);
    FUN_02132f7c(PTR_DAT_04cb3720);
    FUN_02132f7c(PTR_DAT_04cb3728);
    FUN_02132f7c(PTR_DAT_04cb3730);
    FUN_02132f7c(PTR_DAT_04cb1c18);
    FUN_02132f7c(PTR_DAT_04cb3738);
    FUN_02132f7c(PTR_DAT_04cb3740);
    FUN_02132f7c(PTR_DAT_04cb3748);
    FUN_02132f7c(PTR_DAT_04cb3750);
    FUN_02132f7c(PTR_DAT_04cb3758);
    FUN_02132f7c(PTR_DAT_04cb3760);
    FUN_02132f7c(PTR_DAT_04cb3768);
    bRam0000000004f9bef6 = 1;
  }
  puVar5 = PTR_DAT_04ca9ba0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar4);
  if (param_2 == 0) {
    if (lVar6 == 0) goto LAB_0233fa9c;
  }
  else {
    if (lVar6 == 0) goto LAB_0233fa9c;
    lVar10 = *(long *)(lVar6 + 0x10);
    uVar9 = *(undefined8 *)PTR_DAT_04cb3730;
    lVar11 = *(long *)puVar5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0233fa9c;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)puVar5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0233fa9c;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      plVar7 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      *plVar7 = param_2;
      thunk_FUN_02134474(plVar7,param_2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar10 = *(long *)(lVar6 + 0x10);
  uVar9 = *(undefined8 *)PTR_DAT_04cb3750;
  lVar11 = *(long *)puVar5;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar10 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    uVar9 = Dino_BusSand_App_Meta_GiftPackTrack__Sku_223e688(*(undefined4 *)(param_1 + 0x10));
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)puVar5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar3 = PTR_DAT_04cb3760;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      lVar10 = *(long *)(lVar6 + 0x10);
      uVar9 = *(undefined8 *)puVar3;
      lVar11 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) {
          lVar10 = Dino_BusSand_App_Meta_GiftPackTrack__SkuTypeOf_223e700
                             (*(undefined4 *)(param_1 + 0x10));
        }
        lVar11 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar6,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = Dino_BusSand_App_Meta_GiftPackTrack__SkuLabel_223e760
                             (*(undefined4 *)(param_1 + 0x10));
          if (lVar10 != 0) {
            lVar11 = *(long *)(lVar6 + 0x10);
            uVar9 = *(undefined8 *)PTR_DAT_04cb3740;
            lVar12 = *(long *)puVar5;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0233fa9c;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(lVar6 + 0x10);
            lVar12 = *(long *)puVar5;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0233fa9c;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = lVar10;
              thunk_FUN_02134474(plVar7,lVar10);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_1 + 0x20),0);
          if ((uVar8 & 1) == 0) {
            lVar10 = *(long *)(lVar6 + 0x10);
            uVar9 = *(undefined8 *)PTR_DAT_04cb1c18;
            lVar11 = *(long *)puVar5;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0233fa9c;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = *(long *)(lVar6 + 0x10);
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            lVar11 = *(long *)puVar5;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0233fa9c;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(lVar6 + 0x10);
          uVar9 = *(undefined8 *)PTR_DAT_04cb3738;
          lVar11 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            puVar3 = PTR_DAT_04ca9ac8;
            uStack_34 = *(undefined4 *)(param_1 + 0x28);
            uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)puVar5;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            puVar4 = PTR_DAT_04cb3720;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(lVar6 + 0x10);
              uVar9 = *(undefined8 *)puVar4;
              lVar11 = *(long *)puVar5;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar6,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                uStack_40 = *(undefined8 *)(param_1 + 0x38);
                uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_40);
                lVar10 = *(long *)(lVar6 + 0x10);
                lVar11 = *(long *)puVar5;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                puVar4 = PTR_DAT_04cb3768;
                if (lVar10 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                    thunk_FUN_02134474();
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar6,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar10 = *(long *)(lVar6 + 0x10);
                  uVar9 = *(undefined8 *)puVar4;
                  lVar11 = *(long *)puVar5;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(lVar6 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                      thunk_FUN_02134474();
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar6,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    uStack_48 = *(undefined8 *)(param_1 + 0x40);
                    uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_48);
                    lVar10 = *(long *)(lVar6 + 0x10);
                    lVar11 = *(long *)puVar5;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    puVar4 = PTR_DAT_04cb3718;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                        thunk_FUN_02134474();
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar6,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar10 = *(long *)(lVar6 + 0x10);
                      uVar9 = *(undefined8 *)puVar4;
                      lVar11 = *(long *)puVar5;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar10 != 0) {
                        uVar2 = *(uint *)(lVar6 + 0x18);
                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                          thunk_FUN_02134474();
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                    (lVar6,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        uStack_50 = *(undefined8 *)(param_1 + 0x48);
                        uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_50);
                        lVar10 = *(long *)(lVar6 + 0x10);
                        lVar11 = *(long *)puVar5;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        puVar4 = PTR_DAT_04cb3710;
                        if (lVar10 != 0) {
                          uVar2 = *(uint *)(lVar6 + 0x18);
                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                            thunk_FUN_02134474();
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                      (lVar6,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar10 = *(long *)(lVar6 + 0x10);
                          uVar9 = *(undefined8 *)puVar4;
                          lVar11 = *(long *)puVar5;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar10 != 0) {
                            uVar2 = *(uint *)(lVar6 + 0x18);
                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                              thunk_FUN_02134474();
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar6,uVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            uStack_54 = *(undefined4 *)(param_1 + 0x2c);
                            uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_54);
                            lVar10 = *(long *)(lVar6 + 0x10);
                            lVar11 = *(long *)puVar5;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            puVar4 = PTR_DAT_04cb3728;
                            if (lVar10 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                thunk_FUN_02134474();
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                          (lVar6,uVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar10 = *(long *)(lVar6 + 0x10);
                              uVar9 = *(undefined8 *)puVar4;
                              lVar11 = *(long *)puVar5;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar2 = *(uint *)(lVar6 + 0x18);
                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                  *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                  thunk_FUN_02134474();
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                            (lVar6,uVar9,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                                }
                                uStack_58 = *(undefined4 *)(param_1 + 0x30);
                                uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
                                lVar10 = *(long *)(lVar6 + 0x10);
                                lVar11 = *(long *)puVar5;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                puVar4 = PTR_DAT_04cad1f8;
                                if (lVar10 != 0) {
                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                    thunk_FUN_02134474();
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                              (lVar6,uVar9,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                    ;
                                  }
                                  lVar10 = *(long *)(lVar6 + 0x10);
                                  uVar9 = *(undefined8 *)puVar4;
                                  lVar11 = *(long *)puVar5;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  puVar4 = PTR_DAT_04cad1f0;
                                  if (lVar10 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                      thunk_FUN_02134474();
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                (lVar6,uVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                    uVar1 = *(undefined4 *)(param_1 + 0x10);
                                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    uStack_60 = Dino_BusSand_App_Iap__PriceUsd_217a220(uVar1,0);
                                    uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x80),&uStack_60);
                                    lVar10 = *(long *)(lVar6 + 0x10);
                                    lVar11 = *(long *)puVar5;
                                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                    puVar4 = PTR_DAT_04cb3748;
                                    if (lVar10 != 0) {
                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                             uVar9;
                                        thunk_FUN_02134474();
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                  (lVar6,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      lVar10 = *(long *)(lVar6 + 0x10);
                                      uVar9 = *(undefined8 *)puVar4;
                                      lVar11 = *(long *)puVar5;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar2 = *(uint *)(lVar6 + 0x18);
                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                               uVar9;
                                          thunk_FUN_02134474();
                                        }
                                        else {
                                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                    (lVar6,uVar9,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        uStack_64 = 
                                                  Dino_BusSand_App_Meta_GiftPackTrack__PriceDiscount_223e85c
                                                            (*(undefined4 *)(param_1 + 0x10));
                                        uVar9 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),
                                                             &uStack_64);
                                        lVar10 = *(long *)(lVar6 + 0x10);
                                        lVar11 = *(long *)puVar5;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        puVar3 = PTR_DAT_04cb3758;
                                        if (lVar10 != 0) {
                                          uVar2 = *(uint *)(lVar6 + 0x18);
                                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                            *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                 uVar9;
                                            thunk_FUN_02134474();
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                      (lVar6,uVar9,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                          }
                                          lVar10 = *(long *)(lVar6 + 0x10);
                                          uVar9 = *(undefined8 *)puVar3;
                                          lVar11 = *(long *)puVar5;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20)
                                                   = uVar9;
                                              thunk_FUN_02134474();
                                            }
                                            else {
                                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                        (lVar6,uVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                            }
                                            lVar10 = *(long *)(param_1 + 0x50);
                                            if (lVar10 == 0) {
                                              lVar10 = 
                                                  Dino_BusSand_App_Meta_GiftPackTrack__StoreItems_223ea80
                                                            (*(undefined4 *)(param_1 + 0x10));
                                            }
                                            lVar11 = *(long *)(lVar6 + 0x10);
                                            lVar12 = *(long *)puVar5;
                                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                            puVar3 = PTR_DAT_04cacbf8;
                                            if (lVar11 != 0) {
                                              uVar2 = *(uint *)(lVar6 + 0x18);
                                              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) =
                                                     lVar10;
                                                thunk_FUN_02134474();
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                          (lVar6,lVar10,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar12 + 0x20) +
                                                                      0xc0) + 0x70));
                                              }
                                              System_Collections_Generic_List_object___ToArray_3a83728
                                                        (lVar6,*(undefined8 *)puVar3);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0233fa9c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

