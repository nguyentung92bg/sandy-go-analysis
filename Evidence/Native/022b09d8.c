/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$StateOf
int32_t Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$StateOf
   int32_t Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__StateOf_21b09d8(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9ba83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    bRam0000000004f9ba83 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(param_1 + 0x40),0);
    if (((*(long *)(param_1 + 0x48) != 0) &&
        (uVar2 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                           (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_04caf0a8),
        lVar1 != 0)) && (*(long *)(lVar1 + 0x30) != 0)) {
      uVar3 = System_Collections_Generic_List_int___Contains_3a2c3ec
                        (*(long *)(lVar1 + 0x30),uVar2 & 0xffffffff,*(undefined8 *)PTR_DAT_04cad860)
      ;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(lVar1 + 0x10) < (int)(uVar2 >> 0x20)) {
          uVar4 = 2;
          if (*(int *)(lVar1 + 0x10) < 1) {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

