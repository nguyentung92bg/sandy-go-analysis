/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_HasName
bool Dino_BusSand_App_Meta_PlayerIdentity__get_HasName (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_HasName
   bool Dino_BusSand_App_Meta_PlayerIdentity__get_HasName (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PlayerIdentity__get_HasName_226dff8(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0d0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar3 + 0x160),0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}

