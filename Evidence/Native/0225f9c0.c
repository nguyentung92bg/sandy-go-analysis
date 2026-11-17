/* IL2CPP: Dino.BusSand.App.Lang$$Get
System_String_o* Dino_BusSand_App_Lang__Get (System_String_o* key, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$Get
   System_String_o* Dino_BusSand_App_Lang__Get (System_String_o* key, System_Object_array* args,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_Lang__Get_215f9c0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9b81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac078);
                    /* try { // try from 0225f9f8 to 0235fa9f has its CatchHandler @ 0225faa4 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b81c = 1;
  }
  uStack_28 = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar2 & 1) != 0) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Lang__Current_215f3d0();
  uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar3,param_1,&uStack_28);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 0225faa0 to 0235fabb has its CatchHandler @ 0225f988 */
                    /* catch() { ... } // from try @ 0225f9f8 with catch @ 0225faa4 */
    uVar2 = System_String__op_Equality_46d1108
                      (**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
    if ((uVar2 & 1) != 0) {
      return param_1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Lang__English_215f81c();
    uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar3,param_1,&uStack_28);
    if ((uVar2 & 1) == 0) {
      return param_1;
    }
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uStack_28 = System_String__Format_46d3570(uStack_28,param_2,0);
  }
  return uStack_28;
}

