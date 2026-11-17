/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$Parse
System_Collections_Generic_List_GiftPackCycle_CondGroup__o* Dino_BusSand_App_Meta_GiftPackCycle__Parse (System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02333298) */
/* WARNING: Removing unreachable block (ram,0x023333a4) */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$Parse
   System_Collections_Generic_List_GiftPackCycle_CondGroup__o*
   Dino_BusSand_App_Meta_GiftPackCycle__Parse (System_String_o* json, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackCycle__Parse_2232f58(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_04cb3270;
  puVar2 = PTR_DAT_04cb3268;
  if ((bRam0000000004f9be88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3278);
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04cb3280);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04cb3288);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cb3290);
    FUN_02132f7c(PTR_DAT_04cb3298);
    FUN_02132f7c(PTR_DAT_04cb3270);
    FUN_02132f7c(PTR_DAT_04cb32a0);
    FUN_02132f7c(PTR_DAT_04cb3268);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9be88 = 1;
  }
  uStack_70 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  iStack_c4 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar12,*(undefined8 *)puVar3);
  uVar13 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar13 & 1) == 0) {
    uVar14 = Dino_BusSand_App_MiniJson__Parse_2154dc4(param_1,0);
    lVar15 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar14,0);
    if (lVar15 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_f0,lVar15,*(undefined8 *)PTR_DAT_04caa2f0);
      puVar8 = PTR_DAT_04cb3298;
      puVar7 = PTR_DAT_04cb3288;
      puVar6 = PTR_DAT_04cb3280;
      puVar5 = PTR_DAT_04caa300;
      puVar3 = PTR_DAT_04ca9c30;
      puVar2 = PTR_DAT_04ca9ac8;
      puStack_88 = puStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
      uStack_70 = uStack_d0;
      puStack_f8 = &uStack_90;
      lStack_100 = 0;
LAB_02333104:
      uVar13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                         (&uStack_90,*(undefined8 *)puVar5);
      uVar14 = uStack_78;
      lVar15 = lStack_100;
      if ((uVar13 & 1) != 0) {
        uVar13 = System_Int32__TryParse_482de64(uStack_80,&uStack_94,0);
        if (((uVar13 & 1) != 0) &&
           (lVar15 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar14,0), lVar15 != 0)) {
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3278);
          Dino_BusSand_App_Meta_GiftPackCycle_CondGroup___ctor_22334a0();
          puVar4 = PTR_DAT_04caa2f0;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *(undefined4 *)(lVar16 + 0x10) = uStack_94;
          System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                    (&uStack_f0,lVar15,*(undefined8 *)puVar4);
          uStack_a0 = uStack_d0;
          puStack_b8 = puStack_e8;
          uStack_c0 = uStack_f0;
          uStack_a8 = uStack_d8;
          uStack_b0 = uStack_e0;
          uStack_f0 = 0;
          puStack_e8 = &uStack_c0;
LAB_02333190:
          uVar13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                             (&uStack_c0,*(undefined8 *)puVar5);
          uVar10 = uStack_a8;
          uVar14 = uStack_b0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            bVar11 = System_Enum__TryParse_Int32Enum__2729354
                               (uVar14,1,&iStack_c4,*(undefined8 *)puVar6);
            iVar9 = iStack_c4;
            if ((bVar11 & iStack_c4 != 0) != 0) {
              lVar15 = *(long *)(lVar16 + 0x18);
              uVar14 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)puVar3,0);
              uStack_110 = 0;
              uStack_108 = 0;
              System_Collections_Generic_KeyValuePair_Int32Enum__object____ctor_390f08c
                        (&uStack_110,iVar9,uVar14,*(undefined8 *)puVar7);
              if (lVar15 != 0) {
                lVar19 = *(long *)(lVar15 + 0x10);
                lVar20 = *(long *)puVar8;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar19 != 0) {
                  uVar1 = *(uint *)(lVar15 + 0x18);
                  if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar1 * 0x10;
                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                    puVar17 = (undefined8 *)(lVar19 + 0x28);
                    *puVar17 = uStack_108;
                    *(undefined8 *)(lVar19 + 0x20) = uStack_110;
                    thunk_FUN_02134474(puVar17,0);
                  }
                  else {
                    System_Collections_Generic_List_KeyValuePair_Int32Enum__object____AddWithResize_396ab5c
                              (lVar15,uStack_110,uStack_108,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_02333190;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_02333190;
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                    (&uStack_c0,*(undefined8 *)PTR_DAT_04caa2f8);
          if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (0 < *(int *)(*(long *)(lVar16 + 0x18) + 0x18)) {
            if (lVar12 != 0) {
              lVar15 = *(long *)(lVar12 + 0x10);
              lVar19 = *(long *)PTR_DAT_04cb3290;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar15 != 0) {
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  plVar18 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar18 = lVar16;
                  thunk_FUN_02134474(plVar18,lVar16);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar12,lVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_02333104;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        goto LAB_02333104;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (puStack_f8,*(undefined8 *)PTR_DAT_04caa2f8);
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213321c(lVar15);
      }
    }
  }
  return lVar12;
}

