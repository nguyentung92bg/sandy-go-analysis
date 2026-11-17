/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$DecorateLockTips
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__DecorateLockTips (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$DecorateLockTips
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__DecorateLockTips (int32_t id, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__DecorateLockTips_226dbc8(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb4788);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0ce = 1;
  }
  puVar4 = PTR_DAT_04cb4788;
  puVar2 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__Decorate_226cc9c(param_1);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)puVar4,0);
  lVar6 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar5,*(undefined8 *)puVar2,0);
  lVar1 = *(long *)puVar2;
  if (lVar6 != 0) {
    lVar1 = lVar6;
  }
  return lVar1;
}

