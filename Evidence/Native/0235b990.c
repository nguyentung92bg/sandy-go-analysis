/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_PlayerName
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_PlayerName
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName (const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0d1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  puVar4 = (undefined8 *)PTR_DAT_04ca9c30;
  if (lVar2 == 0) {
LAB_0235ba4c:
    return *puVar4;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar2 != 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar2 + 0x160),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_PlayerIdentity__RandomName_226e084();
      Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw_226e300();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x160);
      goto LAB_0235ba4c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

