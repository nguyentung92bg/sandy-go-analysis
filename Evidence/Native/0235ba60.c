/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$RandomName
System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__RandomName (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0235c010) */
/* WARNING: Removing unreachable block (ram,0x0235c014) */
/* WARNING: Removing unreachable block (ram,0x0235c0b4) */
/* WARNING: Removing unreachable block (ram,0x0235c0ac) */
/* WARNING: Removing unreachable block (ram,0x0235c0bc) */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$RandomName
   System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__RandomName
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_YachtRacingFeature__RandomName_225ba60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
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
  long lStack_68;
  
  puVar4 = PTR_DAT_04caf920;
  if ((bRam0000000004f9c017 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4170);
    FUN_02132f7c(PTR_DAT_04cb4178);
    FUN_02132f7c(PTR_DAT_04cb4180);
    FUN_02132f7c(PTR_DAT_04cb4188);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cb40e8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04caf920);
    FUN_02132f7c(PTR_DAT_04cb4198);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04cb41a0);
    FUN_02132f7c(PTR_DAT_04cb41a8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb41b0);
    bRam0000000004f9c017 = 1;
  }
  puVar6 = PTR_DAT_04cb4170;
  uStack_70 = 0;
  lStack_68 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  if (*(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) == 0) {
    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4188);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar13,*(undefined8 *)PTR_DAT_04cb4178);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar14 = uVar13;
    thunk_FUN_02134474(puVar14,uVar13);
                    /* try { // try from 0235bdb4 to 0245bdbb has its CatchHandler @ 0235be24 */
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0235bdbc to 0245be3f has its CatchHandler @ 0235bce8 */
    lVar16 = Dino_BusSand_App_Tables__Json_215eb64(*(undefined8 *)PTR_DAT_04cb41a0,0);
    if (lVar16 != 0) {
      uVar13 = Dino_BusSand_App_MiniJson__Parse_2154dc4(lVar16,0);
      lVar16 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar13,0);
      if (lVar16 != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_c0,lVar16,*(undefined8 *)PTR_DAT_04cb20c0);
        puVar7 = PTR_DAT_04cb4180;
        puVar5 = PTR_DAT_04cb20b0;
        puVar3 = PTR_DAT_04cab740;
        puVar2 = PTR_DAT_04cab718;
        puVar1 = PTR_DAT_04ca9c30;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235bdb4 with catch @ 0235be24
                        */
        puStack_78 = puStack_b8;
        uStack_80 = uStack_c0;
        uStack_70 = uStack_b0;
                    /* try { // try from 0235be40 to 0245be43 has its CatchHandler @ 0235be5c */
                    /* try { // try from 0235be44 to 0245be5f has its CatchHandler @ 0235bce8 */
        while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
          uVar13 = Dino_BusSand_App_MiniJson__Obj_21561ec(uStack_70,0);
                    /* catch() { ... } // from try @ 0235be40 with catch @ 0235be5c */
                    /* try { // try from 0235be60 to 0245be67 has its CatchHandler @ 0235be70 */
                    /* try { // try from 0235be68 to 0245be73 has its CatchHandler @ 0235bce8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0235be60 with catch @ 0235be70
                        */
          uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)PTR_DAT_04cb41b0,0);
          uVar15 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar15,*(undefined8 *)puVar1,0);
          uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)PTR_DAT_04cb4198,0);
          lVar16 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar13,0);
          uVar9 = System_String__IsNullOrEmpty_46d2084(uVar15,0);
          if ((uVar9 & 1) == 0 && lVar16 != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_c0,lVar16,*(undefined8 *)PTR_DAT_04cb20c0);
            uStack_90 = uStack_b0;
            puStack_98 = puStack_b8;
            uStack_a0 = uStack_c0;
            uStack_c0 = 0;
            puStack_b8 = &uStack_a0;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_a0,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
              uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uStack_90,*(undefined8 *)puVar1,0);
              lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                                 (lVar16,uVar13,&lStack_a8,*(undefined8 *)puVar6);
                    /* try { // try from 0235bf38 to 0245c02b has its CatchHandler @ 0235bf38
                       catch() { ... } // from try @ 0235bf38 with catch @ 0235bf38
                       catch() { ... } // from try @ 0235c08c with catch @ 0235bf38
                       catch() { ... } // from try @ 0235c0f8 with catch @ 0235bf38
                       catch() { ... } // from try @ 0235c138 with catch @ 0235bf38
                       catch() { ... } // from try @ 0235c15c with catch @ 0235bf38 */
              if ((uVar10 & 1) == 0) {
                lVar11 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
                System_Collections_Generic_List_object____ctor_3a8138c(lVar16,*(undefined8 *)puVar3)
                ;
                lStack_a8 = lVar16;
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                          (lVar11,uVar13,lVar16,*(undefined8 *)puVar7);
              }
              if (lStack_a8 == 0) {
LAB_0235c018:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar16 = *(long *)(lStack_a8 + 0x10);
              lVar11 = *(long *)puVar2;
              *(int *)(lStack_a8 + 0x1c) = *(int *)(lStack_a8 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0235c018;
              uVar9 = *(uint *)(lStack_a8 + 0x18);
              if (uVar9 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lStack_a8 + 0x18) = uVar9 + 1;
                puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar9 * 8 + 0x20);
                *puVar14 = uVar15;
                thunk_FUN_02134474(puVar14,uVar15);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lStack_a8,uVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_a0,*(undefined8 *)PTR_DAT_04cb20a8);
          }
        }
                    /* try { // try from 0235c084 to 0245c08b has its CatchHandler @ 0235c100 */
                    /* try { // try from 0235c08c to 0245c0eb has its CatchHandler @ 0235bf38 */
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
      }
    }
  }
  puVar1 = PTR_DAT_04cab550;
  lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar16 == 0) goto LAB_0235c0b0;
  uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                     (lVar16,**(undefined8 **)(*(long *)puVar1 + 0xb8),&lStack_68,
                      *(undefined8 *)puVar6);
  if ((uVar10 & 1) == 0) {
LAB_0235bc30:
    lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar16 == 0) goto LAB_0235c0b0;
    System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
              (lVar16,*(undefined8 *)PTR_DAT_04cac078,&lStack_68,*(undefined8 *)puVar6);
    if (lStack_68 == 0) goto LAB_0235bd3c;
  }
  else {
    if (lStack_68 == 0) goto LAB_0235c0b0;
    if (*(int *)(lStack_68 + 0x18) == 0) goto LAB_0235bc30;
  }
  lVar16 = lStack_68;
  if (*(int *)(lStack_68 + 0x18) == 0) {
LAB_0235bd3c:
    return *(undefined8 *)PTR_DAT_04cb41a8;
  }
  lVar11 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (((lVar11 != 0) && (lStack_68 != 0)) &&
     (plVar12 = *(long **)(lVar11 + 0x18), plVar12 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar12 + 0x198))
                      (plVar12,0,*(undefined4 *)(lStack_68 + 0x18),*(undefined8 *)(*plVar12 + 0x1a0)
                      );
    puVar6 = PTR_DAT_04cb4190;
    uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar16,uVar8,*(undefined8 *)PTR_DAT_04cb4190);
    puVar4 = PTR_DAT_04cb40e8;
    iVar17 = 10;
    while (lVar16 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                              (param_1,*(undefined8 *)puVar4), lVar16 != 0) {
      uVar10 = System_String__op_Equality_46d1108(uVar13,*(undefined8 *)(lVar16 + 0xa8),0);
      lVar16 = lStack_68;
      if ((uVar10 & 1) == 0) {
        return uVar13;
      }
                    /* try { // try from 0235bce8 to 0245bdb3 has its CatchHandler @ 0235bce8
                       catch() { ... } // from try @ 0235bce8 with catch @ 0235bce8
                       catch() { ... } // from try @ 0235bdbc with catch @ 0235bce8
                       catch() { ... } // from try @ 0235be44 with catch @ 0235bce8
                       catch() { ... } // from try @ 0235be68 with catch @ 0235bce8 */
      lVar11 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
      if (((lVar11 == 0) || (lStack_68 == 0)) ||
         ((plVar12 = *(long **)(lVar11 + 0x18), plVar12 == (long *)0x0 ||
          (uVar8 = (**(code **)(*plVar12 + 0x198))
                             (plVar12,0,*(undefined4 *)(lStack_68 + 0x18),
                              *(undefined8 *)(*plVar12 + 0x1a0)), lVar16 == 0)))) break;
      uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar16,uVar8,*(undefined8 *)puVar6);
      iVar17 = iVar17 + -1;
      if (iVar17 == 0) {
        return uVar13;
      }
    }
  }
LAB_0235c0b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

