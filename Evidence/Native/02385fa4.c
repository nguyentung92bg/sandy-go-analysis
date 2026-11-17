/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$<Refresh>b__52_0
System_String_o* Dino_BusSand_App_UI_KitTopBar___Refresh_b__52_0 (Dino_BusSand_App_UI_KitTopBar_o* __this, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$<Refresh>b__52_0
   System_String_o* Dino_BusSand_App_UI_KitTopBar___Refresh_b__52_0
   (Dino_BusSand_App_UI_KitTopBar_o* __this, int64_t n, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitTopBar___Refresh_b__52_0_2285fa4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uStack_28;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02385f5c with catch @ 02385fa4
                        */
  puVar1 = PTR_DAT_04cad330;
                    /* try { // try from 02385fbc to 02485fd3 has its CatchHandler @ 02386038 */
  if ((bRam0000000004f9c15d & 1) == 0) {
                    /* try { // try from 02385fd4 to 02486027 has its CatchHandler @ 02385b54 */
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c15d = 1;
  }
  lVar2 = *(long *)puVar1;
  *(ulong *)(param_1 + 0x38) = param_2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9c19e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    bRam0000000004f9c19e = 1;
  }
  if (999999 < (long)param_2) {
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if ((bRam0000000004f9c29d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa370,0);
      FUN_02132f7c(PTR_DAT_04cb5db0);
      FUN_02132f7c(PTR_DAT_04cb5db8);
      FUN_02132f7c(PTR_DAT_04cb5dc0);
      bRam0000000004f9c29d = 1;
    }
    uStack_28 = 0;
    if ((long)param_2 < 100000) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar3 = System_Int64__ToString_482eba4(&stack0xffffffffffffffe8,uVar3,0);
    }
    else {
      if (param_2 < 10000000) {
        uStack_28 = (param_2 & 0xffffffff) / 1000;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar3 = System_Int64__ToString_482eba4(&uStack_28,uVar3,0);
        puVar4 = (undefined8 *)PTR_DAT_04cb5db0;
      }
      else {
        if (param_2 >> 0x1f != 0) {
          return *(undefined8 *)PTR_DAT_04cb5db8;
        }
        uStack_28 = (param_2 & 0xffffffff) / 1000000;
        if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
        uVar3 = System_Int64__ToString_482eba4(&uStack_28,uVar3,0);
        puVar4 = (undefined8 *)PTR_DAT_04cb5dc0;
      }
      uVar3 = System_String__Concat_46c82e0(uVar3,*puVar4,0);
    }
    return uVar3;
  }
  uVar3 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffe8,0);
  return uVar3;
}

