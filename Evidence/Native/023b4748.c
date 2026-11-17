/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$DisplayPrice
System_String_o* Dino_BusSand_App_UI_StorePanel__DisplayPrice (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$DisplayPrice
   System_String_o* Dino_BusSand_App_UI_StorePanel__DisplayPrice (int32_t storeItemId, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c2f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb6220);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2f1 = 1;
  }
  puVar5 = PTR_DAT_04cb6220;
  puVar4 = PTR_DAT_04cad200;
  puVar3 = PTR_DAT_04cad1f8;
  puVar1 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_1,0);
  uVar6 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar6,*(undefined8 *)puVar3,0);
  uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar6,*(undefined8 *)puVar1,0);
  uVar8 = System_String__IsNullOrEmpty_46d2084(uVar7,0);
  uVar6 = *(undefined8 *)puVar5;
  if ((uVar8 & 1) == 0) {
    uVar6 = uVar7;
  }
  return uVar6;
}

