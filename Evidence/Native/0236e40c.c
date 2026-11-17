/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetPlayerName
bool Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerName (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetPlayerName
   bool Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerName (System_String_o* name, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerName_226e40c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0d2 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar3 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_PlayerIdentity__TryValidateName_226e4ec(param_1,&uStack_28);
    uVar2 = uStack_28;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = System_String__op_Equality_46d1108(uVar2,*(undefined8 *)(lVar3 + 0x160),0);
      uVar2 = uStack_28;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw_226e300(uVar2);
        return 1;
      }
    }
  }
  return 0;
}

