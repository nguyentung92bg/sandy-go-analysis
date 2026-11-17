/* IL2CPP: Dino.BusSand.App.SpriteSkin$$ItemIconKey
System_String_o* Dino_BusSand_App_SpriteSkin__ItemIconKey (int32_t itemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SpriteSkin$$ItemIconKey
   System_String_o* Dino_BusSand_App_SpriteSkin__ItemIconKey (int32_t itemId, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_SpriteSkin__ItemIconKey_215e1cc(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9b80b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf18);
    FUN_02132f7c(PTR_DAT_04cabf20);
    FUN_02132f7c(PTR_DAT_04cabf28);
    FUN_02132f7c(PTR_DAT_04cabf30);
    FUN_02132f7c(PTR_DAT_04cabf38);
    FUN_02132f7c(PTR_DAT_04cabf40);
    bRam0000000004f9b80b = 1;
  }
  if (param_1 < 0x2713) {
    puVar1 = (undefined8 *)PTR_DAT_04cabf40;
    if (((param_1 != 0x3eb) && (puVar1 = (undefined8 *)PTR_DAT_04cabf28, param_1 != 0x2711)) &&
       (puVar1 = (undefined8 *)PTR_DAT_04cabf38, param_1 != 0x2712)) {
      return 0;
    }
  }
  else {
    puVar1 = (undefined8 *)PTR_DAT_04cabf18;
    if (((param_1 != 0x2713) && (puVar1 = (undefined8 *)PTR_DAT_04cabf20, param_1 != 0x2714)) &&
       (puVar1 = (undefined8 *)PTR_DAT_04cabf30, param_1 != 0x2715)) {
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 0225e2b4 with catch @ 0225e2d4 */
  return *puVar1;
}

