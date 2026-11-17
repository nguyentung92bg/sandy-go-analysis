/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_HeadIconString
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIconString (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_HeadIconString
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIconString (const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIconString_226c3d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0c0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4();
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
  lVar4 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,uVar3,0);
  if (lVar4 == 0) {
    lVar4 = *(long *)puVar1;
  }
  else {
    uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cae5d0,0);
    lVar6 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar5,*(undefined8 *)puVar1,0);
    lVar4 = *(long *)puVar1;
    if (lVar6 != 0) {
      lVar4 = lVar6;
    }
  }
  return lVar4;
}

