/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$GiftClick
void Dino_BusSand_App_Meta_GiftPackTrack__GiftClick (Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* g, System_String_o* clickName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$GiftClick
   void Dino_BusSand_App_Meta_GiftPackTrack__GiftClick (Dino_BusSand_App_Meta_GiftPackTrack_Gift_o*
   g, System_String_o* clickName, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackTrack__GiftClick_223faa0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 auStack_58 [2];
  undefined4 uStack_48;
  
  if ((bRam0000000004f9bef0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cb3770);
    bRam0000000004f9bef0 = 1;
  }
  puVar4 = PTR_DAT_04cb3770;
  puVar5 = PTR_DAT_04cac5c0;
  if (param_1 == 0) {
    return;
  }
  lVar12 = Dino_BusSand_App_Meta_GiftPackTrack_Gift__Build_223edf4(param_1,param_2);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  puVar6 = PTR_DAT_04ca9b50;
  puVar5 = PTR_DAT_04ca9b08;
  uVar13 = *(undefined8 *)puVar4;
  if ((bRam0000000004f9b8c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0,lVar12,0);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa378);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba58);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04caba38);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04caca10);
    FUN_02132f7c(PTR_DAT_04caca18);
    FUN_02132f7c(PTR_DAT_04caca20);
    FUN_02132f7c(PTR_DAT_04caca28);
    bRam0000000004f9b8c9 = 1;
  }
  uStack_48 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar7,*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_04cabaf8;
  puVar4 = PTR_DAT_04caba38;
  puVar5 = PTR_DAT_04caab38;
  if (lVar7 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar7,*(undefined8 *)PTR_DAT_04caca28,uVar13,*(undefined8 *)PTR_DAT_04caab38);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_58[0] = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
    puVar3 = PTR_DAT_04ca9ac8;
    uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),auStack_58);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar7,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_04ca9b58;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (1 < (int)uVar1) {
        uVar18 = 1;
        do {
          if (uVar1 <= uVar18 - 1) {
LAB_0226d7d4:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar9 = *(long **)(lVar12 + (long)(int)(uVar18 - 1) * 8 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_0226d7d8;
          uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_0226d7d4;
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar7,uVar8,*(undefined8 *)(lVar12 + (long)(int)uVar18 * 8 + 0x20),
                     *(undefined8 *)puVar5);
          uVar1 = *(uint *)(lVar12 + 0x18);
          uVar18 = uVar18 + 2;
        } while ((int)uVar18 < (int)uVar1);
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar6;
      }
      if (*(long *)(*(long *)(lVar12 + 0xb8) + 0x10) != 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar6;
        }
        puVar4 = PTR_DAT_04cabc00;
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar12 == 0) goto LAB_0226d7d8;
        auStack_58[0] = CONCAT44(auStack_58[0]._4_4_,*(undefined4 *)(lVar12 + 0x14));
        uVar8 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),auStack_58);
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar7,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar5);
      }
      puVar5 = PTR_DAT_04cac5c0;
      uVar8 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar7,0);
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar12);
        lVar12 = *(long *)puVar5;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 != 0) {
        lVar14 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)PTR_DAT_04cab718;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *puVar15 = uVar8;
            thunk_FUN_02134474(puVar15,uVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar12,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)puVar5;
          lVar14 = **(long **)(lVar12 + 0xb8);
          if (lVar14 != 0) {
            if (500 < *(int *)(lVar14 + 0x18)) {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar14 = **(long **)(*(long *)puVar5 + 0xb8);
                if (lVar14 == 0) goto LAB_0226d7d8;
              }
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (lVar14,0,*(undefined8 *)PTR_DAT_04caba58);
              lVar12 = *(long *)puVar5;
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            if (*(long *)(*(long *)(lVar12 + 0xb8) + 0x18) == 0) {
              if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = UnityEngine_Application__get_persistentDataPath_43521d4(0);
              if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = System_IO_Path__Combine_4806e38(uVar10,*(undefined8 *)PTR_DAT_04caca20,0);
              lVar12 = *(long *)puVar5;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar12 = *(long *)puVar5;
              }
              puVar15 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
              *puVar15 = uVar10;
              thunk_FUN_02134474(puVar15,uVar10);
              lVar12 = *(long *)puVar5;
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            lVar14 = *(long *)(lVar12 + 0xb8);
            iVar2 = *(int *)(lVar14 + 0x20);
            *(int *)(lVar14 + 0x20) = iVar2 + 1;
            if ((iVar2 * -0x3d70a3d7 + 0x51eb850U >> 3 | iVar2 * 0x20000000) < 0x147ae15) {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
              }
              uVar11 = System_IO_File__Exists_47f230c(*(undefined8 *)(lVar14 + 0x18),0);
              lVar12 = *(long *)puVar5;
              if ((uVar11 & 1) != 0) {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar12 = *(long *)puVar5;
                }
                uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
                lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa378);
                System_IO_FileInfo___ctor_47fa20c(lVar12,uVar10,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar14 = System_IO_FileInfo__get_Length_47fa21c(lVar12,0);
                lVar12 = *(long *)puVar5;
                if (0x200000 < lVar14) {
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar12 = *(long *)puVar5;
                  }
                  uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
                  if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa228);
                  }
                  uVar10 = System_IO_Path__GetDirectoryName_4807618(uVar10,0);
                  uVar10 = System_IO_Path__Combine_4806e38(uVar10,*(undefined8 *)PTR_DAT_04caca10,0)
                  ;
                  uVar11 = System_IO_File__Exists_47f230c(uVar10,0);
                  if ((uVar11 & 1) != 0) {
                    System_IO_File__Delete_47f8b84(uVar10,0);
                  }
                  lVar12 = *(long *)puVar5;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar12 = *(long *)puVar5;
                  }
                  System_IO_File__Move_47f9fe0
                            (*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),uVar10,0);
                  lVar12 = *(long *)puVar5;
                }
              }
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
            uVar10 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)PTR_DAT_04caa398,0);
            System_IO_File__AppendAllText_47f9cb8(uVar17,uVar10,0);
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            puVar4 = PTR_DAT_04ca9af8;
            if (*(char *)(*(long *)(lVar12 + 0xb8) + 8) != '\0') {
              uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04caca18,uVar8,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              UnityEngine_Debug__Log_4360fc8(uVar8,0);
              lVar12 = *(long *)puVar5;
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar5;
            }
            lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar14 != 0) {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
              (**(code **)(lVar14 + 0x18))
                        (*(undefined8 *)(lVar14 + 0x40),uVar13,lVar7,*(undefined8 *)(lVar14 + 0x28))
              ;
            }
            return;
          }
        }
      }
    }
  }
LAB_0226d7d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

