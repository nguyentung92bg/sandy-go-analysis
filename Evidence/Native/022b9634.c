/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_Pack
int32_t Dino_BusSand_App_UI_GoldenView__get_Pack (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_Pack
   int32_t Dino_BusSand_App_UI_GoldenView__get_Pack (Dino_BusSand_App_UI_GoldenView_o* __this, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_GoldenView__get_Pack_21b9634(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34
                      (*(long *)(param_1 + 0x10),3);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x10);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

