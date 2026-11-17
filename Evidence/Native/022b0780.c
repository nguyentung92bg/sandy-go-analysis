/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$UnlockSequence
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, bool pending, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$UnlockSequence
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, bool pending, const MethodInfo* method);
    */

long Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_21b0780
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf0b8;
  if ((bRam0000000004f9ba8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf0b8);
    bRam0000000004f9ba8e = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29___ctor_21b2934(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_1);
    *(byte *)(lVar2 + 0x20) = param_2 & 1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

