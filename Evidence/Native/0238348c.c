/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Num
System_String_o* Dino_BusSand_App_UI_UiKit__Num (int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Num
   System_String_o* Dino_BusSand_App_UI_UiKit__Num (int64_t n, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiKit__Num_228348c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uStack_28;
  ulong uStack_18;
  
  uStack_18 = param_1;
  if ((bRam0000000004f9c19e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    bRam0000000004f9c19e = 1;
  }
  if (999999 < (long)param_1) {
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_18 = param_1;
    if ((bRam0000000004f9c29d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa370,0);
      FUN_02132f7c(PTR_DAT_04cb5db0);
      FUN_02132f7c(PTR_DAT_04cb5db8);
      FUN_02132f7c(PTR_DAT_04cb5dc0);
      bRam0000000004f9c29d = 1;
    }
    uStack_28 = 0;
    if ((long)param_1 < 100000) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar1 = System_Int64__ToString_482eba4(&uStack_18,uVar1,0);
    }
    else {
      if (param_1 < 10000000) {
        uStack_28 = (param_1 & 0xffffffff) / 1000;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar1 = System_Int64__ToString_482eba4(&uStack_28,uVar1,0);
        puVar2 = (undefined8 *)PTR_DAT_04cb5db0;
      }
      else {
        if (param_1 >> 0x1f != 0) {
          return *(undefined8 *)PTR_DAT_04cb5db8;
        }
        uStack_28 = (param_1 & 0xffffffff) / 1000000;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar1 = System_Int64__ToString_482eba4(&uStack_28,uVar1,0);
        puVar2 = (undefined8 *)PTR_DAT_04cb5dc0;
      }
      uVar1 = System_String__Concat_46c82e0(uVar1,*puVar2,0);
    }
    return uVar1;
  }
  uVar1 = System_Int64__ToString_482e7e4(&uStack_18,0);
  return uVar1;
}

