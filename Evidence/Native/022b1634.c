/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$FlyReward
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, int32_t coins, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$FlyReward
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t i, int32_t coins, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_21b1634
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf158;
  if ((bRam0000000004f9ba89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf158);
    bRam0000000004f9ba89 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__FlyReward_d__24___ctor_21b25f8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    *(undefined4 *)(lVar2 + 0x2c) = param_3;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

