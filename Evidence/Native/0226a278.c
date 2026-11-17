/* IL2CPP: Dino.BusSand.App.GameApp$$<OfferSoftUpdate>g__Ready|89_0
bool Dino_BusSand_App_GameApp___OfferSoftUpdate_g__Ready_89_0 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$<OfferSoftUpdate>g__Ready|89_0
   bool Dino_BusSand_App_GameApp___OfferSoftUpdate_g__Ready_89_0 (Dino_BusSand_App_GameApp_o*
   __this, const MethodInfo* method); */

byte Dino_BusSand_App_GameApp___OfferSoftUpdate_g__Ready_89_0_216a278(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  if ((bRam0000000004f9b884 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac518);
    bRam0000000004f9b884 = 1;
  }
  bVar1 = 0;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_0226a2f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(*(long *)(param_1 + 0x28),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0226a2f4;
      bVar1 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac518);
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1 & 1;
}

