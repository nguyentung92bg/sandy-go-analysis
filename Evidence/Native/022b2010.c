/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnChanged
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnChanged (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnChanged
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnChanged
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnChanged_21b2010(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x5d) == '\0') && (*(long *)(param_1 + 0x40) != 0)) {
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader_21b00a4(param_1);
    if ((bRam0000000004f9ba84 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad708);
      bRam0000000004f9ba84 = 1;
    }
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(lVar1 + 0x18) <= iVar2) {
          return;
        }
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshItem_21b0aac(param_1,iVar2);
        lVar1 = *(long *)(param_1 + 0x50);
        iVar2 = iVar2 + 1;
      } while (lVar1 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

