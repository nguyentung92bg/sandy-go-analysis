/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ItemName
System_String_o* Dino_BusSand_Cheat_CheatManager__ItemName (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ItemName
   System_String_o* Dino_BusSand_Cheat_CheatManager__ItemName (int32_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_Cheat_CheatManager__ItemName_236599c(int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iStack_14;
  
  iStack_14 = param_1;
  if ((bRam0000000004f9c758 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6230);
    FUN_02132f7c(PTR_DAT_04cba908);
    FUN_02132f7c(PTR_DAT_04cba910);
    FUN_02132f7c(PTR_DAT_04cb9928);
    FUN_02132f7c(PTR_DAT_04cb9930);
    FUN_02132f7c(PTR_DAT_04cb6070);
    FUN_02132f7c(PTR_DAT_04cb9950);
    FUN_02132f7c(PTR_DAT_04cb9958);
    FUN_02132f7c(PTR_DAT_04cba918);
    bRam0000000004f9c758 = 1;
  }
  if (param_1 < 0x2712) {
    if (param_1 < 0x3eb) {
      puVar2 = (undefined8 *)PTR_DAT_04cb6230;
      if ((param_1 != 0x3e9) && (puVar2 = (undefined8 *)PTR_DAT_04cb6070, param_1 != 0x3ea)) {
LAB_02465b08:
        uVar1 = System_Int32__ToString_482d750(&iStack_14,0);
                    /* try { // try from 02465b18 to 02565b1f has its CatchHandler @ 02465c14 */
                    /* try { // try from 02465b20 to 02565b2b has its CatchHandler @ 02465c18 */
        uVar1 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba908,uVar1,0);
        return uVar1;
      }
    }
    else {
      puVar2 = (undefined8 *)PTR_DAT_04cba918;
      if ((param_1 != 0x3eb) && (puVar2 = (undefined8 *)PTR_DAT_04cba910, param_1 != 0x2711))
      goto LAB_02465b08;
    }
  }
  else if (param_1 < 0x2714) {
    puVar2 = (undefined8 *)PTR_DAT_04cb9958;
    if ((param_1 != 0x2712) && (puVar2 = (undefined8 *)PTR_DAT_04cb9950, param_1 != 0x2713))
    goto LAB_02465b08;
  }
  else {
    puVar2 = (undefined8 *)PTR_DAT_04cb9930;
    if ((param_1 != 0x2714) && (puVar2 = (undefined8 *)PTR_DAT_04cb9928, param_1 != 0x2715))
    goto LAB_02465b08;
  }
  return *puVar2;
}

