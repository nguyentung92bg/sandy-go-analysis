/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$BuyPlacement
System_String_o* Dino_BusSand_App_Meta_GameTracking__BuyPlacement (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$BuyPlacement
   System_String_o* Dino_BusSand_App_Meta_GameTracking__BuyPlacement (int32_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_GameTracking__BuyPlacement_2217200(int param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000004f9bd5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2608);
    FUN_02132f7c(PTR_DAT_04cb2610);
    FUN_02132f7c(PTR_DAT_04cb2618);
    FUN_02132f7c(PTR_DAT_04cb2620);
    bRam0000000004f9bd5c = 1;
  }
  puVar1 = PTR_DAT_04cac498;
  if (param_1 == 0x3e9) {
    lVar2 = *(long *)PTR_DAT_04cac498;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    param_1 = *(int *)(*(long *)(lVar2 + 0xb8) + 100);
    puVar3 = (undefined8 *)PTR_DAT_04cb2610;
    if (param_1 == 0) goto LAB_023172f8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      param_1 = *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 100);
    }
  }
  puVar3 = (undefined8 *)PTR_DAT_04cb2620;
  if ((((param_1 != 0x3ea) && (puVar3 = (undefined8 *)PTR_DAT_04cb2618, param_1 != 0x3eb)) &&
      (puVar3 = (undefined8 *)PTR_DAT_04cb2618, param_1 != 0x2711)) &&
     (puVar3 = (undefined8 *)PTR_DAT_04cb2608, param_1 < 0x2712)) {
    puVar3 = (undefined8 *)PTR_DAT_04cb2610;
  }
LAB_023172f8:
  return *puVar3;
}

