/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_RevivePrice
int32_t Dino_BusSand_App_Meta_Economy__get_RevivePrice (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_RevivePrice
   int32_t Dino_BusSand_App_Meta_Economy__get_RevivePrice (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcc1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcc1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_Economy__get_RevivesUsed_220487c();
  if ((bRam0000000004f9c064 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200,0);
    bRam0000000004f9c064 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_Monetization__get_RevivePrices_22669d8();
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = System_Math__Min_4831118(uVar2,*(int *)(lVar4 + 0x18) + -1,0);
    uVar3 = System_Math__Max_4830fc8(0,uVar2,0);
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      return *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

