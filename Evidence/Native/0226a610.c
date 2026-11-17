/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<Boot>b__84_7
void Dino_BusSand_App_GameApp___c___Boot_b__84_7 (Dino_BusSand_App_GameApp___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<Boot>b__84_7
   void Dino_BusSand_App_GameApp___c___Boot_b__84_7 (Dino_BusSand_App_GameApp___c_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___c___Boot_b__84_7_216a610(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b899 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b899 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabaa8;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x138) = *(int *)(lVar2 + 0x138) + 1;
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cabaa8;
    if ((bRam0000000004f9b8d7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaa8);
      bRam0000000004f9b8d7 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Ads__get_SessionNow_2175fd8();
    uVar4 = NEON_fmov(0xbf800000,4);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    *(undefined4 *)(lVar2 + 0xc) = uVar3;
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(undefined4 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

