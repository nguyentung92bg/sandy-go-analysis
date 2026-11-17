/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_NamePlate
int32_t Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_NamePlate
   int32_t Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0c8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = 0x61a81;
  lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x158);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_PlayerIdentity__IsNamePlateValid_226d0e8(uVar1);
    puVar2 = PTR_DAT_04cabaf8;
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar3 + 0x158) = 0x61a81;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
    }
    else {
      uVar5 = *(undefined4 *)(lVar3 + 0x158);
    }
  }
  return uVar5;
}

