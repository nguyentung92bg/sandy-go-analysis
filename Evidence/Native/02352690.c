/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$HallNode
System_String_o* Dino_BusSand_App_Meta_SystemOpenFeature__HallNode (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$HallNode
   System_String_o* Dino_BusSand_App_Meta_SystemOpenFeature__HallNode (int32_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_SystemOpenFeature__HallNode_2252690(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9bfdb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae700);
    FUN_02132f7c(PTR_DAT_04cb3cf0);
    FUN_02132f7c(PTR_DAT_04cb0f28);
    FUN_02132f7c(PTR_DAT_04cb0b70);
    FUN_02132f7c(PTR_DAT_04cb0a48);
    FUN_02132f7c(PTR_DAT_04cb3cf8);
    FUN_02132f7c(PTR_DAT_04cadc68);
    bRam0000000004f9bfdb = 1;
  }
  if (param_1 < 5) {
    puVar1 = (undefined8 *)PTR_DAT_04cae700;
    if (((param_1 != 2) && (puVar1 = (undefined8 *)PTR_DAT_04cb0b70, param_1 != 3)) &&
       (puVar1 = (undefined8 *)PTR_DAT_04cadc68, param_1 != 4)) {
      return 0;
    }
  }
  else if (param_1 < 7) {
    puVar1 = (undefined8 *)PTR_DAT_04cb0f28;
    if ((param_1 != 5) && (puVar1 = (undefined8 *)PTR_DAT_04cb0a48, param_1 != 6)) {
      return 0;
    }
  }
  else {
    puVar1 = (undefined8 *)PTR_DAT_04cb3cf8;
    if ((param_1 != 7) && (puVar1 = (undefined8 *)PTR_DAT_04cb3cf0, param_1 != 0xb)) {
      return 0;
    }
  }
  return *puVar1;
}

