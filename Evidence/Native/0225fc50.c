/* IL2CPP: Dino.BusSand.App.Lang$$DeviceCode
System_String_o* Dino_BusSand_App_Lang__DeviceCode (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$DeviceCode
   System_String_o* Dino_BusSand_App_Lang__DeviceCode (const MethodInfo* method); */

void Dino_BusSand_App_Lang__DeviceCode_215fc50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9b81e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caa7c8);
    bRam0000000004f9b81e = 1;
  }
  puVar3 = PTR_DAT_04cab550;
  puVar2 = PTR_DAT_04caa7c8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_28 = UnityEngine_Application__get_systemLanguage_4352dcc(0);
  uStack_38 = *(undefined8 *)puVar2;
  uStack_30 = 0xffffffffffffffff;
  uVar4 = System_Enum__ToString_4863070(&uStack_38,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  Dino_BusSand_App_Lang__CodeFor_215fd10(uVar4);
  return;
}

