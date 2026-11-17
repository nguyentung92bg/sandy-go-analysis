/* IL2CPP: Dino.BusSand.App.GameApp$$OnLowMemory
void Dino_BusSand_App_GameApp__OnLowMemory (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnLowMemory
   void Dino_BusSand_App_GameApp__OnLowMemory (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_GameApp__OnLowMemory_2164cfc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b84e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac4e8);
    bRam0000000004f9b84e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x18) == '\0') {
    return lVar2;
  }
  fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar2 = *(long *)puVar1;
  fVar7 = *(float *)(param_1 + 100);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (fVar5 - fVar7 < *(float *)(*(long *)(lVar2 + 0xb8) + 0x1c)) {
    return lVar2;
  }
  uVar6 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  puVar1 = PTR_DAT_04ca9af8;
  *(undefined4 *)(param_1 + 100) = uVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Debug__Log_4360fc8(*(undefined8 *)PTR_DAT_04cac4e8,0);
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02264df8 to 02364e33 has its CatchHandler @ 02264df8
                       catch() { ... } // from try @ 02264df8 with catch @ 02264df8
                       catch() { ... } // from try @ 02264e40 with catch @ 02264df8 */
  if ((bRam0000000004f9b84f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac4f0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac500);
    bRam0000000004f9b84f = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac500);
    if ((uVar3 & 1) != 0) goto LAB_02264ed0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_LanguageFonts__TrimAfterListClosed_21535a0();
LAB_02264ed0:
  puVar1 = PTR_DAT_04cac4f0;
  if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_KitPrefabs__ClearCache_2182008(0);
  lVar2 = UnityEngine_Resources__UnloadUnusedAssets_43b7918(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  System_GC__Collect_486589c(0);
  return lVar2;
}

