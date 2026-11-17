/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_SecondsLeft
int64_t Dino_BusSand_App_Meta_StarterOffer__get_SecondsLeft (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_SecondsLeft
   int64_t Dino_BusSand_App_Meta_StarterOffer__get_SecondsLeft (const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_StarterOffer__get_SecondsLeft_220cc80(void)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd0e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x1a8) < 1) {
      return 0;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04caa200;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x1a8);
      iVar3 = Dino_BusSand_App_Meta_Monetization__get_StarterHours_2267a48(0);
      lVar4 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar5 = (lVar6 - lVar4) + (long)iVar3 * 0xe10;
      uVar1 = 0;
      if (uVar5 < 0x8000000000000000) {
        uVar1 = uVar5;
      }
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

