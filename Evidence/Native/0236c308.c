/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$HeadIconName
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__HeadIconName (int32_t headId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$HeadIconName
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__HeadIconName (int32_t headId, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__HeadIconName_226c308(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c0bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cae5c8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0bf = 1;
  }
  puVar2 = PTR_DAT_04cae5c8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9c30;
  lVar3 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar1;
  }
  else {
    uVar4 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar3,*(undefined8 *)PTR_DAT_04cae5d0,0);
    lVar5 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar4,*(undefined8 *)puVar1,0);
    lVar3 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar3 = lVar5;
    }
  }
  return lVar3;
}

