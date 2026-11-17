/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ShopAdGet
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CommerceUi__ShopAdGet (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ShopAdGet
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_CommerceUi__ShopAdGet (int32_t shopId, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__ShopAdGet_22ab908(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
                    /* try { // try from 023ab91c to 024ab973 has its CatchHandler @ 023ab894 */
  if ((bRam0000000004f9c2a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9c2a6 = 1;
  }
                    /* try { // try from 023ab974 to 024ab983 has its CatchHandler @ 023ab984 */
  uVar10 = Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(param_1,0);
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04caca50;
  if ((uVar10 & 1) != 0) {
                    /* catch() { ... } // from try @ 023ab904 with catch @ 023ab984
                       catch() { ... } // from try @ 023ab974 with catch @ 023ab984 */
                    /* try { // try from 023ab988 to 024ab98b has its CatchHandler @ 023ab994 */
                    /* try { // try from 023ab98c to 024ab997 has its CatchHandler @ 023ab894 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023ab988 with catch @ 023ab994
                        */
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar11,*(undefined8 *)puVar2);
    uVar7 = Dino_BusSand_App_Meta_Monetization__Item_2265e14(param_1,0);
    iVar8 = Dino_BusSand_App_Meta_Monetization__AdCount_2265f2c(param_1,0);
    uStack_40 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_40,uVar7,(long)iVar8,*(undefined8 *)puVar3);
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + 0x20) = uStack_40;
          *(undefined8 *)(lVar12 + 0x28) = 0;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar11,uStack_40,0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        return lVar11;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9c2a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d20);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9c2a5 = 1;
  }
  uVar10 = Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(param_1,0);
  puVar6 = PTR_DAT_04cb1d20;
  puVar5 = PTR_DAT_04cae910;
  puVar4 = PTR_DAT_04cad280;
  puVar3 = PTR_DAT_04caca50;
  puVar2 = PTR_DAT_04cac7b8;
  if ((uVar10 & 1) != 0) {
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar11,*(undefined8 *)puVar3);
    uVar7 = Dino_BusSand_App_Meta_Monetization__Item_2265e14(param_1,0);
    iVar8 = Dino_BusSand_App_Meta_Monetization__BuyCount_2265e80(param_1,0);
    uStack_40 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_40,uVar7,(long)iVar8,*(undefined8 *)puVar5);
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + 0x20) = uStack_40;
          *(undefined8 *)(lVar12 + 0x28) = 0;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar11,uStack_40,0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        return lVar11;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar6,param_1,0);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar4,0);
  lVar11 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar9,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9c2a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9c2a4 = 1;
  }
  uStack_50 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar12,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04cae910;
  puVar4 = PTR_DAT_04cae058;
  puVar3 = PTR_DAT_04caa300;
  puVar2 = PTR_DAT_04caa2f8;
  if (lVar11 != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_a0,lVar11,*(undefined8 *)PTR_DAT_04caa2f0);
    uStack_50 = uStack_80;
    uStack_68 = puStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_a0 = 0;
    puStack_98 = &uStack_70;
LAB_023ab5d8:
    uVar10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                       (&uStack_70,*(undefined8 *)puVar3);
    uVar9 = uStack_58;
    if ((uVar10 & 1) != 0) {
      uVar10 = System_Int32__TryParse_482de64(uStack_60,&uStack_74,0);
      uVar7 = uStack_74;
      if ((uVar10 & 1) != 0) {
        uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_b0,uVar7,uVar9,*(undefined8 *)puVar5);
        if (lVar12 != 0) {
          lVar11 = *(long *)(lVar12 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + 0x20) = uStack_b0;
              *(undefined8 *)(lVar11 + 0x28) = uStack_a8;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar12,uStack_b0,uStack_a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023ab5d8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023ab5d8;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
              (&uStack_70,*(undefined8 *)puVar2);
  }
  return lVar12;
}

