/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetHeadIcon
bool Dino_BusSand_App_Meta_PlayerIdentity__SetHeadIcon (int32_t headId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$SetHeadIcon
   bool Dino_BusSand_App_Meta_PlayerIdentity__SetHeadIcon (int32_t headId, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__SetHeadIcon_226c424(int param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cae5c8);
    bRam0000000004f9c0c1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  uVar4 = 0;
  if (lVar3 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4();
    if (iVar2 == param_1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cae5c8,param_1,0);
      uVar4 = 0;
      if (lVar3 != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
        puVar1 = PTR_DAT_04cabaf8;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(int *)(lVar3 + 0x150) = param_1;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        Dino_BusSand_App_Meta_Profile__Save_226c548();
        Dino_BusSand_App_Meta_PlayerIdentity__Raise_226c900(0);
        Dino_BusSand_App_Meta_PlayerIdentity__TrackProfileSave_226ca14();
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

