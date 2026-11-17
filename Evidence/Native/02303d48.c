/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ShopPrice
int32_t Dino_BusSand_App_Meta_Economy__ShopPrice (int32_t shopId, int32_t* currency, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ShopPrice
   int32_t Dino_BusSand_App_Meta_Economy__ShopPrice (int32_t shopId, int32_t* currency, const
   MethodInfo* method); */

uint Dino_BusSand_App_Meta_Economy__ShopPrice_2203d48(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  double *pdVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9bcbd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d20);
    FUN_02132f7c(PTR_DAT_04cb1d28);
    bRam0000000004f9bcbd = 1;
  }
  uStack_40 = 0;
  *param_2 = 0x3e9;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar6 = Dino_BusSand_App_Meta_Monetization__Covers_2265c6c(param_1,0);
  puVar2 = PTR_DAT_04cb1d28;
  puVar1 = PTR_DAT_04cb1d20;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar1,param_1,0);
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)puVar2,0);
    lVar8 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar7,0);
    if (lVar8 == 0) {
      uVar3 = 0;
    }
    else {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_60,lVar8,*(undefined8 *)PTR_DAT_04caa2f0);
      uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                        (&uStack_60,*(undefined8 *)PTR_DAT_04caa300);
      uVar7 = uStack_48;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        System_Int32__TryParse_482de64(uStack_50,param_2,0);
        uVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
      }
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_60,*(undefined8 *)PTR_DAT_04caa2f8);
    }
    return uVar3;
  }
  if ((bRam0000000004f9c058 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1f80,0);
    bRam0000000004f9c058 = 1;
  }
  lVar8 = Dino_BusSand_App_Meta_Monetization__BoosterByShop_2265914(param_1);
  if (lVar8 != 0) {
    plVar9 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,*(undefined8 *)PTR_DAT_04cb1f80,0)
    ;
    uVar3 = 0;
    if (plVar9 != (long *)0x0) {
      lVar8 = *plVar9;
      if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar4 = (double *)thunk_FUN_0216e9e4(plVar9,0,0);
        uVar3 = 0x80000000;
        if (*pdVar4 != INFINITY) {
          uVar3 = (int)*pdVar4;
        }
      }
      else if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar5 = (byte *)thunk_FUN_0216e9e4(plVar9,0,0);
        uVar3 = (uint)*pbVar5;
      }
      else if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar9,&stack0xffffffffffffffec,0);
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0;
}

