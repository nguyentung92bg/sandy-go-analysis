/* IL2CPP: Dino.BusSand.App.Meta.Profile$$TrySpend
bool Dino_BusSand_App_Meta_Profile__TrySpend (int32_t id, int64_t n, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$TrySpend
   bool Dino_BusSand_App_Meta_Profile__TrySpend (int32_t id, int64_t n, System_String_o* reason,
   const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Profile__TrySpend_2272968
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0fb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1);
  if (param_2 <= lVar2) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Add_2272578(param_1,-param_2,param_3);
  }
  return param_2 <= lVar2;
}

