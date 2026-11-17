/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_ReviveMax
int32_t Dino_BusSand_App_Meta_Monetization__get_ReviveMax (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_ReviveMax
   int32_t Dino_BusSand_App_Meta_Monetization__get_ReviveMax (const MethodInfo* method); */

int Dino_BusSand_App_Meta_Monetization__get_ReviveMax_2266a80(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c063 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c063 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34();
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = Dino_BusSand_App_Meta_Monetization__get_RevivePrices_22669d8();
    if (lVar4 != 0) {
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar6 + 0x18);
      }
      uVar7 = *(ulong *)(lVar4 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
      }
      iVar3 = System_Math__Max_4830fc8(uVar7 & 0xffffffff,uVar5,0);
      iVar1 = 10;
      if (iVar3 < 0xb) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

