/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$InterProtectSeconds
int32_t Dino_BusSand_App_Meta_Monetization__InterProtectSeconds (int32_t installDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$InterProtectSeconds
   int32_t Dino_BusSand_App_Meta_Monetization__InterProtectSeconds (int32_t installDay, const
   MethodInfo* method); */

uint Dino_BusSand_App_Meta_Monetization__InterProtectSeconds_2267640(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c079 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c079 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_Interstitial_2267474();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x38);
    if (lVar4 == 0) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0);
    }
    if (0 < param_1) {
      if (lVar4 == 0) goto LAB_0236772c;
      if (param_1 <= (int)*(uint *)(lVar4 + 0x18)) {
        if (param_1 - 1U < *(uint *)(lVar4 + 0x18)) {
          uVar2 = *(uint *)(lVar4 + (ulong)(param_1 - 1U) * 4 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
          }
          uVar1 = 0;
          if (uVar2 < 0x80000000) {
            uVar1 = uVar2;
          }
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
    return 0;
  }
LAB_0236772c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

