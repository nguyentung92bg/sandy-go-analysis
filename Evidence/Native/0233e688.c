/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Sku
System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__Sku (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Sku
   System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__Sku (int32_t storeItemId, const MethodInfo*
   method); */

long * Dino_BusSand_App_Meta_GiftPackTrack__Sku_223e688(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cad2a8;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bee9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bee9 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_GiftPackTrack__Row_223e618(param_1);
  plVar5 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar4,*(undefined8 *)puVar2,0);
  plVar6 = *(long **)puVar1;
  if ((bRam0000000004f9b7e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370,plVar6,0);
    bRam0000000004f9b7e2 = 1;
  }
  uStack_28 = 0;
  if ((plVar5 != (long *)0x0) &&
     (lVar7 = *plVar5, plVar6 = plVar5, lVar7 != *(long *)(PTR_DAT_04ca9ac8 + 0x90))) {
    if (lVar7 != *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x02256544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar6 = (long *)(**(code **)(lVar7 + 0x168))(plVar5,*(undefined8 *)(lVar7 + 0x170));
      return plVar6;
    }
    puVar3 = (undefined8 *)thunk_FUN_0216e9e4(plVar5);
    uStack_28 = *puVar3;
    if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    plVar6 = (long *)System_Double__ToString_4817988(&uStack_28,uVar4,0);
  }
  return plVar6;
}

