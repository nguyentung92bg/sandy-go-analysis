/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$CloseClip
System_String_o* Dino_BusSand_App_UI_EndOfLevelRules__CloseClip (int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$CloseClip
   System_String_o* Dino_BusSand_App_UI_EndOfLevelRules__CloseClip (int32_t variant, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_EndOfLevelRules__CloseClip_22bf844(int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000004f9c349 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65e0);
    FUN_02132f7c(PTR_DAT_04cb65e8);
    bRam0000000004f9c349 = 1;
  }
  if (param_1 < 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)PTR_DAT_04cb65e8;
    if (param_1 == 1) {
      puVar2 = (undefined8 *)PTR_DAT_04cb65e0;
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}

