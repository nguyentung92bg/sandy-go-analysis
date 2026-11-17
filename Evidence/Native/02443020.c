/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$ProductId
System_String_o* Dino_BusSand_Cheat_AutoQa__ProductId (int32_t storeItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$ProductId
   System_String_o* Dino_BusSand_Cheat_AutoQa__ProductId (int32_t storeItem, const MethodInfo*
   method); */

long * Dino_BusSand_Cheat_AutoQa__ProductId_2343020(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c6a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c6a6 = 1;
  }
  puVar4 = PTR_DAT_04cad2a8;
  puVar3 = PTR_DAT_04cad200;
  puVar1 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,param_1,0);
  plVar7 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar6,*(undefined8 *)puVar4,0);
  plVar8 = *(long **)puVar1;
  if ((bRam0000000004f9b7e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370,plVar8,0);
    bRam0000000004f9b7e2 = 1;
  }
  uStack_28 = 0;
  if ((plVar7 != (long *)0x0) &&
     (lVar9 = *plVar7, plVar8 = plVar7, lVar9 != *(long *)(PTR_DAT_04ca9ac8 + 0x90))) {
    if (lVar9 != *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x02256544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(**(code **)(lVar9 + 0x168))(plVar7,*(undefined8 *)(lVar9 + 0x170));
      return plVar8;
    }
    puVar5 = (undefined8 *)thunk_FUN_0216e9e4(plVar7);
    uStack_28 = *puVar5;
    if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    plVar8 = (long *)System_Double__ToString_4817988(&uStack_28,uVar6,0);
  }
  return plVar8;
}

