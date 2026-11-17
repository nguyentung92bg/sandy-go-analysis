/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Randomize
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__Randomize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Randomize
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__Randomize (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__Randomize_226ed30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0d8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990();
  uVar3 = Dino_BusSand_App_Meta_PlayerIdentity__RandomName_226e084();
  iVar6 = 0x32;
  do {
    uVar4 = System_String__op_Equality_46d1108(uVar3,uVar2,0);
    if ((uVar4 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_PlayerIdentity__RandomName_226e084();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar4 = System_String__op_Inequality_46d110c(uVar3,uVar2,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw_226e300(uVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar5 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x160);
  }
  return uVar3;
}

