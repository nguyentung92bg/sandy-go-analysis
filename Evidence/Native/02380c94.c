/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$CloseKey
System_String_o* Dino_BusSand_App_UI_KitPopup__CloseKey (int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$CloseKey
   System_String_o* Dino_BusSand_App_UI_KitPopup__CloseKey (int32_t t, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitPopup__CloseKey_2280c94(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cb4d80;
  puVar1 = (undefined8 *)PTR_DAT_04cb4d78;
  puVar2 = (undefined8 *)PTR_DAT_04cb4d70;
  if ((bRam0000000004f9c145 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4d70);
    FUN_02132f7c(PTR_DAT_04cb4d80);
    FUN_02132f7c(PTR_DAT_04cb4d78);
    bRam0000000004f9c145 = 1;
  }
  if (param_1 != 1) {
    puVar1 = (undefined8 *)puVar3;
  }
  if (param_1 != 2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

