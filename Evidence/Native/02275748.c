/* IL2CPP: Dino.BusSand.App.SimulatedAds$$FakeAd
System_Collections_IEnumerator_o* Dino_BusSand_App_SimulatedAds__FakeAd (System_String_o* label, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds$$FakeAd
   System_Collections_IEnumerator_o* Dino_BusSand_App_SimulatedAds__FakeAd (System_String_o* label,
   System_Action_o* done, const MethodInfo* method); */

long Dino_BusSand_App_SimulatedAds__FakeAd_2175748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 02275748 to 02375787 has its CatchHandler @ 0227571c */
  puVar1 = PTR_DAT_04cacf68;
                    /* catch() { ... } // from try @ 02275740 with catch @ 0227576c */
  if ((bRam0000000004f9b8d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf68);
    bRam0000000004f9b8d4 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  return lVar2;
}

