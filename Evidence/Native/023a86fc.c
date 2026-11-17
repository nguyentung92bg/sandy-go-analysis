/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Count
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_CommerceCoinBar__Count (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int64_t from, int64_t to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Count
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_CommerceCoinBar__Count
   (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int64_t from, int64_t to, float duration, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceCoinBar__Count_22a86fc
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb5dc8;
  if ((bRam0000000004f9c295 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5dc8);
    bRam0000000004f9c295 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

