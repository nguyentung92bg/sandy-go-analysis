/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetNamePlate
bool Dino_BusSand_App_Meta_PlayerIdentity__SetNamePlate (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetNamePlate
   bool Dino_BusSand_App_Meta_PlayerIdentity__SetNamePlate (int32_t id, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__SetNamePlate_226d3e0(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0ca = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  uVar4 = 0;
  if (lVar2 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_PlayerIdentity__IsNamePlateValid_226d0e8(param_1);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
      puVar1 = PTR_DAT_04cabaf8;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar2 + 0x158) = param_1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      Dino_BusSand_App_Meta_Profile__Save_226c548();
      Dino_BusSand_App_Meta_PlayerIdentity__Raise_226c900(2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

