/* IL2CPP: Dino.BusSand.App.Meta.Economy$$BuyShop
bool Dino_BusSand_App_Meta_Economy__BuyShop (int32_t shopId, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$BuyShop
   bool Dino_BusSand_App_Meta_Economy__BuyShop (int32_t shopId, int32_t count, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_Economy__BuyShop_2203fd8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f9bcbf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d30);
    FUN_02132f7c(PTR_DAT_04cb1d38);
    FUN_02132f7c(PTR_DAT_04cb1d20);
    FUN_02132f7c(PTR_DAT_04cb1d28);
    FUN_02132f7c(PTR_DAT_04cad280);
    FUN_02132f7c(PTR_DAT_04cacf10);
    FUN_02132f7c(PTR_DAT_04cb1d40);
    bRam0000000004f9bcbf = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  uStack_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar6 = Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(param_1,0);
  puVar2 = PTR_DAT_04cb1d20;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
    if (lVar7 == 0) {
      return 0;
    }
    uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar7,*(undefined8 *)PTR_DAT_04cb1d28,0);
    lVar8 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar9,0);
    if (lVar8 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_b0,lVar8,*(undefined8 *)PTR_DAT_04caa2f0);
      puVar2 = PTR_DAT_04caa300;
      puStack_78 = puStack_a8;
      uStack_80 = uStack_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      uStack_60 = uStack_90;
      uStack_b0 = 0;
      puStack_a8 = &uStack_80;
      while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                               (&uStack_80,*(undefined8 *)puVar2), uVar9 = uStack_68,
            (uVar6 & 1) != 0) {
        uVar5 = System_Int32__Parse_482da80(uStack_70,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar10 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar5,0);
        lVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        if (lVar10 < lVar11 * param_2) {
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                    (&uStack_80,*(undefined8 *)PTR_DAT_04caa2f8);
          return 0;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_80,*(undefined8 *)PTR_DAT_04caa2f8);
    }
    uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar7,*(undefined8 *)PTR_DAT_04cad280,0);
    lVar7 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar9,0);
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_b0,lVar7,*(undefined8 *)PTR_DAT_04caa2f0);
      puStack_78 = puStack_a8;
      uStack_80 = uStack_b0;
      uStack_60 = uStack_90;
      puStack_a8 = &uStack_80;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      uStack_b0 = 0;
      uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                        (&uStack_80,*(undefined8 *)PTR_DAT_04caa300);
      if ((uVar6 & 1) != 0) {
        uVar5 = System_Int32__Parse_482da80(uStack_70,0);
        puVar2 = PTR_DAT_04cac498;
        lVar10 = *(long *)PTR_DAT_04cac498;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar2;
        }
        *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 100) = uVar5;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_80,*(undefined8 *)PTR_DAT_04caa2f8);
    }
    if (lVar8 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_b0,lVar8,*(undefined8 *)PTR_DAT_04caa2f0);
      puVar3 = PTR_DAT_04cacf10;
      puVar2 = PTR_DAT_04caa300;
      puStack_78 = puStack_a8;
      uStack_80 = uStack_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      uStack_60 = uStack_90;
      uStack_b0 = 0;
      puStack_a8 = &uStack_80;
      while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                               (&uStack_80,*(undefined8 *)puVar2), uVar9 = uStack_68,
            (uVar6 & 1) != 0) {
        uVar5 = System_Int32__Parse_482da80(uStack_70,0);
        lVar8 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578(uVar5,-(lVar8 * param_2),*(undefined8 *)puVar3,0)
        ;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_80,*(undefined8 *)PTR_DAT_04caa2f8);
    }
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_b0,lVar7,*(undefined8 *)PTR_DAT_04caa2f0);
      puVar3 = PTR_DAT_04cacf10;
      puVar2 = PTR_DAT_04caa300;
      puStack_78 = puStack_a8;
      uStack_80 = uStack_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      uStack_60 = uStack_90;
      uStack_b0 = 0;
      puStack_a8 = &uStack_80;
      while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                               (&uStack_80,*(undefined8 *)puVar2), uVar9 = uStack_68,
            (uVar6 & 1) != 0) {
        uVar5 = System_Int32__Parse_482da80(uStack_70,0);
        lVar7 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578(uVar5,lVar7 * param_2,*(undefined8 *)puVar3,0);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_80,*(undefined8 *)PTR_DAT_04caa2f8);
    }
    puVar1 = PTR_DAT_04cac498;
    lVar7 = *(long *)PTR_DAT_04cac498;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    uVar9 = *(undefined8 *)PTR_DAT_04ca9c20;
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 100) = 0;
  }
  else {
    iVar4 = Dino_BusSand_App_Meta_Monetization__CoinPrice_2265da8(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
    if (lVar7 < iVar4 * param_2) {
      return 0;
    }
    uVar5 = Dino_BusSand_App_Meta_Monetization__Item_2265e14(param_1,0);
    puVar2 = PTR_DAT_04cac498;
    lVar7 = *(long *)PTR_DAT_04cac498;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)puVar1;
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 100) = uVar5;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cacf10;
    Dino_BusSand_App_Meta_Profile__Add_2272578
              (0x3e9,(long)-(iVar4 * param_2),*(undefined8 *)PTR_DAT_04cacf10,0);
    uVar5 = Dino_BusSand_App_Meta_Monetization__Item_2265e14(param_1,0);
    iVar4 = Dino_BusSand_App_Meta_Monetization__BuyCount_2265e80(param_1,0);
    Dino_BusSand_App_Meta_Profile__Add_2272578
              (uVar5,(long)iVar4 * (long)param_2,*(undefined8 *)puVar1,0);
    uVar9 = *(undefined8 *)PTR_DAT_04ca9c20;
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 100) = 0;
  }
  plVar12 = (long *)FUN_02133068(uVar9,4);
  puVar1 = PTR_DAT_04cb1d38;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb1d38 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1d38,*(undefined8 *)(*plVar12 + 0x40)),
     lVar7 == 0)) {
LAB_023046ec:
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar12[3] != 0) {
    plVar12[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    puVar1 = PTR_DAT_04ca9ac8;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,param_1);
    lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_b0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
    goto LAB_023046ec;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
      plVar12[5] = lVar7;
      thunk_FUN_02134474(plVar12 + 5,lVar7);
      puVar2 = PTR_DAT_04cb1d30;
      if ((*(long *)PTR_DAT_04cb1d30 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1d30,*(undefined8 *)(*plVar12 + 0x40)),
         lVar7 == 0)) goto LAB_023046ec;
      if (2 < *(uint *)(plVar12 + 3)) {
        plVar12[6] = *(long *)puVar2;
        thunk_FUN_02134474();
        iStack_84 = param_2;
        lVar7 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&iStack_84);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
        goto LAB_023046ec;
        if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
          plVar12[7] = lVar7;
          thunk_FUN_02134474(plVar12 + 7,lVar7);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb1d40,plVar12,0);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

