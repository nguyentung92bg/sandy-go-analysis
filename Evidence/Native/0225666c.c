/* IL2CPP: Dino.BusSand.App.QaPilot$$set_Active
void Dino_BusSand_App_QaPilot__set_Active (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$set_Active
   void Dino_BusSand_App_QaPilot__set_Active (bool value, const MethodInfo* method); */

void Dino_BusSand_App_QaPilot__set_Active_215666c(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cab958;
  if ((bRam0000000004f9b7e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab958);
    bRam0000000004f9b7e5 = 1;
  }
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

