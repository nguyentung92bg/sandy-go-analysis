/* IL2CPP: Dino.BusSand.App.MiniJson$$Str
System_String_o* Dino_BusSand_App_MiniJson__Str (Il2CppObject* o, System_String_o* fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Str
   System_String_o* Dino_BusSand_App_MiniJson__Str (Il2CppObject* o, System_String_o* fallback,
   const MethodInfo* method); */

long * Dino_BusSand_App_MiniJson__Str_21564d0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9b7e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9b7e2 = 1;
  }
  uStack_28 = 0;
  if ((param_1 != (long *)0x0) &&
     (lVar4 = *param_1, param_2 = param_1, lVar4 != *(long *)(PTR_DAT_04ca9ac8 + 0x90))) {
    if (lVar4 != *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x02256544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar1 = (long *)(**(code **)(lVar4 + 0x168))(param_1,*(undefined8 *)(lVar4 + 0x170));
      return plVar1;
    }
    puVar2 = (undefined8 *)thunk_FUN_0216e9e4(param_1);
                    /* try { // try from 0225655c to 02356587 has its CatchHandler @ 0225655c
                       catch() { ... } // from try @ 0225655c with catch @ 0225655c
                       catch() { ... } // from try @ 022566dc with catch @ 0225655c
                       catch() { ... } // from try @ 02256718 with catch @ 0225655c
                       catch() { ... } // from try @ 022567e8 with catch @ 0225655c
                       catch() { ... } // from try @ 022568cc with catch @ 0225655c */
    uStack_28 = *puVar2;
    if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                    /* try { // try from 02256588 to 02356593 has its CatchHandler @ 022568cc */
    param_2 = (long *)System_Double__ToString_4817988(&uStack_28,uVar3,0);
  }
  return param_2;
}

