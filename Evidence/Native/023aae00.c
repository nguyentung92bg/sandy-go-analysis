/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$NumGrouped
System_String_o* Dino_BusSand_App_UI_CommerceUi__NumGrouped (int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$NumGrouped
   System_String_o* Dino_BusSand_App_UI_CommerceUi__NumGrouped (int64_t n, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_CommerceUi__NumGrouped_22aae00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_04caa370;
  uStack_18 = param_1;
  if ((bRam0000000004f9c29e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cb5e70);
    bRam0000000004f9c29e = 1;
  }
  puVar2 = PTR_DAT_04cb5e70;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  System_Int64__ToString_482ecec(&uStack_18,*(undefined8 *)puVar2,uVar3,0);
  return;
}

