/* IL2CPP: Dino.BusSand.App.QaPilot$$Activate
bool Dino_BusSand_App_QaPilot__Activate (System_String_o* token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$Activate
   bool Dino_BusSand_App_QaPilot__Activate (System_String_o* token, const MethodInfo* method); */

undefined8 Dino_BusSand_App_QaPilot__Activate_2156f14(undefined8 param_1)

{
  ulong uVar1;
  
  if (cRam0000000004f9b88c == '\0') {
    FUN_02132f7c(PTR_DAT_04cab958);
    cRam0000000004f9b88c = '\x01';
  }
  if (**(char **)(*(long *)PTR_DAT_04cab958 + 0xb8) == '\0') {
    uVar1 = Dino_BusSand_App_QaPilot__Valid_2156f80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    Dino_BusSand_App_QaPilot__Start_21572f8();
  }
  return 1;
}

