/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Names
System_Collections_Generic_Dictionary_string__List_string___o* Dino_BusSand_App_Meta_PlayerIdentity__Names (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0236ebbc) */
/* WARNING: Removing unreachable block (ram,0x0236ebc0) */
/* WARNING: Removing unreachable block (ram,0x0236ecac) */
/* WARNING: Removing unreachable block (ram,0x0236ec58) */
/* WARNING: Removing unreachable block (ram,0x0236ecb4) */
/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Names
   System_Collections_Generic_Dictionary_string__List_string___o*
   Dino_BusSand_App_Meta_PlayerIdentity__Names (const MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__Names_226e794(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4170);
    FUN_02132f7c(PTR_DAT_04cb4178);
    FUN_02132f7c(PTR_DAT_04cb4180);
    FUN_02132f7c(PTR_DAT_04cb4188);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4198);
    FUN_02132f7c(PTR_DAT_04cb41a0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb41b0);
    bRam0000000004f9c0d6 = 1;
  }
  lVar9 = *(long *)puVar4;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_a8 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar14 == 0) {
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4188);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar10,*(undefined8 *)PTR_DAT_04cb4178);
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
    *puVar11 = uVar10;
    thunk_FUN_02134474(puVar11,uVar10);
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_App_Tables__Json_215eb64(*(undefined8 *)PTR_DAT_04cb41a0,0);
    if (lVar9 != 0) {
      uVar10 = Dino_BusSand_App_MiniJson__Parse_2154dc4(lVar9,0);
      lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar10,0);
      if (lVar9 != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_c0,lVar9,*(undefined8 *)PTR_DAT_04cb20c0);
        puVar7 = PTR_DAT_04cb4180;
        puVar6 = PTR_DAT_04cb4170;
        puVar5 = PTR_DAT_04cb20b0;
        puVar3 = PTR_DAT_04cab740;
        puVar2 = PTR_DAT_04cab718;
        puVar1 = PTR_DAT_04ca9c30;
        puStack_78 = puStack_b8;
        uStack_80 = uStack_c0;
        uStack_70 = uStack_b0;
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
          uVar10 = Dino_BusSand_App_MiniJson__Obj_21561ec(uStack_70,0);
          uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)PTR_DAT_04cb41b0,0);
          uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar13,*(undefined8 *)puVar1,0);
          uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)PTR_DAT_04cb4198,0);
          lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar10,0);
          uVar8 = System_String__IsNullOrEmpty_46d2084(uVar13,0);
          if ((uVar8 & 1) == 0 && lVar9 != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_c0,lVar9,*(undefined8 *)PTR_DAT_04cb20c0);
            uStack_90 = uStack_b0;
            puStack_98 = puStack_b8;
            uStack_a0 = uStack_c0;
            uStack_c0 = 0;
            puStack_b8 = &uStack_a0;
LAB_0236ea74:
            uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_a0,*(undefined8 *)puVar5);
            if ((uVar12 & 1) != 0) {
              uVar10 = Dino_BusSand_App_MiniJson__Str_21564d0(uStack_90,*(undefined8 *)puVar1,0);
              uVar12 = System_String__IsNullOrEmpty_46d2084(uVar10,0);
              if ((uVar12 & 1) == 0) {
                lVar9 = *(long *)puVar4;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar9 = *(long *)puVar4;
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                                   (lVar9,uVar10,&lStack_a8,*(undefined8 *)puVar6);
                if ((uVar12 & 1) == 0) {
                  lVar9 = *(long *)puVar4;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar9 = *(long *)puVar4;
                  }
                  lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
                  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
                  System_Collections_Generic_List_object____ctor_3a8138c
                            (lVar9,*(undefined8 *)puVar3);
                  lStack_a8 = lVar9;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                            (lVar14,uVar10,lVar9,*(undefined8 *)puVar7);
                }
                if (lStack_a8 != 0) {
                  lVar9 = *(long *)(lStack_a8 + 0x10);
                  lVar14 = *(long *)puVar2;
                  *(int *)(lStack_a8 + 0x1c) = *(int *)(lStack_a8 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar8 = *(uint *)(lStack_a8 + 0x18);
                    if (uVar8 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lStack_a8 + 0x18) = uVar8 + 1;
                      puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
                      *puVar11 = uVar13;
                      thunk_FUN_02134474(puVar11,uVar13);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lStack_a8,uVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    goto LAB_0236ea74;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              goto LAB_0236ea74;
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_a0,*(undefined8 *)PTR_DAT_04cb20a8);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
      }
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) != 0) goto LAB_0236ec70;
  }
  else if (*(int *)(lVar9 + 0xe4) != 0) {
    return lVar14;
  }
  thunk_FUN_0218fdac();
  lVar9 = *(long *)puVar4;
LAB_0236ec70:
  return *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
}

