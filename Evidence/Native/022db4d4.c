/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RegisterContinue
void Dino_BusSand_App_UI_PassportUi__RegisterContinue (System_Action_int__o* revive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RegisterContinue
   void Dino_BusSand_App_UI_PassportUi__RegisterContinue (System_Action_int__o* revive, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__RegisterContinue_21db4d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cb0350;
  if ((bRam0000000004f9bb83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0350);
    bRam0000000004f9bb83 = 1;
  }
  puVar2 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar2 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

