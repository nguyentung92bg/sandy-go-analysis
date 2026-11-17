/* IL2CPP: Dino.BusSand.App.QaPilot$$Hook
void Dino_BusSand_App_QaPilot__Hook (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$Hook
   void Dino_BusSand_App_QaPilot__Hook (const MethodInfo* method); */

ulong Dino_BusSand_App_QaPilot__Hook_21567dc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = Dino_BusSand_App_QaPilot__LaunchToken_2156808();
                    /* try { // try from 022567e8 to 0235685f has its CatchHandler @ 0225655c */
  uVar2 = System_String__IsNullOrEmpty_46d2084(uVar1,0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  if (cRam0000000004f9b88c == '\0') {
    FUN_02132f7c(PTR_DAT_04cab958);
    cRam0000000004f9b88c = '\x01';
  }
  if (**(char **)(*(long *)PTR_DAT_04cab958 + 0xb8) == '\0') {
    uVar2 = Dino_BusSand_App_QaPilot__Valid_2156f80(uVar1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    Dino_BusSand_App_QaPilot__Start_21572f8();
  }
  return 1;
}

