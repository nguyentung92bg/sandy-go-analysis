/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ShopCost
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CommerceUi__ShopCost (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ShopCost
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_CommerceUi__ShopCost (int32_t shopId, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__ShopCost_22aba88(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
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
  
  if ((bRam0000000004f9c2a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d20);
    FUN_02132f7c(PTR_DAT_04cb1d28);
    bRam0000000004f9c2a7 = 1;
  }
  uVar9 = Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(param_1,0);
  puVar6 = PTR_DAT_04cb1d28;
  puVar5 = PTR_DAT_04cb1d20;
  puVar4 = PTR_DAT_04cae910;
  puVar3 = PTR_DAT_04caca50;
  puVar2 = PTR_DAT_04cac7b8;
  if ((uVar9 & 1) != 0) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar10,*(undefined8 *)puVar3);
    iVar8 = Dino_BusSand_App_Meta_Monetization__CoinPrice_2265da8(param_1,0);
    uStack_40 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_40,0x3e9,(long)iVar8,*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + 0x20) = uStack_40;
          *(undefined8 *)(lVar12 + 0x28) = 0;
        }
        else {
          System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                    (lVar10,uStack_40,0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        return lVar10;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,param_1,0);
  uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar6,0);
  lVar10 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar11,0);
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
  if (lVar10 != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_a0,lVar10,*(undefined8 *)PTR_DAT_04caa2f0);
    uStack_50 = uStack_80;
    uStack_68 = puStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_a0 = 0;
    puStack_98 = &uStack_70;
LAB_023ab5d8:
    uVar9 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                      (&uStack_70,*(undefined8 *)puVar3);
    uVar11 = uStack_58;
    if ((uVar9 & 1) != 0) {
      uVar9 = System_Int32__TryParse_482de64(uStack_60,&uStack_74,0);
      uVar7 = uStack_74;
      if ((uVar9 & 1) != 0) {
        uVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar11,0,0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_b0,uVar7,uVar11,*(undefined8 *)puVar5);
        if (lVar12 != 0) {
          lVar10 = *(long *)(lVar12 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + 0x20) = uStack_b0;
              *(undefined8 *)(lVar10 + 0x28) = uStack_a8;
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

