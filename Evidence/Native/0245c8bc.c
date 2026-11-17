/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$OnOff
System_String_o* Dino_BusSand_Cheat_CheatManager__OnOff (bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$OnOff
   System_String_o* Dino_BusSand_Cheat_CheatManager__OnOff (bool on, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(ulong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04cba470;
  puVar1 = (undefined8 *)PTR_DAT_04cba468;
  if ((bRam0000000004f9c77c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba468);
    FUN_02132f7c(PTR_DAT_04cba470);
    bRam0000000004f9c77c = 1;
  }
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined8 *)puVar2;
  }
  return *puVar1;
}

