/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemRow
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_UI_CommerceUi__ItemRow (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemRow
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_UI_CommerceUi__ItemRow
   (int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi__ItemRow_22ab158(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c2a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2d00);
    bRam0000000004f9c2a0 = 1;
  }
  puVar2 = PTR_DAT_04cb2d00;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cac018;
  uVar4 = *(undefined8 *)puVar2;
  uStack_24 = param_1;
  if ((bRam0000000004f9b811 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018,param_1,0);
    bRam0000000004f9b811 = 1;
  }
  uVar3 = System_Int32__ToString_482d750(&uStack_24,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Tables__Row_215ee18(uVar4,uVar3);
  return;
}

