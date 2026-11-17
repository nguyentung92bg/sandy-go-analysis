/* IL2CPP: Dino.BusSand.App.GameApp$$ReleaseCaches
UnityEngine_AsyncOperation_o* Dino_BusSand_App_GameApp__ReleaseCaches (Dino_BusSand_App_GameApp_o* __this, bool keepPanels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$ReleaseCaches
   UnityEngine_AsyncOperation_o* Dino_BusSand_App_GameApp__ReleaseCaches
   (Dino_BusSand_App_GameApp_o* __this, bool keepPanels, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__ReleaseCaches_2164e04(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b84f & 1) == 0) {
                    /* try { // try from 02264e34 to 02364e3f has its CatchHandler @ 02264e60 */
    FUN_02132f7c(PTR_DAT_04cac4f0);
                    /* try { // try from 02264e40 to 02364e7b has its CatchHandler @ 02264df8 */
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 02264e34 with catch @ 02264e60 */
    FUN_02132f7c(PTR_DAT_04cac500);
    bRam0000000004f9b84f = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 02264e7c to 02364ea3 has its CatchHandler @ 02264e7c
                       catch() { ... } // from try @ 02264e7c with catch @ 02264e7c
                       catch() { ... } // from try @ 02264eb0 with catch @ 02264e7c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02264ea4 to 02364eaf has its CatchHandler @ 02264f10 */
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac500);
                    /* try { // try from 02264eb0 to 02364f2b has its CatchHandler @ 02264e7c */
    if ((uVar2 & 1) != 0) goto LAB_02264ed0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_LanguageFonts__TrimAfterListClosed_21535a0();
LAB_02264ed0:
  puVar1 = PTR_DAT_04cac4f0;
  if ((param_2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_KitPrefabs__ClearCache_2182008(0);
  }
  uVar3 = UnityEngine_Resources__UnloadUnusedAssets_43b7918(0);
                    /* catch() { ... } // from try @ 02264ea4 with catch @ 02264f10 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  System_GC__Collect_486589c(0);
  return uVar3;
}

