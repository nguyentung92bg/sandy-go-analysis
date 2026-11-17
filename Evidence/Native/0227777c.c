/* IL2CPP: Dino.BusSand.App.Ads$$WaitForRewarded
System_Collections_IEnumerator_o* Dino_BusSand_App_Ads__WaitForRewarded (System_String_o* slot, System_Action_string__o* then, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$WaitForRewarded
   System_Collections_IEnumerator_o* Dino_BusSand_App_Ads__WaitForRewarded (System_String_o* slot,
   System_Action_string__o* then, const MethodInfo* method); */

long Dino_BusSand_App_Ads__WaitForRewarded_217777c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cad0d0;
  if ((bRam0000000004f9b8e6 & 1) == 0) {
                    /* try { // try from 022777a4 to 023777af has its CatchHandler @ 022777e0 */
    FUN_02132f7c(PTR_DAT_04cad0d0);
                    /* try { // try from 022777b0 to 023777fb has its CatchHandler @ 022776a8 */
    bRam0000000004f9b8e6 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* catch() { ... } // from try @ 022777a4 with catch @ 022777e0 */
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
                    /* try { // try from 022777fc to 0237786f has its CatchHandler @ 022777fc
                       catch() { ... } // from try @ 022777fc with catch @ 022777fc
                       catch() { ... } // from try @ 0227787c with catch @ 022777fc */
  return lVar2;
}

