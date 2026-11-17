/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Revive
void Dino_BusSand_App_Meta_EconomySettings__Revive (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Revive
   void Dino_BusSand_App_Meta_EconomySettings__Revive
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_EconomySettings__Revive_2208a98(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9bcdd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cab718);
                    /* try { // try from 02308b28 to 02408b33 has its CatchHandler @ 02308cb4 */
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb1fb8);
                    /* try { // try from 02308b40 to 02408b4b has its CatchHandler @ 02308cc8 */
    FUN_02132f7c(PTR_DAT_04cb1f30);
                    /* try { // try from 02308b4c to 02408cdb has its CatchHandler @ 02308598 */
    FUN_02132f7c(PTR_DAT_04cb1fc0);
    FUN_02132f7c(PTR_DAT_04cb1fc8);
    FUN_02132f7c(PTR_DAT_04cb1fd0);
    FUN_02132f7c(PTR_DAT_04cb1fd8);
    FUN_02132f7c(PTR_DAT_04cb1fe0);
    FUN_02132f7c(PTR_DAT_04cb1fe8);
    FUN_02132f7c(PTR_DAT_04cb1ff0);
    FUN_02132f7c(PTR_DAT_04cb1ff8);
    FUN_02132f7c(PTR_DAT_04cb2000);
    FUN_02132f7c(PTR_DAT_04cb2008);
    FUN_02132f7c(PTR_DAT_04cb2010);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9bcdd = 1;
  }
  puVar3 = PTR_DAT_04cab718;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_98 = 0;
  lVar10 = Dino_BusSand_App_MiniJson__Obj_21561ec(param_2,0);
  puVar9 = PTR_DAT_04cb2010;
  puVar8 = PTR_DAT_04cb1fe8;
  puVar7 = PTR_DAT_04cb1fe0;
  puVar6 = PTR_DAT_04cb1fc8;
  puVar5 = PTR_DAT_04cb1f30;
  puVar4 = PTR_DAT_04cb1d58;
  puVar2 = PTR_DAT_04caa300;
  if (lVar10 == 0) {
    if ((param_1 != 0) && (lVar10 = *(long *)(param_1 + 0x40), lVar10 != 0)) {
      lVar14 = *(long *)(lVar10 + 0x10);
      uVar12 = *(undefined8 *)PTR_DAT_04cb1fc0;
      lVar16 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar15 = uVar12;
        }
        else {
          uVar1 = *(uint *)(lVar10 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar10,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar14 = *(long *)(lVar10 + 0x10);
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar15 = uVar12;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar15 >> 0xc & 0x3f),
                       ((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
            (&uStack_c0,lVar10,*(undefined8 *)PTR_DAT_04caa2f0);
  uStack_90 = uStack_c0;
  uStack_c0 = 0;
  uStack_88 = puStack_b8;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_70 = uStack_a0;
  puStack_b8 = &uStack_90;
LAB_02308c74:
  do {
    uVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                       (&uStack_90,*(undefined8 *)puVar2);
    uVar13 = uStack_78;
    uVar12 = uStack_80;
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_90,*(undefined8 *)PTR_DAT_04caa2f8);
      return;
    }
    uVar11 = System_String__op_Equality_46d1108(uStack_80,*(undefined8 *)puVar6,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02308b28 with catch @ 02308cb4 */
      lVar10 = Dino_BusSand_App_Meta_EconomySettings__Ints_220a50c(uVar13,1,99999);
                    /* catch() { ... } // from try @ 02308b40 with catch @ 02308cc8 */
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x18) - 1U < 10)) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = Dino_BusSand_App_Meta_EconomySettings__Join_220a7b0(lVar10);
        uVar12 = System_String__Concat_46d2b84
                           (*(undefined8 *)PTR_DAT_04cb1fd8,uVar12,*(undefined8 *)PTR_DAT_04cb2000,0
                           );
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                  (param_1,*(undefined8 *)PTR_DAT_04cac740,*(undefined8 *)puVar6,lVar10,uVar12);
        goto LAB_02308c74;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        uVar12 = *(undefined8 *)puVar8;
        lVar16 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *puVar15 = uVar12;
            thunk_FUN_02134474(puVar15);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02308c74;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = System_String__op_Equality_46d1108(uVar12,*(undefined8 *)puVar7,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(uVar13,&lStack_98);
      lVar10 = lStack_98;
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lStack_98 = Dino_BusSand_App_Meta_EconomySettings__Clamp_2208890
                              (param_1,*(undefined8 *)PTR_DAT_04cb1fb8,lVar10,5,0x78);
        dStack_c8 = (double)lStack_98;
        uVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_c8);
        uVar13 = System_Int64__ToString_482e7e4(&lStack_98,0);
        uVar13 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1ff0,uVar13,0);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_Meta_EconomySettings_Parsed__Set_220a8d8
                  (param_1,*(undefined8 *)PTR_DAT_04cb2008,*(undefined8 *)PTR_DAT_04cb1ff8,uVar12,
                   uVar13);
        goto LAB_02308c74;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        uVar12 = *(undefined8 *)PTR_DAT_04cb1fd0;
        lVar16 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *puVar15 = uVar12;
            thunk_FUN_02134474(puVar15);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02308c74;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *(long *)(param_1 + 0x40);
    uVar12 = System_String__Concat_46d2b84(*(undefined8 *)puVar9,uVar12,*(undefined8 *)puVar5,0);
    if (lVar10 == 0) {
LAB_02309048:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *(long *)(lVar10 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_02309048;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar10,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

