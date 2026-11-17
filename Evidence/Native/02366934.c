/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RevivePrice
int32_t Dino_BusSand_App_Meta_Monetization__get_RevivePrice (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RevivePrice
   int32_t Dino_BusSand_App_Meta_Monetization__get_RevivePrice (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Monetization__get_RevivePrice_2266934(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000004f9c064 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c064 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_Monetization__get_RevivePrices_22669d8();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar1 = System_Math__Min_4831118(0,*(int *)(lVar3 + 0x18) + -1,0);
  uVar2 = System_Math__Max_4830fc8(0,uVar1,0);
  if (uVar2 < *(uint *)(lVar3 + 0x18)) {
    return *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

