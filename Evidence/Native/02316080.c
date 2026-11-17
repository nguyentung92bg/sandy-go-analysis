/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResourceName
System_String_o* Dino_BusSand_App_Meta_GameTracking__ResourceName (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResourceName
   System_String_o* Dino_BusSand_App_Meta_GameTracking__ResourceName (int32_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_GameTracking__ResourceName_2216080(int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iStack_14;
  
  iStack_14 = param_1;
  if ((bRam0000000004f9bd58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb20);
    FUN_02132f7c(PTR_DAT_04cb2508);
    FUN_02132f7c(PTR_DAT_04cb20f8);
    FUN_02132f7c(PTR_DAT_04cb2510);
    FUN_02132f7c(PTR_DAT_04cb2108);
    FUN_02132f7c(PTR_DAT_04cb2518);
    FUN_02132f7c(PTR_DAT_04cb2120);
    FUN_02132f7c(PTR_DAT_04cb2520);
    FUN_02132f7c(PTR_DAT_04cb2528);
    bRam0000000004f9bd58 = 1;
  }
  if (param_1 < 0x2712) {
    if (param_1 < 0x3eb) {
      puVar2 = (undefined8 *)PTR_DAT_04cb2108;
      if ((param_1 != 0x3e9) && (puVar2 = (undefined8 *)PTR_DAT_04cb2520, param_1 != 0x3ea)) {
LAB_023161ec:
        uVar1 = System_Int32__ToString_482d750(&iStack_14,0);
        uVar1 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb2508,uVar1,0);
        return uVar1;
      }
    }
    else {
      puVar2 = (undefined8 *)PTR_DAT_04cb2518;
      if ((param_1 != 0x3eb) && (puVar2 = (undefined8 *)PTR_DAT_04cb2528, param_1 != 0x2711))
      goto LAB_023161ec;
    }
  }
  else if (param_1 < 0x2714) {
    puVar2 = (undefined8 *)PTR_DAT_04cabb20;
    if ((param_1 != 0x2712) && (puVar2 = (undefined8 *)PTR_DAT_04cb20f8, param_1 != 0x2713))
    goto LAB_023161ec;
  }
  else {
    puVar2 = (undefined8 *)PTR_DAT_04cb2510;
    if ((param_1 != 0x2714) && (puVar2 = (undefined8 *)PTR_DAT_04cb2120, param_1 != 0x2715))
    goto LAB_023161ec;
  }
  return *puVar2;
}

