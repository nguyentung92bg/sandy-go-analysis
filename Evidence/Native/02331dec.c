/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$S
System_String_o* Dino_BusSand_App_Meta_GiftPackConfig__S (System_Collections_Generic_Dictionary_string__object__o* r, System_String_o* k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$S
   System_String_o* Dino_BusSand_App_Meta_GiftPackConfig__S
   (System_Collections_Generic_Dictionary_string__object__o* r, System_String_o* k, const
   MethodInfo* method); */

long * Dino_BusSand_App_Meta_GiftPackConfig__S_2231dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9be7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9be7e = 1;
  }
  plVar4 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(param_1,param_2,0);
  plVar5 = *(long **)puVar1;
  if ((bRam0000000004f9b7e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370,plVar5,0);
    bRam0000000004f9b7e2 = 1;
  }
  uStack_28 = 0;
  if ((plVar4 != (long *)0x0) &&
     (lVar6 = *plVar4, plVar5 = plVar4, lVar6 != *(long *)(PTR_DAT_04ca9ac8 + 0x90))) {
    if (lVar6 != *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x02256544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(**(code **)(lVar6 + 0x168))(plVar4,*(undefined8 *)(lVar6 + 0x170));
      return plVar5;
    }
    puVar2 = (undefined8 *)thunk_FUN_0216e9e4(plVar4);
    uStack_28 = *puVar2;
    if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    plVar5 = (long *)System_Double__ToString_4817988(&uStack_28,uVar3,0);
  }
  return plVar5;
}

