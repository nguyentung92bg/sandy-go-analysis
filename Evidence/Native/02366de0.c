/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$WinAdOffered
bool Dino_BusSand_App_Meta_Monetization__WinAdOffered (int32_t wonLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$WinAdOffered
   bool Dino_BusSand_App_Meta_Monetization__WinAdOffered (int32_t wonLevel, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_Monetization__WinAdOffered_2266de0(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c069 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c069 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34();
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x1c) == '\0') {
      bVar2 = false;
    }
    else {
      iVar3 = Dino_BusSand_App_Meta_Monetization__get_WinAdFromLevel_2266e58();
      bVar2 = iVar3 <= param_1;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

