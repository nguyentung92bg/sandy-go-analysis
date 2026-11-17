/* IL2CPP: Dino.BusSand.App.BootTrace$$F
System_String_o* Dino_BusSand_App_BootTrace__F (float s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$F
   System_String_o* Dino_BusSand_App_BootTrace__F (float s, const MethodInfo* method); */

void Dino_BusSand_App_BootTrace__F_214eaf0(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_04caa370;
  uStack_14 = param_1;
  if ((bRam0000000004f9b7b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cab2c8);
    bRam0000000004f9b7b4 = 1;
  }
  puVar2 = PTR_DAT_04cab2c8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  System_Single__ToString_4842760(&uStack_14,*(undefined8 *)puVar2,uVar3,0);
  return;
}

