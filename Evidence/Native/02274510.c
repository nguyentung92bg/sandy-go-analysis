/* IL2CPP: Dino.BusSand.App.Analytics$$ItemName
System_String_o* Dino_BusSand_App_Analytics__ItemName (int32_t id, bool infinite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Analytics$$ItemName
   System_String_o* Dino_BusSand_App_Analytics__ItemName (int32_t id, bool infinite, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Analytics__ItemName_2174510(int param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9b8ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cace18);
    FUN_02132f7c(PTR_DAT_04cace20);
    FUN_02132f7c(PTR_DAT_04cace28);
    FUN_02132f7c(PTR_DAT_04cace30);
    FUN_02132f7c(PTR_DAT_04cace38);
    FUN_02132f7c(PTR_DAT_04cace40);
    FUN_02132f7c(PTR_DAT_04cace48);
    FUN_02132f7c(PTR_DAT_04cace50);
    FUN_02132f7c(PTR_DAT_04cacc90);
    bRam0000000004f9b8ca = 1;
  }
  if (param_1 < 0x2712) {
    if (param_1 < 0x3eb) {
      puVar1 = (undefined8 *)PTR_DAT_04cacc90;
      if (param_1 != 0x3e9) {
        if (param_1 != 0x3ea) {
          return 0;
        }
        puVar1 = (undefined8 *)PTR_DAT_04cace38;
        if ((param_2 & 1) != 0) {
          puVar1 = (undefined8 *)PTR_DAT_04cace18;
                    /* catch() { ... } // from try @ 0227461c with catch @ 022745d4 */
        }
      }
    }
    else {
      puVar1 = (undefined8 *)PTR_DAT_04cace40;
                    /* try { // try from 02274610 to 0237461b has its CatchHandler @ 0227463c */
      if ((param_1 != 0x3eb) && (puVar1 = (undefined8 *)PTR_DAT_04cace20, param_1 != 0x2711)) {
        return 0;
      }
    }
  }
  else if (param_1 < 0x2714) {
    puVar1 = (undefined8 *)PTR_DAT_04cace28;
    if ((param_1 != 0x2712) && (puVar1 = (undefined8 *)PTR_DAT_04cace48, param_1 != 0x2713)) {
      return 0;
    }
  }
  else {
    puVar1 = (undefined8 *)PTR_DAT_04cace50;
    if ((param_1 != 0x2714) && (puVar1 = (undefined8 *)PTR_DAT_04cace30, param_1 != 0x2715)) {
      return 0;
    }
  }
  return *puVar1;
}

