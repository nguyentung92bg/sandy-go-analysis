/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_CanRevive
bool Dino_BusSand_App_Meta_Economy__get_CanRevive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_CanRevive
   bool Dino_BusSand_App_Meta_Economy__get_CanRevive (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcc3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcc3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = Dino_BusSand_App_Meta_Economy__get_RevivesUsed_220487c();
  iVar3 = Dino_BusSand_App_Meta_Monetization__get_ReviveMax_2266a80(0);
  return iVar2 < iVar3;
}

